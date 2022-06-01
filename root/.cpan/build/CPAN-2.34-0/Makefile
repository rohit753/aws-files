# This Makefile is for the CPAN extension to perl.
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

#     ABSTRACT_FROM => q[lib/CPAN.pm]
#     AUTHOR => [q[Andreas Koenig <andreas.koenig.gmwojprw@franz.ak.mind.de>]]
#     BUILD_REQUIRES => {  }
#     CONFIGURE_REQUIRES => {  }
#     EXE_FILES => [q[scripts/cpan], q[scripts/cpan-mirrors]]
#     INSTALLDIRS => q[perl]
#     LICENSE => q[perl]
#     META_ADD => { keywords=>[q[CPAN], q[module], q[module installation]], meta-spec=>{ version=>q[2] }, resources=>{ repository=>{ type=>q[git], url=>q[https://github.com/andk/cpanpm] } } }
#     MIN_PERL_VERSION => q[5.006002]
#     NAME => q[CPAN]
#     PREREQ_PM => { Archive::Tar=>q[0], Archive::Zip=>q[0], CPAN::Meta=>q[0], CPAN::Meta::Requirements=>q[2.121], CPAN::Meta::YAML=>q[0], Compress::Zlib=>q[0], Data::Dumper=>q[0], Digest::MD5=>q[0], Digest::SHA=>q[0], Exporter=>q[0], Exporter::Heavy=>q[0], ExtUtils::CBuilder=>q[0], File::Copy=>q[0], File::Spec=>q[0], File::Temp=>q[0], HTTP::Tiny=>q[0], IO::Compress::Base=>q[0], IO::Zlib=>q[0], JSON::PP=>q[0], LWP::UserAgent=>q[0], MIME::Base64=>q[0], Net::FTP=>q[0], Net::Ping=>q[0], Parse::CPAN::Meta=>q[0], Pod::Perldoc=>q[0], Pod::Perldoc::ToMan=>q[0], Scalar::Util=>q[0], Socket=>q[0], Test::Harness=>q[2.62], Test::More=>q[0], Text::ParseWords=>q[0], Text::Wrap=>q[0] }
#     SIGN => q[1]
#     TEST_REQUIRES => {  }
#     VERSION => q[2.34]
#     clean => { FILES=>q[lib/CPAN/Config.pm t/dot-cpan/FTPstats.yml cpan-home t/dot-cpan*] }
#     dist => { COMPRESS=>q[gzip -9], DIST_DEFAULT=>q[verify-no-subdir verify-changes-date verify-changes-version kwalify-distroprefs-straight Makefile no_CR META.yml setversion README testdistros all tardist] }

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
NAME = CPAN
NAME_SYM = CPAN
VERSION = 2.34
VERSION_MACRO = VERSION
VERSION_SYM = 2_34
DEFINE_VERSION = -D$(VERSION_MACRO)=\"$(VERSION)\"
XS_VERSION = 2.34
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
FULLEXT = CPAN
BASEEXT = CPAN
PARENT_NAME = 
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
MAN1PODS = scripts/cpan \
	scripts/cpan-mirrors
MAN3PODS = lib/App/Cpan.pm \
	lib/CPAN.pm \
	lib/CPAN/API/HOWTO.pod \
	lib/CPAN/Admin.pm \
	lib/CPAN/Debug.pm \
	lib/CPAN/Distroprefs.pm \
	lib/CPAN/FirstTime.pm \
	lib/CPAN/HandleConfig.pm \
	lib/CPAN/Kwalify.pm \
	lib/CPAN/Mirrors.pm \
	lib/CPAN/Nox.pm \
	lib/CPAN/Plugin.pm \
	lib/CPAN/Plugin/Specfile.pm \
	lib/CPAN/Queue.pm \
	lib/CPAN/Tarzip.pm \
	lib/CPAN/Version.pm

# Where is the Config information that we are using/depend on
CONFIGDEP = $(PERL_ARCHLIBDEP)$(DFSEP)Config.pm $(PERL_INCDEP)$(DFSEP)config.h

# Where to build things
INST_LIBDIR      = $(INST_LIB)
INST_ARCHLIBDIR  = $(INST_ARCHLIB)

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


TO_INST_PM = lib/App/Cpan.pm \
	lib/CPAN.pm \
	lib/CPAN/API/HOWTO.pod \
	lib/CPAN/Admin.pm \
	lib/CPAN/Author.pm \
	lib/CPAN/Bundle.pm \
	lib/CPAN/CacheMgr.pm \
	lib/CPAN/Complete.pm \
	lib/CPAN/Debug.pm \
	lib/CPAN/DeferredCode.pm \
	lib/CPAN/Distribution.pm \
	lib/CPAN/Distroprefs.pm \
	lib/CPAN/Distrostatus.pm \
	lib/CPAN/Exception/RecursiveDependency.pm \
	lib/CPAN/Exception/blocked_urllist.pm \
	lib/CPAN/Exception/yaml_not_installed.pm \
	lib/CPAN/Exception/yaml_process_error.pm \
	lib/CPAN/FTP.pm \
	lib/CPAN/FTP/netrc.pm \
	lib/CPAN/FirstTime.pm \
	lib/CPAN/HTTP/Client.pm \
	lib/CPAN/HTTP/Credentials.pm \
	lib/CPAN/HandleConfig.pm \
	lib/CPAN/Index.pm \
	lib/CPAN/InfoObj.pm \
	lib/CPAN/Kwalify.pm \
	lib/CPAN/Kwalify/distroprefs.dd \
	lib/CPAN/Kwalify/distroprefs.yml \
	lib/CPAN/LWP/UserAgent.pm \
	lib/CPAN/Mirrors.pm \
	lib/CPAN/Module.pm \
	lib/CPAN/Nox.pm \
	lib/CPAN/Plugin.pm \
	lib/CPAN/Plugin/Specfile.pm \
	lib/CPAN/Prompt.pm \
	lib/CPAN/Queue.pm \
	lib/CPAN/Shell.pm \
	lib/CPAN/Tarzip.pm \
	lib/CPAN/URL.pm \
	lib/CPAN/Version.pm


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
COMPRESS = gzip -9
SUFFIX = .gz
SHAR = shar
PREOP = $(NOECHO) $(NOOP)
POSTOP = $(NOECHO) $(NOOP)
TO_UNIX = $(NOECHO) $(NOOP)
CI = ci -u
RCS_LABEL = rcs -Nv$(VERSION_SYM): -q
DIST_CP = best
DIST_DEFAULT = verify-no-subdir verify-changes-date verify-changes-version kwalify-distroprefs-straight Makefile no_CR META.yml setversion README testdistros all tardist
DISTNAME = CPAN
DISTVNAME = CPAN-2.34


