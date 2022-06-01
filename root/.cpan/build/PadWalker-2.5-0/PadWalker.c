/*
 * This file was generated automatically by ExtUtils::ParseXS version 3.40 from the
 * contents of PadWalker.xs. Do not edit this file, edit PadWalker.xs instead.
 *
 *    ANY CHANGES MADE HERE WILL BE LOST!
 *
 */

#line 1 "PadWalker.xs"
#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#ifndef isGV_with_GP
#define isGV_with_GP(x) isGV(x)
#endif

#ifndef CxOLD_OP_TYPE
#  define CxOLD_OP_TYPE(cx)      (0 + (cx)->blk_eval.old_op_type)
#endif

#ifndef CvISXSUB
#define CvISXSUB(sv) CvXSUB(sv)
#endif

#ifndef PadnameUTF8
#  define PadnameUTF8(pn) FALSE
#endif

/* For development testing */
#ifdef PADWALKER_DEBUGGING
# define debug_print(x) printf x
#else
# define debug_print(x)
#endif

/* For debugging */
#ifdef PADWALKER_DEBUGGING
char *
cxtype_name(U32 cx_type)
{
  switch(cx_type & CXTYPEMASK)
  {
    case CXt_NULL:   return "null";
    case CXt_SUB:    return "sub";
    case CXt_EVAL:   return "eval";
    case CXt_LOOP:   return "loop";
    case CXt_SUBST:  return "subst";
    case CXt_BLOCK:  return "block";
    case CXt_FORMAT: return "format";

    default:         debug_print(("Unknown context type 0x%lx\n", cx_type));
                                         return "(unknown)";
  }
}

void
show_cxstack(void)
{
    I32 i;
    for (i = cxstack_ix; i>=0; --i)
    {
        printf(" =%ld= %s (%lx)", (long)i,
            cxtype_name(CxTYPE(&cxstack[i])), cxstack[i].blk_oldcop->cop_seq);
        if (CxTYPE(&cxstack[i]) == CXt_SUB) {
              CV *cv = cxstack[i].blk_sub.cv;
              printf("\t%s", (cv && CvGV(cv)) ? GvNAME(CvGV(cv)) :"(null)");
        }
        printf("\n");
    }
}
#else
# define show_cxstack()
#endif

#ifndef SvOURSTASH
# ifdef OURSTASH
#  define SvOURSTASH OURSTASH
# else
#  define SvOURSTASH GvSTASH
# endif
#endif

#ifndef COP_SEQ_RANGE_LOW
#  define COP_SEQ_RANGE_LOW(sv)                  U_32(SvNVX(sv))
#endif
#ifndef COP_SEQ_RANGE_HIGH
#  define COP_SEQ_RANGE_HIGH(sv)                 U_32(SvUVX(sv))
#endif

#ifndef PadARRAY
typedef AV PADNAMELIST;
typedef SV PADNAME;
# if PERL_VERSION < 8 || (PERL_VERSION == 8 && !PERL_SUBVERSION)
typedef AV PADLIST;
typedef AV PAD;
# endif
# define PadlistARRAY(pl)	((PAD **)AvARRAY(pl))
# define PadlistMAX(pl)		AvFILLp(pl)
# define PadlistNAMES(pl)	(*PadlistARRAY(pl))
# define PadnamelistARRAY(pnl)	((PADNAME **)AvARRAY(pnl))
# define PadnamelistMAX(pnl)	AvFILLp(pnl)
# define PadARRAY		AvARRAY
# define PadnameIsOUR(pn)	!!(SvFLAGS(pn) & SVpad_OUR)
# define PadnameOURSTASH(pn)	SvOURSTASH(pn)
# define PadnameOUTER(pn)	!!SvFAKE(pn)
# define PadnamePV(pn)		(SvPOKp(pn) ? SvPVX(pn) : NULL)
#endif


/* Originally stolen from pp_ctl.c; now significantly different */

