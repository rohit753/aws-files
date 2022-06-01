# This Makefile is for the Test2::Suite extension to perl.
#
# It was generated automatically by MakeMaker version
# 7.34 (Revision: 73400) from the contents of
# Makefile.PL. Don't edit this file, edit Makefile.PL instead.
#
#       ANY CHANGES MADE HERE WILL BE LOST!
#
#   MakeMaker ARGV: (q[INSTALLDIRS=site])
#

#   MakeMaker Parameters:

#     ABSTRACT => q[Distribution with a rich set of tools built upon the Test2 framework.]
#     AUTHOR => [q[Chad Granum <exodist@cpan.org>]]
#     BUILD_REQUIRES => {  }
#     CONFIGURE_REQUIRES => { ExtUtils::MakeMaker=>q[0] }
#     DISTNAME => q[Test2-Suite]
#     LICENSE => q[perl]
#     MIN_PERL_VERSION => q[5.008001]
#     NAME => q[Test2::Suite]
#     PREREQ_PM => { B=>q[0], Carp=>q[0], Data::Dumper=>q[0], Exporter=>q[0], Importer=>q[0.024], Module::Pluggable=>q[2.7], Scalar::Util=>q[0], Scope::Guard=>q[0], Sub::Info=>q[0.002], Term::Table=>q[0.013], Test2::API=>q[1.302176], Time::HiRes=>q[0], overload=>q[0], utf8=>q[0] }
#     TEST_REQUIRES => {  }
#     VERSION => q[0.000145]
#     test => { TESTS=>q[t/*.t t/acceptance/*.t t/behavior/*.t t/modules/*.t t/modules/AsyncSubtest/*.t t/modules/AsyncSubtest/Event/*.t t/modules/Bundle/*.t t/modules/Compare/*.t t/modules/Plugin/*.t t/modules/Require/*.t t/modules/Tools/*.t t/modules/Util/*.t t/modules/Util/Table/*.t t/modules/Workflow/*.t t/modules/Workflow/Task/*.t t/regression/*.t] }

# --- MakeMaker post_initialize section:


# --- MakeMaker const_config section:

# These definitions are from config.sh (via /usr/lib/x86_64-linux-gnu/perl/5.30/Config.pm).
# They may have been overridden via Makefile.PL or on the command line.
AR = ar
CC = x86_64-linux-gnu-gcc
CCCDLFLAGS = -fPIC
CCDLFLAGS = -Wl,-E
DLEXT = so
DLSRC = dl_dlopen.xs
EXE_EXT = 
FULL_AR = /usr/bin/ar
LD = x86_64-linux-gnu-gcc
LDDLFLAGS = -shared -L/usr/local/lib -fstack-protector-strong
LDFLAGS =  -fstack-protector-strong -L/usr/local/lib
LIBC = libc-2.31.so
LIB_EXT = .a
OBJ_EXT = .o
OSNAME = linux
OSVERS = 4.19.0
RANLIB = :
SITELIBEXP = /usr/local/share/perl/5.30.0
SITEARCHEXP = /usr/local/lib/x86_64-linux-gnu/perl/5.30.0
SO = so
VENDORARCHEXP = /usr/lib/x86_64-linux-gnu/perl5/5.30
VENDORLIBEXP = /usr/share/perl5


# --- MakeMaker constants section:
AR_STATIC_ARGS = cr
DIRFILESEP = /
DFSEP = $(DIRFILESEP)
NAME = Test2::Suite
NAME_SYM = Test2_Suite
VERSION = 0.000145
VERSION_MACRO = VERSION
VERSION_SYM = 0_000145
DEFINE_VERSION = -D$(VERSION_MACRO)=\"$(VERSION)\"
XS_VERSION = 0.000145
XS_VERSION_MACRO = XS_VERSION
XS_DEFINE_VERSION = -D$(XS_VERSION_MACRO)=\"$(XS_VERSION)\"
INST_ARCHLIB = blib/arch
INST_SCRIPT = blib/script
INST_BIN = blib/bin
INST_LIB = blib/lib
INST_MAN1DIR = blib/man1
INST_MAN3DIR = blib/man3
MAN1EXT = 1p
MAN3EXT = 3pm
INSTALLDIRS = site
DESTDIR = 
PREFIX = $(SITEPREFIX)
PERLPREFIX = /usr
SITEPREFIX = /usr/local
VENDORPREFIX = /usr
INSTALLPRIVLIB = /usr/share/perl/5.30
DESTINSTALLPRIVLIB = $(DESTDIR)$(INSTALLPRIVLIB)
INSTALLSITELIB = /usr/local/share/perl/5.30.0
DESTINSTALLSITELIB = $(DESTDIR)$(INSTALLSITELIB)
INSTALLVENDORLIB = /usr/share/perl5
DESTINSTALLVENDORLIB = $(DESTDIR)$(INSTALLVENDORLIB)
INSTALLARCHLIB = /usr/lib/x86_64-linux-gnu/perl/5.30
DESTINSTALLARCHLIB = $(DESTDIR)$(INSTALLARCHLIB)
INSTALLSITEARCH = /usr/local/lib/x86_64-linux-gnu/perl/5.30.0
DESTINSTALLSITEARCH = $(DESTDIR)$(INSTALLSITEARCH)
INSTALLVENDORARCH = /usr/lib/x86_64-linux-gnu/perl5/5.30
DESTINSTALLVENDORARCH = $(DESTDIR)$(INSTALLVENDORARCH)
INSTALLBIN = /usr/bin
DESTINSTALLBIN = $(DESTDIR)$(INSTALLBIN)
INSTALLSITEBIN = /usr/local/bin
DESTINSTALLSITEBIN = $(DESTDIR)$(INSTALLSITEBIN)
INSTALLVENDORBIN = /usr/bin
DESTINSTALLVENDORBIN = $(DESTDIR)$(INSTALLVENDORBIN)
INSTALLSCRIPT = /usr/bin
DESTINSTALLSCRIPT = $(DESTDIR)$(INSTALLSCRIPT)
INSTALLSITESCRIPT = /usr/local/bin
DESTINSTALLSITESCRIPT = $(DESTDIR)$(INSTALLSITESCRIPT)
INSTALLVENDORSCRIPT = /usr/bin
DESTINSTALLVENDORSCRIPT = $(DESTDIR)$(INSTALLVENDORSCRIPT)
INSTALLMAN1DIR = /usr/share/man/man1
DESTINSTALLMAN1DIR = $(DESTDIR)$(INSTALLMAN1DIR)
INSTALLSITEMAN1DIR = /usr/local/man/man1
DESTINSTALLSITEMAN1DIR = $(DESTDIR)$(INSTALLSITEMAN1DIR)
INSTALLVENDORMAN1DIR = /usr/share/man/man1
DESTINSTALLVENDORMAN1DIR = $(DESTDIR)$(INSTALLVENDORMAN1DIR)
INSTALLMAN3DIR = /usr/share/man/man3
DESTINSTALLMAN3DIR = $(DESTDIR)$(INSTALLMAN3DIR)
INSTALLSITEMAN3DIR = /usr/local/man/man3
DESTINSTALLSITEMAN3DIR = $(DESTDIR)$(INSTALLSITEMAN3DIR)
INSTALLVENDORMAN3DIR = /usr/share/man/man3
DESTINSTALLVENDORMAN3DIR = $(DESTDIR)$(INSTALLVENDORMAN3DIR)
PERL_LIB = /usr/share/perl/5.30
PERL_ARCHLIB = /usr/lib/x86_64-linux-gnu/perl/5.30
PERL_ARCHLIBDEP = /usr/lib/x86_64-linux-gnu/perl/5.30
LIBPERL_A = libperl.a
FIRST_MAKEFILE = Makefile
MAKEFILE_OLD = Makefile.old
MAKE_APERL_FILE = Makefile.aperl
PERLMAINCC = $(CC)
PERL_INC = /usr/lib/x86_64-linux-gnu/perl/5.30/CORE
PERL_INCDEP = /usr/lib/x86_64-linux-gnu/perl/5.30/CORE
PERL = "/usr/bin/perl"
FULLPERL = "/usr/bin/perl"
ABSPERL = $(PERL)
PERLRUN = $(PERL)
FULLPERLRUN = $(FULLPERL)
ABSPERLRUN = $(ABSPERL)
PERLRUNINST = $(PERLRUN) "-I$(INST_ARCHLIB)" "-I$(INST_LIB)"
FULLPERLRUNINST = $(FULLPERLRUN) "-I$(INST_ARCHLIB)" "-I$(INST_LIB)"
ABSPERLRUNINST = $(ABSPERLRUN) "-I$(INST_ARCHLIB)" "-I$(INST_LIB)"
PERL_CORE = 0
PERM_DIR = 755
PERM_RW = 644
PERM_RWX = 755

MAKEMAKER   = /usr/share/perl/5.30/ExtUtils/MakeMaker.pm
MM_VERSION  = 7.34
MM_REVISION = 73400

# FULLEXT = Pathname for extension directory (eg Foo/Bar/Oracle).
# BASEEXT = Basename part of FULLEXT. May be just equal FULLEXT. (eg Oracle)
# PARENT_NAME = NAME without BASEEXT and no trailing :: (eg Foo::Bar)
# DLBASE  = Basename part of dynamic library. May be just equal BASEEXT.
MAKE = make
FULLEXT = Test2/Suite
BASEEXT = Suite
PARENT_NAME = Test2
DLBASE = $(BASEEXT)
VERSION_FROM = 
OBJECT = 
LDFROM = $(OBJECT)
LINKTYPE = dynamic
BOOTDEP = 

