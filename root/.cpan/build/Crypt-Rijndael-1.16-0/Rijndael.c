/*
 * This file was generated automatically by ExtUtils::ParseXS version 3.40 from the
 * contents of Rijndael.xs. Do not edit this file, edit Rijndael.xs instead.
 *
 *    ANY CHANGES MADE HERE WILL BE LOST!
 *
 */

#line 1 "Rijndael.xs"
/* rijndael - An implementation of the Rijndael cipher.
 * Copyright (C) 2000, 2001 Rafael R. Sevilla <sevillar@team.ph.inter.net>
 *
 * Currently maintained by brian d foy, <bdfoy@cpan.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#define PERL_NO_GET_CONTEXT
#define NEED_newCONSTSUB
#define NEED_sv_2pv_flags
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include "rijndael.h"

typedef struct cryptstate {
  RIJNDAEL_context ctx;
  uint8_t iv[RIJNDAEL_BLOCKSIZE];
} *Crypt__Rijndael;

typedef const char* IVEC;

#line 49 "Rijndael.c"
#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#ifndef dVAR
#  define dVAR		dNOOP
#endif


/* This stuff is not part of the API! You have been warned. */
#ifndef PERL_VERSION_DECIMAL
#  define PERL_VERSION_DECIMAL(r,v,s) (r*1000000 + v*1000 + s)
#endif
#ifndef PERL_DECIMAL_VERSION
#  define PERL_DECIMAL_VERSION \
	  PERL_VERSION_DECIMAL(PERL_REVISION,PERL_VERSION,PERL_SUBVERSION)
#endif
#ifndef PERL_VERSION_GE
#  define PERL_VERSION_GE(r,v,s) \
	  (PERL_DECIMAL_VERSION >= PERL_VERSION_DECIMAL(r,v,s))
#endif
#ifndef PERL_VERSION_LE
#  define PERL_VERSION_LE(r,v,s) \
	  (PERL_DECIMAL_VERSION <= PERL_VERSION_DECIMAL(r,v,s))
#endif

/* XS_INTERNAL is the explicit static-linkage variant of the default
 * XS macro.
 *
 * XS_EXTERNAL is the same as XS_INTERNAL except it does not include
 * "STATIC", ie. it exports XSUB symbols. You probably don't want that
 * for anything but the BOOT XSUB.
 *
 * See XSUB.h in core!
 */


/* TODO: This might be compatible further back than 5.10.0. */
#if PERL_VERSION_GE(5, 10, 0) && PERL_VERSION_LE(5, 15, 1)
#  undef XS_EXTERNAL
#  undef XS_INTERNAL
#  if defined(__CYGWIN__) && defined(USE_DYNAMIC_LOADING)
#    define XS_EXTERNAL(name) __declspec(dllexport) XSPROTO(name)
#    define XS_INTERNAL(name) STATIC XSPROTO(name)
#  endif
#  if defined(__SYMBIAN32__)
#    define XS_EXTERNAL(name) EXPORT_C XSPROTO(name)
#    define XS_INTERNAL(name) EXPORT_C STATIC XSPROTO(name)
#  endif
#  ifndef XS_EXTERNAL
#    if defined(HASATTRIBUTE_UNUSED) && !defined(__cplusplus)
#      define XS_EXTERNAL(name) void name(pTHX_ CV* cv __attribute__unused__)
#      define XS_INTERNAL(name) STATIC void name(pTHX_ CV* cv __attribute__unused__)
#    else
#      ifdef __cplusplus
#        define XS_EXTERNAL(name) extern "C" XSPROTO(name)
#        define XS_INTERNAL(name) static XSPROTO(name)
#      else
#        define XS_EXTERNAL(name) XSPROTO(name)
#        define XS_INTERNAL(name) STATIC XSPROTO(name)
#      endif
#    endif
#  endif
#endif

/* perl >= 5.10.0 && perl <= 5.15.1 */