# --- MakeMaker macro section:

LC_ALL_noexport=en_GB.utf8

YAML_MODULE=YAML::Syck


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
	lib/App/Cpan.pm \
	lib/CPAN.pm \
	lib/CPAN/API/HOWTO.pod \
	lib/CPAN/Admin.pm \
	lib/CPAN/Debug.pm \
	lib/CPAN/Distroprefs.pm \
	lib/CPAN/FirstTime.pm \
	lib/CPAN/HandleConfig.pm \
	lib/CPAN/Kwalify.pm \
	lib/CPAN/Mirrors.pm \
	lib/CPAN/Nox.pm \
	lib/CPAN/Plugin.pm \
	lib/CPAN/Plugin/Specfile.pm \
	lib/CPAN/Queue.pm \
	lib/CPAN/Tarzip.pm \
	lib/CPAN/Version.pm \
	scripts/cpan \
	scripts/cpan-mirrors
	$(NOECHO) $(POD2MAN) --section=$(MAN1EXT) --perm_rw=$(PERM_RW) -u \
	  scripts/cpan $(INST_MAN1DIR)/cpan.$(MAN1EXT) \
	  scripts/cpan-mirrors $(INST_MAN1DIR)/cpan-mirrors.$(MAN1EXT) 
	$(NOECHO) $(POD2MAN) --section=$(MAN3EXT) --perm_rw=$(PERM_RW) -u \
	  lib/App/Cpan.pm $(INST_MAN3DIR)/App::Cpan.$(MAN3EXT) \
	  lib/CPAN.pm $(INST_MAN3DIR)/CPAN.$(MAN3EXT) \
	  lib/CPAN/API/HOWTO.pod $(INST_MAN3DIR)/CPAN::API::HOWTO.$(MAN3EXT) \
	  lib/CPAN/Admin.pm $(INST_MAN3DIR)/CPAN::Admin.$(MAN3EXT) \
	  lib/CPAN/Debug.pm $(INST_MAN3DIR)/CPAN::Debug.$(MAN3EXT) \
	  lib/CPAN/Distroprefs.pm $(INST_MAN3DIR)/CPAN::Distroprefs.$(MAN3EXT) \
	  lib/CPAN/FirstTime.pm $(INST_MAN3DIR)/CPAN::FirstTime.$(MAN3EXT) \
	  lib/CPAN/HandleConfig.pm $(INST_MAN3DIR)/CPAN::HandleConfig.$(MAN3EXT) \
	  lib/CPAN/Kwalify.pm $(INST_MAN3DIR)/CPAN::Kwalify.$(MAN3EXT) \
	  lib/CPAN/Mirrors.pm $(INST_MAN3DIR)/CPAN::Mirrors.$(MAN3EXT) \
	  lib/CPAN/Nox.pm $(INST_MAN3DIR)/CPAN::Nox.$(MAN3EXT) \
	  lib/CPAN/Plugin.pm $(INST_MAN3DIR)/CPAN::Plugin.$(MAN3EXT) \
	  lib/CPAN/Plugin/Specfile.pm $(INST_MAN3DIR)/CPAN::Plugin::Specfile.$(MAN3EXT) \
	  lib/CPAN/Queue.pm $(INST_MAN3DIR)/CPAN::Queue.$(MAN3EXT) \
	  lib/CPAN/Tarzip.pm $(INST_MAN3DIR)/CPAN::Tarzip.$(MAN3EXT) \
	  lib/CPAN/Version.pm $(INST_MAN3DIR)/CPAN::Version.$(MAN3EXT) 




# --- MakeMaker processPL section:


# --- MakeMaker installbin section:

EXE_FILES = scripts/cpan scripts/cpan-mirrors

pure_all :: $(INST_SCRIPT)/cpan $(INST_SCRIPT)/cpan-mirrors
	$(NOECHO) $(NOOP)

realclean ::
	$(RM_F) \
	  $(INST_SCRIPT)/cpan $(INST_SCRIPT)/cpan-mirrors 

$(INST_SCRIPT)/cpan : scripts/cpan $(FIRST_MAKEFILE) $(INST_SCRIPT)$(DFSEP).exists $(INST_BIN)$(DFSEP).exists
	$(NOECHO) $(RM_F) $(INST_SCRIPT)/cpan
	$(CP) scripts/cpan $(INST_SCRIPT)/cpan
	$(FIXIN) $(INST_SCRIPT)/cpan
	-$(NOECHO) $(CHMOD) $(PERM_RWX) $(INST_SCRIPT)/cpan