I32
dopoptosub_at(pTHX_ PERL_CONTEXT *cxstk, I32 startingblock)
{
    dTHR;
    I32 i;
    PERL_CONTEXT *cx;
    for (i = startingblock; i >= 0; i--) {
        cx = &cxstk[i];
        switch (CxTYPE(cx)) {
        default:
            continue;
        case CXt_SUB:
        /* In Perl 5.005, formats just used CXt_SUB */
#ifdef CXt_FORMAT
       case CXt_FORMAT:
#endif
            debug_print(("**dopoptosub_at: found sub #%ld\n", (long)i));
            return i;
        }
    }
        debug_print(("**dopoptosub_at: not found #%ld\n", (long)i));
    return i;
}

I32
dopoptosub(pTHX_ I32 startingblock)
{
    dTHR;
    return dopoptosub_at(aTHX_ cxstack, startingblock);
}

/* This function is based on the code of pp_caller */
PERL_CONTEXT*
upcontext(pTHX_ I32 count, COP **cop_p, PERL_CONTEXT **ccstack_p,
                                I32 *cxix_from_p, I32 *cxix_to_p)
{
    PERL_SI *top_si = PL_curstackinfo;
    I32 cxix = dopoptosub(aTHX_ cxstack_ix);
    PERL_CONTEXT *ccstack = cxstack;

    if (cxix_from_p) *cxix_from_p = cxstack_ix+1;
    if (cxix_to_p)   *cxix_to_p   = cxix;
    for (;;) {
        /* we may be in a higher stacklevel, so dig down deeper */
        while (cxix < 0 && top_si->si_type != PERLSI_MAIN) {
            top_si  = top_si->si_prev;
            ccstack = top_si->si_cxstack;
            cxix = dopoptosub_at(aTHX_ ccstack, top_si->si_cxix);
                        if (cxix_to_p && cxix_from_p) *cxix_from_p = *cxix_to_p;
                        if (cxix_to_p) *cxix_to_p = cxix;
        }
        if (cxix < 0 && count == 0) {
                    if (ccstack_p) *ccstack_p = ccstack;
            return (PERL_CONTEXT *)0;
                }
        else if (cxix < 0)
            return (PERL_CONTEXT *)-1;
        if (PL_DBsub && cxix >= 0 &&
                ccstack[cxix].blk_sub.cv == GvCV(PL_DBsub))
            count++;
        if (!count--)
            break;

        if (cop_p) *cop_p = ccstack[cxix].blk_oldcop;
        cxix = dopoptosub_at(aTHX_ ccstack, cxix - 1);
                        if (cxix_to_p && cxix_from_p) *cxix_from_p = *cxix_to_p;
                        if (cxix_to_p) *cxix_to_p = cxix;
    }
    if (ccstack_p) *ccstack_p = ccstack;
    return &ccstack[cxix];
}

/* end thievery */

SV*
fetch_from_stash(pTHX_ HV *stash, char *name_str, U32 name_len)
{
    /* This isn't the most efficient approach, but it has
     * the advantage that it uses documented API functions. */
    char *package_name = HvNAME(stash);
    char *qualified_name;
    SV *ret = 0;  /* Initialise to silence spurious compiler warning */
    
    New(0, qualified_name, strlen(package_name) + 2 + name_len, char);
    strcpy(qualified_name, package_name);
    strcat(qualified_name, "::");
    strcat(qualified_name, name_str+1);

    debug_print(("fetch_from_stash: Looking for %c%s\n",
                 name_str[0], qualified_name));
    switch (name_str[0]) {
      case '$': ret =       get_sv(qualified_name, FALSE); break;
      case '@': ret = (SV*) get_av(qualified_name, FALSE); break;
      case '%': ret = (SV*) get_hv(qualified_name, FALSE); break;
      default:  die("PadWalker: variable '%s' of unknown type", name_str);
    }
    if (ret)
      debug_print(("%s\n", sv_peek(ret)));
    else
      /* I don't _think_ this should ever happen */
      debug_print(("XXXX - Variable %c%s not found\n",
                   name_str[0], qualified_name));
    Safefree(qualified_name);
    return ret;
}