# Handy lists of source code files:
XS_FILES = 
C_FILES  = 
O_FILES  = 
H_FILES  = 
MAN1PODS = 
MAN3PODS = lib/Test2/AsyncSubtest.pm \
	lib/Test2/AsyncSubtest/Event/Attach.pm \
	lib/Test2/AsyncSubtest/Event/Detach.pm \
	lib/Test2/AsyncSubtest/Hub.pm \
	lib/Test2/Bundle.pm \
	lib/Test2/Bundle/Extended.pm \
	lib/Test2/Bundle/More.pm \
	lib/Test2/Bundle/Simple.pm \
	lib/Test2/Compare.pm \
	lib/Test2/Compare/Array.pm \
	lib/Test2/Compare/Bag.pm \
	lib/Test2/Compare/Base.pm \
	lib/Test2/Compare/Bool.pm \
	lib/Test2/Compare/Custom.pm \
	lib/Test2/Compare/DeepRef.pm \
	lib/Test2/Compare/Delta.pm \
	lib/Test2/Compare/Event.pm \
	lib/Test2/Compare/EventMeta.pm \
	lib/Test2/Compare/Float.pm \
	lib/Test2/Compare/Hash.pm \
	lib/Test2/Compare/Isa.pm \
	lib/Test2/Compare/Meta.pm \
	lib/Test2/Compare/Negatable.pm \
	lib/Test2/Compare/Number.pm \
	lib/Test2/Compare/Object.pm \
	lib/Test2/Compare/OrderedSubset.pm \
	lib/Test2/Compare/Pattern.pm \
	lib/Test2/Compare/Ref.pm \
	lib/Test2/Compare/Regex.pm \
	lib/Test2/Compare/Scalar.pm \
	lib/Test2/Compare/Set.pm \
	lib/Test2/Compare/String.pm \
	lib/Test2/Compare/Undef.pm \
	lib/Test2/Compare/Wildcard.pm \
	lib/Test2/Manual.pm \
	lib/Test2/Manual/Anatomy.pm \
	lib/Test2/Manual/Anatomy/API.pm \
	lib/Test2/Manual/Anatomy/Context.pm \
	lib/Test2/Manual/Anatomy/EndToEnd.pm \
	lib/Test2/Manual/Anatomy/Event.pm \
	lib/Test2/Manual/Anatomy/Hubs.pm \
	lib/Test2/Manual/Anatomy/IPC.pm \
	lib/Test2/Manual/Anatomy/Utilities.pm \
	lib/Test2/Manual/Concurrency.pm \
	lib/Test2/Manual/Contributing.pm \
	lib/Test2/Manual/Testing.pm \
	lib/Test2/Manual/Testing/Introduction.pm \
	lib/Test2/Manual/Testing/Migrating.pm \
	lib/Test2/Manual/Testing/Planning.pm \
	lib/Test2/Manual/Testing/Todo.pm \
	lib/Test2/Manual/Tooling.pm \
	lib/Test2/Manual/Tooling/FirstTool.pm \
	lib/Test2/Manual/Tooling/Formatter.pm \
	lib/Test2/Manual/Tooling/Nesting.pm \
	lib/Test2/Manual/Tooling/Plugin/TestExit.pm \
	lib/Test2/Manual/Tooling/Plugin/TestingDone.pm \
	lib/Test2/Manual/Tooling/Plugin/ToolCompletes.pm \
	lib/Test2/Manual/Tooling/Plugin/ToolStarts.pm \
	lib/Test2/Manual/Tooling/Subtest.pm \
	lib/Test2/Manual/Tooling/TestBuilder.pm \
	lib/Test2/Manual/Tooling/Testing.pm \
	lib/Test2/Mock.pm \
	lib/Test2/Plugin.pm \
	lib/Test2/Plugin/BailOnFail.pm \
	lib/Test2/Plugin/DieOnFail.pm \
	lib/Test2/Plugin/ExitSummary.pm \
	lib/Test2/Plugin/SRand.pm \
	lib/Test2/Plugin/Times.pm \
	lib/Test2/Plugin/UTF8.pm \
	lib/Test2/Require.pm \
	lib/Test2/Require/AuthorTesting.pm \
	lib/Test2/Require/EnvVar.pm \
	lib/Test2/Require/Fork.pm \
	lib/Test2/Require/Module.pm \
	lib/Test2/Require/Perl.pm \
	lib/Test2/Require/RealFork.pm \
	lib/Test2/Require/Threads.pm \
	lib/Test2/Suite.pm \
	lib/Test2/Todo.pm \
	lib/Test2/Tools.pm \
	lib/Test2/Tools/AsyncSubtest.pm \
	lib/Test2/Tools/Basic.pm \
	lib/Test2/Tools/Class.pm \
	lib/Test2/Tools/ClassicCompare.pm \
	lib/Test2/Tools/Compare.pm \
	lib/Test2/Tools/Defer.pm \
	lib/Test2/Tools/Encoding.pm \
	lib/Test2/Tools/Event.pm \
	lib/Test2/Tools/Exception.pm \
	lib/Test2/Tools/Exports.pm \
	lib/Test2/Tools/GenTemp.pm \
	lib/Test2/Tools/Grab.pm \
	lib/Test2/Tools/Mock.pm \
	lib/Test2/Tools/Ref.pm \
	lib/Test2/Tools/Spec.pm \
	lib/Test2/Tools/Subtest.pm \
	lib/Test2/Tools/Target.pm \
	lib/Test2/Tools/Tester.pm \
	lib/Test2/Tools/Warnings.pm \
	lib/Test2/Util/Grabber.pm \
	lib/Test2/Util/Ref.pm \
	lib/Test2/Util/Stash.pm \
	lib/Test2/Util/Sub.pm \
	lib/Test2/Util/Table.pm \
	lib/Test2/Util/Table/LineBreak.pm \
	lib/Test2/Util/Times.pm \
	lib/Test2/V0.pm \
	lib/Test2/Workflow.pm \
	lib/Test2/Workflow/BlockBase.pm \
	lib/Test2/Workflow/Build.pm \
	lib/Test2/Workflow/Runner.pm \
	lib/Test2/Workflow/Task.pm \
	lib/Test2/Workflow/Task/Action.pm \
	lib/Test2/Workflow/Task/Group.pm

# Where is the Config information that we are using/depend on
CONFIGDEP = $(PERL_ARCHLIBDEP)$(DFSEP)Config.pm $(PERL_INCDEP)$(DFSEP)config.h

# Where to build things
INST_LIBDIR      = $(INST_LIB)/Test2
INST_ARCHLIBDIR  = $(INST_ARCHLIB)/Test2

INST_AUTODIR     = $(INST_LIB)/auto/$(FULLEXT)
INST_ARCHAUTODIR = $(INST_ARCHLIB)/auto/$(FULLEXT)

INST_STATIC      = 
INST_DYNAMIC     = 
INST_BOOT        = 

# Extra linker info
EXPORT_LIST        = 
PERL_ARCHIVE       = 
PERL_ARCHIVEDEP    = 
PERL_ARCHIVE_AFTER = 


TO_INST_PM = lib/Test2/AsyncSubtest.pm \
	lib/Test2/AsyncSubtest/Event/Attach.pm \
	lib/Test2/AsyncSubtest/Event/Detach.pm \
	lib/Test2/AsyncSubtest/Formatter.pm \
	lib/Test2/AsyncSubtest/Hub.pm \
	lib/Test2/Bundle.pm \
	lib/Test2/Bundle/Extended.pm \
	lib/Test2/Bundle/More.pm \
	lib/Test2/Bundle/Simple.pm \
	lib/Test2/Compare.pm \
	lib/Test2/Compare/Array.pm \
	lib/Test2/Compare/Bag.pm \
	lib/Test2/Compare/Base.pm \
	lib/Test2/Compare/Bool.pm \
	lib/Test2/Compare/Custom.pm \
	lib/Test2/Compare/DeepRef.pm \
	lib/Test2/Compare/Delta.pm \
	lib/Test2/Compare/Event.pm \
	lib/Test2/Compare/EventMeta.pm \
	lib/Test2/Compare/Float.pm \
	lib/Test2/Compare/Hash.pm \
	lib/Test2/Compare/Isa.pm \
	lib/Test2/Compare/Meta.pm \
	lib/Test2/Compare/Negatable.pm \
	lib/Test2/Compare/Number.pm \
	lib/Test2/Compare/Object.pm \
	lib/Test2/Compare/OrderedSubset.pm \
	lib/Test2/Compare/Pattern.pm \
	lib/Test2/Compare/Ref.pm \
	lib/Test2/Compare/Regex.pm \
	lib/Test2/Compare/Scalar.pm \
	lib/Test2/Compare/Set.pm \
	lib/Test2/Compare/String.pm \
	lib/Test2/Compare/Undef.pm \
	lib/Test2/Compare/Wildcard.pm \
	lib/Test2/Manual.pm \
	lib/Test2/Manual/Anatomy.pm \
	lib/Test2/Manual/Anatomy/API.pm \
	lib/Test2/Manual/Anatomy/Context.pm \
	lib/Test2/Manual/Anatomy/EndToEnd.pm \
	lib/Test2/Manual/Anatomy/Event.pm \
	lib/Test2/Manual/Anatomy/Hubs.pm \
	lib/Test2/Manual/Anatomy/IPC.pm \
	lib/Test2/Manual/Anatomy/Utilities.pm \
	lib/Test2/Manual/Concurrency.pm \
	lib/Test2/Manual/Contributing.pm \
	lib/Test2/Manual/Testing.pm \
	lib/Test2/Manual/Testing/Introduction.pm \
	lib/Test2/Manual/Testing/Migrating.pm \
	lib/Test2/Manual/Testing/Planning.pm \
	lib/Test2/Manual/Testing/Todo.pm \
	lib/Test2/Manual/Tooling.pm \
	lib/Test2/Manual/Tooling/FirstTool.pm \
	lib/Test2/Manual/Tooling/Formatter.pm \
	lib/Test2/Manual/Tooling/Nesting.pm \
	lib/Test2/Manual/Tooling/Plugin/TestExit.pm \
	lib/Test2/Manual/Tooling/Plugin/TestingDone.pm \
	lib/Test2/Manual/Tooling/Plugin/ToolCompletes.pm \
	lib/Test2/Manual/Tooling/Plugin/ToolStarts.pm \
	lib/Test2/Manual/Tooling/Subtest.pm \
	lib/Test2/Manual/Tooling/TestBuilder.pm \
	lib/Test2/Manual/Tooling/Testing.pm \
	lib/Test2/Mock.pm \
	lib/Test2/Plugin.pm \
	lib/Test2/Plugin/BailOnFail.pm \
	lib/Test2/Plugin/DieOnFail.pm \
	lib/Test2/Plugin/ExitSummary.pm \
	lib/Test2/Plugin/SRand.pm \
	lib/Test2/Plugin/Times.pm \
	lib/Test2/Plugin/UTF8.pm \
	lib/Test2/Require.pm \
	lib/Test2/Require/AuthorTesting.pm \
	lib/Test2/Require/EnvVar.pm \
	lib/Test2/Require/Fork.pm \
	lib/Test2/Require/Module.pm \
	lib/Test2/Require/Perl.pm \
	lib/Test2/Require/RealFork.pm \
	lib/Test2/Require/Threads.pm \
	lib/Test2/Suite.pm \
	lib/Test2/Todo.pm \
	lib/Test2/Tools.pm \
	lib/Test2/Tools/AsyncSubtest.pm \
	lib/Test2/Tools/Basic.pm \
	lib/Test2/Tools/Class.pm \
	lib/Test2/Tools/ClassicCompare.pm \
	lib/Test2/Tools/Compare.pm \
	lib/Test2/Tools/Defer.pm \
	lib/Test2/Tools/Encoding.pm \
	lib/Test2/Tools/Event.pm \
	lib/Test2/Tools/Exception.pm \
	lib/Test2/Tools/Exports.pm \
	lib/Test2/Tools/GenTemp.pm \
	lib/Test2/Tools/Grab.pm \
	lib/Test2/Tools/Mock.pm \
	lib/Test2/Tools/Ref.pm \
	lib/Test2/Tools/Spec.pm \
	lib/Test2/Tools/Subtest.pm \
	lib/Test2/Tools/Target.pm \
	lib/Test2/Tools/Tester.pm \
	lib/Test2/Tools/Warnings.pm \
	lib/Test2/Util/Grabber.pm \
	lib/Test2/Util/Ref.pm \
	lib/Test2/Util/Stash.pm \
	lib/Test2/Util/Sub.pm \
	lib/Test2/Util/Table.pm \
	lib/Test2/Util/Table/Cell.pm \
	lib/Test2/Util/Table/LineBreak.pm \
	lib/Test2/Util/Term.pm \
	lib/Test2/Util/Times.pm \
	lib/Test2/V0.pm \
	lib/Test2/Workflow.pm \
	lib/Test2/Workflow/BlockBase.pm \
	lib/Test2/Workflow/Build.pm \
	lib/Test2/Workflow/Runner.pm \
	lib/Test2/Workflow/Task.pm \
	lib/Test2/Workflow/Task/Action.pm \
	lib/Test2/Workflow/Task/Group.pm


# --- MakeMaker platform_constants section:
MM_Unix_VERSION = 7.34
PERL_MALLOC_DEF = -DPERL_EXTMALLOC_DEF -Dmalloc=Perl_malloc -Dfree=Perl_mfree -Drealloc=Perl_realloc -Dcalloc=Perl_calloc


# --- MakeMaker tool_autosplit section:
# Usage: $(AUTOSPLITFILE) FileToSplit AutoDirToSplitInto
AUTOSPLITFILE = $(ABSPERLRUN)  -e 'use AutoSplit;  autosplit($$$$ARGV[0], $$$$ARGV[1], 0, 1, 1)' --



# --- MakeMaker tool_xsubpp section:


# --- MakeMaker tools_other section:
SHELL = /bin/sh
CHMOD = chmod
CP = cp
MV = mv
NOOP = $(TRUE)
NOECHO = @
RM_F = rm -f
RM_RF = rm -rf
TEST_F = test -f
TOUCH = touch
UMASK_NULL = umask 0
DEV_NULL = > /dev/null 2>&1
MKPATH = $(ABSPERLRUN) -MExtUtils::Command -e 'mkpath' --
EQUALIZE_TIMESTAMP = $(ABSPERLRUN) -MExtUtils::Command -e 'eqtime' --
FALSE = false
TRUE = true
ECHO = echo
ECHO_N = echo -n
UNINST = 0
VERBINST = 0
MOD_INSTALL = $(ABSPERLRUN) -MExtUtils::Install -e 'install([ from_to => {@ARGV}, verbose => '\''$(VERBINST)'\'', uninstall_shadows => '\''$(UNINST)'\'', dir_mode => '\''$(PERM_DIR)'\'' ]);' --
DOC_INSTALL = $(ABSPERLRUN) -MExtUtils::Command::MM -e 'perllocal_install' --
UNINSTALL = $(ABSPERLRUN) -MExtUtils::Command::MM -e 'uninstall' --
WARN_IF_OLD_PACKLIST = $(ABSPERLRUN) -MExtUtils::Command::MM -e 'warn_if_old_packlist' --
MACROSTART = 
MACROEND = 
USEMAKEFILE = -f
FIXIN = $(ABSPERLRUN) -MExtUtils::MY -e 'MY->fixin(shift)' --
CP_NONEMPTY = $(ABSPERLRUN) -MExtUtils::Command::MM -e 'cp_nonempty' --


# --- MakeMaker makemakerdflt section:
makemakerdflt : all
	$(NOECHO) $(NOOP)


# --- MakeMaker dist section:
TAR = tar
TARFLAGS = cvf
ZIP = zip
ZIPFLAGS = -r
COMPRESS = gzip --best
SUFFIX = .gz
SHAR = shar
PREOP = $(NOECHO) $(NOOP)
POSTOP = $(NOECHO) $(NOOP)
TO_UNIX = $(NOECHO) $(NOOP)
CI = ci -u
RCS_LABEL = rcs -Nv$(VERSION_SYM): -q
DIST_CP = best
DIST_DEFAULT = tardist
DISTNAME = Test2-Suite
DISTVNAME = Test2-Suite-0.000145


# --- MakeMaker macro section:


# --- MakeMaker depend section:


# --- MakeMaker cflags section:


# --- MakeMaker const_loadlibs section:


# --- MakeMaker const_cccmd section:


# --- MakeMaker post_constants section:


# --- MakeMaker pasthru section:

PASTHRU = LIBPERL_A="$(LIBPERL_A)"\
	LINKTYPE="$(LINKTYPE)"\
	LD="$(LD)"\
	PREFIX="$(PREFIX)"\
	PASTHRU_DEFINE='$(DEFINE) $(PASTHRU_DEFINE)'\
	PASTHRU_INC='$(INC) $(PASTHRU_INC)'


# --- MakeMaker special_targets section:
.SUFFIXES : .xs .c .C .cpp .i .s .cxx .cc $(OBJ_EXT)

.PHONY: all config static dynamic test linkext manifest blibdirs clean realclean disttest distdir pure_all subdirs clean_subdirs makemakerdflt manifypods realclean_subdirs subdirs_dynamic subdirs_pure_nolink subdirs_static subdirs-test_dynamic subdirs-test_static test_dynamic test_static



# --- MakeMaker c_o section:


# --- MakeMaker xs_c section:


# --- MakeMaker xs_o section:


# --- MakeMaker top_targets section:
all :: pure_all manifypods
	$(NOECHO) $(NOOP)

pure_all :: config pm_to_blib subdirs linkext
	$(NOECHO) $(NOOP)

	$(NOECHO) $(NOOP)

subdirs :: $(MYEXTLIB)
	$(NOECHO) $(NOOP)

config :: $(FIRST_MAKEFILE) blibdirs
	$(NOECHO) $(NOOP)

help :
	perldoc ExtUtils::MakeMaker


# --- MakeMaker blibdirs section:
blibdirs : $(INST_LIBDIR)$(DFSEP).exists $(INST_ARCHLIB)$(DFSEP).exists $(INST_AUTODIR)$(DFSEP).exists $(INST_ARCHAUTODIR)$(DFSEP).exists $(INST_BIN)$(DFSEP).exists $(INST_SCRIPT)$(DFSEP).exists $(INST_MAN1DIR)$(DFSEP).exists $(INST_MAN3DIR)$(DFSEP).exists
	$(NOECHO) $(NOOP)

# Backwards compat with 6.18 through 6.25
blibdirs.ts : blibdirs
	$(NOECHO) $(NOOP)

$(INST_LIBDIR)$(DFSEP).exists :: Makefile.PL
	$(NOECHO) $(MKPATH) $(INST_LIBDIR)
	$(NOECHO) $(CHMOD) $(PERM_DIR) $(INST_LIBDIR)
	$(NOECHO) $(TOUCH) $(INST_LIBDIR)$(DFSEP).exists

$(INST_ARCHLIB)$(DFSEP).exists :: Makefile.PL
	$(NOECHO) $(MKPATH) $(INST_ARCHLIB)
	$(NOECHO) $(CHMOD) $(PERM_DIR) $(INST_ARCHLIB)
	$(NOECHO) $(TOUCH) $(INST_ARCHLIB)$(DFSEP).exists

$(INST_AUTODIR)$(DFSEP).exists :: Makefile.PL
	$(NOECHO) $(MKPATH) $(INST_AUTODIR)
	$(NOECHO) $(CHMOD) $(PERM_DIR) $(INST_AUTODIR)
	$(NOECHO) $(TOUCH) $(INST_AUTODIR)$(DFSEP).exists

$(INST_ARCHAUTODIR)$(DFSEP).exists :: Makefile.PL
	$(NOECHO) $(MKPATH) $(INST_ARCHAUTODIR)
	$(NOECHO) $(CHMOD) $(PERM_DIR) $(INST_ARCHAUTODIR)
	$(NOECHO) $(TOUCH) $(INST_ARCHAUTODIR)$(DFSEP).exists

$(INST_BIN)$(DFSEP).exists :: Makefile.PL
	$(NOECHO) $(MKPATH) $(INST_BIN)
	$(NOECHO) $(CHMOD) $(PERM_DIR) $(INST_BIN)
	$(NOECHO) $(TOUCH) $(INST_BIN)$(DFSEP).exists

$(INST_SCRIPT)$(DFSEP).exists :: Makefile.PL
	$(NOECHO) $(MKPATH) $(INST_SCRIPT)
	$(NOECHO) $(CHMOD) $(PERM_DIR) $(INST_SCRIPT)
	$(NOECHO) $(TOUCH) $(INST_SCRIPT)$(DFSEP).exists

$(INST_MAN1DIR)$(DFSEP).exists :: Makefile.PL
	$(NOECHO) $(MKPATH) $(INST_MAN1DIR)
	$(NOECHO) $(CHMOD) $(PERM_DIR) $(INST_MAN1DIR)
	$(NOECHO) $(TOUCH) $(INST_MAN1DIR)$(DFSEP).exists

$(INST_MAN3DIR)$(DFSEP).exists :: Makefile.PL
	$(NOECHO) $(MKPATH) $(INST_MAN3DIR)
	$(NOECHO) $(CHMOD) $(PERM_DIR) $(INST_MAN3DIR)
	$(NOECHO) $(TOUCH) $(INST_MAN3DIR)$(DFSEP).exists



# --- MakeMaker linkext section:

linkext :: dynamic
	$(NOECHO) $(NOOP)


# --- MakeMaker dlsyms section:


# --- MakeMaker dynamic_bs section:

BOOTSTRAP =


# --- MakeMaker dynamic section:

dynamic :: $(FIRST_MAKEFILE) config $(INST_BOOT) $(INST_DYNAMIC)
	$(NOECHO) $(NOOP)


# --- MakeMaker dynamic_lib section:


# --- MakeMaker static section:

## $(INST_PM) has been moved to the all: target.
## It remains here for awhile to allow for old usage: "make static"
static :: $(FIRST_MAKEFILE) $(INST_STATIC)
	$(NOECHO) $(NOOP)


# --- MakeMaker static_lib section:


# --- MakeMaker manifypods section:

POD2MAN_EXE = $(PERLRUN) "-MExtUtils::Command::MM" -e pod2man "--"
POD2MAN = $(POD2MAN_EXE)