$(INST_SCRIPT)/cpan-mirrors : scripts/cpan-mirrors $(FIRST_MAKEFILE) $(INST_SCRIPT)$(DFSEP).exists $(INST_BIN)$(DFSEP).exists
	$(NOECHO) $(RM_F) $(INST_SCRIPT)/cpan-mirrors
	$(CP) scripts/cpan-mirrors $(INST_SCRIPT)/cpan-mirrors
	$(FIXIN) $(INST_SCRIPT)/cpan-mirrors
	-$(NOECHO) $(CHMOD) $(PERM_RWX) $(INST_SCRIPT)/cpan-mirrors



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
	  blib cpan-home \
	  lib/CPAN/Config.pm t/dot-cpan* \
	  t/dot-cpan/FTPstats.yml 
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
	$(NOECHO) $(ECHO) 'abstract: '\''query, download and build perl modules from CPAN sites'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'author:' >> META_new.yml
	$(NOECHO) $(ECHO) '  - '\''Andreas Koenig <andreas.koenig.gmwojprw@franz.ak.mind.de>'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'build_requires:' >> META_new.yml
	$(NOECHO) $(ECHO) '  ExtUtils::MakeMaker: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'configure_requires:' >> META_new.yml
	$(NOECHO) $(ECHO) '  ExtUtils::MakeMaker: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'dynamic_config: 1' >> META_new.yml
	$(NOECHO) $(ECHO) 'generated_by: '\''ExtUtils::MakeMaker version 7.34, CPAN::Meta::Converter version 2.150010'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'keywords:' >> META_new.yml
	$(NOECHO) $(ECHO) '  - CPAN' >> META_new.yml
	$(NOECHO) $(ECHO) '  - module' >> META_new.yml
	$(NOECHO) $(ECHO) '  - '\''module installation'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'license: perl' >> META_new.yml
	$(NOECHO) $(ECHO) 'meta-spec:' >> META_new.yml
	$(NOECHO) $(ECHO) '  url: http://module-build.sourceforge.net/META-spec-v1.4.html' >> META_new.yml
	$(NOECHO) $(ECHO) '  version: '\''1.4'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'name: CPAN' >> META_new.yml
	$(NOECHO) $(ECHO) 'no_index:' >> META_new.yml
	$(NOECHO) $(ECHO) '  directory:' >> META_new.yml
	$(NOECHO) $(ECHO) '    - t' >> META_new.yml
	$(NOECHO) $(ECHO) '    - inc' >> META_new.yml
	$(NOECHO) $(ECHO) 'requires:' >> META_new.yml
	$(NOECHO) $(ECHO) '  Archive::Tar: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Archive::Zip: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  CPAN::Meta: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  CPAN::Meta::Requirements: '\''2.121'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  CPAN::Meta::YAML: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Compress::Zlib: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Data::Dumper: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Digest::MD5: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Digest::SHA: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Exporter: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Exporter::Heavy: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  ExtUtils::CBuilder: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  File::Copy: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  File::Spec: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  File::Temp: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  HTTP::Tiny: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  IO::Compress::Base: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  IO::Zlib: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  JSON::PP: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  LWP::UserAgent: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  MIME::Base64: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Net::FTP: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Net::Ping: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Parse::CPAN::Meta: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Pod::Perldoc: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Pod::Perldoc::ToMan: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Scalar::Util: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Socket: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Test::Harness: '\''2.62'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Test::More: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Text::ParseWords: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  Text::Wrap: '\''0'\''' >> META_new.yml
	$(NOECHO) $(ECHO) '  perl: '\''5.006002'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'resources:' >> META_new.yml
	$(NOECHO) $(ECHO) '  repository: https://github.com/andk/cpanpm' >> META_new.yml
	$(NOECHO) $(ECHO) 'version: '\''2.34'\''' >> META_new.yml
	$(NOECHO) $(ECHO) 'x_serialization_backend: '\''CPAN::Meta::YAML version 0.018'\''' >> META_new.yml
	-$(NOECHO) $(MV) META_new.yml $(DISTVNAME)/META.yml
	$(NOECHO) $(ECHO) Generating META.json
	$(NOECHO) $(ECHO) '{' > META_new.json
	$(NOECHO) $(ECHO) '   "abstract" : "query, download and build perl modules from CPAN sites",' >> META_new.json
	$(NOECHO) $(ECHO) '   "author" : [' >> META_new.json
	$(NOECHO) $(ECHO) '      "Andreas Koenig <andreas.koenig.gmwojprw@franz.ak.mind.de>"' >> META_new.json
	$(NOECHO) $(ECHO) '   ],' >> META_new.json
	$(NOECHO) $(ECHO) '   "dynamic_config" : 1,' >> META_new.json
	$(NOECHO) $(ECHO) '   "generated_by" : "ExtUtils::MakeMaker version 7.34, CPAN::Meta::Converter version 2.150010",' >> META_new.json
	$(NOECHO) $(ECHO) '   "keywords" : [' >> META_new.json
	$(NOECHO) $(ECHO) '      "CPAN",' >> META_new.json
	$(NOECHO) $(ECHO) '      "module",' >> META_new.json
	$(NOECHO) $(ECHO) '      "module installation"' >> META_new.json
	$(NOECHO) $(ECHO) '   ],' >> META_new.json
	$(NOECHO) $(ECHO) '   "license" : [' >> META_new.json
	$(NOECHO) $(ECHO) '      "perl_5"' >> META_new.json
	$(NOECHO) $(ECHO) '   ],' >> META_new.json
	$(NOECHO) $(ECHO) '   "meta-spec" : {' >> META_new.json
	$(NOECHO) $(ECHO) '      "url" : "http://search.cpan.org/perldoc?CPAN::Meta::Spec",' >> META_new.json
	$(NOECHO) $(ECHO) '      "version" : 2' >> META_new.json
	$(NOECHO) $(ECHO) '   },' >> META_new.json
	$(NOECHO) $(ECHO) '   "name" : "CPAN",' >> META_new.json
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
	$(NOECHO) $(ECHO) '            "Archive::Tar" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Archive::Zip" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "CPAN::Meta" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "CPAN::Meta::Requirements" : "2.121",' >> META_new.json
	$(NOECHO) $(ECHO) '            "CPAN::Meta::YAML" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Compress::Zlib" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Data::Dumper" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Digest::MD5" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Digest::SHA" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Exporter" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Exporter::Heavy" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "ExtUtils::CBuilder" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "File::Copy" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "File::Spec" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "File::Temp" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "HTTP::Tiny" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "IO::Compress::Base" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "IO::Zlib" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "JSON::PP" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "LWP::UserAgent" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "MIME::Base64" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Net::FTP" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Net::Ping" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Parse::CPAN::Meta" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Pod::Perldoc" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Pod::Perldoc::ToMan" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Scalar::Util" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Socket" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Test::Harness" : "2.62",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Test::More" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Text::ParseWords" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "Text::Wrap" : "0",' >> META_new.json
	$(NOECHO) $(ECHO) '            "perl" : "5.006002"' >> META_new.json
	$(NOECHO) $(ECHO) '         }' >> META_new.json
	$(NOECHO) $(ECHO) '      }' >> META_new.json
	$(NOECHO) $(ECHO) '   },' >> META_new.json
	$(NOECHO) $(ECHO) '   "release_status" : "stable",' >> META_new.json
	$(NOECHO) $(ECHO) '   "resources" : {' >> META_new.json
	$(NOECHO) $(ECHO) '      "repository" : {' >> META_new.json
	$(NOECHO) $(ECHO) '         "type" : "git",' >> META_new.json
	$(NOECHO) $(ECHO) '         "url" : "https://github.com/andk/cpanpm"' >> META_new.json
	$(NOECHO) $(ECHO) '      }' >> META_new.json
	$(NOECHO) $(ECHO) '   },' >> META_new.json
	$(NOECHO) $(ECHO) '   "version" : "2.34",' >> META_new.json
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
create_distdir ::
	$(RM_RF) $(DISTVNAME)
	$(PERLRUN) "-MExtUtils::Manifest=manicopy,maniread" \
		-e "manicopy(maniread(),'$(DISTVNAME)', '$(DIST_CP)');"