void
pads_into_hash(pTHX_ PADNAMELIST* pad_namelist, PAD* pad_vallist, HV* my_hash,
               HV* our_hash, U32 valid_at_seq)
{
    I32 i;

    debug_print(("pads_into_hash(%p, %p, ..)\n",
        (void*)pad_namelist, (void*) pad_vallist));

    for (i=PadnamelistMAX(pad_namelist); i>=0; --i) {
      PADNAME* name_sv = PadnamelistARRAY(pad_namelist)[i];

      if (name_sv) {
        char *name_str = PadnamePV(name_sv);
        if (name_str) {

        debug_print(("** %s (%lx,%lx) [%lx]%s\n", name_str,
               COP_SEQ_RANGE_LOW(name_sv), COP_SEQ_RANGE_HIGH(name_sv), valid_at_seq,
               PadnameOUTER(name_sv) ? " <fake>" : ""));
        
        /* Check that this variable is valid at the cop_seq
         * specified, by peeking into the NV and IV slots
         * of the name sv. (This must be one of those "breathtaking
         * optimisations" mentioned in the Panther book).

         * Anonymous subs are stored here with a name of "&",
         * so also check that the name is longer than one char.
         * (Note that the prefix letter is here as well, so a
         * valid variable will _always_ be >1 char)
         */

        if ((PadnameOUTER(name_sv) || 0 == valid_at_seq ||
            (valid_at_seq <= COP_SEQ_RANGE_HIGH(name_sv) &&
            valid_at_seq > COP_SEQ_RANGE_LOW(name_sv))) &&
            strlen(name_str) > 1 )

          {
            SV *val_sv;
            U32 name_len = strlen(name_str);
            bool is_our = PadnameIsOUR(name_sv);

            debug_print(((is_our ? "**     FOUND OUR %s\n"
                                 : "**     FOUND MY %s\n"), name_str));

            if (   hv_exists(my_hash, name_str, name_len)
                || hv_exists(our_hash, name_str, name_len))
            {
              debug_print(("** key already exists - ignoring!\n"));
            }
            else {
              if (is_our) {
                val_sv = fetch_from_stash(aTHX_ PadnameOURSTASH(name_sv),
                                          name_str, name_len);
                if (!val_sv) {
                    debug_print(("Value of our variable is undefined\n"));
                    val_sv = &PL_sv_undef;
                }
              }
              else
              {
                val_sv =
                  pad_vallist ? PadARRAY(pad_vallist)[i] : &PL_sv_undef;
                if (!val_sv) val_sv = &PL_sv_undef;
              }

              hv_store((is_our ? our_hash : my_hash), name_str, PadnameUTF8(name_sv) ? -name_len : name_len,
                       (val_sv ? newRV_inc(val_sv) : &PL_sv_undef), 0);
            }
          }
        }
      }
    }
}

void
padlist_into_hash(pTHX_ PADLIST* padlist, HV* my_hash, HV* our_hash,
                  U32 valid_at_seq, long depth)
{
    PADNAMELIST *pad_namelist;
    PAD *pad_vallist;
    
    if (depth == 0) depth = 1;

    if (!padlist) {
        /* Probably an XSUB */
        die("PadWalker: cv has no padlist");
    }
    pad_namelist = PadlistNAMES(padlist);
    pad_vallist  = PadlistARRAY(padlist)[depth];

    pads_into_hash(aTHX_ pad_namelist, pad_vallist, my_hash, our_hash, valid_at_seq);
}