manifypods : pure_all config  \
	lib/Test2/AsyncSubtest.pm \
	lib/Test2/AsyncSubtest/Event/Attach.pm \
	lib/Test2/AsyncSubtest/Event/Detach.pm \
	lib/Test2/AsyncSubtest/Hub.pm \
	lib/Test2/Bundle.pm \
	lib/Test2/Bundle/Extended.pm \
	lib/Test2/Bundle/More.pm \
	lib/Test2/Bundle/Simple.pm \
	lib/Test2/Compare.pm \
	lib/Test2/Compare/Array.pm \
	lib/Test2/Compare/Bag.pm \
	lib/Test2/Compare/Base.pm \
	lib/Test2/Compare/Bool.pm \
	lib/Test2/Compare/Custom.pm \
	lib/Test2/Compare/DeepRef.pm \
	lib/Test2/Compare/Delta.pm \
	lib/Test2/Compare/Event.pm \
	lib/Test2/Compare/EventMeta.pm \
	lib/Test2/Compare/Float.pm \
	lib/Test2/Compare/Hash.pm \
	lib/Test2/Compare/Isa.pm \
	lib/Test2/Compare/Meta.pm \
	lib/Test2/Compare/Negatable.pm \
	lib/Test2/Compare/Number.pm \
	lib/Test2/Compare/Object.pm \
	lib/Test2/Compare/OrderedSubset.pm \
	lib/Test2/Compare/Pattern.pm \
	lib/Test2/Compare/Ref.pm \
	lib/Test2/Compare/Regex.pm \
	lib/Test2/Compare/Scalar.pm \
	lib/Test2/Compare/Set.pm \
	lib/Test2/Compare/String.pm \
	lib/Test2/Compare/Undef.pm \
	lib/Test2/Compare/Wildcard.pm \
	lib/Test2/Manual.pm \
	lib/Test2/Manual/Anatomy.pm \
	lib/Test2/Manual/Anatomy/API.pm \
	lib/Test2/Manual/Anatomy/Context.pm \
	lib/Test2/Manual/Anatomy/EndToEnd.pm \
	lib/Test2/Manual/Anatomy/Event.pm \
	lib/Test2/Manual/Anatomy/Hubs.pm \
	lib/Test2/Manual/Anatomy/IPC.pm \
	lib/Test2/Manual/Anatomy/Utilities.pm \
	lib/Test2/Manual/Concurrency.pm \
	lib/Test2/Manual/Contributing.pm \
	lib/Test2/Manual/Testing.pm \
	lib/Test2/Manual/Testing/Introduction.pm \
	lib/Test2/Manual/Testing/Migrating.pm \
	lib/Test2/Manual/Testing/Planning.pm \
	lib/Test2/Manual/Testing/Todo.pm \
	lib/Test2/Manual/Tooling.pm \
	lib/Test2/Manual/Tooling/FirstTool.pm \
	lib/Test2/Manual/Tooling/Formatter.pm \
	lib/Test2/Manual/Tooling/Nesting.pm \
	lib/Test2/Manual/Tooling/Plugin/TestExit.pm \
	lib/Test2/Manual/Tooling/Plugin/TestingDone.pm \
	lib/Test2/Manual/Tooling/Plugin/ToolCompletes.pm \
	lib/Test2/Manual/Tooling/Plugin/ToolStarts.pm \
	lib/Test2/Manual/Tooling/Subtest.pm \
	lib/Test2/Manual/Tooling/TestBuilder.pm \
	lib/Test2/Manual/Tooling/Testing.pm \
	lib/Test2/Mock.pm \
	lib/Test2/Plugin.pm \
	lib/Test2/Plugin/BailOnFail.pm \
	lib/Test2/Plugin/DieOnFail.pm \
	lib/Test2/Plugin/ExitSummary.pm \
	lib/Test2/Plugin/SRand.pm \
	lib/Test2/Plugin/Times.pm \
	lib/Test2/Plugin/UTF8.pm \
	lib/Test2/Require.pm \
	lib/Test2/Require/AuthorTesting.pm \
	lib/Test2/Require/EnvVar.pm \
	lib/Test2/Require/Fork.pm \
	lib/Test2/Require/Module.pm \
	lib/Test2/Require/Perl.pm \
	lib/Test2/Require/RealFork.pm \
	lib/Test2/Require/Threads.pm \
	lib/Test2/Suite.pm \
	lib/Test2/Todo.pm \
	lib/Test2/Tools.pm \
	lib/Test2/Tools/AsyncSubtest.pm \
	lib/Test2/Tools/Basic.pm \
	lib/Test2/Tools/Class.pm \
	lib/Test2/Tools/ClassicCompare.pm \
	lib/Test2/Tools/Compare.pm \
	lib/Test2/Tools/Defer.pm \
	lib/Test2/Tools/Encoding.pm \
	lib/Test2/Tools/Event.pm \
	lib/Test2/Tools/Exception.pm \
	lib/Test2/Tools/Exports.pm \
	lib/Test2/Tools/GenTemp.pm \
	lib/Test2/Tools/Grab.pm \
	lib/Test2/Tools/Mock.pm \
	lib/Test2/Tools/Ref.pm \
	lib/Test2/Tools/Spec.pm \
	lib/Test2/Tools/Subtest.pm \
	lib/Test2/Tools/Target.pm \
	lib/Test2/Tools/Tester.pm \
	lib/Test2/Tools/Warnings.pm \
	lib/Test2/Util/Grabber.pm \
	lib/Test2/Util/Ref.pm \
	lib/Test2/Util/Stash.pm \
	lib/Test2/Util/Sub.pm \
	lib/Test2/Util/Table.pm \
	lib/Test2/Util/Table/LineBreak.pm \
	lib/Test2/Util/Times.pm \
	lib/Test2/V0.pm \
	lib/Test2/Workflow.pm \
	lib/Test2/Workflow/BlockBase.pm \
	lib/Test2/Workflow/Build.pm \
	lib/Test2/Workflow/Runner.pm \
	lib/Test2/Workflow/Task.pm \
	lib/Test2/Workflow/Task/Action.pm \
	lib/Test2/Workflow/Task/Group.pm
	$(NOECHO) $(POD2MAN) --section=$(MAN3EXT) --perm_rw=$(PERM_RW) -u \
	  lib/Test2/AsyncSubtest.pm $(INST_MAN3DIR)/Test2::AsyncSubtest.$(MAN3EXT) \
	  lib/Test2/AsyncSubtest/Event/Attach.pm $(INST_MAN3DIR)/Test2::AsyncSubtest::Event::Attach.$(MAN3EXT) \
	  lib/Test2/AsyncSubtest/Event/Detach.pm $(INST_MAN3DIR)/Test2::AsyncSubtest::Event::Detach.$(MAN3EXT) \
	  lib/Test2/AsyncSubtest/Hub.pm $(INST_MAN3DIR)/Test2::AsyncSubtest::Hub.$(MAN3EXT) \
	  lib/Test2/Bundle.pm $(INST_MAN3DIR)/Test2::Bundle.$(MAN3EXT) \
	  lib/Test2/Bundle/Extended.pm $(INST_MAN3DIR)/Test2::Bundle::Extended.$(MAN3EXT) \
	  lib/Test2/Bundle/More.pm $(INST_MAN3DIR)/Test2::Bundle::More.$(MAN3EXT) \
	  lib/Test2/Bundle/Simple.pm $(INST_MAN3DIR)/Test2::Bundle::Simple.$(MAN3EXT) \
	  lib/Test2/Compare.pm $(INST_MAN3DIR)/Test2::Compare.$(MAN3EXT) \
	  lib/Test2/Compare/Array.pm $(INST_MAN3DIR)/Test2::Compare::Array.$(MAN3EXT) \
	  lib/Test2/Compare/Bag.pm $(INST_MAN3DIR)/Test2::Compare::Bag.$(MAN3EXT) \
	  lib/Test2/Compare/Base.pm $(INST_MAN3DIR)/Test2::Compare::Base.$(MAN3EXT) \
	  lib/Test2/Compare/Bool.pm $(INST_MAN3DIR)/Test2::Compare::Bool.$(MAN3EXT) \
	  lib/Test2/Compare/Custom.pm $(INST_MAN3DIR)/Test2::Compare::Custom.$(MAN3EXT) \
	  lib/Test2/Compare/DeepRef.pm $(INST_MAN3DIR)/Test2::Compare::DeepRef.$(MAN3EXT) \
	  lib/Test2/Compare/Delta.pm $(INST_MAN3DIR)/Test2::Compare::Delta.$(MAN3EXT) \
	  lib/Test2/Compare/Event.pm $(INST_MAN3DIR)/Test2::Compare::Event.$(MAN3EXT) \
	  lib/Test2/Compare/EventMeta.pm $(INST_MAN3DIR)/Test2::Compare::EventMeta.$(MAN3EXT) \
	  lib/Test2/Compare/Float.pm $(INST_MAN3DIR)/Test2::Compare::Float.$(MAN3EXT) \
	  lib/Test2/Compare/Hash.pm $(INST_MAN3DIR)/Test2::Compare::Hash.$(MAN3EXT) \
	  lib/Test2/Compare/Isa.pm $(INST_MAN3DIR)/Test2::Compare::Isa.$(MAN3EXT) \
	  lib/Test2/Compare/Meta.pm $(INST_MAN3DIR)/Test2::Compare::Meta.$(MAN3EXT) \
	  lib/Test2/Compare/Negatable.pm $(INST_MAN3DIR)/Test2::Compare::Negatable.$(MAN3EXT) \
	  lib/Test2/Compare/Number.pm $(INST_MAN3DIR)/Test2::Compare::Number.$(MAN3EXT) \
	  lib/Test2/Compare/Object.pm $(INST_MAN3DIR)/Test2::Compare::Object.$(MAN3EXT) \
	  lib/Test2/Compare/OrderedSubset.pm $(INST_MAN3DIR)/Test2::Compare::OrderedSubset.$(MAN3EXT) \
	  lib/Test2/Compare/Pattern.pm $(INST_MAN3DIR)/Test2::Compare::Pattern.$(MAN3EXT) \
	  lib/Test2/Compare/Ref.pm $(INST_MAN3DIR)/Test2::Compare::Ref.$(MAN3EXT) \
	  lib/Test2/Compare/Regex.pm $(INST_MAN3DIR)/Test2::Compare::Regex.$(MAN3EXT) \
	  lib/Test2/Compare/Scalar.pm $(INST_MAN3DIR)/Test2::Compare::Scalar.$(MAN3EXT) \
	  lib/Test2/Compare/Set.pm $(INST_MAN3DIR)/Test2::Compare::Set.$(MAN3EXT) \
	  lib/Test2/Compare/String.pm $(INST_MAN3DIR)/Test2::Compare::String.$(MAN3EXT) \
	  lib/Test2/Compare/Undef.pm $(INST_MAN3DIR)/Test2::Compare::Undef.$(MAN3EXT) \
	  lib/Test2/Compare/Wildcard.pm $(INST_MAN3DIR)/Test2::Compare::Wildcard.$(MAN3EXT) 
	$(NOECHO) $(POD2MAN) --section=$(MAN3EXT) --perm_rw=$(PERM_RW) -u \
	  lib/Test2/Manual.pm $(INST_MAN3DIR)/Test2::Manual.$(MAN3EXT) \
	  lib/Test2/Manual/Anatomy.pm $(INST_MAN3DIR)/Test2::Manual::Anatomy.$(MAN3EXT) \
	  lib/Test2/Manual/Anatomy/API.pm $(INST_MAN3DIR)/Test2::Manual::Anatomy::API.$(MAN3EXT) \
	  lib/Test2/Manual/Anatomy/Context.pm $(INST_MAN3DIR)/Test2::Manual::Anatomy::Context.$(MAN3EXT) \
	  lib/Test2/Manual/Anatomy/EndToEnd.pm $(INST_MAN3DIR)/Test2::Manual::Anatomy::EndToEnd.$(MAN3EXT) \
	  lib/Test2/Manual/Anatomy/Event.pm $(INST_MAN3DIR)/Test2::Manual::Anatomy::Event.$(MAN3EXT) \
	  lib/Test2/Manual/Anatomy/Hubs.pm $(INST_MAN3DIR)/Test2::Manual::Anatomy::Hubs.$(MAN3EXT) \
	  lib/Test2/Manual/Anatomy/IPC.pm $(INST_MAN3DIR)/Test2::Manual::Anatomy::IPC.$(MAN3EXT) \
	  lib/Test2/Manual/Anatomy/Utilities.pm $(INST_MAN3DIR)/Test2::Manual::Anatomy::Utilities.$(MAN3EXT) \
	  lib/Test2/Manual/Concurrency.pm $(INST_MAN3DIR)/Test2::Manual::Concurrency.$(MAN3EXT) \
	  lib/Test2/Manual/Contributing.pm $(INST_MAN3DIR)/Test2::Manual::Contributing.$(MAN3EXT) \
	  lib/Test2/Manual/Testing.pm $(INST_MAN3DIR)/Test2::Manual::Testing.$(MAN3EXT) \
	  lib/Test2/Manual/Testing/Introduction.pm $(INST_MAN3DIR)/Test2::Manual::Testing::Introduction.$(MAN3EXT) \
	  lib/Test2/Manual/Testing/Migrating.pm $(INST_MAN3DIR)/Test2::Manual::Testing::Migrating.$(MAN3EXT) \
	  lib/Test2/Manual/Testing/Planning.pm $(INST_MAN3DIR)/Test2::Manual::Testing::Planning.$(MAN3EXT) \
	  lib/Test2/Manual/Testing/Todo.pm $(INST_MAN3DIR)/Test2::Manual::Testing::Todo.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling.pm $(INST_MAN3DIR)/Test2::Manual::Tooling.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/FirstTool.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::FirstTool.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/Formatter.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::Formatter.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/Nesting.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::Nesting.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/Plugin/TestExit.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::Plugin::TestExit.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/Plugin/TestingDone.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::Plugin::TestingDone.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/Plugin/ToolCompletes.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::Plugin::ToolCompletes.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/Plugin/ToolStarts.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::Plugin::ToolStarts.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/Subtest.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::Subtest.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/TestBuilder.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::TestBuilder.$(MAN3EXT) \
	  lib/Test2/Manual/Tooling/Testing.pm $(INST_MAN3DIR)/Test2::Manual::Tooling::Testing.$(MAN3EXT) \
	  lib/Test2/Mock.pm $(INST_MAN3DIR)/Test2::Mock.$(MAN3EXT) \
	  lib/Test2/Plugin.pm $(INST_MAN3DIR)/Test2::Plugin.$(MAN3EXT) 
	$(NOECHO) $(POD2MAN) --section=$(MAN3EXT) --perm_rw=$(PERM_RW) -u \
	  lib/Test2/Plugin/BailOnFail.pm $(INST_MAN3DIR)/Test2::Plugin::BailOnFail.$(MAN3EXT) \
	  lib/Test2/Plugin/DieOnFail.pm $(INST_MAN3DIR)/Test2::Plugin::DieOnFail.$(MAN3EXT) \
	  lib/Test2/Plugin/ExitSummary.pm $(INST_MAN3DIR)/Test2::Plugin::ExitSummary.$(MAN3EXT) \
	  lib/Test2/Plugin/SRand.pm $(INST_MAN3DIR)/Test2::Plugin::SRand.$(MAN3EXT) \
	  lib/Test2/Plugin/Times.pm $(INST_MAN3DIR)/Test2::Plugin::Times.$(MAN3EXT) \
	  lib/Test2/Plugin/UTF8.pm $(INST_MAN3DIR)/Test2::Plugin::UTF8.$(MAN3EXT) \
	  lib/Test2/Require.pm $(INST_MAN3DIR)/Test2::Require.$(MAN3EXT) \
	  lib/Test2/Require/AuthorTesting.pm $(INST_MAN3DIR)/Test2::Require::AuthorTesting.$(MAN3EXT) \
	  lib/Test2/Require/EnvVar.pm $(INST_MAN3DIR)/Test2::Require::EnvVar.$(MAN3EXT) \
	  lib/Test2/Require/Fork.pm $(INST_MAN3DIR)/Test2::Require::Fork.$(MAN3EXT) \
	  lib/Test2/Require/Module.pm $(INST_MAN3DIR)/Test2::Require::Module.$(MAN3EXT) \
	  lib/Test2/Require/Perl.pm $(INST_MAN3DIR)/Test2::Require::Perl.$(MAN3EXT) \
	  lib/Test2/Require/RealFork.pm $(INST_MAN3DIR)/Test2::Require::RealFork.$(MAN3EXT) \
	  lib/Test2/Require/Threads.pm $(INST_MAN3DIR)/Test2::Require::Threads.$(MAN3EXT) \
	  lib/Test2/Suite.pm $(INST_MAN3DIR)/Test2::Suite.$(MAN3EXT) \
	  lib/Test2/Todo.pm $(INST_MAN3DIR)/Test2::Todo.$(MAN3EXT) \
	  lib/Test2/Tools.pm $(INST_MAN3DIR)/Test2::Tools.$(MAN3EXT) \
	  lib/Test2/Tools/AsyncSubtest.pm $(INST_MAN3DIR)/Test2::Tools::AsyncSubtest.$(MAN3EXT) \
	  lib/Test2/Tools/Basic.pm $(INST_MAN3DIR)/Test2::Tools::Basic.$(MAN3EXT) \
	  lib/Test2/Tools/Class.pm $(INST_MAN3DIR)/Test2::Tools::Class.$(MAN3EXT) \
	  lib/Test2/Tools/ClassicCompare.pm $(INST_MAN3DIR)/Test2::Tools::ClassicCompare.$(MAN3EXT) \
	  lib/Test2/Tools/Compare.pm $(INST_MAN3DIR)/Test2::Tools::Compare.$(MAN3EXT) \
	  lib/Test2/Tools/Defer.pm $(INST_MAN3DIR)/Test2::Tools::Defer.$(MAN3EXT) \
	  lib/Test2/Tools/Encoding.pm $(INST_MAN3DIR)/Test2::Tools::Encoding.$(MAN3EXT) \
	  lib/Test2/Tools/Event.pm $(INST_MAN3DIR)/Test2::Tools::Event.$(MAN3EXT) \
	  lib/Test2/Tools/Exception.pm $(INST_MAN3DIR)/Test2::Tools::Exception.$(MAN3EXT) \
	  lib/Test2/Tools/Exports.pm $(INST_MAN3DIR)/Test2::Tools::Exports.$(MAN3EXT) \
	  lib/Test2/Tools/GenTemp.pm $(INST_MAN3DIR)/Test2::Tools::GenTemp.$(MAN3EXT) \
	  lib/Test2/Tools/Grab.pm $(INST_MAN3DIR)/Test2::Tools::Grab.$(MAN3EXT) \
	  lib/Test2/Tools/Mock.pm $(INST_MAN3DIR)/Test2::Tools::Mock.$(MAN3EXT) \
	  lib/Test2/Tools/Ref.pm $(INST_MAN3DIR)/Test2::Tools::Ref.$(MAN3EXT) \
	  lib/Test2/Tools/Spec.pm $(INST_MAN3DIR)/Test2::Tools::Spec.$(MAN3EXT) \
	  lib/Test2/Tools/Subtest.pm $(INST_MAN3DIR)/Test2::Tools::Subtest.$(MAN3EXT) \
	  lib/Test2/Tools/Target.pm $(INST_MAN3DIR)/Test2::Tools::Target.$(MAN3EXT) \
	  lib/Test2/Tools/Tester.pm $(INST_MAN3DIR)/Test2::Tools::Tester.$(MAN3EXT) 
	$(NOECHO) $(POD2MAN) --section=$(MAN3EXT) --perm_rw=$(PERM_RW) -u \
	  lib/Test2/Tools/Warnings.pm $(INST_MAN3DIR)/Test2::Tools::Warnings.$(MAN3EXT) \
	  lib/Test2/Util/Grabber.pm $(INST_MAN3DIR)/Test2::Util::Grabber.$(MAN3EXT) \
	  lib/Test2/Util/Ref.pm $(INST_MAN3DIR)/Test2::Util::Ref.$(MAN3EXT) \
	  lib/Test2/Util/Stash.pm $(INST_MAN3DIR)/Test2::Util::Stash.$(MAN3EXT) \
	  lib/Test2/Util/Sub.pm $(INST_MAN3DIR)/Test2::Util::Sub.$(MAN3EXT) \
	  lib/Test2/Util/Table.pm $(INST_MAN3DIR)/Test2::Util::Table.$(MAN3EXT) \
	  lib/Test2/Util/Table/LineBreak.pm $(INST_MAN3DIR)/Test2::Util::Table::LineBreak.$(MAN3EXT) \
	  lib/Test2/Util/Times.pm $(INST_MAN3DIR)/Test2::Util::Times.$(MAN3EXT) \
	  lib/Test2/V0.pm $(INST_MAN3DIR)/Test2::V0.$(MAN3EXT) \
	  lib/Test2/Workflow.pm $(INST_MAN3DIR)/Test2::Workflow.$(MAN3EXT) \
	  lib/Test2/Workflow/BlockBase.pm $(INST_MAN3DIR)/Test2::Workflow::BlockBase.$(MAN3EXT) \
	  lib/Test2/Workflow/Build.pm $(INST_MAN3DIR)/Test2::Workflow::Build.$(MAN3EXT) \
	  lib/Test2/Workflow/Runner.pm $(INST_MAN3DIR)/Test2::Workflow::Runner.$(MAN3EXT) \
	  lib/Test2/Workflow/Task.pm $(INST_MAN3DIR)/Test2::Workflow::Task.$(MAN3EXT) \
	  lib/Test2/Workflow/Task/Action.pm $(INST_MAN3DIR)/Test2::Workflow::Task::Action.$(MAN3EXT) \
	  lib/Test2/Workflow/Task/Group.pm $(INST_MAN3DIR)/Test2::Workflow::Task::Group.$(MAN3EXT) 