distdir :: create_distdir distmeta distsignature
	$(NOECHO) $(NOOP)



# --- MakeMaker dist_test section:

# if we depend on $(DISTVNAME).tar$(SUFFIX), then the rest of the
# Makefile breaks our intent to NOT remake dist
disttest :
	rm -rf $(DISTVNAME)
	tar xvzf $(DISTVNAME).tar$(SUFFIX)
	cd $(DISTVNAME) && $(ABSPERLRUN) Makefile.PL
	cd $(DISTVNAME) && $(MAKE) $(PASTHRU)
	cd $(DISTVNAME) && $(MAKE) test $(PASTHRU)

distdir ::
	touch $(DISTVNAME)/SIGNATURE && $(CP) $(DISTVNAME)/SIGNATURE ./SIGNATURE
	$(CP) $(DISTVNAME)/META.yml  ./META.yml
	-$(CP) $(DISTVNAME)/META.json  ./META.json
	$(CP) $(DISTVNAME)/MANIFEST  ./MANIFEST



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
	cd $(DISTVNAME) && `dirname $(PERL)`/cpansign -s



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
TEST_FILES = t/*.t
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
	$(NOECHO) $(ECHO) '<SOFTPKG NAME="CPAN" VERSION="2.34">' > CPAN.ppd
	$(NOECHO) $(ECHO) '    <ABSTRACT>query, download and build perl modules from CPAN sites</ABSTRACT>' >> CPAN.ppd
	$(NOECHO) $(ECHO) '    <AUTHOR>Andreas Koenig &lt;andreas.koenig.gmwojprw@franz.ak.mind.de&gt;</AUTHOR>' >> CPAN.ppd
	$(NOECHO) $(ECHO) '    <IMPLEMENTATION>' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <PERLCORE VERSION="5,006002,0,0" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Archive::Tar" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Archive::Zip" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="CPAN::Meta" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="CPAN::Meta::Requirements" VERSION="2.121" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="CPAN::Meta::YAML" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Compress::Zlib" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Data::Dumper" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Digest::MD5" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Digest::SHA" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Exporter::" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Exporter::Heavy" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="ExtUtils::CBuilder" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="File::Copy" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="File::Spec" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="File::Temp" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="HTTP::Tiny" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="IO::Compress::Base" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="IO::Zlib" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="JSON::PP" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="LWP::UserAgent" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="MIME::Base64" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Net::FTP" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Net::Ping" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Parse::CPAN::Meta" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Pod::Perldoc" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Pod::Perldoc::ToMan" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Scalar::Util" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Socket::" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Test::Harness" VERSION="2.62" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Test::More" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Text::ParseWords" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <REQUIRE NAME="Text::Wrap" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <ARCHITECTURE NAME="x86_64-linux-gnu-thread-multi-5.30" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '        <CODEBASE HREF="" />' >> CPAN.ppd
	$(NOECHO) $(ECHO) '    </IMPLEMENTATION>' >> CPAN.ppd
	$(NOECHO) $(ECHO) '</SOFTPKG>' >> CPAN.ppd


# --- MakeMaker pm_to_blib section:

pm_to_blib : $(FIRST_MAKEFILE) $(TO_INST_PM)
	$(NOECHO) $(ABSPERLRUN) -MExtUtils::Install -e 'pm_to_blib({@ARGV}, '\''$(INST_LIB)/auto'\'', q[$(PM_FILTER)], '\''$(PERM_DIR)'\'')' -- \
	  'lib/App/Cpan.pm' 'blib/lib/App/Cpan.pm' \
	  'lib/CPAN.pm' 'blib/lib/CPAN.pm' \
	  'lib/CPAN/API/HOWTO.pod' 'blib/lib/CPAN/API/HOWTO.pod' \
	  'lib/CPAN/Admin.pm' 'blib/lib/CPAN/Admin.pm' \
	  'lib/CPAN/Author.pm' 'blib/lib/CPAN/Author.pm' \
	  'lib/CPAN/Bundle.pm' 'blib/lib/CPAN/Bundle.pm' \
	  'lib/CPAN/CacheMgr.pm' 'blib/lib/CPAN/CacheMgr.pm' \
	  'lib/CPAN/Complete.pm' 'blib/lib/CPAN/Complete.pm' \
	  'lib/CPAN/Debug.pm' 'blib/lib/CPAN/Debug.pm' \
	  'lib/CPAN/DeferredCode.pm' 'blib/lib/CPAN/DeferredCode.pm' \
	  'lib/CPAN/Distribution.pm' 'blib/lib/CPAN/Distribution.pm' \
	  'lib/CPAN/Distroprefs.pm' 'blib/lib/CPAN/Distroprefs.pm' \
	  'lib/CPAN/Distrostatus.pm' 'blib/lib/CPAN/Distrostatus.pm' \
	  'lib/CPAN/Exception/RecursiveDependency.pm' 'blib/lib/CPAN/Exception/RecursiveDependency.pm' \
	  'lib/CPAN/Exception/blocked_urllist.pm' 'blib/lib/CPAN/Exception/blocked_urllist.pm' \
	  'lib/CPAN/Exception/yaml_not_installed.pm' 'blib/lib/CPAN/Exception/yaml_not_installed.pm' \
	  'lib/CPAN/Exception/yaml_process_error.pm' 'blib/lib/CPAN/Exception/yaml_process_error.pm' \
	  'lib/CPAN/FTP.pm' 'blib/lib/CPAN/FTP.pm' \
	  'lib/CPAN/FTP/netrc.pm' 'blib/lib/CPAN/FTP/netrc.pm' \
	  'lib/CPAN/FirstTime.pm' 'blib/lib/CPAN/FirstTime.pm' \
	  'lib/CPAN/HTTP/Client.pm' 'blib/lib/CPAN/HTTP/Client.pm' \
	  'lib/CPAN/HTTP/Credentials.pm' 'blib/lib/CPAN/HTTP/Credentials.pm' \
	  'lib/CPAN/HandleConfig.pm' 'blib/lib/CPAN/HandleConfig.pm' \
	  'lib/CPAN/Index.pm' 'blib/lib/CPAN/Index.pm' \
	  'lib/CPAN/InfoObj.pm' 'blib/lib/CPAN/InfoObj.pm' \
	  'lib/CPAN/Kwalify.pm' 'blib/lib/CPAN/Kwalify.pm' \
	  'lib/CPAN/Kwalify/distroprefs.dd' 'blib/lib/CPAN/Kwalify/distroprefs.dd' \
	  'lib/CPAN/Kwalify/distroprefs.yml' 'blib/lib/CPAN/Kwalify/distroprefs.yml' \
	  'lib/CPAN/LWP/UserAgent.pm' 'blib/lib/CPAN/LWP/UserAgent.pm' \
	  'lib/CPAN/Mirrors.pm' 'blib/lib/CPAN/Mirrors.pm' \
	  'lib/CPAN/Module.pm' 'blib/lib/CPAN/Module.pm' \
	  'lib/CPAN/Nox.pm' 'blib/lib/CPAN/Nox.pm' \
	  'lib/CPAN/Plugin.pm' 'blib/lib/CPAN/Plugin.pm' \
	  'lib/CPAN/Plugin/Specfile.pm' 'blib/lib/CPAN/Plugin/Specfile.pm' \
	  'lib/CPAN/Prompt.pm' 'blib/lib/CPAN/Prompt.pm' \
	  'lib/CPAN/Queue.pm' 'blib/lib/CPAN/Queue.pm' \
	  'lib/CPAN/Shell.pm' 'blib/lib/CPAN/Shell.pm' \
	  'lib/CPAN/Tarzip.pm' 'blib/lib/CPAN/Tarzip.pm' \
	  'lib/CPAN/URL.pm' 'blib/lib/CPAN/URL.pm' \
	  'lib/CPAN/Version.pm' 'blib/lib/CPAN/Version.pm' 
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

.SUFFIXES: .rnc .rng

.rnc.rng:
	trang -I rnc -O rng $*.rnc $*.rng

update: dd-prefs

# the subdirs on MY OWN BOX are allowed here (only used for make dist!)
OKDIRS=CPAN|DIST|bin|blib|cover_db|\
       distroprefs|eg|inc|lib|logs|patches|perlbug|\
       protocols|related|release-lib|scripts|t|talks|_eumm

FINGERPRINT=2E66557AB97C19C791AF8E20328DA867450F89EC

verify-no-subdir:
	@$(PERL) -e 'my$$s=join",",grep{!/^($(OKDIRS))\z/x&&-d($$_)}glob"*";' \
		-e 'die"unexpected dir:$$s"if$$s'

verify-changes-date:
	@$(PERL) -ne 'BEGIN{my@t=(localtime)[5,4,3];$$t[0]+=1900;$$t[1]++;$$t=sprintf"%04d-%02d-%02d",@t}' \
		-e '$$ok++,exit if /^$$t\s/; END{die "Alert: did not find <$$t> in Changes file" unless $$ok}' Changes

verify-changes-version:
	@$(PERL) -ne '$$ok++,exit if /\b$(VERSION)\b/; END{die "Alert: did not find <$(VERSION)> in Changes file" unless $$ok}' Changes

# requires Slay::Makefile
kwalify-distroprefs-slaymake:
	$(PERL) `dirname $(PERL)`/slaymake validate

ddify-distroprefs:
	-$(PERL) -Ilib -e 'use YAML::Syck;use CPAN::Kwalify;use Kwalify qw(validate);use Data::Dumper;{my $$errors = 0; my $$files = 0; my $$perrors = 0;my $$distroprefs_path = $$INC{"CPAN/Kwalify.pm"};$$distroprefs_path =~ s{\.pm$$}{/distroprefs.yml};my $$schema = LoadFile($$distroprefs_path);for my $$yml (glob("distroprefs/*.yml")) {$$files++;my $$data = eval { LoadFile($$yml) };if (!$$data or $$@) {$$perrors++;warn "Parse error in $$yml: $$@\n";next;}$$errors++ if (!validate($$schema, $$data));my $$ddf=$$yml; $$ddf=~s{\.yml$$}{.dd}; open FH,">",$$ddf or die; print {FH} Data::Dumper->new([$$data])->Sortkeys(1)->Indent(1)->Useqq(1)->Dump}if ($$perrors||$$errors) { die "Found $$perrors parse errors and $$errors validate errors in $$files files" }else { warn "Validation OK ($$files files).\n" }}'

kwalify-distroprefs-straight:
	-$(PERL) -Ilib -le 'use YAML::Syck;use CPAN::Kwalify;use Kwalify qw(validate);use Data::Dumper;{my $$errors = 0; my $$files = 0; my $$perrors = 0;my $$distroprefs_path = $$INC{"CPAN/Kwalify.pm"};$$distroprefs_path =~ s{\.pm$$}{/distroprefs.yml};my $$schema = LoadFile($$distroprefs_path);for my $$yml (glob("distroprefs/*.yml")) {$$files++;my $$data = eval { LoadFile($$yml) };if (!$$data or $$@) {$$perrors++;warn "Parse error in $$yml: $$@\n";next;}$$errors++ if (!validate($$schema, $$data));}if ($$perrors||$$errors) { die "Found $$perrors parse errors and $$errors validate errors in $$files files" }else { warn "Validation OK ($$files files).\n" }}'

setversion:
	$(PERL) Makefile.PL --setversion

README: lib/CPAN.pm Makefile
	-[ -r $@ ] && chmod +w $@
	-$(PERL) -MPod::Text -e 'Pod::Text->new->parse_from_file(\*ARGV)' lib/CPAN.pm > $@

the-release-name :
	$(NOECHO) $(ECHO) 'version ' $(VERSION)
	$(NOECHO) $(ECHO) 'release-name ' $(DISTVNAME).tar$(SUFFIX)

pull-request :
	$(NOECHO) $(ECHO) 'http://www.nntp.perl.org/group/perl.perl5.porters/2016/01/msg233838.html'

# the last test for META.json prevents that the distro goes out without it (old MakeMaker)
release :: disttest
	[ -e META.json ]
	ls -l $(DISTVNAME).tar$(SUFFIX)
	rm -rf $(DISTVNAME)
	$(NOECHO) $(ECHO) '#### Suggested next steps (if all looks good):'
	$(NOECHO) $(ECHO) '#### Consider "make pull-request" for perl5-porters'
	$(NOECHO) $(ECHO) make reversion AGAINST_TAG=__previous_release__
	$(NOECHO) $(ECHO) git tag -m '"This is $(VERSION)"' '"$(VERSION)"'
	$(NOECHO) $(ECHO) '  git push --tags origin master'

reversion:
	$(NOECHO) $(ECHO) AGAINST_TAG=$(AGAINST_TAG)
	$(PERL) dagolden-reversion-gist.pl $(AGAINST_TAG)

snapshot : Makefile no_CR META.yml README testdistros all tardist

# 16=Distribution; 32=Bundle; 32768=Queue
depefails:
	$(PERL) -Ilib -MCPAN -e 'CPAN::HandleConfig->load;$$CPAN::DEBUG|=16;$$CPAN::DEBUG|=32;$$CPAN::DEBUG|=32768;install(qw(CPAN::Test::Dummy::Perl5::Build::DepeFails));'

logs/.exists :
	mkdir -p logs
	touch $@

run :
	$(PERL) -Ilib -MCPAN -eshell

run_testenv_db :
	$(PERL) -Ilib -It -MCPAN::MyConfig -MCPAN -deshell

record-session :
	$(PERL) -Ilib -MCPAN -e '$$CPAN::Suppress_readline=$$CPAN::Echo_readline=1;shell' | tee ttt.out

run-with-sqlite :
	$(PERL) -I$$HOME/.cpan -Ilib -MCPAN::SQLite -MCPAN::MyConfig -MCPAN -e '$$CPAN::Config->{use_sqlite}++; $$CPAN::Config->{sqlite_dbname}="cpandb-sqlite"; shell'

testrun_very_offline : rm_mirrored_by run_emu_offline

testrun_emu_offline :
	$(PERL) -I$$HOME/.cpan -Ilib -MCPAN::MyConfig -MCPAN -e '@CPAN::Defaultsites = qw(file:///dev/null); $$CPAN::Config->{urllist} = []; shell'

rm_mirrored_by :
	rm -f $$HOME/.cpan/sources/MIRRORED.BY*

testrun_http_only :
	$(PERL) -I$$HOME/.cpan -Ilib -MCPAN::MyConfig -MCPAN -e '$$CPAN::Config->{urllist} = [qw(http://www.planet-elektronik.de/CPAN/)]; shell'

urllist :
	$(PERL) -Ilib -MCPAN -MCPAN::FirstTime -e 'CPAN::FirstTime::init("$$ENV{HOME}/.cpan/CPAN/MyConfig", args => [qw(urllist)])'

runadmin :
	$(PERL) -Ilib -MCPAN::Admin -eshell

rundb :
	$(PERL) -Ilib -MCPAN -deshell

sign:
	cpansign -s

show-batch-signing-keys:
	for f in PAUSE*.pub; do echo "++++$$f++++"; gpg --verbose --with-colons $$f; done

show-imported:
	gpg --list-sigs --with-colons $$FINGERPRINT

# seems to need at least gnupg 1.4.2:
upload-batch-signing-key:
	gpg --send-key $$FINGERPRINT

download-batch-signing-key:
	gpg --keyserver hkp://pgpkeys.eu --recv-key $$FINGERPRINT

export-armor-batch-signing-key:
	gpg --export --armor $$FINGERPRINT

howto-release:
	@$(ECHO) make ci dist \&\& make release

META.yml: metafile
	$(CP) $(DISTVNAME)/META.yml  ./META.yml
	-$(CP) $(DISTVNAME)/META.json  ./META.json

install-devel-cover-unless-uptodate:
	$(PERL) -Ilib -MCPAN -e 'CPAN::Shell->install("/home/src/perl/devel-cover/SVN/.") unless CPAN::Shell->expand("Module","Devel::Cover")->uptodate'

install-devel-cover-unconditionally:
	$(PERL) -Ilib -MCPAN -e 'CPAN::Shell->install("/home/src/perl/devel-cover/SVN/.")'

testcover: testdistros install-devel-cover-unless-uptodate
	:>SIGNATURE
	$(PERL) -MDevel::Cover -e 0
	`dirname $(PERL)`/cover -delete
	HARNESS_PERL_SWITCHES=-MDevel::Cover $(MAKE) test
	`dirname $(PERL)`/cover

man:
	$(PERL)doc -F lib/CPAN.pm

TESTDISTROS = \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-1.03.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-DepeFails-1.02.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-Fails-1.03.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-BuildOrMake-1.02.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-1.05.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeOne-1.00.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeTwo-1.00.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeThree-1.00.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-ConfReq-1.00.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Expect-1.00.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Failearly-1.02.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Features-1.06.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-TimeSkew-1.00.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-UnsatPrereq-1.00.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircularPrereq-1.00.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-OptionalPrereq-1.00.tar.gz \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Zip-1.03.zip

NOTINCHECKSUMS = \
	t/CPAN/authors/id/A/AN/ANDK/NotInChecksums-0.000.tar.gz

testdistros: $(TESTDISTROS) $(NOTINCHECKSUMS)

touchtestdistros: $(NOTINCHECKSUMS)
	touch $(TESTDISTROS)


# sorry, unix centric (and only makes sense on a working copy of the
# repository; else 'make test TEST_FILES=t/30shell.t TEST_VERBOSE=1'
# will do)
testshell-with-protocol: testdistros
	$(PERL) -e 'for ("protocols"){-d $$_ or mkdir $$_, 0755}'
	$(MAKE) test TEST_FILES=t/30shell.t TEST_VERBOSE=1 PERL='$(PERL)' | \
		tee protocols/make-test-`date +%Y%m%dT%H%M%S`
	ls -lt protocols | head

testshell-with-protocol-without-expect: testdistros
	$(PERL) -e 'for ("protocols"){-d $$_ or mkdir $$_, 0755}'
	CPAN_RUN_SHELL_TEST_WITHOUT_EXPECT=1 $(MAKE) test \
		TEST_FILES=t/30shell.t TEST_VERBOSE=1 | \
		tee protocols/make-test-`date +%Y%m%dT%H%M%S`
	ls -lt protocols | head

testshell-with-protocol-twice: testdistros
	$(PERL) -e 'for ("protocols"){-d $$_ or mkdir $$_, 0755}'
	$(PERL) -p -i~ -e 's/colorize_output\D+\d/colorize_output=>0/' t/CPAN/TestConfig.pm
	$(MAKE) test TEST_FILES=t/30shell.t TEST_VERBOSE=1 | \
		tee protocols/make-test-`date +%Y%m%dT%H%M%S`
	$(PERL) -p -i~ -e 's/colorize_output\D+\d/colorize_output=>1/' t/CPAN/TestConfig.pm
	$(MAKE) test TEST_FILES=t/30shell.t TEST_VERBOSE=1 | \
		tee protocols/make-test-`date +%Y%m%dT%H%M%S`
	$(PERL) -p -i~ -e 's/colorize_output\D+\d/colorize_output=>0/' t/CPAN/TestConfig.pm
	ls -ltr protocols | tail

#
# testdistros
#

# TimeSkew has Makefile.PL missing here because it gets the timestamp
# of the Makefile.PL set to the future which confuses make
t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-TimeSkew-1.00.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-TimeSkew/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-TimeSkew/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-TimeSkew/README \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-TimeSkew/lib/CPAN/Test/Dummy/Perl5/Make/TimeSkew.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-TimeSkew/t/00_load.t
	-cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-TimeSkew && \
		$(PERL) -e 'utime((time-12)x2), "Makefile.PL"' && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-TimeSkew-1.00.tar.gz .. && \
		$(MAKE) tamper-timestamps-now && \
		$(MAKE) clean
	ls -l $@


t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-1.03.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build/Build.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build/lib/CPAN/Test/Dummy/Perl5/Build.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build && \
		$(PERL) Build.PL && \
		./Build dist && \
		mv CPAN-Test-Dummy-Perl5-Build-1.03.tar.gz .. && \
		./Build clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-DepeFails-1.02.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-DepeFails/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-DepeFails/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-DepeFails/README \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-DepeFails/Build.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-DepeFails/lib/CPAN/Test/Dummy/Perl5/Build/DepeFails.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-DepeFails/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-DepeFails && \
		$(PERL) Build.PL && \
		./Build dist && \
		mv CPAN-Test-Dummy-Perl5-Build-DepeFails-1.02.tar.gz .. && \
		./Build clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-Fails-1.03.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-Fails/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-Fails/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-Fails/README \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-Fails/Build.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-Fails/lib/CPAN/Test/Dummy/Perl5/Build/Fails.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-Fails/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Build-Fails && \
		$(PERL) Build.PL && \
		./Build dist && \
		mv CPAN-Test-Dummy-Perl5-Build-Fails-1.03.tar.gz .. && \
		./Build clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-BuildOrMake-1.02.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-BuildOrMake/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-BuildOrMake/Build.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-BuildOrMake/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-BuildOrMake/lib/CPAN/Test/Dummy/Perl5/BuildOrMake.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-BuildOrMake/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-BuildOrMake && \
		$(PERL) Build.PL && \
		./Build dist && \
		mv CPAN-Test-Dummy-Perl5-BuildOrMake-1.02.tar.gz .. && \
		./Build clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-1.05.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make/lib/Bundle/CpanTestDummies.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make/lib/CPAN/Test/Dummy/Perl5/Make.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-1.05.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeOne-1.00.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeOne/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeOne/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeOne/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeOne/lib/CPAN/Test/Dummy/Perl5/Make/CircDepeOne.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeOne/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeOne && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-CircDepeOne-1.00.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeTwo-1.00.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeTwo/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeTwo/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeTwo/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeTwo/lib/CPAN/Test/Dummy/Perl5/Make/CircDepeTwo.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeTwo/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeTwo && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-CircDepeTwo-1.00.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeThree-1.00.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeThree/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeThree/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeThree/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeThree/lib/CPAN/Test/Dummy/Perl5/Make/CircDepeThree.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeThree/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircDepeThree && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-CircDepeThree-1.00.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-ConfReq-1.00.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-ConfReq/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-ConfReq/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-ConfReq/mymeta.yml \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-ConfReq/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-ConfReq/lib/CPAN/Test/Dummy/Perl5/Make/ConfReq.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-ConfReq/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-ConfReq && \
		$(PERL) Makefile.PL open_the_backdoor && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-ConfReq-1.00.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Features-1.06.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Features/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Features/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Features/mymeta.yml \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Features/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Features/lib/CPAN/Test/Dummy/Perl5/Make/Features.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Features/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Features && \
		$(PERL) Makefile.PL open_the_backdoor && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-Features-1.06.tar.gz ../ && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Expect-1.00.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Expect/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Expect/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Expect/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Expect/lib/CPAN/Test/Dummy/Perl5/Make/Expect.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Expect/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Expect && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-Expect-1.00.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Failearly-1.02.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Failearly/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Failearly/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Failearly/lib/CPAN/Test/Dummy/Perl5/Make/Failearly.pm
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Failearly && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-Failearly-1.02.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-UnsatPrereq-1.00.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-UnsatPrereq/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-UnsatPrereq/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-UnsatPrereq/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-UnsatPrereq/README \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-UnsatPrereq/lib/CPAN/Test/Dummy/Perl5/Make/UnsatPrereq.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-UnsatPrereq/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-UnsatPrereq/ && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-UnsatPrereq-1.00.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircularPrereq-1.00.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircularPrereq/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircularPrereq/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircularPrereq/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircularPrereq/README \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircularPrereq/lib/CPAN/Test/Dummy/Perl5/Make/CircularPrereq.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircularPrereq/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-CircularPrereq/ && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-CircularPrereq-1.00.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-OptionalPrereq-1.00.tar.gz: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-OptionalPrereq/Changes \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-OptionalPrereq/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-OptionalPrereq/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-OptionalPrereq/README \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-OptionalPrereq/lib/CPAN/Test/Dummy/Perl5/Make/OptionalPrereq.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-OptionalPrereq/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-OptionalPrereq/ && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-OptionalPrereq-1.00.tar.gz .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Zip-1.03.zip: \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Zip/MANIFEST \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Zip/Makefile.PL \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Zip/lib/CPAN/Test/Dummy/Perl5/Make/Zip.pm \
	t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Zip/t/00_load.t
	cd t/CPAN/authors/id/A/AN/ANDK/CPAN-Test-Dummy-Perl5-Make-Zip && \
		$(PERL) Makefile.PL && \
		$(MAKE) dist && \
		mv CPAN-Test-Dummy-Perl5-Make-Zip-1.03.zip .. && \
		$(MAKE) clean
	ls -l $@

t/CPAN/authors/id/A/AN/ANDK/NotInChecksums-0.000.tar.gz :
	echo " ----No content---- " > t/CPAN/authors/id/A/AN/ANDK/tempfile
	cd t/CPAN/authors/id/A/AN/ANDK && tar cvzf NotInChecksums-0.000.tar.gz tempfile
	$(RM) t/CPAN/authors/id/A/AN/ANDK/tempfile
	ls -l $@

#
#
#

clean ::
	$(RM) t/CPAN/authors/id/A/AN/ANDK/*/Build \
		t/CPAN/authors/id/A/AN/ANDK/*/Makefile.old
	$(RM_RF) t/CPAN/authors/id/A/AN/ANDK/*/_build

no_CR : META.yml
	$(PERL) bin/no_CR.pl MANIFEST

foreign-prefs : dd-prefs st-prefs

dd-prefs ::
	`echo $(PERL) | sed -e 's/perl$$/slaymake/'` dd-prefs

st-prefs ::

chlog ::



# End.