void
context_vars(pTHX_ PERL_CONTEXT *cx, HV* my_ret, HV* our_ret, U32 seq, CV *cv)
{
    /* If cx is null, we take that to mean that we should look
     * at the cv instead
     */

    debug_print(("**context_vars(%p, %p, %p, 0x%lx)\n",
                 (void*)cx, (void*)my_ret, (void*)our_ret, (long)seq));
    if (cx == (PERL_CONTEXT*)-1)
        croak("Not nested deeply enough");

    else {
        CV*  cur_cv = cx ? cx->blk_sub.cv           : cv;
        long depth  = cx ? cx->blk_sub.olddepth + 1 : 1;

        if (!cur_cv)
            die("panic: Context has no CV!\n");
    
        while (cur_cv) {
            debug_print(("\tcv name = %s; depth=%ld\n",
                    CvGV(cur_cv) ? GvNAME(CvGV(cur_cv)) :"(null)", depth));
            if (CvPADLIST(cur_cv))
                padlist_into_hash(aTHX_ CvPADLIST(cur_cv), my_ret, our_ret, seq, depth);
            cur_cv = CvOUTSIDE(cur_cv);
            if (cur_cv) depth  = CvDEPTH(cur_cv);
        }
    }
}

void
do_peek(pTHX_ I32 uplevel, HV* my_hash, HV* our_hash)
{
    PERL_CONTEXT *cx, *ccstack;
    COP *cop = 0;
    I32 cxix_from, cxix_to, i;
    bool first_eval = TRUE;

    show_cxstack();
    if (PL_curstackinfo->si_type != PERLSI_MAIN)
          debug_print(("!! We're in a higher stack level\n"));

    cx = upcontext(aTHX_ uplevel, &cop, &ccstack, &cxix_from, &cxix_to);
    debug_print(("** cxix = (%ld,%ld)\n", cxix_from, cxix_to));
    if (cop == 0) {
           debug_print(("**Setting cop to PL_curcop\n"));
           cop = PL_curcop;
        }
    debug_print(("**Cop file = %s\n", CopFILE(cop)));

    context_vars(aTHX_ cx, my_hash, our_hash, cop->cop_seq, PL_main_cv);

    for (i = cxix_from-1; i > cxix_to; --i) {
        debug_print(("** CxTYPE = %s (cxix = %ld)\n",
            cxtype_name(CxTYPE(&ccstack[i])), i));
        switch (CxTYPE(&ccstack[i])) {
        case CXt_EVAL:
            debug_print(("\told_op_type = %ld\n", CxOLD_OP_TYPE(&ccstack[i])));
            switch(CxOLD_OP_TYPE(&ccstack[i])) {
            case OP_ENTEREVAL:
                if (first_eval) {
                   context_vars(aTHX_ 0, my_hash, our_hash, cop->cop_seq, ccstack[i].blk_eval.cv);
                   first_eval = FALSE;
                }
                context_vars(aTHX_ 0, my_hash, our_hash, ccstack[i].blk_oldcop->cop_seq,
                                                ccstack[i].blk_eval.cv);
                break;
            case OP_REQUIRE:
            case OP_DOFILE:
                debug_print(("blk_eval.cv = %p\n", (void*) ccstack[i].blk_eval.cv));
                if (first_eval)
                   context_vars(aTHX_ 0, my_hash, our_hash,
                    cop->cop_seq, ccstack[i].blk_eval.cv);
                return;
                /* If it's OP_ENTERTRY, we skip this altogether. */
            }
            break;

        case CXt_SUB:
#ifdef CXt_FORMAT
        case CXt_FORMAT:
#endif
                Perl_die(aTHX_ "PadWalker: internal error");
                    exit(EXIT_FAILURE);
        }
    }
}

