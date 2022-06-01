# NAME

Importer - Alternative but compatible interface to modules that export symbols.

# DESCRIPTION

This module acts as a layer between [Exporter](https://metacpan.org/pod/Exporter) and modules which consume
exports. It is feature-compatible with [Exporter](https://metacpan.org/pod/Exporter), plus some much needed
extras. You can use this to import symbols from any exporter that follows
[Exporter](https://metacpan.org/pod/Exporter)s specification. The exporter modules themselves do not need to use
or inherit from the [Exporter](https://metacpan.org/pod/Exporter) module, they just need to set `@EXPORT` and/or
other variables.

# SYNOPSIS

    # Import defaults
    use Importer 'Some::Module';

    # Import a list
    use Importer 'Another::Module' => qw/foo bar baz/;

    # Import a specific version:
    use Importer 'That::Module' => '1.00';

    # Require a sepcific version of Importer
    use Importer 0.001, 'Foo::Bar' => qw/a b c/;

    foo()
    bar()
    baz()

    # Remove all subroutines imported by Importer
    no Importer;

    # Import symbols into variables
    my $croak = Importer->get_one(Carp => qw/croak/);
    $croak->("This will croak");

    my $CARP = Importer->get(Carp => qw/croak confess cluck/);
    $CARP->{croak}->("This will croak");
    $CARP->{cluck}->("This will cluck");
    $CARP->{confess}->("This will confess");

# WHY?

There was recently a discussion on p5p about adding features to [Exporter](https://metacpan.org/pod/Exporter).
This conversation raised some significant concerns, those are listed here, in
addition to others.

- The burden is on export consumers to specify a version of Exporter

    Adding a feature to [Exporter](https://metacpan.org/pod/Exporter) means that any consumer module that relies on
    the new features must depend on a specific version of [Exporter](https://metacpan.org/pod/Exporter). This seems
    somewhat backwards since [Exporter](https://metacpan.org/pod/Exporter) is used by the module you are importing
    from.

- Exporter.pm is really old/crazy code

    Not much more to say here. It is very old, it is very crazy, and if you break
    it you break EVERYTHING.

- Using a modules import() for exporting makes it hard to give it other purposes

    It is not unusual for a module to want to export symbols and provide import
    behaviors. It is also not unusual for a consumer to only want 1 or the other.
    Using this module you can import symbols without also getting the `import()`
    side effects.

    In addition, moving forward, modules can specify exports and have a custom
    `import()` without conflating the two. A module can tell you to use Importer
    to get the symbols, and to use the module directly for behaviors. A module
    could also use Importer within its own `import()` method without the need to
    subclass [Exporter](https://metacpan.org/pod/Exporter), or bring in its `import()` method.

- There are other exporter modules on cpan

    This module normally assumes an exporter uses [Exporter](https://metacpan.org/pod/Exporter), so it looks for the
    variables and methods [Exporter](https://metacpan.org/pod/Exporter) expects. However, other exporters on cpan can
    override this using the `IMPORTER_MENU()` hook.

# COMPATIBILITY

This module aims for 100% compatibility with every feature of [Exporter](https://metacpan.org/pod/Exporter), plus
added features such as import renaming.

If you find something that works differently, or not at all when compared to
[Exporter](https://metacpan.org/pod/Exporter) please report it as a bug, unless it is noted as an intentional
feature (like import renaming).

# IMPORT PARAMETERS

    use Importer $IMPORTER_VERSION, $FROM_MODULE, $FROM_MODULE_VERSION, \&SET_SYMBOL, @SYMBOLS;

- $IMPORTER\_VERSION (optional)

    If you provide a numeric argument as the first argument it will be treated as a
    version number. Importer will do a version check to make sure it is at least at
    the requested version.

- $FROM\_MODULE (required)

    This is the only required argument. This is the name of the module to import
    symbols from.

- $FROM\_MODULE\_VERSION (optional)

    Any numeric argument following the `$FROM_MODULE` will be treated as a version
    check against `$FROM_MODULE`.

- \\&SET\_SYMBOL (optional)

    Normally Importer will put the exports into your namespace. This is usually
    done via a more complex form of `*name = $ref`. If you do NOT want this to
    happen then you can provide a custom sub to handle the assignment.

    This is an example that uses this feature to put all the exports into a lexical
    hash instead of modifying the namespace (This is how the `get()` method is
    implemented).

        my %CARP;
        use Importer Carp => sub {
            my ($name, $ref) = @_;
            $CARP{$name} = $ref;
        };

        $CARP{cluck}->("This will cluck");
        $CARP{croak}->("This will croak");

    The first two arguments to the custom sub are the name (no sigil), and the
    reference. The additional arguments are key/value pairs:

        sub set_symbol {
            my ($name, $ref, %info) = @_;
        }

    - $info{from}

        Package the symbol comes from.

    - $info{into}

        Package to which the symbol should be added.

    - $info{sig}

        The sigil that should be used.

    - $info{spec}

        Extra details.

    - $info{symbol}

        The original symbol name (with sigil) from the original package.

- @SYMBOLS (optional)

    Symbols you wish to import. If no symbols are specified then the defaults will
    be used. You may also specify tags using the ':' prefix.

# SUPPORTED FEATURES

## TAGS

You can define/import subsets of symbols using predefined tags.

    use Importer 'Some::Thing' => ':tag';

[Importer](https://metacpan.org/pod/Importer) will automatically populate the `:DEFAULT` tag for you.
[Importer](https://metacpan.org/pod/Importer) will also give you an `:ALL` tag with ALL exports so long as the
exporter does not define a `:ALL` tag already.

## /PATTERN/ or qr/PATTERN/

You can import all symbols that match a pattern. The pattern can be supplied a
string starting and ending with '/', or you can provide a `qr/../` reference.

    use Importer 'Some::Thing' => '/oo/';

    use Importer 'Some::Thing' => qr/oo/;

## EXCLUDING SYMBOLS

You can exclude symbols by prefixing them with '!'.

    use Importer 'Some::Thing'
        '!foo',         # Exclude one specific symbol
        '!/pattern/',   # Exclude all matching symbols
        '!' => qr/oo/,  # Exclude all that match the following arg
        '!:tag';        # Exclude all in tag

## RENAMING SYMBOLS AT IMPORT

_This is a new feature,_ [Exporter](https://metacpan.org/pod/Exporter) _does not support this on its own._

You can rename symbols at import time using a specification hash following the
import name:

    use Importer 'Some::Thing' => (
        foo => { -as => 'my_foo' },
    );

You can also add a prefix and/or postfix:

    use Importer 'Some::Thing' => (
        foo => { -prefix => 'my_' },
    );

Using this syntax to set prefix and/or postfix also works on tags and patterns
that are specified for import, in which case the prefix/postfix is applied to
all symbols from the tag/patterm.

## CUSTOM EXPORT ASSIGNMENT

This lets you provide an alternative to the `*name = $ref` export assignment.
See the list of [parameters](#import-parameters) to `import()`

## UNIMPORTING

See ["UNIMPORT PARAMETERS"](#unimport-parameters).

## ANONYMOUS EXPORTS

See ["%EXPORT\_ANON"](#export_anon).

## GENERATED EXPORTS

See ["%EXPORT\_GEN"](#export_gen).

# UNIMPORT PARAMETERS

    no Importer;    # Remove all subs brought in with Importer

    no Importer qw/foo bar/;    # Remove only the specified subs

**Only subs can be unimported**.

**You can only unimport subs imported using Importer**.

# SUPPORTED VARIABLES

## @EXPORT

This is used exactly the way [Exporter](https://metacpan.org/pod/Exporter) uses it.

List of symbols to export. Sigil is optional for subs. Symbols listed here are
exported by default. If possible you should put symbols in `@EXPORT_OK`
instead.

    our @EXPORT = qw/foo bar &baz $BAT/;

## @EXPORT\_OK

This is used exactly the way [Exporter](https://metacpan.org/pod/Exporter) uses it.

List of symbols that can be imported. Sigil is optional for subs. Symbols
listed here are not exported by default. This is preferred over `@EXPORT`.

    our @EXPORT_OK = qw/foo bar &baz $BAT/;

## %EXPORT\_TAGS

This module supports tags exactly the way [Exporter](https://metacpan.org/pod/Exporter) does.

    use Importer 'Some::Thing'  => ':DEFAULT';

    use Importer 'Other::Thing' => ':some_tag';

Tags can be specified this way:

    our %EXPORT_TAGS = (
        oos => [qw/foo boo zoo/],
        ees => [qw/fee bee zee/],
    );

## @EXPORT\_FAIL

This is used exactly the way [Exporter](https://metacpan.org/pod/Exporter) uses it.

Use this to list subs that are not available on all platforms. If someone tries
to import one of these, Importer will hit your `$from->export_fail(@items)`
callback to try to resolve the issue. See [Exporter](https://metacpan.org/pod/Exporter) for documentation of
this feature.

    our @EXPORT_FAIL = qw/maybe_bad/;

## %EXPORT\_ANON

This is new to this module, [Exporter](https://metacpan.org/pod/Exporter) does not support it.

This allows you to export symbols that are not actually in your package symbol
table. The keys should be the symbol names, the values are the references for
the symbols.

    our %EXPORT_ANON = (
        '&foo' => sub { 'foo' }
        '$foo' => \$foo,
        ...
    );

## %EXPORT\_GEN

This is new to this module, [Exporter](https://metacpan.org/pod/Exporter) does not support it.

This allows you to export symbols that are generated on export. The key should
be the name of a symbol. The value should be a coderef that produces a
reference that will be exported.

When the generators are called they will receive 2 arguments, the package the
symbol is being exported into, and the symbol being imported (name may or may
not include sigil for subs).

    our %EXPORT_GEN = (
        '&foo' => sub {
            my $from_package = shift;
            my ($into_package, $symbol_name) = @_;
            ...
            return sub { ... };
        },
        ...
    );

## %EXPORT\_MAGIC

This is new to this module. [Exporter](https://metacpan.org/pod/Exporter) does not support it.

This allows you to define custom actions to run AFTER an export has been
injected into the consumers namespace. This is a good place to enable parser
hooks like with [Devel::Declare](https://metacpan.org/pod/Devel::Declare). These will NOT be run if a consumer uses a
custom assignment callback.

    our %EXPORT_MAGIC = (
        foo => sub {
            my $from = shift;    # Should be the package doing the exporting
            my %args = @_;

            my $into      = $args{into};         # Package symbol was exported into
            my $orig_name = $args{orig_name};    # Original name of the export (in the exporter)
            my $new_name  = $args{new_name};     # Name the symbol was imported as
            my $ref       = $args{ref};          # The reference to the symbol

            ...; # whatever you want, return is ignored.
        },
    );

# CLASS METHODS

- Importer->import($from)
- Importer->import($from, $version)
- Importer->import($from, @imports)
- Importer->import($from, $from\_version, @imports)
- Importer->import($importer\_version, $from, ...)

    This is the magic behind `use Importer ...`.

- Importer->import\_into($from, $into, @imports)
- Importer->import\_into($from, $level, @imports)

    You can use this to import symbols from `$from` into `$into`. `$into` may
    either be a package name, or a caller level to get the name from.

- Importer->unimport()
- Importer->unimport(@sub\_name)

    This is the magic behind `no Importer ...`.

- Importer->unimport\_from($from, @sub\_names)
- Importer->unimport\_from($level, @sub\_names)

    This lets you remove imported symbols from `$from`. `$from` my be a package
    name, or a caller level.

- my $exports = Importer->get($from, @imports)

    This returns hashref of `{ $name => $ref }` for all the specified imports.

    `$from` should be the package from which to get the exports.

- my @export\_refs = Importer->get\_list($from, @imports)

    This returns a list of references for each import specified. Only the export
    references are returned, the names are not.

    `$from` should be the package from which to get the exports.

- $export\_ref = Importer->get\_one($from, $import)

    This returns a single reference to a single export. If you provide multiple
    imports then only the LAST one will be used.

    `$from` should be the package from which to get the exports.

# USING WITH OTHER EXPORTER IMPLEMENTATIONS

If you want your module to work with Importer, but you use something other than
[Exporter](https://metacpan.org/pod/Exporter) to define your exports, you can make it work be defining the
`IMPORTER_MENU` method in your package. As well other exporters can be updated
to support Importer by putting this sub in your package.
**IMPORTER\_MENU() must be defined in your package, not a base class!**

    sub IMPORTER_MENU {
        my $class = shift;
        my ($into, $caller) = @_;

        return (
            export       => \@EXPORT,          # Default exports
            export_ok    => \@EXPORT_OK,       # Other allowed exports
            export_tags  => \%EXPORT_TAGS,     # Define tags
            export_fail  => \@EXPORT_FAIL,     # For subs that may not always be available
            export_anon  => \%EXPORT_ANON,     # Anonymous symbols to export
            export_magic => \%EXPORT_MAGIC,    # Magic to apply after a symbol is exported

            generate   => \&GENERATE,          # Sub to generate dynamic exports
                                               # OR
            export_gen => \%EXPORT_GEN,        # Hash of builders, key is symbol
                                               # name, value is sub that generates
                                               # the symbol ref.
        );
    }

    sub GENERATE {
        my ($symbol) = @_;

        ...

        return $ref;
    }

All exports must be listed in either `@EXPORT` or `@EXPORT_OK`, or be keys in
`%EXPORT_GEN` or `%EXPORT_ANON` to be allowed. 'export\_tags', 'export\_fail',
'export\_anon', 'export\_gen', and 'generate' are optional. You cannot combine
'generate' and 'export\_gen'.

**Note:** If your GENERATE sub needs the `$class`, `$into`, or `$caller` then
your `IMPORTER_MENU()` method will need to build an anonymous sub that closes
over them:

    sub IMPORTER_MENU {
        my $class = shift;
        my ($into, $caller) = @_;

        return (
            ...
            generate => sub { $class->GENERATE($into, $caller, @_) },
        );
    }

# OO Interface

    use Importer;

    my $imp = Importer->new(from => 'Some::Exporter');

    $imp->do_import('Destination::Package');
    $imp->do_import('Another::Destination', @symbols);

Or, maybe more useful:

    my $imp = Importer->new(from => 'Carp');
    my $croak = $imp->get_one('croak');
    $croak->("This will croak");

## OBJECT CONSTRUCTION

- $imp = Importer->new(from => 'Some::Exporter')
- $imp = Importer->new(from => 'Some::Exporter', caller => \[$package, $file, $line\])

    This is how you create a new Importer instance. `from => 'Some::Exporter'`
    is the only required argument. You may also specify the `caller => [...]`
    arrayref, which will be used only for error reporting. If you do not specify a
    caller then Importer will attempt to find the caller dynamically every time it
    needs it (this is slow and expensive, but necessary if you intend to re-use the
    object.)

## OBJECT METHODS

- $imp->do\_import($into)
- $imp->do\_import($into, @symbols)

    This will import from the objects `from` package into the `$into` package.
    You can provide a list of `@symbols`, or you can leave it empty for the
    defaults.

- $imp->do\_unimport()
- $imp->do\_unimport(@symbols)

    This will remove imported symbols from the objects `from` package. If you
    specify a list of `@symbols` then only the specified symbols will be removed,
    otherwise all symbols imported using Importer will be removed.

    **Note:** Please be aware of the difference between `do_import()` and
    `do_unimport()`. For import 'from' us used as the origin, in unimport it is
    used as the target. This means you cannot re-use an instance to import and then
    unimport.

- ($into, $versions, $exclude, $symbols, $set) = $imp->parse\_args('Dest::Package')
- ($into, $versions, $exclude, $symbols, $set) = $imp->parse\_args('Dest::Package', @symbols)

    This parses arguments. The first argument must be the destination package.
    Other arguments can be a mix of symbol names, tags, patterns, version numbers,
    and exclusions.

- $caller\_ref = $imp->get\_caller()

    This will find the caller. This is mainly used for error reporting. IF the
    object was constructed with a caller then that is what is returned, otherwise
    this will scan the stack looking for the first call that does not originate
    from a package that ISA Importer.

- $imp->carp($warning)

    Warn at the callers level.

- $imp->croak($exception)

    Die at the callers level.

- $from\_package = $imp->from()

    Get the `from` package that was specified at construction.

- $file = $imp->from\_file()

    Get the filename for the `from` package.

- $imp->load\_from()

    This will load the `from` package if it has not been loaded already. This uses
    some magic to ensure errors in the load process are reported to the `caller`.

- $menu\_hr = $imp->menu($into)

    Get the export menu built from, or provided by the `from` package. This is
    cached after the first time it is called. Use `$imp->reload_menu()` to
    refresh it.

    The menu structure looks like this:

        $menu = {
            # every valid export has a key in the lookup hashref, value is always
            # 1, key always includes the sigil
            lookup => {'&symbol_a' => 1, '$symbol_b' => 1, ...},

            # most exports are listed here, symbol name with sigil is key, value is
            # a reference to the symbol. If a symbol is missing it may be generated.
            exports => {'&symbol_a' => \&symbol_a, '$symbol_b' => \$symbol_b, ...},

            # Hashref of tags, tag name (without ':' prefix) is key, value is an
            # arrayref of symbol names, subs may have a sigil, but are not required
            # to.
            tags => { DEFAULT => [...], foo => [...], ... },

            # Magic to apply
            magic => { foo => sub { ... }, ... },

            # This is a hashref just like 'lookup'. Keys are symbols which may not
            # always be available. If there are no symbols in this category then
            # the value of the 'fail' key will be undef instead of a hashref.
            fail => { '&iffy_symbol' => 1, '\&only_on_linux' => 1 },
            # OR fail => undef,

            # If present, this subroutine knows how to generate references for the
            # symbols listed in 'lookup', but missing from 'exports'. References
            # this returns are NEVER cached.
            generate => sub { my $sym_name = shift; ...; return $symbol_ref },
        };

- $imp->reload\_menu($into)

    This will reload the export menu from the `from` package.

- my $exports = $imp->get(@imports)

    This returns hashref of `{ $name => $ref }` for all the specified imports.

- my @export\_refs = $imp->get\_list(@imports)

    This returns a list of references for each import specified. Only the export
    references are returned, the names are not.

- $export\_ref = $imp->get\_one($import)

    This returns a single reference to a single export. If you provide multiple
    imports then only the LAST one will be used.

# FUNCTIONS

These can be imported:

    use Importer 'Importer' => qw/import optimal_import/;

- $bool = optimal\_import($from, $into, \\@caller, @imports)

    This function will attempt to import `@imports` from the `$from` package into
    the `$into` package. `@caller` needs to have a package name, filename, and
    line number. If this function fails then no exporting will actually happen.

    If the import is successful this will return true.

    If the import is unsuccessful this will return false, and no modifications to
    the symbol table will occur.

- $class->import(@imports)

    If you write class intended to be used with [Importer](https://metacpan.org/pod/Importer), but also need to
    provide a legacy `import()` method for direct consumers of your class, you can
    import this `import()` method.

        package My::Exporter;

        # This will give you 'import()' much like 'use base "Exporter";'
        use Importer 'Importer' => qw/import/;

        ...

# SOURCE

The source code repository for Importer can be found at
[http://github.com/exodist/Importer](http://github.com/exodist/Importer).

# MAINTAINERS

- Chad Granum <exodist@cpan.org>

# AUTHORS

- Chad Granum <exodist@cpan.org>

# COPYRIGHT

Copyright 2015 Chad Granum <exodist7@gmail.com>.

This program is free software; you can redistribute it and/or
modify it under the same terms as Perl itself.

See [http://dev.perl.org/licenses/](http://dev.perl.org/licenses/)