# --- MakeMaker processPL section:


# --- MakeMaker installbin section:


# --- MakeMaker subdirs section:

# none

# --- MakeMaker clean_subdirs section:
clean_subdirs :
	$(NOECHO) $(NOOP)


# --- MakeMaker clean section:

# Delete temporary files but do not touch installed files. We don't delete
# the Makefile here so a later make realclean still has a makefile to use.

clean :: clean_subdirs
	- $(RM_F) \
	  $(BASEEXT).bso $(BASEEXT).def \
	  $(BASEEXT).exp $(BASEEXT).x \
	  $(BOOTSTRAP) $(INST_ARCHAUTODIR)/extralibs.all \
	  $(INST_ARCHAUTODIR)/extralibs.ld $(MAKE_APERL_FILE) \
	  *$(LIB_EXT) *$(OBJ_EXT) \
	  *perl.core MYMETA.json \
	  MYMETA.yml blibdirs.ts \
	  core core.*perl.*.? \
	  core.[0-9] core.[0-9][0-9] \
	  core.[0-9][0-9][0-9] core.[0-9][0-9][0-9][0-9] \
	  core.[0-9][0-9][0-9][0-9][0-9] lib$(BASEEXT).def \
	  mon.out perl \
	  perl$(EXE_EXT) perl.exe \
	  perlmain.c pm_to_blib \
	  pm_to_blib.ts so_locations \
	  tmon.out 
	- $(RM_RF) \
	  blib 
	  $(NOECHO) $(RM_F) $(MAKEFILE_OLD)
	- $(MV) $(FIRST_MAKEFILE) $(MAKEFILE_OLD) $(DEV_NULL)


# --- MakeMaker realclean_subdirs section:
# so clean is forced to complete before realclean_subdirs runs
realclean_subdirs : clean
	$(NOECHO) $(NOOP)


# --- MakeMaker realclean section:
# Delete temporary files (via clean) and also delete dist files
realclean purge :: realclean_subdirs
	- $(RM_F) \
	  $(FIRST_MAKEFILE) $(MAKEFILE_OLD) 
	- $(RM_RF) \
	  $(DISTVNAME) 