void
get_closed_over(pTHX_ CV *cv, HV *hash, HV *indices)
{
    I32 i;
    U32 val_depth;
    PADNAMELIST *pad_namelist;
    PAD *pad_vallist;

    if (CvISXSUB(cv) || !CvPADLIST(cv)) {
        return;
    }

    val_depth = CvDEPTH(cv) ? CvDEPTH(cv) : 1;
    pad_namelist = PadlistNAMES(CvPADLIST(cv));
    pad_vallist  = PadlistARRAY(CvPADLIST(cv))[val_depth];

    debug_print(("PadlistMAX(CvPADLIST(cv)) = %ld\n",
                  PadlistMAX(CvPADLIST(cv)) ));
    
    for (i=PadnamelistMAX(pad_namelist); i>=0; --i) {
      PADNAME* name_sv = PadnamelistARRAY(pad_namelist)[i];

      if (name_sv && PadnamePV(name_sv)) {
        char* name_str  = PadnamePV(name_sv);
        STRLEN name_len = strlen(name_str);
        
        if (PadnameOUTER(name_sv) && !PadnameIsOUR(name_sv)) {
            SV *val_sv   = PadARRAY(pad_vallist)[i];
            if (!val_sv) val_sv = &PL_sv_undef;
#ifdef PADWALKER_DEBUGGING
            debug_print(("Found a fake slot: %s\n", name_str));
            if (val == 0)
                debug_print(("value is null\n"));
            else
                sv_dump(*val);
#endif
            hv_store(hash, name_str, name_len, newRV_inc(val_sv), 0);
            if (indices) {
              /* Create a temporary SV as a way of getting perl to 
               * stringify 'i' for us. */
              SV *i_sv = newSViv(i);
              hv_store_ent(indices, i_sv, newRV_inc(val_sv), 0);
              SvREFCNT_dec(i_sv);
            }
        }
      }
    }
}

char *
get_var_name(CV *cv, SV *var)
{
    I32 i;
    U32 val_depth = CvDEPTH(cv) ? CvDEPTH(cv) : 1;
    PADNAMELIST *pad_namelist = PadlistNAMES(CvPADLIST(cv));
    PAD *pad_vallist  = PadlistARRAY(CvPADLIST(cv))[val_depth];

    for (i=PadnamelistMAX(pad_namelist); i>=0; --i) {
      PADNAME* name = PadnamelistARRAY(pad_namelist)[i];
      char* name_str;

      if (  name && (name_str = PadnamePV(name))
         && PadARRAY(pad_vallist)[i] == var) {
          return name_str;
      }
    }
    return 0;
}

CV *
up_cv(pTHX_ I32 uplevel, const char * caller_name)
{
    PERL_CONTEXT *cx, *ccstack;
    I32 cxix_from, cxix_to, i;

    if (uplevel < 0)
      croak("%s: sub is < 0", caller_name);

    cx = upcontext(aTHX_ uplevel, 0, &ccstack, &cxix_from, &cxix_to);
    if (cx == (PERL_CONTEXT *)-1) {
      croak("%s: Not nested deeply enough", caller_name);
      return 0;  /* NOT REACHED, but stop picky compilers from whining */
    }
    else if (cx)
      return cx->blk_sub.cv;
      
    else {

      for (i = cxix_from-1; i > cxix_to; --i)
        if (CxTYPE(&ccstack[i]) == CXt_EVAL) {
          I32 old_op_type = CxOLD_OP_TYPE(&ccstack[i]);
          if (old_op_type == OP_REQUIRE || old_op_type == OP_DOFILE)
            return ccstack[i].blk_eval.cv;
        }

      return PL_main_cv;
    }
}

STATIC bool
is_scalar_type(SV *sv) {
    return !(
        SvTYPE(sv) == SVt_PVAV
     || SvTYPE(sv) == SVt_PVHV
     || SvTYPE(sv) == SVt_PVCV
     || isGV_with_GP(sv)
     || SvTYPE(sv) == SVt_PVIO
   );
}

STATIC bool
is_correct_type(SV *orig, SV *restore) {
    return (
        ( SvTYPE(orig) == SvTYPE(restore) )
            ||
        ( is_scalar_type(orig) && is_scalar_type(restore) )
    );
}


#line 522 "PadWalker.c"
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

#line 666 "PadWalker.c"

XS_EUPXS(XS_PadWalker_peek_my); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_PadWalker_peek_my)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "uplevel");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	I32	uplevel = (I32)SvIV(ST(0))
;
#line 519 "PadWalker.xs"
    HV* ret = newHV();
    HV* ignore = newHV();