/* The XS_EXTERNAL macro is used for functions that must not be static
 * like the boot XSUB of a module. If perl didn't have an XS_EXTERNAL
 * macro defined, the best we can do is assume XS is the same.
 * Dito for XS_INTERNAL.
 */
#ifndef XS_EXTERNAL
#  define XS_EXTERNAL(name) XS(name)
#endif
#ifndef XS_INTERNAL
#  define XS_INTERNAL(name) XS(name)
#endif

/* Now, finally, after all this mess, we want an ExtUtils::ParseXS
 * internal macro that we're free to redefine for varying linkage due
 * to the EXPORT_XSUB_SYMBOLS XS keyword. This is internal, use
 * XS_EXTERNAL(name) or XS_INTERNAL(name) in your code if you need to!
 */

#undef XS_EUPXS
#if defined(PERL_EUPXS_ALWAYS_EXPORT)
#  define XS_EUPXS(name) XS_EXTERNAL(name)
#else
   /* default to internal */
#  define XS_EUPXS(name) XS_INTERNAL(name)
#endif

#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)

/* prototype to pass -Wmissing-prototypes */
STATIC void
S_croak_xs_usage(const CV *const cv, const char *const params);

STATIC void
S_croak_xs_usage(const CV *const cv, const char *const params)
{
    const GV *const gv = CvGV(cv);

    PERL_ARGS_ASSERT_CROAK_XS_USAGE;

    if (gv) {
        const char *const gvname = GvNAME(gv);
        const HV *const stash = GvSTASH(gv);
        const char *const hvname = stash ? HvNAME(stash) : NULL;

        if (hvname)
	    Perl_croak_nocontext("Usage: %s::%s(%s)", hvname, gvname, params);
        else
	    Perl_croak_nocontext("Usage: %s(%s)", gvname, params);
    } else {
        /* Pants. I don't think that it should be possible to get here. */
	Perl_croak_nocontext("Usage: CODE(0x%" UVxf ")(%s)", PTR2UV(cv), params);
    }
}
#undef  PERL_ARGS_ASSERT_CROAK_XS_USAGE

#define croak_xs_usage        S_croak_xs_usage

#endif

/* NOTE: the prototype of newXSproto() is different in versions of perls,
 * so we define a portable version of newXSproto()
 */
#ifdef newXS_flags
#define newXSproto_portable(name, c_impl, file, proto) newXS_flags(name, c_impl, file, proto, 0)
#else
#define newXSproto_portable(name, c_impl, file, proto) (PL_Sv=(SV*)newXS(name, c_impl, file), sv_setpv(PL_Sv, proto), (CV*)PL_Sv)
#endif /* !defined(newXS_flags) */

#if PERL_VERSION_LE(5, 21, 5)
#  define newXS_deffile(a,b) Perl_newXS(aTHX_ a,b,file)
#else
#  define newXS_deffile(a,b) Perl_newXS_deffile(aTHX_ a,b)
#endif

#line 193 "Rijndael.c"