# --- MakeMaker metafile section:
metafile : create_distdir
	$(NOECHO) $(ECHO) Generating META.yml
	$(NOECHO) $(ECHO) '---' > META_new.yml
	$(NOECHO) $(ECHO) 'abstract: '\''Distribution with a rich set of tools built upon the Test2 framework.'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'author:' >> META_new.yml
	$(NOECHO) $(ECHO) '  - '\''Chad Granum <exodist@cpan.org>'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'build_requires:' >> META_new.yml
	$(NOECHO) $(ECHO) '  ExtUtils::MakeMaker: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'configure_requires:' >> META_new.yml
	$(NOECHO) $(ECHO) '  ExtUtils::MakeMaker: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'dynamic_config: 1' >> META_new.yml
	$(NOECHO) $(ECHO) 'generated_by: '\''ExtUtils::MakeMaker version 7.34, CPAN::Meta::Converter version 2.150010'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'license: perl' >> META_new.yml
	$(NOECHO) $(ECHO) 'meta-spec:' >> META_new.yml
	$(NOECHO) $(ECHO) '  url: http://module-build.sourceforge.net/META-spec-v1.4.html' >> META_new.yml
	$(NOECHO) $(ECHO) '  version: '\''1.4'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'name: Test2-Suite' >> META_new.yml
	$(NOECHO) $(ECHO) 'no_index:' >> META_new.yml
	$(NOECHO) $(ECHO) '  directory:' >> META_new.yml
	$(NOECHO) $(ECHO) '    - t' >> META_new.yml
	$(NOECHO) $(ECHO) '    - inc' >> META_new.yml
	$(NOECHO) $(ECHO) 'requires:' >> META_new.yml
	$(NOECHO) $(ECHO) '  B: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Carp: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Data::Dumper: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Exporter: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Importer: '\''0.024'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Module::Pluggable: '\''2.7'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Scalar::Util: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Scope::Guard: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Sub::Info: '\''0.002'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Term::Table: '\''0.013'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Test2::API: '\''1.302176'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Time::HiRes: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  overload: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  perl: '\''5.008001'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  utf8: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'version: '\''0.000145'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'x_serialization_backend: '\''CPAN::Meta::YAML version 0.018'\''' >> META_new.yml
	-$(NOECHO) $(MV) META_new.yml $(DISTVNAME)/META.yml
	$(NOECHO) $(ECHO) Generating META.json
	$(NOECHO) $(ECHO) '{' > META_new.json
	$(NOECHO) $(ECHO) '   "abstract" : "Distribution with a rich set of tools built upon the Test2 framework.",' >> META_new.json
	$(NOECHO) $(ECHO) '   "author" : [' >> META_new.json
	$(NOECHO) $(ECHO) '      "Chad Granum <exodist@cpan.org>"' >> META_new.json
	$(NOECHO) $(ECHO) '   ],' >> META_new.json
	$(NOECHO) $(ECHO) '   "dynamic_config" : 1,' >> META_new.json
	$(NOECHO) $(ECHO) '   "generated_by" : "ExtUtils::MakeMaker version 7.34, CPAN::Meta::Converter version 2.150010",' >> META_new.json
	$(NOECHO) $(ECHO) '   "license" : [' >> META_new.json
	$(NOECHO) $(ECHO) '      "perl_5"' >> META_new.json
	$(NOECHO) $(ECHO) '   ],' >> META_new.json
	$(NOECHO) $(ECHO) '   "meta-spec" : {' >> META_new.json
	$(NOECHO) $(ECHO) '      "url" : "http://search.cpan.org/perldoc?CPAN::Meta::Spec",' >> META_new.json
	$(NOECHO) $(ECHO) '      "version" : 2' >> META_new.json
	$(NOECHO) $(ECHO) '   },' >> META_new.json
	$(NOECHO) $(ECHO) '   "name" : "Test2-Suite",' >> META_new.json
	$(NOECHO) $(ECHO) '   "no_index" : {' >> META_new.json
	$(NOECHO) $(ECHO) '      "directory" : [' >> META_new.json
	$(NOECHO) $(ECHO) '         "t",' >> META_new.json
	$(NOECHO) $(ECHO) '         "inc"' >> META_new.json
	$(NOECHO) $(ECHO) '      ]' >> META_new.json
	$(NOECHO) $(ECHO) '   },' >> META_new.json
	$(NOECHO) $(ECHO) '   "prereqs" : {' >> META_new.json
	$(NOECHO) $(ECHO) '      "build" : {' >> META_new.json
	$(NOECHO) $(ECHO) '         "requires" : {' >> META_new.json
	$(NOECHO) $(ECHO) '            "ExtUtils::MakeMaker" : "0"' >> META_new.json
	$(NOECHO) $(ECHO) '         }' >> META_new.json
	$(NOECHO) $(ECHO) '      },' >> META_new.json
	$(NOECHO) $(ECHO) '      "configure" : {' >> META_new.json
	$(NOECHO) $(ECHO) '         "requires" : {' >> META_new.json
	$(NOECHO) $(ECHO) '            "ExtUtils::MakeMaker" : "0"' >> META_new.json
	$(NOECHO) $(ECHO) '         }' >> META_new.json
	$(NOECHO) $(ECHO) '      },' >> META_new.json
	$(NOECHO) $(ECHO) '      "runtime" : {' >> META_new.json
	$(NOECHO) $(ECHO) '         "requires" : {' >> META_new.json
	$(NOECHO) $(ECHO) '            "B" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Carp" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Data::Dumper" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Exporter" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Importer" : "0.024",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Module::Pluggable" : "2.7",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Scalar::Util" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Scope::Guard" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Sub::Info" : "0.002",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Term::Table" : "0.013",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Test2::API" : "1.302176",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Time::HiRes" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "overload" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "perl" : "5.008001",' >> META_new.json
	$(NOECHO) $(ECHO) '            "utf8" : "0"' >> META_new.json
	$(NOECHO) $(ECHO) '         }' >> META_new.json
	$(NOECHO) $(ECHO) '      }' >> META_new.json
	$(NOECHO) $(ECHO) '   },' >> META_new.json
	$(NOECHO) $(ECHO) '   "release_status" : "stable",' >> META_new.json
	$(NOECHO) $(ECHO) '   "version" : "0.000145",' >> META_new.json
	$(NOECHO) $(ECHO) '   "x_serialization_backend" : "JSON::PP version 4.02"' >> META_new.json
	$(NOECHO) $(ECHO) '}' >> META_new.json
	-$(NOECHO) $(MV) META_new.json $(DISTVNAME)/META.json


# --- MakeMaker signature section:
signature :
	cpansign -s


# --- MakeMaker dist_basics section:
distclean :: realclean distcheck
	$(NOECHO) $(NOOP)

distcheck :
	$(PERLRUN) "-MExtUtils::Manifest=fullcheck" -e fullcheck

skipcheck :
	$(PERLRUN) "-MExtUtils::Manifest=skipcheck" -e skipcheck

manifest :
	$(PERLRUN) "-MExtUtils::Manifest=mkmanifest" -e mkmanifest

veryclean : realclean
	$(RM_F) *~ */*~ *.orig */*.orig *.bak */*.bak *.old */*.old



# --- MakeMaker dist_core section:

dist : $(DIST_DEFAULT) $(FIRST_MAKEFILE)
	$(NOECHO) $(ABSPERLRUN) -l -e 'print '\''Warning: Makefile possibly out of date with $(VERSION_FROM)'\''' \
	  -e '    if -e '\''$(VERSION_FROM)'\'' and -M '\''$(VERSION_FROM)'\'' < -M '\''$(FIRST_MAKEFILE)'\'';' --

tardist : $(DISTVNAME).tar$(SUFFIX)
	$(NOECHO) $(NOOP)

uutardist : $(DISTVNAME).tar$(SUFFIX)
	uuencode $(DISTVNAME).tar$(SUFFIX) $(DISTVNAME).tar$(SUFFIX) > $(DISTVNAME).tar$(SUFFIX)_uu
	$(NOECHO) $(ECHO) 'Created $(DISTVNAME).tar$(SUFFIX)_uu'

$(DISTVNAME).tar$(SUFFIX) : distdir
	$(PREOP)
	$(TO_UNIX)
	$(TAR) $(TARFLAGS) $(DISTVNAME).tar $(DISTVNAME)
	$(RM_RF) $(DISTVNAME)
	$(COMPRESS) $(DISTVNAME).tar
	$(NOECHO) $(ECHO) 'Created $(DISTVNAME).tar$(SUFFIX)'
	$(POSTOP)

zipdist : $(DISTVNAME).zip
	$(NOECHO) $(NOOP)

$(DISTVNAME).zip : distdir
	$(PREOP)
	$(ZIP) $(ZIPFLAGS) $(DISTVNAME).zip $(DISTVNAME)
	$(RM_RF) $(DISTVNAME)
	$(NOECHO) $(ECHO) 'Created $(DISTVNAME).zip'
	$(POSTOP)

shdist : distdir
	$(PREOP)
	$(SHAR) $(DISTVNAME) > $(DISTVNAME).shar
	$(RM_RF) $(DISTVNAME)
	$(NOECHO) $(ECHO) 'Created $(DISTVNAME).shar'
	$(POSTOP)


# --- MakeMaker distdir section:
create_distdir :
	$(RM_RF) $(DISTVNAME)
	$(PERLRUN) "-MExtUtils::Manifest=manicopy,maniread" \
		-e "manicopy(maniread(),'$(DISTVNAME)', '$(DIST_CP)');"

distdir : create_distdir distmeta 
	$(NOECHO) $(NOOP)



# --- MakeMaker dist_test section:
disttest : distdir
	cd $(DISTVNAME) && $(ABSPERLRUN) Makefile.PL "INSTALLDIRS=site"
	cd $(DISTVNAME) && $(MAKE) $(PASTHRU)
	cd $(DISTVNAME) && $(MAKE) test $(PASTHRU)



# --- MakeMaker dist_ci section:
ci :
	$(ABSPERLRUN) -MExtUtils::Manifest=maniread -e '@all = sort keys %{ maniread() };' \
	  -e 'print(qq{Executing $(CI) @all\n});' \
	  -e 'system(qq{$(CI) @all}) == 0 or die $$!;' \
	  -e 'print(qq{Executing $(RCS_LABEL) ...\n});' \
	  -e 'system(qq{$(RCS_LABEL) @all}) == 0 or die $$!;' --


# --- MakeMaker distmeta section:
distmeta : create_distdir metafile
	$(NOECHO) cd $(DISTVNAME) && $(ABSPERLRUN) -MExtUtils::Manifest=maniadd -e 'exit unless -e q{META.yml};' \
	  -e 'eval { maniadd({q{META.yml} => q{Module YAML meta-data (added by MakeMaker)}}) }' \
	  -e '    or die "Could not add META.yml to MANIFEST: $${'\''@'\''}"' --
	$(NOECHO) cd $(DISTVNAME) && $(ABSPERLRUN) -MExtUtils::Manifest=maniadd -e 'exit unless -f q{META.json};' \
	  -e 'eval { maniadd({q{META.json} => q{Module JSON meta-data (added by MakeMaker)}}) }' \
	  -e '    or die "Could not add META.json to MANIFEST: $${'\''@'\''}"' --



# --- MakeMaker distsignature section:
distsignature : distmeta
	$(NOECHO) cd $(DISTVNAME) && $(ABSPERLRUN) -MExtUtils::Manifest=maniadd -e 'eval { maniadd({q{SIGNATURE} => q{Public-key signature (added by MakeMaker)}}) }' \
	  -e '    or die "Could not add SIGNATURE to MANIFEST: $${'\''@'\''}"' --
	$(NOECHO) cd $(DISTVNAME) && $(TOUCH) SIGNATURE
	cd $(DISTVNAME) && cpansign -s



# --- MakeMaker install section:

install :: pure_install doc_install
	$(NOECHO) $(NOOP)

install_perl :: pure_perl_install doc_perl_install
	$(NOECHO) $(NOOP)

install_site :: pure_site_install doc_site_install
	$(NOECHO) $(NOOP)

install_vendor :: pure_vendor_install doc_vendor_install
	$(NOECHO) $(NOOP)

pure_install :: pure_$(INSTALLDIRS)_install
	$(NOECHO) $(NOOP)

doc_install :: doc_$(INSTALLDIRS)_install
	$(NOECHO) $(NOOP)

pure__install : pure_site_install
	$(NOECHO) $(ECHO) INSTALLDIRS not defined, defaulting to INSTALLDIRS=site

doc__install : doc_site_install
	$(NOECHO) $(ECHO) INSTALLDIRS not defined, defaulting to INSTALLDIRS=site

pure_perl_install :: all
	$(NOECHO) umask 022; $(MOD_INSTALL) \
		"$(INST_LIB)" "$(DESTINSTALLPRIVLIB)" \
		"$(INST_ARCHLIB)" "$(DESTINSTALLARCHLIB)" \
		"$(INST_BIN)" "$(DESTINSTALLBIN)" \
		"$(INST_SCRIPT)" "$(DESTINSTALLSCRIPT)" \
		"$(INST_MAN1DIR)" "$(DESTINSTALLMAN1DIR)" \
		"$(INST_MAN3DIR)" "$(DESTINSTALLMAN3DIR)"
	$(NOECHO) $(WARN_IF_OLD_PACKLIST) \
		"$(SITEARCHEXP)/auto/$(FULLEXT)"


pure_site_install :: all
	$(NOECHO) umask 02; $(MOD_INSTALL) \
		read "$(SITEARCHEXP)/auto/$(FULLEXT)/.packlist" \
		write "$(DESTINSTALLSITEARCH)/auto/$(FULLEXT)/.packlist" \
		"$(INST_LIB)" "$(DESTINSTALLSITELIB)" \
		"$(INST_ARCHLIB)" "$(DESTINSTALLSITEARCH)" \
		"$(INST_BIN)" "$(DESTINSTALLSITEBIN)" \
		"$(INST_SCRIPT)" "$(DESTINSTALLSITESCRIPT)" \
		"$(INST_MAN1DIR)" "$(DESTINSTALLSITEMAN1DIR)" \
		"$(INST_MAN3DIR)" "$(DESTINSTALLSITEMAN3DIR)"
	$(NOECHO) $(WARN_IF_OLD_PACKLIST) \
		"$(PERL_ARCHLIB)/auto/$(FULLEXT)"