#line 682 "PadWalker.c"
#line 522 "PadWalker.xs"
    do_peek(aTHX_ uplevel, ret, ignore);
    SvREFCNT_dec((SV*) ignore);
    EXTEND(SP, 1);
    PUSHs(sv_2mortal(newRV_noinc((SV*)ret)));
#line 688 "PadWalker.c"
	PUTBACK;
	return;
    }
}


XS_EUPXS(XS_PadWalker_peek_our); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_PadWalker_peek_our)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "uplevel");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	I32	uplevel = (I32)SvIV(ST(0))
;
#line 531 "PadWalker.xs"
    HV* ret = newHV();
    HV* ignore = newHV();
#line 709 "PadWalker.c"
#line 534 "PadWalker.xs"
    do_peek(aTHX_ uplevel, ignore, ret);
    SvREFCNT_dec((SV*) ignore);
    EXTEND(SP, 1);
    PUSHs(sv_2mortal(newRV_noinc((SV*)ret)));
#line 715 "PadWalker.c"
	PUTBACK;
	return;
    }
}


XS_EUPXS(XS_PadWalker_peek_sub); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_PadWalker_peek_sub)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "cv");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	CV*	cv;
#line 544 "PadWalker.xs"
    HV* ret = newHV();
    HV* ignore = newHV();
#line 735 "PadWalker.c"

	STMT_START {
                HV *st;
                GV *gvp;
		SV * const xsub_tmp_sv = ST(0);
		SvGETMAGIC(xsub_tmp_sv);
                cv = sv_2cv(xsub_tmp_sv, &st, &gvp, 0);
		if (!cv) {
		    Perl_croak_nocontext("%s: %s is not a CODE reference",
				"PadWalker::peek_sub",
				"cv");
		}
	} STMT_END
;
#line 547 "PadWalker.xs"
    if (CvISXSUB(cv))
      die("PadWalker: cv has no padlist");
    padlist_into_hash(aTHX_ CvPADLIST(cv), ret, ignore, 0, CvDEPTH(cv));
    SvREFCNT_dec((SV*) ignore);
    EXTEND(SP, 1);
    PUSHs(sv_2mortal(newRV_noinc((SV*)ret)));
#line 757 "PadWalker.c"
	PUTBACK;
	return;
    }
}


XS_EUPXS(XS_PadWalker_set_closed_over); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_PadWalker_set_closed_over)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "sv, pad");
    {
	SV*	sv = ST(0)
;
	HV*	pad;
#line 559 "PadWalker.xs"
    I32 i;
    CV *cv = (CV *)SvRV(sv);
    U32 val_depth = CvDEPTH(cv) ? CvDEPTH(cv) : 1;
    PADNAMELIST *pad_namelist = PadlistNAMES(CvPADLIST(cv));
    PAD *pad_vallist  = PadlistARRAY(CvPADLIST(cv))[val_depth];
#line 780 "PadWalker.c"

	STMT_START {
		SV* const xsub_tmp_sv = ST(1);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVHV){
		    pad = (HV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak_nocontext("%s: %s is not a HASH reference",
				"PadWalker::set_closed_over",
				"pad");
		}
	} STMT_END
;
#line 565 "PadWalker.xs"
    for (i=PadnamelistMAX(pad_namelist); i>=0; --i) {
      PADNAME* name = PadnamelistARRAY(pad_namelist)[i];
      char* name_str;

      if (name && (name_str = PadnamePV(name))) {
        STRLEN name_len = strlen(name_str);

        if (PadnameOUTER(name) && !PadnameIsOUR(name)) {
          SV **restore_ref = hv_fetch(pad, name_str, name_len, FALSE);
          if ( restore_ref ) {
            if ( SvROK(*restore_ref) ) {
              SV *restore = SvRV(*restore_ref);
              SV *orig = PadARRAY(pad_vallist)[i];
              int restore_type = SvTYPE(restore);

              if ( !orig || is_correct_type(orig, restore) ) {
                SvREFCNT_inc(restore);

                PadARRAY(pad_vallist)[i] = restore;
              } else {
                croak("Incorrect reftype for variable %s (got %s expected %s)", name_str, sv_reftype(restore, 0), sv_reftype(orig, 0));
              }
            } else {
              croak("The variable for %s is not a reference", name_str);
            }
          }
        }
      }
    }
#line 825 "PadWalker.c"
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_PadWalker_closed_over); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_PadWalker_closed_over)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "cv");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	CV*	cv;
#line 601 "PadWalker.xs"
    HV* ret = newHV();
    HV* targs;