XS_EUPXS(XS_Crypt__Rijndael_new); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Crypt__Rijndael_new)
{
    dVAR; dXSARGS;
    if (items < 2 || items > 3)
       croak_xs_usage(cv,  "class, key, mode=MODE_ECB");
    {
	SV *	class = ST(0)
;
	SV *	key = ST(1)
;
	int	mode;
#line 63 "Rijndael.xs"
		STRLEN keysize;
#line 209 "Rijndael.c"
	Crypt__Rijndael	RETVAL;

	if (items < 3)
	    mode = MODE_ECB;
	else {
	    mode = (int)SvIV(ST(2))
;
	}
#line 65 "Rijndael.xs"
		if (!SvPOK(key))
			Perl_croak(aTHX_ "Key must be an string scalar");
		if (SvTAINTED(key))
			Perl_croak(aTHX_ "Key must be untainted");

		keysize = SvCUR(key);

		if (keysize != 16 && keysize != 24 && keysize != 32)
			Perl_croak(aTHX_ "Wrong key length: key must be 128, 192 or 256 bits long");
		if (mode != MODE_ECB && mode != MODE_CBC && mode != MODE_CFB && mode != MODE_OFB && mode != MODE_CTR)
			Perl_croak(aTHX_ "Illegal mode, see documentation for valid modes");

		Newxz(RETVAL, 1, struct cryptstate);
		RETVAL->ctx.mode = mode;
		rijndael_setup(&RETVAL->ctx, keysize, (uint8_t *) SvPVbyte_nolen(key));
#line 234 "Rijndael.c"
	{
	    SV * RETVALSV;
	    RETVALSV = sv_newmortal();
	    sv_setref_pv(RETVALSV, "Crypt::Rijndael", (void*)RETVAL);
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Crypt__Rijndael_set_iv); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Crypt__Rijndael_set_iv)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "self, data");
    {
	Crypt__Rijndael	self;
	IVEC	data;
	SV *	RETVAL;

	if (SvROK(ST(0)) && sv_derived_from(ST(0), "Crypt::Rijndael")) {
	    IV tmp = SvIV((SV*)SvRV(ST(0)));
	    self = INT2PTR(Crypt__Rijndael,tmp);
	}
	else
	    Perl_croak_nocontext("%s: %s is not of type %s",
			"Crypt::Rijndael::set_iv",
			"self", "Crypt::Rijndael")
;

    {
	const char* ret;
	STRLEN size;
	data = (IVEC)SvPVbyte(ST(1), size);
	if (size != RIJNDAEL_BLOCKSIZE)
		Perl_croak(aTHX_ "set_iv: initial value must be the blocksize (%d bytes), but was %d bytes", RIJNDAEL_BLOCKSIZE, size);
	}
;
#line 88 "Rijndael.xs"
		Copy(data, self->iv, RIJNDAEL_BLOCKSIZE, char);
#line 277 "Rijndael.c"
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Crypt__Rijndael_encrypt); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Crypt__Rijndael_encrypt)
{
    dVAR; dXSARGS;
    dXSI32;
    if (items < 2 || items > 3)
       croak_xs_usage(cv,  "self, data, iv = self->iv");
    {
	Crypt__Rijndael	self;
	SV *	data = ST(1)
;
	IVEC	iv;
	SV *	RETVAL;

	if (SvROK(ST(0)) && sv_derived_from(ST(0), "Crypt::Rijndael")) {
	    IV tmp = SvIV((SV*)SvRV(ST(0)));
	    self = INT2PTR(Crypt__Rijndael,tmp);
	}
	else
	    Perl_croak_nocontext("%s: %s is not of type %s",
			GvNAME(CvGV(cv)),
			"self", "Crypt::Rijndael")
;

	if (items < 3)
	    iv = self->iv;
	else {
    {
	    const char* ret;
	    STRLEN size;
	    iv = (IVEC)SvPVbyte(ST(2), size);
	    if (size != RIJNDAEL_BLOCKSIZE)
		    Perl_croak(aTHX_ "set_iv: initial value must be the blocksize (%d bytes), but was %d bytes", RIJNDAEL_BLOCKSIZE, size);
	    }
;
	}
#line 100 "Rijndael.xs"
		{
		SV *res;
		STRLEN size;
		void *rawbytes = SvPVbyte(data,size);

		if (size) {
			uint8_t* buffer;

			if ((self->ctx.mode == MODE_ECB || self->ctx.mode == MODE_CBC) && size % RIJNDAEL_BLOCKSIZE)
				Perl_croak(aTHX_ "encrypt: datasize not multiple of blocksize (%d bytes)", RIJNDAEL_BLOCKSIZE);

			RETVAL = newSV(size);
			SvPOK_only(RETVAL);
			SvCUR_set(RETVAL, size);
			buffer = (uint8_t *)SvPVbyte_nolen(RETVAL);
			(ix ? block_decrypt : block_encrypt)
				(&self->ctx, rawbytes, size, buffer, iv);
			buffer[size] = '\0';
		}
		else
			RETVAL = newSVpv ("", 0);
		}
#line 342 "Rijndael.c"
	RETVAL = sv_2mortal(RETVAL);
	ST(0) = RETVAL;
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Crypt__Rijndael_DESTROY); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Crypt__Rijndael_DESTROY)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "self");
    {
	Crypt__Rijndael	self;

	if (SvROK(ST(0))) {
	    IV tmp = SvIV((SV*)SvRV(ST(0)));
	    self = INT2PTR(Crypt__Rijndael,tmp);
	}
	else
	    Perl_croak_nocontext("%s: %s is not a reference",
			"Crypt::Rijndael::DESTROY",
			"self")
;
#line 130 "Rijndael.xs"
	Safefree(self);
#line 370 "Rijndael.c"
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS_EXTERNAL(boot_Crypt__Rijndael); /* prototype to pass -Wmissing-prototypes */
XS_EXTERNAL(boot_Crypt__Rijndael)
{
#if PERL_VERSION_LE(5, 21, 5)
    dVAR; dXSARGS;
#else
    dVAR; dXSBOOTARGSXSAPIVERCHK;
#endif
#if (PERL_REVISION == 5 && PERL_VERSION < 9)
    char* file = __FILE__;
#else
    const char* file = __FILE__;
#endif

    PERL_UNUSED_VAR(file);

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
#if PERL_VERSION_LE(5, 21, 5)
    XS_VERSION_BOOTCHECK;
#  ifdef XS_APIVERSION_BOOTCHECK
    XS_APIVERSION_BOOTCHECK;
#  endif
#endif

        newXS_deffile("Crypt::Rijndael::new", XS_Crypt__Rijndael_new);
        newXS_deffile("Crypt::Rijndael::set_iv", XS_Crypt__Rijndael_set_iv);
        cv = newXS_deffile("Crypt::Rijndael::decrypt", XS_Crypt__Rijndael_encrypt);
        XSANY.any_i32 = 1;
        cv = newXS_deffile("Crypt::Rijndael::encrypt", XS_Crypt__Rijndael_encrypt);
        XSANY.any_i32 = 0;
        newXS_deffile("Crypt::Rijndael::DESTROY", XS_Crypt__Rijndael_DESTROY);

    /* Initialisation Section */

#line 44 "Rijndael.xs"
{
  HV *stash = gv_stashpvs("Crypt::Rijndael", GV_ADD);

  newCONSTSUB(stash, "keysize",   newSVuv(32)        );
  newCONSTSUB(stash, "blocksize", newSVuv(16)        );
  newCONSTSUB(stash, "MODE_ECB",  newSVuv(MODE_ECB)  );
  newCONSTSUB(stash, "MODE_CBC",  newSVuv(MODE_CBC)  );
  newCONSTSUB(stash, "MODE_CFB",  newSVuv(MODE_CFB)  );
  newCONSTSUB(stash, "MODE_PCBC", newSVuv(MODE_PCBC) );
  newCONSTSUB(stash, "MODE_OFB",  newSVuv(MODE_OFB)  );
  newCONSTSUB(stash, "MODE_CTR",  newSVuv(MODE_CTR)  );
}

#line 427 "Rijndael.c"

    /* End of Initialisation Section */

#if PERL_VERSION_LE(5, 21, 5)
#  if PERL_VERSION_GE(5, 9, 0)
    if (PL_unitcheckav)
        call_list(PL_scopestack_ix, PL_unitcheckav);
#  endif
    XSRETURN_YES;
#else
    Perl_xs_boot_epilog(aTHX_ ax);
#endif
}