pure_vendor_install :: all
	$(NOECHO) umask 022; $(MOD_INSTALL) \
		"$(INST_LIB)" "$(DESTINSTALLVENDORLIB)" \
		"$(INST_ARCHLIB)" "$(DESTINSTALLVENDORARCH)" \
		"$(INST_BIN)" "$(DESTINSTALLVENDORBIN)" \
		"$(INST_SCRIPT)" "$(DESTINSTALLVENDORSCRIPT)" \
		"$(INST_MAN1DIR)" "$(DESTINSTALLVENDORMAN1DIR)" \
		"$(INST_MAN3DIR)" "$(DESTINSTALLVENDORMAN3DIR)"


doc_perl_install :: all

doc_site_install :: all
	$(NOECHO) $(ECHO) Appending installation info to "$(DESTINSTALLSITEARCH)/perllocal.pod"
	-$(NOECHO) umask 02; $(MKPATH) "$(DESTINSTALLSITEARCH)"
	-$(NOECHO) umask 02; $(DOC_INSTALL) \
		"Module" "$(NAME)" \
		"installed into" "$(INSTALLSITELIB)" \
		LINKTYPE "$(LINKTYPE)" \
		VERSION "$(VERSION)" \
		EXE_FILES "$(EXE_FILES)" \
		>> "$(DESTINSTALLSITEARCH)/perllocal.pod"

doc_vendor_install :: all


uninstall :: uninstall_from_$(INSTALLDIRS)dirs
	$(NOECHO) $(NOOP)

uninstall_from_perldirs ::

uninstall_from_sitedirs ::
	$(NOECHO) $(UNINSTALL) "$(SITEARCHEXP)/auto/$(FULLEXT)/.packlist"

uninstall_from_vendordirs ::


# --- MakeMaker force section:
# Phony target to force checking subdirectories.
FORCE :
	$(NOECHO) $(NOOP)


# --- MakeMaker perldepend section:


# --- MakeMaker makefile section:
# We take a very conservative approach here, but it's worth it.
# We move Makefile to Makefile.old here to avoid gnu make looping.
$(FIRST_MAKEFILE) : Makefile.PL $(CONFIGDEP)
	$(NOECHO) $(ECHO) "Makefile out-of-date with respect to $?"
	$(NOECHO) $(ECHO) "Cleaning current config before rebuilding Makefile..."
	-$(NOECHO) $(RM_F) $(MAKEFILE_OLD)
	-$(NOECHO) $(MV)   $(FIRST_MAKEFILE) $(MAKEFILE_OLD)
	- $(MAKE) $(USEMAKEFILE) $(MAKEFILE_OLD) clean $(DEV_NULL)
	$(PERLRUN) Makefile.PL "INSTALLDIRS=site"
	$(NOECHO) $(ECHO) "==> Your Makefile has been rebuilt. <=="
	$(NOECHO) $(ECHO) "==> Please rerun the $(MAKE) command.  <=="
	$(FALSE)



# --- MakeMaker staticmake section:

# --- MakeMaker makeaperl section ---
MAP_TARGET    = perl
FULLPERL      = "/usr/bin/perl"
MAP_PERLINC   = "-Iblib/arch" "-Iblib/lib" "-I/usr/lib/x86_64-linux-gnu/perl/5.30" "-I/usr/share/perl/5.30"

$(MAP_TARGET) :: $(MAKE_APERL_FILE)
	$(MAKE) $(USEMAKEFILE) $(MAKE_APERL_FILE) $@

$(MAKE_APERL_FILE) : static $(FIRST_MAKEFILE) pm_to_blib
	$(NOECHO) $(ECHO) Writing \"$(MAKE_APERL_FILE)\" for this $(MAP_TARGET)
	$(NOECHO) $(PERLRUNINST) \
		Makefile.PL DIR="" \
		MAKEFILE=$(MAKE_APERL_FILE) LINKTYPE=static \
		MAKEAPERL=1 NORECURS=1 CCCDLFLAGS= \
		INSTALLDIRS=site