#line 844 "PadWalker.c"

	STMT_START {
                HV *st;
                GV *gvp;
		SV * const xsub_tmp_sv = ST(0);
		SvGETMAGIC(xsub_tmp_sv);
                cv = sv_2cv(xsub_tmp_sv, &st, &gvp, 0);
		if (!cv) {
		    Perl_croak_nocontext("%s: %s is not a CODE reference",
				"PadWalker::closed_over",
				"cv");
		}
	} STMT_END
;
#line 604 "PadWalker.xs"
    if (GIMME_V == G_ARRAY) {
        targs = newHV();
        get_closed_over(aTHX_ cv, ret, targs);

        EXTEND(SP, 2);
        PUSHs(sv_2mortal(newRV_noinc((SV*)ret)));
        PUSHs(sv_2mortal(newRV_noinc((SV*)targs)));
    }
    else {
        get_closed_over(aTHX_ cv, ret, 0);

        EXTEND(SP, 1);
        PUSHs(sv_2mortal(newRV_noinc((SV*)ret)));
    }
#line 874 "PadWalker.c"
	PUTBACK;
	return;
    }
}


XS_EUPXS(XS_PadWalker_var_name); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_PadWalker_var_name)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "sub, var_ref");
    {
	SV*	sub = ST(0)
;
	SV*	var_ref = ST(1)
;
#line 624 "PadWalker.xs"
    SV *cv;
#line 894 "PadWalker.c"
	char *	RETVAL;
	dXSTARG;
#line 626 "PadWalker.xs"
    if (!SvROK(var_ref))
      croak("Usage: PadWalker::var_name(sub, var_ref)");

    if (SvROK(sub)) {
      cv = SvRV(sub);
      if (SvTYPE(cv) != SVt_PVCV)
        croak("PadWalker::var_name: sub is neither a CODE reference nor a number");
    } else
      cv = (SV *) up_cv(aTHX_ SvIV(sub), "PadWalker::upcontext");

    RETVAL = get_var_name((CV *) cv, SvRV(var_ref));
#line 909 "PadWalker.c"
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS_EUPXS(XS_PadWalker__upcontext); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_PadWalker__upcontext)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "uplevel");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	I32	uplevel = (I32)SvIV(ST(0))
;
#line 644 "PadWalker.xs"
    /* This is used by Devel::Caller. */
    XPUSHs(sv_2mortal(newSViv((IV)upcontext(aTHX_ uplevel, 0, 0, 0, 0))));
#line 930 "PadWalker.c"
	PUTBACK;
	return;
    }
}

#ifdef __cplusplus
extern "C"
#endif
XS_EXTERNAL(boot_PadWalker); /* prototype to pass -Wmissing-prototypes */
XS_EXTERNAL(boot_PadWalker)
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

        newXS_deffile("PadWalker::peek_my", XS_PadWalker_peek_my);
        newXS_deffile("PadWalker::peek_our", XS_PadWalker_peek_our);
        newXS_deffile("PadWalker::peek_sub", XS_PadWalker_peek_sub);
        newXS_deffile("PadWalker::set_closed_over", XS_PadWalker_set_closed_over);
        newXS_deffile("PadWalker::closed_over", XS_PadWalker_closed_over);
        newXS_deffile("PadWalker::var_name", XS_PadWalker_var_name);
        newXS_deffile("PadWalker::_upcontext", XS_PadWalker__upcontext);
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