# --- MakeMaker test section:
TEST_VERBOSE=0
TEST_TYPE=test_$(LINKTYPE)
TEST_FILE = test.pl
TEST_FILES = t/*.t t/acceptance/*.t t/behavior/*.t t/modules/*.t t/modules/AsyncSubtest/*.t t/modules/AsyncSubtest/Event/*.t t/modules/Bundle/*.t t/modules/Compare/*.t t/modules/Plugin/*.t t/modules/Require/*.t t/modules/Tools/*.t t/modules/Util/*.t t/modules/Util/Table/*.t t/modules/Workflow/*.t t/modules/Workflow/Task/*.t t/regression/*.t
TESTDB_SW = -d

testdb :: testdb_$(LINKTYPE)
	$(NOECHO) $(NOOP)

test :: $(TEST_TYPE)
	$(NOECHO) $(NOOP)

# Occasionally we may face this degenerate target:
test_ : test_dynamic
	$(NOECHO) $(NOOP)

subdirs-test_dynamic :: dynamic pure_all

test_dynamic :: subdirs-test_dynamic
	PERL_DL_NONLAZY=1 $(FULLPERLRUN) "-MExtUtils::Command::MM" "-MTest::Harness" "-e" "undef *Test::Harness::Switches; test_harness($(TEST_VERBOSE), '$(INST_LIB)', '$(INST_ARCHLIB)')" $(TEST_FILES)

testdb_dynamic :: dynamic pure_all
	PERL_DL_NONLAZY=1 $(FULLPERLRUN) $(TESTDB_SW) "-I$(INST_LIB)" "-I$(INST_ARCHLIB)" $(TEST_FILE)

subdirs-test_static :: static pure_all

test_static :: subdirs-test_static
	PERL_DL_NONLAZY=1 $(FULLPERLRUN) "-MExtUtils::Command::MM" "-MTest::Harness" "-e" "undef *Test::Harness::Switches; test_harness($(TEST_VERBOSE), '$(INST_LIB)', '$(INST_ARCHLIB)')" $(TEST_FILES)

testdb_static :: static pure_all
	PERL_DL_NONLAZY=1 $(FULLPERLRUN) $(TESTDB_SW) "-I$(INST_LIB)" "-I$(INST_ARCHLIB)" $(TEST_FILE)



# --- MakeMaker ppd section:
# Creates a PPD (Perl Package Description) for a binary distribution.
ppd :
	$(NOECHO) $(ECHO) '<SOFTPKG NAME="Test2-Suite" VERSION="0.000145">' > Test2-Suite.ppd
	$(NOECHO) $(ECHO) '    <ABSTRACT>Distribution with a rich set of tools built upon the Test2 framework.</ABSTRACT>' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '    <AUTHOR>Chad Granum &lt;exodist@cpan.org&gt;</AUTHOR>' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '    <IMPLEMENTATION>' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <PERLCORE VERSION="5,008001,0,0" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="B::" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Carp::" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Data::Dumper" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Exporter::" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Importer::" VERSION="0.024" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Module::Pluggable" VERSION="2.7" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Scalar::Util" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Scope::Guard" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Sub::Info" VERSION="0.002" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Term::Table" VERSION="0.013" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Test2::API" VERSION="1.302176" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Time::HiRes" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="overload::" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="utf8::" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <ARCHITECTURE NAME="x86_64-linux-gnu-thread-multi-5.30" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '        <CODEBASE HREF="" />' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '    </IMPLEMENTATION>' >> Test2-Suite.ppd
	$(NOECHO) $(ECHO) '</SOFTPKG>' >> Test2-Suite.ppd


# --- MakeMaker pm_to_blib section:

pm_to_blib : $(FIRST_MAKEFILE) $(TO_INST_PM)
	$(NOECHO) $(ABSPERLRUN) -MExtUtils::Install -e 'pm_to_blib({@ARGV}, '\''$(INST_LIB)/auto'\'', q[$(PM_FILTER)], '\''$(PERM_DIR)'\'')' -- \
	  'lib/Test2/AsyncSubtest.pm' 'blib/lib/Test2/AsyncSubtest.pm' \
	  'lib/Test2/AsyncSubtest/Event/Attach.pm' 'blib/lib/Test2/AsyncSubtest/Event/Attach.pm' \
	  'lib/Test2/AsyncSubtest/Event/Detach.pm' 'blib/lib/Test2/AsyncSubtest/Event/Detach.pm' \
	  'lib/Test2/AsyncSubtest/Formatter.pm' 'blib/lib/Test2/AsyncSubtest/Formatter.pm' \
	  'lib/Test2/AsyncSubtest/Hub.pm' 'blib/lib/Test2/AsyncSubtest/Hub.pm' \
	  'lib/Test2/Bundle.pm' 'blib/lib/Test2/Bundle.pm' \
	  'lib/Test2/Bundle/Extended.pm' 'blib/lib/Test2/Bundle/Extended.pm' \
	  'lib/Test2/Bundle/More.pm' 'blib/lib/Test2/Bundle/More.pm' \
	  'lib/Test2/Bundle/Simple.pm' 'blib/lib/Test2/Bundle/Simple.pm' \
	  'lib/Test2/Compare.pm' 'blib/lib/Test2/Compare.pm' \
	  'lib/Test2/Compare/Array.pm' 'blib/lib/Test2/Compare/Array.pm' \
	  'lib/Test2/Compare/Bag.pm' 'blib/lib/Test2/Compare/Bag.pm' \
	  'lib/Test2/Compare/Base.pm' 'blib/lib/Test2/Compare/Base.pm' \
	  'lib/Test2/Compare/Bool.pm' 'blib/lib/Test2/Compare/Bool.pm' \
	  'lib/Test2/Compare/Custom.pm' 'blib/lib/Test2/Compare/Custom.pm' \
	  'lib/Test2/Compare/DeepRef.pm' 'blib/lib/Test2/Compare/DeepRef.pm' \
	  'lib/Test2/Compare/Delta.pm' 'blib/lib/Test2/Compare/Delta.pm' \
	  'lib/Test2/Compare/Event.pm' 'blib/lib/Test2/Compare/Event.pm' \
	  'lib/Test2/Compare/EventMeta.pm' 'blib/lib/Test2/Compare/EventMeta.pm' \
	  'lib/Test2/Compare/Float.pm' 'blib/lib/Test2/Compare/Float.pm' \
	  'lib/Test2/Compare/Hash.pm' 'blib/lib/Test2/Compare/Hash.pm' \
	  'lib/Test2/Compare/Isa.pm' 'blib/lib/Test2/Compare/Isa.pm' \
	  'lib/Test2/Compare/Meta.pm' 'blib/lib/Test2/Compare/Meta.pm' \
	  'lib/Test2/Compare/Negatable.pm' 'blib/lib/Test2/Compare/Negatable.pm' \
	  'lib/Test2/Compare/Number.pm' 'blib/lib/Test2/Compare/Number.pm' \
	  'lib/Test2/Compare/Object.pm' 'blib/lib/Test2/Compare/Object.pm' \
	  'lib/Test2/Compare/OrderedSubset.pm' 'blib/lib/Test2/Compare/OrderedSubset.pm' \
	  'lib/Test2/Compare/Pattern.pm' 'blib/lib/Test2/Compare/Pattern.pm' \
	  'lib/Test2/Compare/Ref.pm' 'blib/lib/Test2/Compare/Ref.pm' \
	  'lib/Test2/Compare/Regex.pm' 'blib/lib/Test2/Compare/Regex.pm' \
	  'lib/Test2/Compare/Scalar.pm' 'blib/lib/Test2/Compare/Scalar.pm' \
	  'lib/Test2/Compare/Set.pm' 'blib/lib/Test2/Compare/Set.pm' \
	  'lib/Test2/Compare/String.pm' 'blib/lib/Test2/Compare/String.pm' \
	  'lib/Test2/Compare/Undef.pm' 'blib/lib/Test2/Compare/Undef.pm' \
	  'lib/Test2/Compare/Wildcard.pm' 'blib/lib/Test2/Compare/Wildcard.pm' \
	  'lib/Test2/Manual.pm' 'blib/lib/Test2/Manual.pm' \
	  'lib/Test2/Manual/Anatomy.pm' 'blib/lib/Test2/Manual/Anatomy.pm' \
	  'lib/Test2/Manual/Anatomy/API.pm' 'blib/lib/Test2/Manual/Anatomy/API.pm' \
	  'lib/Test2/Manual/Anatomy/Context.pm' 'blib/lib/Test2/Manual/Anatomy/Context.pm' 
	$(NOECHO) $(ABSPERLRUN) -MExtUtils::Install -e 'pm_to_blib({@ARGV}, '\''$(INST_LIB)/auto'\'', q[$(PM_FILTER)], '\''$(PERM_DIR)'\'')' -- \
	  'lib/Test2/Manual/Anatomy/EndToEnd.pm' 'blib/lib/Test2/Manual/Anatomy/EndToEnd.pm' \
	  'lib/Test2/Manual/Anatomy/Event.pm' 'blib/lib/Test2/Manual/Anatomy/Event.pm' \
	  'lib/Test2/Manual/Anatomy/Hubs.pm' 'blib/lib/Test2/Manual/Anatomy/Hubs.pm' \
	  'lib/Test2/Manual/Anatomy/IPC.pm' 'blib/lib/Test2/Manual/Anatomy/IPC.pm' \
	  'lib/Test2/Manual/Anatomy/Utilities.pm' 'blib/lib/Test2/Manual/Anatomy/Utilities.pm' \
	  'lib/Test2/Manual/Concurrency.pm' 'blib/lib/Test2/Manual/Concurrency.pm' \
	  'lib/Test2/Manual/Contributing.pm' 'blib/lib/Test2/Manual/Contributing.pm' \
	  'lib/Test2/Manual/Testing.pm' 'blib/lib/Test2/Manual/Testing.pm' \
	  'lib/Test2/Manual/Testing/Introduction.pm' 'blib/lib/Test2/Manual/Testing/Introduction.pm' \
	  'lib/Test2/Manual/Testing/Migrating.pm' 'blib/lib/Test2/Manual/Testing/Migrating.pm' \
	  'lib/Test2/Manual/Testing/Planning.pm' 'blib/lib/Test2/Manual/Testing/Planning.pm' \
	  'lib/Test2/Manual/Testing/Todo.pm' 'blib/lib/Test2/Manual/Testing/Todo.pm' \
	  'lib/Test2/Manual/Tooling.pm' 'blib/lib/Test2/Manual/Tooling.pm' \
	  'lib/Test2/Manual/Tooling/FirstTool.pm' 'blib/lib/Test2/Manual/Tooling/FirstTool.pm' \
	  'lib/Test2/Manual/Tooling/Formatter.pm' 'blib/lib/Test2/Manual/Tooling/Formatter.pm' \
	  'lib/Test2/Manual/Tooling/Nesting.pm' 'blib/lib/Test2/Manual/Tooling/Nesting.pm' \
	  'lib/Test2/Manual/Tooling/Plugin/TestExit.pm' 'blib/lib/Test2/Manual/Tooling/Plugin/TestExit.pm' \
	  'lib/Test2/Manual/Tooling/Plugin/TestingDone.pm' 'blib/lib/Test2/Manual/Tooling/Plugin/TestingDone.pm' \
	  'lib/Test2/Manual/Tooling/Plugin/ToolCompletes.pm' 'blib/lib/Test2/Manual/Tooling/Plugin/ToolCompletes.pm' \
	  'lib/Test2/Manual/Tooling/Plugin/ToolStarts.pm' 'blib/lib/Test2/Manual/Tooling/Plugin/ToolStarts.pm' \
	  'lib/Test2/Manual/Tooling/Subtest.pm' 'blib/lib/Test2/Manual/Tooling/Subtest.pm' \
	  'lib/Test2/Manual/Tooling/TestBuilder.pm' 'blib/lib/Test2/Manual/Tooling/TestBuilder.pm' \
	  'lib/Test2/Manual/Tooling/Testing.pm' 'blib/lib/Test2/Manual/Tooling/Testing.pm' \
	  'lib/Test2/Mock.pm' 'blib/lib/Test2/Mock.pm' \
	  'lib/Test2/Plugin.pm' 'blib/lib/Test2/Plugin.pm' \
	  'lib/Test2/Plugin/BailOnFail.pm' 'blib/lib/Test2/Plugin/BailOnFail.pm' \
	  'lib/Test2/Plugin/DieOnFail.pm' 'blib/lib/Test2/Plugin/DieOnFail.pm' \
	  'lib/Test2/Plugin/ExitSummary.pm' 'blib/lib/Test2/Plugin/ExitSummary.pm' \
	  'lib/Test2/Plugin/SRand.pm' 'blib/lib/Test2/Plugin/SRand.pm' \
	  'lib/Test2/Plugin/Times.pm' 'blib/lib/Test2/Plugin/Times.pm' \
	  'lib/Test2/Plugin/UTF8.pm' 'blib/lib/Test2/Plugin/UTF8.pm' \
	  'lib/Test2/Require.pm' 'blib/lib/Test2/Require.pm' \
	  'lib/Test2/Require/AuthorTesting.pm' 'blib/lib/Test2/Require/AuthorTesting.pm' \
	  'lib/Test2/Require/EnvVar.pm' 'blib/lib/Test2/Require/EnvVar.pm' 
	$(NOECHO) $(ABSPERLRUN) -MExtUtils::Install -e 'pm_to_blib({@ARGV}, '\''$(INST_LIB)/auto'\'', q[$(PM_FILTER)], '\''$(PERM_DIR)'\'')' -- \
	  'lib/Test2/Require/Fork.pm' 'blib/lib/Test2/Require/Fork.pm' \
	  'lib/Test2/Require/Module.pm' 'blib/lib/Test2/Require/Module.pm' \
	  'lib/Test2/Require/Perl.pm' 'blib/lib/Test2/Require/Perl.pm' \
	  'lib/Test2/Require/RealFork.pm' 'blib/lib/Test2/Require/RealFork.pm' \
	  'lib/Test2/Require/Threads.pm' 'blib/lib/Test2/Require/Threads.pm' \
	  'lib/Test2/Suite.pm' 'blib/lib/Test2/Suite.pm' \
	  'lib/Test2/Todo.pm' 'blib/lib/Test2/Todo.pm' \
	  'lib/Test2/Tools.pm' 'blib/lib/Test2/Tools.pm' \
	  'lib/Test2/Tools/AsyncSubtest.pm' 'blib/lib/Test2/Tools/AsyncSubtest.pm' \
	  'lib/Test2/Tools/Basic.pm' 'blib/lib/Test2/Tools/Basic.pm' \
	  'lib/Test2/Tools/Class.pm' 'blib/lib/Test2/Tools/Class.pm' \
	  'lib/Test2/Tools/ClassicCompare.pm' 'blib/lib/Test2/Tools/ClassicCompare.pm' \
	  'lib/Test2/Tools/Compare.pm' 'blib/lib/Test2/Tools/Compare.pm' \
	  'lib/Test2/Tools/Defer.pm' 'blib/lib/Test2/Tools/Defer.pm' \
	  'lib/Test2/Tools/Encoding.pm' 'blib/lib/Test2/Tools/Encoding.pm' \
	  'lib/Test2/Tools/Event.pm' 'blib/lib/Test2/Tools/Event.pm' \
	  'lib/Test2/Tools/Exception.pm' 'blib/lib/Test2/Tools/Exception.pm' \
	  'lib/Test2/Tools/Exports.pm' 'blib/lib/Test2/Tools/Exports.pm' \
	  'lib/Test2/Tools/GenTemp.pm' 'blib/lib/Test2/Tools/GenTemp.pm' \
	  'lib/Test2/Tools/Grab.pm' 'blib/lib/Test2/Tools/Grab.pm' \
	  'lib/Test2/Tools/Mock.pm' 'blib/lib/Test2/Tools/Mock.pm' \
	  'lib/Test2/Tools/Ref.pm' 'blib/lib/Test2/Tools/Ref.pm' \
	  'lib/Test2/Tools/Spec.pm' 'blib/lib/Test2/Tools/Spec.pm' \
	  'lib/Test2/Tools/Subtest.pm' 'blib/lib/Test2/Tools/Subtest.pm' \
	  'lib/Test2/Tools/Target.pm' 'blib/lib/Test2/Tools/Target.pm' \
	  'lib/Test2/Tools/Tester.pm' 'blib/lib/Test2/Tools/Tester.pm' \
	  'lib/Test2/Tools/Warnings.pm' 'blib/lib/Test2/Tools/Warnings.pm' \
	  'lib/Test2/Util/Grabber.pm' 'blib/lib/Test2/Util/Grabber.pm' \
	  'lib/Test2/Util/Ref.pm' 'blib/lib/Test2/Util/Ref.pm' \
	  'lib/Test2/Util/Stash.pm' 'blib/lib/Test2/Util/Stash.pm' \
	  'lib/Test2/Util/Sub.pm' 'blib/lib/Test2/Util/Sub.pm' \
	  'lib/Test2/Util/Table.pm' 'blib/lib/Test2/Util/Table.pm' \
	  'lib/Test2/Util/Table/Cell.pm' 'blib/lib/Test2/Util/Table/Cell.pm' \
	  'lib/Test2/Util/Table/LineBreak.pm' 'blib/lib/Test2/Util/Table/LineBreak.pm' \
	  'lib/Test2/Util/Term.pm' 'blib/lib/Test2/Util/Term.pm' \
	  'lib/Test2/Util/Times.pm' 'blib/lib/Test2/Util/Times.pm' \
	  'lib/Test2/V0.pm' 'blib/lib/Test2/V0.pm' \
	  'lib/Test2/Workflow.pm' 'blib/lib/Test2/Workflow.pm' \
	  'lib/Test2/Workflow/BlockBase.pm' 'blib/lib/Test2/Workflow/BlockBase.pm' \
	  'lib/Test2/Workflow/Build.pm' 'blib/lib/Test2/Workflow/Build.pm' \
	  'lib/Test2/Workflow/Runner.pm' 'blib/lib/Test2/Workflow/Runner.pm' \
	  'lib/Test2/Workflow/Task.pm' 'blib/lib/Test2/Workflow/Task.pm' 
	$(NOECHO) $(ABSPERLRUN) -MExtUtils::Install -e 'pm_to_blib({@ARGV}, '\''$(INST_LIB)/auto'\'', q[$(PM_FILTER)], '\''$(PERM_DIR)'\'')' -- \
	  'lib/Test2/Workflow/Task/Action.pm' 'blib/lib/Test2/Workflow/Task/Action.pm' \
	  'lib/Test2/Workflow/Task/Group.pm' 'blib/lib/Test2/Workflow/Task/Group.pm' 
	$(NOECHO) $(TOUCH) pm_to_blib


# --- MakeMaker selfdocument section:

# here so even if top_targets is overridden, these will still be defined
# gmake will silently still work if any are .PHONY-ed but nmake won't

static ::
	$(NOECHO) $(NOOP)

dynamic ::
	$(NOECHO) $(NOOP)

config ::
	$(NOECHO) $(NOOP)


# --- MakeMaker postamble section:


# End.
