/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
typedef struct l_struct_OC_k2c_tensor2 l_struct_OC_k2c_tensor2;
typedef struct l_struct_OC_k2c_tensor l_struct_OC_k2c_tensor;
typedef struct l_struct_OC__iobuf l_struct_OC__iobuf;

/* Structure contents */
struct l_struct_OC_k2c_tensor2 {
  float field0[2622];
  unsigned long long field1;
  unsigned long long field2;
  signed long long field3[5];
};

struct l_struct_OC_k2c_tensor {
  float field0[262200];
  unsigned long long field1;
  unsigned long long field2;
  signed long long field3[5];
};

struct l_struct_OC__iobuf {
   char *field0;
  unsigned int field1;
   char *field2;
  unsigned int field3;
  unsigned int field4;
  unsigned int field5;
  unsigned int field6;
   char *field7;
};


/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void k2c_affine_matmul(float *llvm_cbe_C, float *llvm_cbe_A, float *llvm_cbe_B, float *llvm_cbe_d, signed long long llvm_cbe_outrows, signed long long llvm_cbe_outcols, signed long long llvm_cbe_innerdim);
signed long long k2c_sub2idx(signed long long *llvm_cbe_sub, signed long long *llvm_cbe_shape, signed long long llvm_cbe_ndim);
void k2c_idx2sub(signed long long llvm_cbe_idx, signed long long *llvm_cbe_sub, signed long long *llvm_cbe_shape, signed long long llvm_cbe_ndim);
void k2c_dot(l_struct_OC_k2c_tensor2 *llvm_cbe_C, l_struct_OC_k2c_tensor2 *llvm_cbe_Ar, l_struct_OC_k2c_tensor *llvm_cbe_B, signed long long *llvm_cbe_axesA, signed long long *llvm_cbe_axesB, signed long long llvm_cbe_naxes, signed int llvm_cbe_normalize, float *llvm_cbe_fwork);
void k2c_dot2(l_struct_OC_k2c_tensor2 *llvm_cbe_C, l_struct_OC_k2c_tensor2 *llvm_cbe_Ar, l_struct_OC_k2c_tensor2 *llvm_cbe_B, signed long long *llvm_cbe_axesA, signed long long *llvm_cbe_axesB, signed long long llvm_cbe_naxes, signed int llvm_cbe_normalize, float *llvm_cbe_fwork);
void k2c_bias_add(l_struct_OC_k2c_tensor2 *llvm_cbe_A, l_struct_OC_k2c_tensor2 *llvm_cbe_b);
void k2c_flip(l_struct_OC_k2c_tensor *llvm_cbe_A, signed long long llvm_cbe_axis);
float *k2c_read_array( char *llvm_cbe_filename, signed long long llvm_cbe_array_size);


/* Global Variable Definitions and Initialization */
static  char aesl_internal__OC_str1[2] = "r";
static  char aesl_internal__OC_str2[25] = "Unable to open file %s \n";
static  char aesl_internal__OC_str3[4] = "%f,";
static  char aesl_internal__OC_str[28] = "cannot allocate memory %s \n";


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void k2c_affine_matmul(float *llvm_cbe_C, float *llvm_cbe_A, float *llvm_cbe_B, float *llvm_cbe_d, signed long long llvm_cbe_outrows, signed long long llvm_cbe_outcols, signed long long llvm_cbe_innerdim) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned long long llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond20_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_2e_us12_count = 0;
  unsigned long long llvm_cbe_storemerge14_2e_us12;
  unsigned long long llvm_cbe_storemerge14_2e_us12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  float *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  float *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  float llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  float llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  unsigned long long llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond19_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge8_2e_us_count = 0;
  unsigned long long llvm_cbe_storemerge8_2e_us;
  unsigned long long llvm_cbe_storemerge8_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned long long llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  unsigned long long llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  float *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  float llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  float llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond18_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_2e_us_2e_us_count = 0;
  unsigned long long llvm_cbe_storemerge14_2e_us_2e_us;
  unsigned long long llvm_cbe_storemerge14_2e_us_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  float *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  float llvm_cbe_tmp__16;
  float llvm_cbe_tmp__16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge23_2e_us_2e_us_count = 0;
  unsigned long long llvm_cbe_storemerge23_2e_us_2e_us;
  unsigned long long llvm_cbe_storemerge23_2e_us_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  unsigned long long llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  float *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  float llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  unsigned long long llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned long long llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  float *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  float llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  float llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  float llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned long long llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_affine_matmul\n");
  if (((llvm_cbe_outrows&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__27;
  } else {
    goto llvm_cbe__2e_lr_2e_ph10;
  }

llvm_cbe__2e_lr_2e_ph10:
  if (((llvm_cbe_outcols&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge11;
  } else {
    llvm_cbe_storemerge8_2e_us__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph6_2e_us;
  }

  do {     /* Syntactic loop '.lr.ph6.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph6_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge8.us = phi i64 [ %%4, %%._crit_edge7.us-lcssa.us17 ], [ 0, %%.lr.ph10  for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_storemerge8_2e_us_count);
  llvm_cbe_storemerge8_2e_us = (unsigned long long )llvm_cbe_storemerge8_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge8.us = 0x%I64X",llvm_cbe_storemerge8_2e_us);
printf("\n = 0x%I64X",llvm_cbe_tmp__1);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = mul i64 %%storemerge8.us, %%outcols, !dbg !14 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__8 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge8_2e_us&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_outcols&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__8&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = mul i64 %%storemerge8.us, %%innerdim, !dbg !14 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__9 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge8_2e_us&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_innerdim&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__9&18446744073709551615ull)));
  if (((llvm_cbe_innerdim&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe_storemerge14_2e_us12__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe_tmp__28;
  } else {
    llvm_cbe_storemerge14_2e_us_2e_us__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us_2e_us;
  }

llvm_cbe__2e__crit_edge7_2e_us_2d_lcssa_2e_us17:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = add i64 %%storemerge8.us, 1, !dbg !15 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__1 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge8_2e_us&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__1&18446744073709551615ull)));
  if (((llvm_cbe_tmp__1&18446744073709551615ULL) == (llvm_cbe_outrows&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge11;
  } else {
    llvm_cbe_storemerge8_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__1;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph6_2e_us;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__28:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14.us12 = phi i64 [ %%11, %%5 ], [ 0, %%.lr.ph6.us  for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_storemerge14_2e_us12_count);
  llvm_cbe_storemerge14_2e_us12 = (unsigned long long )llvm_cbe_storemerge14_2e_us12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14.us12 = 0x%I64X",llvm_cbe_storemerge14_2e_us12);
printf("\n = 0x%I64X",llvm_cbe_tmp__7);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i64 %%storemerge14.us12, %%12, !dbg !12 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__2 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge14_2e_us12&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__8&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__2&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds float* %%C, i64 %%6, !dbg !12 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__3 = (float *)(&llvm_cbe_C[(((signed long long )llvm_cbe_tmp__2))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%7, align 4, !dbg !12 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_39_count);
  *llvm_cbe_tmp__3 = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds float* %%d, i64 %%storemerge14.us12, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__4 = (float *)(&llvm_cbe_d[(((signed long long )llvm_cbe_storemerge14_2e_us12))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14.us12 = 0x%I64X",((signed long long )llvm_cbe_storemerge14_2e_us12));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load float* %%8, align 4, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__5 = (float )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__5, *(int*)(&llvm_cbe_tmp__5));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = fadd float %%9, 0.000000e+00, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__6 = (float )((float )(llvm_cbe_tmp__5 + 0x0p0));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__6, *(int*)(&llvm_cbe_tmp__6));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%10, float* %%7, align 4, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_48_count);
  *llvm_cbe_tmp__3 = llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i64 %%storemerge14.us12, 1, !dbg !15 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__7 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge14_2e_us12&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__7&18446744073709551615ull)));
  if (((llvm_cbe_tmp__7&18446744073709551615ULL) == (llvm_cbe_outcols&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge7_2e_us_2d_lcssa_2e_us17;
  } else {
    llvm_cbe_storemerge14_2e_us12__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__7;   /* for PHI node */
    goto llvm_cbe_tmp__28;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.lr.ph.us.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph_2e_us_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14.us.us = phi i64 [ %%18, %%14 ], [ 0, %%.lr.ph6.us  for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_storemerge14_2e_us_2e_us_count);
  llvm_cbe_storemerge14_2e_us_2e_us = (unsigned long long )llvm_cbe_storemerge14_2e_us_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14.us.us = 0x%I64X",llvm_cbe_storemerge14_2e_us_2e_us);
printf("\n = 0x%I64X",llvm_cbe_tmp__13);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add i64 %%storemerge14.us.us, %%12, !dbg !12 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__14 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge14_2e_us_2e_us&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__8&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__14&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds float* %%C, i64 %%19, !dbg !12 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_91_count);
  llvm_cbe_tmp__15 = (float *)(&llvm_cbe_C[(((signed long long )llvm_cbe_tmp__14))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__14));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%20, align 4, !dbg !12 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_92_count);
  *llvm_cbe_tmp__15 = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
  llvm_cbe_tmp__16__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
  llvm_cbe_storemerge23_2e_us_2e_us__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__29;

llvm_cbe_tmp__30:
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds float* %%d, i64 %%storemerge14.us.us, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__10 = (float *)(&llvm_cbe_d[(((signed long long )llvm_cbe_storemerge14_2e_us_2e_us))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14.us.us = 0x%I64X",((signed long long )llvm_cbe_storemerge14_2e_us_2e_us));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load float* %%15, align 4, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__11 = (float )*llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__11, *(int*)(&llvm_cbe_tmp__11));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = fadd float %%31, %%16, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_78_count);
  llvm_cbe_tmp__12 = (float )((float )(llvm_cbe_tmp__25 + llvm_cbe_tmp__11));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__12, *(int*)(&llvm_cbe_tmp__12));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%17, float* %%20, align 4, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_79_count);
  *llvm_cbe_tmp__15 = llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = add i64 %%storemerge14.us.us, 1, !dbg !15 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__13 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge14_2e_us_2e_us&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__13&18446744073709551615ull)));
  if (((llvm_cbe_tmp__13&18446744073709551615ULL) == (llvm_cbe_outcols&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge7_2e_us_2d_lcssa_2e_us17;
  } else {
    llvm_cbe_storemerge14_2e_us_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__13;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us_2e_us;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__29:
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = phi float [ 0.000000e+00, %%.lr.ph.us.us ], [ %%31, %%21 ], !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_99_count);
  llvm_cbe_tmp__16 = (float )llvm_cbe_tmp__16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__16);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__25);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23.us.us = phi i64 [ 0, %%.lr.ph.us.us ], [ %%32, %%21  for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_storemerge23_2e_us_2e_us_count);
  llvm_cbe_storemerge23_2e_us_2e_us = (unsigned long long )llvm_cbe_storemerge23_2e_us_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23.us.us = 0x%I64X",llvm_cbe_storemerge23_2e_us_2e_us);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__26);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = add i64 %%storemerge23.us.us, %%13, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_100_count);
  llvm_cbe_tmp__17 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge23_2e_us_2e_us&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__9&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__17&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds float* %%A, i64 %%23, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__18 = (float *)(&llvm_cbe_A[(((signed long long )llvm_cbe_tmp__17))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__17));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load float* %%24, align 4, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__19 = (float )*llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__19, *(int*)(&llvm_cbe_tmp__19));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = mul i64 %%storemerge23.us.us, %%outcols, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__20 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge23_2e_us_2e_us&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_outcols&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__20&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = add i64 %%26, %%storemerge14.us.us, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__21 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__20&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_storemerge14_2e_us_2e_us&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__21&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds float* %%B, i64 %%27, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__22 = (float *)(&llvm_cbe_B[(((signed long long )llvm_cbe_tmp__21))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load float* %%28, align 4, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__23 = (float )*llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__23, *(int*)(&llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = fmul float %%25, %%29, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__24 = (float )((float )(llvm_cbe_tmp__19 * llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__24, *(int*)(&llvm_cbe_tmp__24));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = fadd float %%22, %%30, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_108_count);
  llvm_cbe_tmp__25 = (float )((float )(llvm_cbe_tmp__16 + llvm_cbe_tmp__24));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__25, *(int*)(&llvm_cbe_tmp__25));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%31, float* %%20, align 4, !dbg !13 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_109_count);
  *llvm_cbe_tmp__15 = llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i64 %%storemerge23.us.us, 1, !dbg !15 for 0x%I64xth hint within @k2c_affine_matmul  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__26 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge23_2e_us_2e_us&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__26&18446744073709551615ull)));
  if (((llvm_cbe_tmp__26&18446744073709551615ULL) == (llvm_cbe_innerdim&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__30;
  } else {
    llvm_cbe_tmp__16__PHI_TEMPORARY = (float )llvm_cbe_tmp__25;   /* for PHI node */
    llvm_cbe_storemerge23_2e_us_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__26;   /* for PHI node */
    goto llvm_cbe_tmp__29;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.lr.ph.us.us' */
  } while (1); /* end of syntactic loop '.lr.ph6.us' */
llvm_cbe__2e__crit_edge11:
  goto llvm_cbe_tmp__27;

llvm_cbe_tmp__27:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_affine_matmul}\n");
  return;
}


signed long long k2c_sub2idx(signed long long *llvm_cbe_sub, signed long long *llvm_cbe_shape, signed long long llvm_cbe_ndim) {
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned long long llvm_cbe_storemerge12;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge5_count = 0;
  unsigned long long llvm_cbe_storemerge5;
  unsigned long long llvm_cbe_storemerge5__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  unsigned long long llvm_cbe_tmp__31;
  unsigned long long llvm_cbe_tmp__31__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  signed long long *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  unsigned long long llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge13_count = 0;
  unsigned long long llvm_cbe_storemerge13;
  unsigned long long llvm_cbe_storemerge13__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  unsigned long long llvm_cbe_tmp__34__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  signed long long *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  unsigned long long llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  unsigned long long llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  unsigned long long llvm_cbe__2e_lcssa;
  unsigned long long llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  unsigned long long llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned long long llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa4_count = 0;
  unsigned long long llvm_cbe__2e_lcssa4;
  unsigned long long llvm_cbe__2e_lcssa4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_sub2idx\n");
  if (((llvm_cbe_ndim&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa4__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge8;
  } else {
    goto llvm_cbe__2e_lr_2e_ph7;
  }

llvm_cbe__2e_lr_2e_ph7:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = add i64 %%ndim, -1, !dbg !13 for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned long long )((unsigned long long )(llvm_cbe_ndim&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge12 = 0x%I64X\n", ((unsigned long long )(llvm_cbe_storemerge12&18446744073709551615ull)));
  llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__31__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__40;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__40:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge5 = phi i64 [ 0, %%.lr.ph7 ], [ %%13, %%._crit_edge  for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_storemerge5_count);
  llvm_cbe_storemerge5 = (unsigned long long )llvm_cbe_storemerge5__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge5 = 0x%I64X",llvm_cbe_storemerge5);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__39);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = phi i64 [ 0, %%.lr.ph7 ], [ %%12, %%._crit_edge  for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__31 = (unsigned long long )llvm_cbe_tmp__31__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__31);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__38);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i64* %%sub, i64 %%storemerge5, !dbg !12 for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__32 = (signed long long *)(&llvm_cbe_sub[(((signed long long )llvm_cbe_storemerge5))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge5 = 0x%I64X",((signed long long )llvm_cbe_storemerge5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i64* %%4, align 8, !dbg !12 for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__33 = (unsigned long long )*llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__33);
  if ((((unsigned long long )llvm_cbe_storemerge12&18446744073709551615ULL) > ((unsigned long long )llvm_cbe_storemerge5&18446744073709551615ULL))) {
    llvm_cbe_storemerge13__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge12;   /* for PHI node */
    llvm_cbe_tmp__34__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__33;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__33;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi i64 [ %%5, %%2 ], [ %%10, %%.lr.ph  for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (unsigned long long )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = 0x%I64X",llvm_cbe__2e_lcssa);
printf("\n = 0x%I64X",llvm_cbe_tmp__33);
printf("\n = 0x%I64X",llvm_cbe_tmp__37);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add i64 %%.lcssa, %%3, !dbg !14 for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_165_count);
  llvm_cbe_tmp__38 = (unsigned long long )((unsigned long long )(llvm_cbe__2e_lcssa&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__31&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__38&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i64 %%storemerge5, 1, !dbg !14 for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__39 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge5&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__39&18446744073709551615ull)));
  if (((llvm_cbe_tmp__39&18446744073709551615ULL) == (llvm_cbe_ndim&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa4__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__38;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge8;
  } else {
    llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__39;   /* for PHI node */
    llvm_cbe_tmp__31__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__38;   /* for PHI node */
    goto llvm_cbe_tmp__40;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge13 = phi i64 [ %%storemerge1, %%.lr.ph ], [ %%storemerge12, %%2  for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_storemerge13_count);
  llvm_cbe_storemerge13 = (unsigned long long )llvm_cbe_storemerge13__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge13 = 0x%I64X",llvm_cbe_storemerge13);
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\nstoremerge12 = 0x%I64X",llvm_cbe_storemerge12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = phi i64 [ %%10, %%.lr.ph ], [ %%5, %%2  for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__34 = (unsigned long long )llvm_cbe_tmp__34__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__34);
printf("\n = 0x%I64X",llvm_cbe_tmp__37);
printf("\n = 0x%I64X",llvm_cbe_tmp__33);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i64* %%shape, i64 %%storemerge13, !dbg !13 for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__35 = (signed long long *)(&llvm_cbe_shape[(((signed long long )llvm_cbe_storemerge13))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge13 = 0x%I64X",((signed long long )llvm_cbe_storemerge13));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i64* %%8, align 8, !dbg !13 for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__36 = (unsigned long long )*llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = mul i64 %%9, %%7, !dbg !13 for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__37 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__36&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__34&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__37&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = add i64 %%storemerge13, -1, !dbg !13 for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge13&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1 = 0x%I64X\n", ((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_storemerge1&18446744073709551615ULL) > ((unsigned long long )llvm_cbe_storemerge5&18446744073709551615ULL))) {
    llvm_cbe_storemerge13__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge1;   /* for PHI node */
    llvm_cbe_tmp__34__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__37;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__37;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge8:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa4 = phi i64 [ 0, %%0 ], [ %%12, %%._crit_edge  for 0x%I64xth hint within @k2c_sub2idx  --> \n", ++aesl_llvm_cbe__2e_lcssa4_count);
  llvm_cbe__2e_lcssa4 = (unsigned long long )llvm_cbe__2e_lcssa4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa4 = 0x%I64X",llvm_cbe__2e_lcssa4);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__38);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_sub2idx}\n");
  return llvm_cbe__2e_lcssa4;
}


void k2c_idx2sub(signed long long llvm_cbe_idx, signed long long *llvm_cbe_sub, signed long long *llvm_cbe_shape, signed long long llvm_cbe_ndim) {
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  unsigned int llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2_count = 0;
  unsigned int llvm_cbe_storemerge2;
  unsigned int llvm_cbe_storemerge2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  unsigned long long llvm_cbe_tmp__42;
  unsigned long long llvm_cbe_tmp__42__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  unsigned long long llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  signed long long *llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  unsigned long long llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  unsigned long long llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  signed long long *llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  unsigned long long llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned long long llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_idx2sub\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = trunc i64 %%ndim to i32, !dbg !13 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__41 = (unsigned int )((unsigned int )llvm_cbe_ndim&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = add i32 %%1, -1, !dbg !13 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )((unsigned int )(llvm_cbe_tmp__41&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1 = 0x%X\n", ((unsigned int )(llvm_cbe_storemerge1&4294967295ull)));
  if ((((signed int )llvm_cbe_storemerge1) > ((signed int )4294967295u))) {
    llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge1;   /* for PHI node */
    llvm_cbe_tmp__42__PHI_TEMPORARY = (unsigned long long )llvm_cbe_idx;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2 = phi i32 [ %%storemerge, %%.lr.ph ], [ %%storemerge1, %%0  for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_storemerge2_count);
  llvm_cbe_storemerge2 = (unsigned int )llvm_cbe_storemerge2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2 = 0x%X",llvm_cbe_storemerge2);
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = phi i64 [ %%10, %%.lr.ph ], [ %%idx, %%0  for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__42 = (unsigned long long )llvm_cbe_tmp__42__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__42);
printf("\n = 0x%I64X",llvm_cbe_tmp__49);
printf("\nidx = 0x%I64X",llvm_cbe_idx);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge2 to i64, !dbg !12 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__43 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds i64* %%shape, i64 %%4, !dbg !12 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__44 = (signed long long *)(&llvm_cbe_shape[(((signed long long )llvm_cbe_tmp__43))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__43));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i64* %%5, align 8, !dbg !12 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__45 = (unsigned long long )*llvm_cbe_tmp__44;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = urem i64 %%3, %%6, !dbg !12 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__46 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__42&18446744073709551615ull)) % ((unsigned long long )(llvm_cbe_tmp__45&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__46&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i64* %%sub, i64 %%4, !dbg !12 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_203_count);
  llvm_cbe_tmp__47 = (signed long long *)(&llvm_cbe_sub[(((signed long long )llvm_cbe_tmp__43))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__43));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%7, i64* %%8, align 8, !dbg !12 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_204_count);
  *llvm_cbe_tmp__47 = llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i64* %%5, align 8, !dbg !13 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__48 = (unsigned long long )*llvm_cbe_tmp__44;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = udiv i64 %%3, %%9, !dbg !13 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__49 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__42&18446744073709551615ull)) / ((unsigned long long )(llvm_cbe_tmp__48&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__49&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = add i32 %%storemerge2, -1, !dbg !13 for 0x%I64xth hint within @k2c_idx2sub  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )((unsigned int )(llvm_cbe_storemerge2&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge = 0x%X\n", ((unsigned int )(llvm_cbe_storemerge&4294967295ull)));
  if ((((signed int )llvm_cbe_storemerge) > ((signed int )4294967295u))) {
    llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge;   /* for PHI node */
    llvm_cbe_tmp__42__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__49;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_idx2sub}\n");
  return;
}


void k2c_dot(l_struct_OC_k2c_tensor2 *llvm_cbe_C, l_struct_OC_k2c_tensor2 *llvm_cbe_Ar, l_struct_OC_k2c_tensor *llvm_cbe_B, signed long long *llvm_cbe_axesA, signed long long *llvm_cbe_axesB, signed long long llvm_cbe_naxes, signed int llvm_cbe_normalize, float *llvm_cbe_fwork) {
  static  unsigned long long aesl_llvm_cbe_permA_count = 0;
  signed long long llvm_cbe_permA[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_permB_count = 0;
  signed long long llvm_cbe_permB[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_freeA_count = 0;
  signed long long llvm_cbe_freeA[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_freeB_count = 0;
  signed long long llvm_cbe_freeB[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_newshpA_count = 0;
  signed long long llvm_cbe_newshpA[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_newshpB_count = 0;
  signed long long llvm_cbe_newshpB[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_Asub_count = 0;
  signed long long llvm_cbe_Asub[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_Bsub_count = 0;
  signed long long llvm_cbe_Bsub[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  signed long long *llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  unsigned long long llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  signed long long *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  unsigned long long llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  signed long long *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  unsigned long long llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge117_count = 0;
  unsigned long long llvm_cbe_storemerge117;
  unsigned long long llvm_cbe_storemerge117__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  unsigned long long llvm_cbe_tmp__56;
  unsigned long long llvm_cbe_tmp__56__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23113_count = 0;
  unsigned long long llvm_cbe_storemerge23113;
  unsigned long long llvm_cbe_storemerge23113__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  unsigned int llvm_cbe_tmp__57;
  unsigned int llvm_cbe_tmp__57__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  signed long long *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  unsigned long long llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned int llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  unsigned long long llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond137_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_phitmp_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  signed long long *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  unsigned long long llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  unsigned long long llvm_cbe_tmp__63;
  unsigned long long llvm_cbe_tmp__63__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  unsigned long long llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond138_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1110_count = 0;
  unsigned long long llvm_cbe_storemerge1110;
  unsigned long long llvm_cbe_storemerge1110__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  unsigned long long llvm_cbe_tmp__65;
  unsigned long long llvm_cbe_tmp__65__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge22105_count = 0;
  unsigned long long llvm_cbe_storemerge22105;
  unsigned long long llvm_cbe_storemerge22105__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  unsigned int llvm_cbe_tmp__66;
  unsigned int llvm_cbe_tmp__66__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  signed long long *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  unsigned long long llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_26_count = 0;
  unsigned int llvm_cbe__2e_26;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  unsigned long long llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond135_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_phitmp118_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  signed long long *llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  unsigned long long llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  unsigned long long llvm_cbe_tmp__72;
  unsigned long long llvm_cbe_tmp__72__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  unsigned long long llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond136_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge298_count = 0;
  unsigned long long llvm_cbe_storemerge298;
  unsigned long long llvm_cbe_storemerge298__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  unsigned long long llvm_cbe_tmp__74;
  unsigned long long llvm_cbe_tmp__74__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  unsigned long long llvm_cbe_tmp__75;
  unsigned long long llvm_cbe_tmp__75__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  signed long long *llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  unsigned long long llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  signed long long *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  unsigned long long llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  unsigned long long llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  signed long long *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  unsigned long long llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  signed long long *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  unsigned long long llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  unsigned long long llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  unsigned long long llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond134_count = 0;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa97_count = 0;
  unsigned long long llvm_cbe__2e_lcssa97;
  unsigned long long llvm_cbe__2e_lcssa97__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa96_count = 0;
  unsigned long long llvm_cbe__2e_lcssa96;
  unsigned long long llvm_cbe__2e_lcssa96__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  unsigned long long llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  signed long long *llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  unsigned long long llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  unsigned long long llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  static  unsigned long long aesl_llvm_cbe_907_count = 0;
  static  unsigned long long aesl_llvm_cbe_908_count = 0;
  static  unsigned long long aesl_llvm_cbe_909_count = 0;
  static  unsigned long long aesl_llvm_cbe_910_count = 0;
  static  unsigned long long aesl_llvm_cbe_911_count = 0;
  static  unsigned long long aesl_llvm_cbe_912_count = 0;
  static  unsigned long long aesl_llvm_cbe_913_count = 0;
  static  unsigned long long aesl_llvm_cbe_914_count = 0;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;
  static  unsigned long long aesl_llvm_cbe_922_count = 0;
  static  unsigned long long aesl_llvm_cbe_923_count = 0;
  static  unsigned long long aesl_llvm_cbe_924_count = 0;
  static  unsigned long long aesl_llvm_cbe_925_count = 0;
  static  unsigned long long aesl_llvm_cbe_926_count = 0;
  static  unsigned long long aesl_llvm_cbe_927_count = 0;
  static  unsigned long long aesl_llvm_cbe_928_count = 0;
  static  unsigned long long aesl_llvm_cbe_929_count = 0;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  unsigned long long llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;
  static  unsigned long long aesl_llvm_cbe_985_count = 0;
  static  unsigned long long aesl_llvm_cbe_986_count = 0;
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
  static  unsigned long long aesl_llvm_cbe_991_count = 0;
  static  unsigned long long aesl_llvm_cbe_992_count = 0;
  static  unsigned long long aesl_llvm_cbe_993_count = 0;
  static  unsigned long long aesl_llvm_cbe_994_count = 0;
  static  unsigned long long aesl_llvm_cbe_995_count = 0;
  static  unsigned long long aesl_llvm_cbe_996_count = 0;
  static  unsigned long long aesl_llvm_cbe_997_count = 0;
  static  unsigned long long aesl_llvm_cbe_998_count = 0;
  static  unsigned long long aesl_llvm_cbe_999_count = 0;
  static  unsigned long long aesl_llvm_cbe_1000_count = 0;
  static  unsigned long long aesl_llvm_cbe_1001_count = 0;
  static  unsigned long long aesl_llvm_cbe_1002_count = 0;
  static  unsigned long long aesl_llvm_cbe_1003_count = 0;
  static  unsigned long long aesl_llvm_cbe_1004_count = 0;
  static  unsigned long long aesl_llvm_cbe_1005_count = 0;
  static  unsigned long long aesl_llvm_cbe_1006_count = 0;
  static  unsigned long long aesl_llvm_cbe_1007_count = 0;
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge391_count = 0;
  unsigned long long llvm_cbe_storemerge391;
  unsigned long long llvm_cbe_storemerge391__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  signed long long *llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  unsigned long long llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  signed long long *llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
  unsigned long long llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  static  unsigned long long aesl_llvm_cbe_1015_count = 0;
  static  unsigned long long aesl_llvm_cbe_1016_count = 0;
  static  unsigned long long aesl_llvm_cbe_1017_count = 0;
  static  unsigned long long aesl_llvm_cbe_1018_count = 0;
  static  unsigned long long aesl_llvm_cbe_1019_count = 0;
  static  unsigned long long aesl_llvm_cbe_1020_count = 0;
  static  unsigned long long aesl_llvm_cbe_1021_count = 0;
  static  unsigned long long aesl_llvm_cbe_1022_count = 0;
  static  unsigned long long aesl_llvm_cbe_1023_count = 0;
  static  unsigned long long aesl_llvm_cbe_1024_count = 0;
  static  unsigned long long aesl_llvm_cbe_1025_count = 0;
  static  unsigned long long aesl_llvm_cbe_1026_count = 0;
  static  unsigned long long aesl_llvm_cbe_1027_count = 0;
  static  unsigned long long aesl_llvm_cbe_1028_count = 0;
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;
  static  unsigned long long aesl_llvm_cbe_1039_count = 0;
  static  unsigned long long aesl_llvm_cbe_1040_count = 0;
  static  unsigned long long aesl_llvm_cbe_1041_count = 0;
  static  unsigned long long aesl_llvm_cbe_1042_count = 0;
  static  unsigned long long aesl_llvm_cbe_1043_count = 0;
  static  unsigned long long aesl_llvm_cbe_1044_count = 0;
  static  unsigned long long aesl_llvm_cbe_1045_count = 0;
  static  unsigned long long aesl_llvm_cbe_1046_count = 0;
  static  unsigned long long aesl_llvm_cbe_1047_count = 0;
  static  unsigned long long aesl_llvm_cbe_1048_count = 0;
  static  unsigned long long aesl_llvm_cbe_1049_count = 0;
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;
  static  unsigned long long aesl_llvm_cbe_1156_count = 0;
  static  unsigned long long aesl_llvm_cbe_1157_count = 0;
  static  unsigned long long aesl_llvm_cbe_1158_count = 0;
  static  unsigned long long aesl_llvm_cbe_1159_count = 0;
  static  unsigned long long aesl_llvm_cbe_1160_count = 0;
  static  unsigned long long aesl_llvm_cbe_1161_count = 0;
  static  unsigned long long aesl_llvm_cbe_1162_count = 0;
  static  unsigned long long aesl_llvm_cbe_1163_count = 0;
  static  unsigned long long aesl_llvm_cbe_1164_count = 0;
  static  unsigned long long aesl_llvm_cbe_1165_count = 0;
  static  unsigned long long aesl_llvm_cbe_1166_count = 0;
  static  unsigned long long aesl_llvm_cbe_1167_count = 0;
  static  unsigned long long aesl_llvm_cbe_1168_count = 0;
  static  unsigned long long aesl_llvm_cbe_1169_count = 0;
  static  unsigned long long aesl_llvm_cbe_1170_count = 0;
  static  unsigned long long aesl_llvm_cbe_1171_count = 0;
  static  unsigned long long aesl_llvm_cbe_1172_count = 0;
  static  unsigned long long aesl_llvm_cbe_1173_count = 0;
  static  unsigned long long aesl_llvm_cbe_1174_count = 0;
  static  unsigned long long aesl_llvm_cbe_1175_count = 0;
  static  unsigned long long aesl_llvm_cbe_1176_count = 0;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge488_count = 0;
  unsigned long long llvm_cbe_storemerge488;
  unsigned long long llvm_cbe_storemerge488__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge152587_count = 0;
  unsigned long long llvm_cbe_storemerge152587;
  unsigned long long llvm_cbe_storemerge152587__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  signed long long *llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  unsigned long long llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
  signed long long *llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  unsigned long long llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  unsigned long long llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  static  unsigned long long aesl_llvm_cbe_1269_count = 0;
  static  unsigned long long aesl_llvm_cbe_1270_count = 0;
  static  unsigned long long aesl_llvm_cbe_1271_count = 0;
  static  unsigned long long aesl_llvm_cbe_1272_count = 0;
  static  unsigned long long aesl_llvm_cbe_1273_count = 0;
  static  unsigned long long aesl_llvm_cbe_1274_count = 0;
  static  unsigned long long aesl_llvm_cbe_1275_count = 0;
  static  unsigned long long aesl_llvm_cbe_1276_count = 0;
  static  unsigned long long aesl_llvm_cbe_1277_count = 0;
  static  unsigned long long aesl_llvm_cbe_1278_count = 0;
  static  unsigned long long aesl_llvm_cbe_1279_count = 0;
  static  unsigned long long aesl_llvm_cbe_1280_count = 0;
  static  unsigned long long aesl_llvm_cbe_1281_count = 0;
  static  unsigned long long aesl_llvm_cbe_1282_count = 0;
  static  unsigned long long aesl_llvm_cbe_1283_count = 0;
  static  unsigned long long aesl_llvm_cbe_1284_count = 0;
  static  unsigned long long aesl_llvm_cbe_1285_count = 0;
  static  unsigned long long aesl_llvm_cbe_1286_count = 0;
  static  unsigned long long aesl_llvm_cbe_1287_count = 0;
  static  unsigned long long aesl_llvm_cbe_1288_count = 0;
  static  unsigned long long aesl_llvm_cbe_1289_count = 0;
  static  unsigned long long aesl_llvm_cbe_1290_count = 0;
  static  unsigned long long aesl_llvm_cbe_1291_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;
  static  unsigned long long aesl_llvm_cbe_1293_count = 0;
  static  unsigned long long aesl_llvm_cbe_1294_count = 0;
  static  unsigned long long aesl_llvm_cbe_1295_count = 0;
  static  unsigned long long aesl_llvm_cbe_1296_count = 0;
  static  unsigned long long aesl_llvm_cbe_1297_count = 0;
  static  unsigned long long aesl_llvm_cbe_1298_count = 0;
  static  unsigned long long aesl_llvm_cbe_1299_count = 0;
  static  unsigned long long aesl_llvm_cbe_1300_count = 0;
  static  unsigned long long aesl_llvm_cbe_1301_count = 0;
  static  unsigned long long aesl_llvm_cbe_1302_count = 0;
  static  unsigned long long aesl_llvm_cbe_1303_count = 0;
  static  unsigned long long aesl_llvm_cbe_1304_count = 0;
  static  unsigned long long aesl_llvm_cbe_1305_count = 0;
  static  unsigned long long aesl_llvm_cbe_1306_count = 0;
  static  unsigned long long aesl_llvm_cbe_1307_count = 0;
  static  unsigned long long aesl_llvm_cbe_1308_count = 0;
  static  unsigned long long aesl_llvm_cbe_1309_count = 0;
  static  unsigned long long aesl_llvm_cbe_1310_count = 0;
  static  unsigned long long aesl_llvm_cbe_1311_count = 0;
  static  unsigned long long aesl_llvm_cbe_1312_count = 0;
  static  unsigned long long aesl_llvm_cbe_1313_count = 0;
  static  unsigned long long aesl_llvm_cbe_1314_count = 0;
  static  unsigned long long aesl_llvm_cbe_1315_count = 0;
  static  unsigned long long aesl_llvm_cbe_1316_count = 0;
  static  unsigned long long aesl_llvm_cbe_1317_count = 0;
  static  unsigned long long aesl_llvm_cbe_1318_count = 0;
  static  unsigned long long aesl_llvm_cbe_1319_count = 0;
  static  unsigned long long aesl_llvm_cbe_1320_count = 0;
  static  unsigned long long aesl_llvm_cbe_1321_count = 0;
  static  unsigned long long aesl_llvm_cbe_1322_count = 0;
  static  unsigned long long aesl_llvm_cbe_1323_count = 0;
  static  unsigned long long aesl_llvm_cbe_1324_count = 0;
  static  unsigned long long aesl_llvm_cbe_1325_count = 0;
  static  unsigned long long aesl_llvm_cbe_1326_count = 0;
  static  unsigned long long aesl_llvm_cbe_1327_count = 0;
  static  unsigned long long aesl_llvm_cbe_1328_count = 0;
  static  unsigned long long aesl_llvm_cbe_1329_count = 0;
  static  unsigned long long aesl_llvm_cbe_1330_count = 0;
  static  unsigned long long aesl_llvm_cbe_1331_count = 0;
  static  unsigned long long aesl_llvm_cbe_1332_count = 0;
  unsigned long long llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_1333_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge584_count = 0;
  unsigned long long llvm_cbe_storemerge584;
  unsigned long long llvm_cbe_storemerge584__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1334_count = 0;
  signed long long *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_1335_count = 0;
  unsigned long long llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_1336_count = 0;
  signed long long *llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_1337_count = 0;
  static  unsigned long long aesl_llvm_cbe_1338_count = 0;
  unsigned long long llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_1339_count = 0;
  static  unsigned long long aesl_llvm_cbe_1340_count = 0;
  static  unsigned long long aesl_llvm_cbe_1341_count = 0;
  static  unsigned long long aesl_llvm_cbe_1342_count = 0;
  static  unsigned long long aesl_llvm_cbe_1343_count = 0;
  static  unsigned long long aesl_llvm_cbe_1344_count = 0;
  static  unsigned long long aesl_llvm_cbe_1345_count = 0;
  static  unsigned long long aesl_llvm_cbe_1346_count = 0;
  static  unsigned long long aesl_llvm_cbe_1347_count = 0;
  static  unsigned long long aesl_llvm_cbe_1348_count = 0;
  static  unsigned long long aesl_llvm_cbe_1349_count = 0;
  static  unsigned long long aesl_llvm_cbe_1350_count = 0;
  static  unsigned long long aesl_llvm_cbe_1351_count = 0;
  static  unsigned long long aesl_llvm_cbe_1352_count = 0;
  static  unsigned long long aesl_llvm_cbe_1353_count = 0;
  static  unsigned long long aesl_llvm_cbe_1354_count = 0;
  static  unsigned long long aesl_llvm_cbe_1355_count = 0;
  static  unsigned long long aesl_llvm_cbe_1356_count = 0;
  static  unsigned long long aesl_llvm_cbe_1357_count = 0;
  static  unsigned long long aesl_llvm_cbe_1358_count = 0;
  static  unsigned long long aesl_llvm_cbe_1359_count = 0;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
  static  unsigned long long aesl_llvm_cbe_1364_count = 0;
  static  unsigned long long aesl_llvm_cbe_1365_count = 0;
  static  unsigned long long aesl_llvm_cbe_1366_count = 0;
  static  unsigned long long aesl_llvm_cbe_1367_count = 0;
  static  unsigned long long aesl_llvm_cbe_1368_count = 0;
  static  unsigned long long aesl_llvm_cbe_1369_count = 0;
  static  unsigned long long aesl_llvm_cbe_1370_count = 0;
  static  unsigned long long aesl_llvm_cbe_1371_count = 0;
  static  unsigned long long aesl_llvm_cbe_1372_count = 0;
  static  unsigned long long aesl_llvm_cbe_1373_count = 0;
  static  unsigned long long aesl_llvm_cbe_1374_count = 0;
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
  static  unsigned long long aesl_llvm_cbe_1387_count = 0;
  static  unsigned long long aesl_llvm_cbe_1388_count = 0;
  static  unsigned long long aesl_llvm_cbe_1389_count = 0;
  static  unsigned long long aesl_llvm_cbe_1390_count = 0;
  static  unsigned long long aesl_llvm_cbe_1391_count = 0;
  static  unsigned long long aesl_llvm_cbe_1392_count = 0;
  static  unsigned long long aesl_llvm_cbe_1393_count = 0;
  static  unsigned long long aesl_llvm_cbe_1394_count = 0;
  static  unsigned long long aesl_llvm_cbe_1395_count = 0;
  static  unsigned long long aesl_llvm_cbe_1396_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1397_count = 0;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;
  static  unsigned long long aesl_llvm_cbe_1416_count = 0;
  static  unsigned long long aesl_llvm_cbe_1417_count = 0;
  static  unsigned long long aesl_llvm_cbe_1418_count = 0;
  static  unsigned long long aesl_llvm_cbe_1419_count = 0;
  static  unsigned long long aesl_llvm_cbe_1420_count = 0;
  static  unsigned long long aesl_llvm_cbe_1421_count = 0;
  static  unsigned long long aesl_llvm_cbe_1422_count = 0;
  static  unsigned long long aesl_llvm_cbe_1423_count = 0;
  static  unsigned long long aesl_llvm_cbe_1424_count = 0;
  static  unsigned long long aesl_llvm_cbe_1425_count = 0;
  static  unsigned long long aesl_llvm_cbe_1426_count = 0;
  static  unsigned long long aesl_llvm_cbe_1427_count = 0;
  static  unsigned long long aesl_llvm_cbe_1428_count = 0;
  static  unsigned long long aesl_llvm_cbe_1429_count = 0;
  static  unsigned long long aesl_llvm_cbe_1430_count = 0;
  static  unsigned long long aesl_llvm_cbe_1431_count = 0;
  static  unsigned long long aesl_llvm_cbe_1432_count = 0;
  static  unsigned long long aesl_llvm_cbe_1433_count = 0;
  static  unsigned long long aesl_llvm_cbe_1434_count = 0;
  static  unsigned long long aesl_llvm_cbe_1435_count = 0;
  static  unsigned long long aesl_llvm_cbe_1436_count = 0;
  static  unsigned long long aesl_llvm_cbe_1437_count = 0;
  static  unsigned long long aesl_llvm_cbe_1438_count = 0;
  static  unsigned long long aesl_llvm_cbe_1439_count = 0;
  static  unsigned long long aesl_llvm_cbe_1440_count = 0;
  static  unsigned long long aesl_llvm_cbe_1441_count = 0;
  static  unsigned long long aesl_llvm_cbe_1442_count = 0;
  static  unsigned long long aesl_llvm_cbe_1443_count = 0;
  static  unsigned long long aesl_llvm_cbe_1444_count = 0;
  static  unsigned long long aesl_llvm_cbe_1445_count = 0;
  static  unsigned long long aesl_llvm_cbe_1446_count = 0;
  static  unsigned long long aesl_llvm_cbe_1447_count = 0;
  static  unsigned long long aesl_llvm_cbe_1448_count = 0;
  static  unsigned long long aesl_llvm_cbe_1449_count = 0;
  static  unsigned long long aesl_llvm_cbe_1450_count = 0;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge681_count = 0;
  unsigned long long llvm_cbe_storemerge681;
  unsigned long long llvm_cbe_storemerge681__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge152480_count = 0;
  unsigned long long llvm_cbe_storemerge152480;
  unsigned long long llvm_cbe_storemerge152480__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  signed long long *llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_1457_count = 0;
  unsigned long long llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_1458_count = 0;
  signed long long *llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_1459_count = 0;
  static  unsigned long long aesl_llvm_cbe_1460_count = 0;
  unsigned long long llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_1461_count = 0;
  static  unsigned long long aesl_llvm_cbe_1462_count = 0;
  static  unsigned long long aesl_llvm_cbe_1463_count = 0;
  static  unsigned long long aesl_llvm_cbe_1464_count = 0;
  static  unsigned long long aesl_llvm_cbe_1465_count = 0;
  static  unsigned long long aesl_llvm_cbe_1466_count = 0;
  static  unsigned long long aesl_llvm_cbe_1467_count = 0;
  static  unsigned long long aesl_llvm_cbe_1468_count = 0;
  static  unsigned long long aesl_llvm_cbe_1469_count = 0;
  static  unsigned long long aesl_llvm_cbe_1470_count = 0;
  static  unsigned long long aesl_llvm_cbe_1471_count = 0;
  static  unsigned long long aesl_llvm_cbe_1472_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
  static  unsigned long long aesl_llvm_cbe_1499_count = 0;
  static  unsigned long long aesl_llvm_cbe_1500_count = 0;
  static  unsigned long long aesl_llvm_cbe_1501_count = 0;
  static  unsigned long long aesl_llvm_cbe_1502_count = 0;
  static  unsigned long long aesl_llvm_cbe_1503_count = 0;
  static  unsigned long long aesl_llvm_cbe_1504_count = 0;
  static  unsigned long long aesl_llvm_cbe_1505_count = 0;
  static  unsigned long long aesl_llvm_cbe_1506_count = 0;
  static  unsigned long long aesl_llvm_cbe_1507_count = 0;
  static  unsigned long long aesl_llvm_cbe_1508_count = 0;
  static  unsigned long long aesl_llvm_cbe_1509_count = 0;
  static  unsigned long long aesl_llvm_cbe_1510_count = 0;
  static  unsigned long long aesl_llvm_cbe_1511_count = 0;
  static  unsigned long long aesl_llvm_cbe_1512_count = 0;
  static  unsigned long long aesl_llvm_cbe_1513_count = 0;
  static  unsigned long long aesl_llvm_cbe_1514_count = 0;
  static  unsigned long long aesl_llvm_cbe_1515_count = 0;
  static  unsigned long long aesl_llvm_cbe_1516_count = 0;
  static  unsigned long long aesl_llvm_cbe_1517_count = 0;
  static  unsigned long long aesl_llvm_cbe_1518_count = 0;
  static  unsigned long long aesl_llvm_cbe_1519_count = 0;
  unsigned long long llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_1520_count = 0;
  static  unsigned long long aesl_llvm_cbe_1521_count = 0;
  static  unsigned long long aesl_llvm_cbe_1522_count = 0;
  static  unsigned long long aesl_llvm_cbe_1523_count = 0;
  static  unsigned long long aesl_llvm_cbe_1524_count = 0;
  static  unsigned long long aesl_llvm_cbe_1525_count = 0;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;
  static  unsigned long long aesl_llvm_cbe_1528_count = 0;
  static  unsigned long long aesl_llvm_cbe_1529_count = 0;
  static  unsigned long long aesl_llvm_cbe_1530_count = 0;
  static  unsigned long long aesl_llvm_cbe_1531_count = 0;
  static  unsigned long long aesl_llvm_cbe_1532_count = 0;
  static  unsigned long long aesl_llvm_cbe_1533_count = 0;
  static  unsigned long long aesl_llvm_cbe_1534_count = 0;
  static  unsigned long long aesl_llvm_cbe_1535_count = 0;
  static  unsigned long long aesl_llvm_cbe_1536_count = 0;
  static  unsigned long long aesl_llvm_cbe_1537_count = 0;
  static  unsigned long long aesl_llvm_cbe_1538_count = 0;
  static  unsigned long long aesl_llvm_cbe_1539_count = 0;
  static  unsigned long long aesl_llvm_cbe_1540_count = 0;
  static  unsigned long long aesl_llvm_cbe_1541_count = 0;
  static  unsigned long long aesl_llvm_cbe_1542_count = 0;
  static  unsigned long long aesl_llvm_cbe_1543_count = 0;
  static  unsigned long long aesl_llvm_cbe_1544_count = 0;
  static  unsigned long long aesl_llvm_cbe_1545_count = 0;
  static  unsigned long long aesl_llvm_cbe_1546_count = 0;
  static  unsigned long long aesl_llvm_cbe_1547_count = 0;
  static  unsigned long long aesl_llvm_cbe_1548_count = 0;
  static  unsigned long long aesl_llvm_cbe_1549_count = 0;
  static  unsigned long long aesl_llvm_cbe_1550_count = 0;
  static  unsigned long long aesl_llvm_cbe_1551_count = 0;
  static  unsigned long long aesl_llvm_cbe_1552_count = 0;
  static  unsigned long long aesl_llvm_cbe_1553_count = 0;
  static  unsigned long long aesl_llvm_cbe_1554_count = 0;
  static  unsigned long long aesl_llvm_cbe_1555_count = 0;
  static  unsigned long long aesl_llvm_cbe_1556_count = 0;
  static  unsigned long long aesl_llvm_cbe_1557_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond129_count = 0;
  static  unsigned long long aesl_llvm_cbe_1558_count = 0;
  static  unsigned long long aesl_llvm_cbe_1559_count = 0;
  static  unsigned long long aesl_llvm_cbe_1560_count = 0;
  static  unsigned long long aesl_llvm_cbe_1561_count = 0;
  static  unsigned long long aesl_llvm_cbe_1562_count = 0;
  static  unsigned long long aesl_llvm_cbe_1563_count = 0;
  static  unsigned long long aesl_llvm_cbe_1564_count = 0;
  static  unsigned long long aesl_llvm_cbe_1565_count = 0;
  static  unsigned long long aesl_llvm_cbe_1566_count = 0;
  static  unsigned long long aesl_llvm_cbe_1567_count = 0;
  static  unsigned long long aesl_llvm_cbe_1568_count = 0;
  static  unsigned long long aesl_llvm_cbe_1569_count = 0;
  static  unsigned long long aesl_llvm_cbe_1570_count = 0;
  static  unsigned long long aesl_llvm_cbe_1571_count = 0;
  static  unsigned long long aesl_llvm_cbe_1572_count = 0;
  static  unsigned long long aesl_llvm_cbe_1573_count = 0;
  static  unsigned long long aesl_llvm_cbe_1574_count = 0;
  static  unsigned long long aesl_llvm_cbe_1575_count = 0;
  static  unsigned long long aesl_llvm_cbe_1576_count = 0;
  static  unsigned long long aesl_llvm_cbe_1577_count = 0;
  static  unsigned long long aesl_llvm_cbe_1578_count = 0;
  static  unsigned long long aesl_llvm_cbe_1579_count = 0;
  static  unsigned long long aesl_llvm_cbe_1580_count = 0;
  static  unsigned long long aesl_llvm_cbe_1581_count = 0;
  static  unsigned long long aesl_llvm_cbe_1582_count = 0;
  static  unsigned long long aesl_llvm_cbe_1583_count = 0;
  static  unsigned long long aesl_llvm_cbe_1584_count = 0;
  static  unsigned long long aesl_llvm_cbe_1585_count = 0;
  static  unsigned long long aesl_llvm_cbe_1586_count = 0;
  static  unsigned long long aesl_llvm_cbe_1587_count = 0;
  static  unsigned long long aesl_llvm_cbe_1588_count = 0;
  static  unsigned long long aesl_llvm_cbe_1589_count = 0;
  static  unsigned long long aesl_llvm_cbe_1590_count = 0;
  static  unsigned long long aesl_llvm_cbe_1591_count = 0;
  static  unsigned long long aesl_llvm_cbe_1592_count = 0;
  static  unsigned long long aesl_llvm_cbe_1593_count = 0;
  static  unsigned long long aesl_llvm_cbe_1594_count = 0;
  static  unsigned long long aesl_llvm_cbe_1595_count = 0;
  static  unsigned long long aesl_llvm_cbe_1596_count = 0;
  static  unsigned long long aesl_llvm_cbe_1597_count = 0;
  static  unsigned long long aesl_llvm_cbe_1598_count = 0;
  static  unsigned long long aesl_llvm_cbe_1599_count = 0;
  static  unsigned long long aesl_llvm_cbe_1600_count = 0;
  static  unsigned long long aesl_llvm_cbe_1601_count = 0;
  static  unsigned long long aesl_llvm_cbe_1602_count = 0;
  static  unsigned long long aesl_llvm_cbe_1603_count = 0;
  static  unsigned long long aesl_llvm_cbe_1604_count = 0;
  static  unsigned long long aesl_llvm_cbe_1605_count = 0;
  static  unsigned long long aesl_llvm_cbe_1606_count = 0;
  static  unsigned long long aesl_llvm_cbe_1607_count = 0;
  static  unsigned long long aesl_llvm_cbe_1608_count = 0;
  static  unsigned long long aesl_llvm_cbe_1609_count = 0;
  static  unsigned long long aesl_llvm_cbe_1610_count = 0;
  static  unsigned long long aesl_llvm_cbe_1611_count = 0;
  static  unsigned long long aesl_llvm_cbe_1612_count = 0;
  static  unsigned long long aesl_llvm_cbe_1613_count = 0;
  static  unsigned long long aesl_llvm_cbe_1614_count = 0;
  static  unsigned long long aesl_llvm_cbe_1615_count = 0;
  static  unsigned long long aesl_llvm_cbe_1616_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge777_count = 0;
  unsigned long long llvm_cbe_storemerge777;
  unsigned long long llvm_cbe_storemerge777__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1617_count = 0;
  signed long long *llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_1618_count = 0;
  unsigned long long llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_1619_count = 0;
  signed long long *llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_1620_count = 0;
  unsigned long long llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_1621_count = 0;
  signed long long *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_1622_count = 0;
  static  unsigned long long aesl_llvm_cbe_1623_count = 0;
  unsigned long long llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_1624_count = 0;
  static  unsigned long long aesl_llvm_cbe_1625_count = 0;
  static  unsigned long long aesl_llvm_cbe_1626_count = 0;
  static  unsigned long long aesl_llvm_cbe_1627_count = 0;
  static  unsigned long long aesl_llvm_cbe_1628_count = 0;
  static  unsigned long long aesl_llvm_cbe_1629_count = 0;
  static  unsigned long long aesl_llvm_cbe_1630_count = 0;
  static  unsigned long long aesl_llvm_cbe_1631_count = 0;
  static  unsigned long long aesl_llvm_cbe_1632_count = 0;
  static  unsigned long long aesl_llvm_cbe_1633_count = 0;
  static  unsigned long long aesl_llvm_cbe_1634_count = 0;
  static  unsigned long long aesl_llvm_cbe_1635_count = 0;
  static  unsigned long long aesl_llvm_cbe_1636_count = 0;
  static  unsigned long long aesl_llvm_cbe_1637_count = 0;
  static  unsigned long long aesl_llvm_cbe_1638_count = 0;
  static  unsigned long long aesl_llvm_cbe_1639_count = 0;
  static  unsigned long long aesl_llvm_cbe_1640_count = 0;
  static  unsigned long long aesl_llvm_cbe_1641_count = 0;
  static  unsigned long long aesl_llvm_cbe_1642_count = 0;
  static  unsigned long long aesl_llvm_cbe_1643_count = 0;
  static  unsigned long long aesl_llvm_cbe_1644_count = 0;
  static  unsigned long long aesl_llvm_cbe_1645_count = 0;
  static  unsigned long long aesl_llvm_cbe_1646_count = 0;
  static  unsigned long long aesl_llvm_cbe_1647_count = 0;
  static  unsigned long long aesl_llvm_cbe_1648_count = 0;
  static  unsigned long long aesl_llvm_cbe_1649_count = 0;
  static  unsigned long long aesl_llvm_cbe_1650_count = 0;
  static  unsigned long long aesl_llvm_cbe_1651_count = 0;
  static  unsigned long long aesl_llvm_cbe_1652_count = 0;
  static  unsigned long long aesl_llvm_cbe_1653_count = 0;
  static  unsigned long long aesl_llvm_cbe_1654_count = 0;
  static  unsigned long long aesl_llvm_cbe_1655_count = 0;
  static  unsigned long long aesl_llvm_cbe_1656_count = 0;
  static  unsigned long long aesl_llvm_cbe_1657_count = 0;
  static  unsigned long long aesl_llvm_cbe_1658_count = 0;
  static  unsigned long long aesl_llvm_cbe_1659_count = 0;
  static  unsigned long long aesl_llvm_cbe_1660_count = 0;
  static  unsigned long long aesl_llvm_cbe_1661_count = 0;
  static  unsigned long long aesl_llvm_cbe_1662_count = 0;
  static  unsigned long long aesl_llvm_cbe_1663_count = 0;
  static  unsigned long long aesl_llvm_cbe_1664_count = 0;
  static  unsigned long long aesl_llvm_cbe_1665_count = 0;
  static  unsigned long long aesl_llvm_cbe_1666_count = 0;
  static  unsigned long long aesl_llvm_cbe_1667_count = 0;
  static  unsigned long long aesl_llvm_cbe_1668_count = 0;
  static  unsigned long long aesl_llvm_cbe_1669_count = 0;
  static  unsigned long long aesl_llvm_cbe_1670_count = 0;
  static  unsigned long long aesl_llvm_cbe_1671_count = 0;
  static  unsigned long long aesl_llvm_cbe_1672_count = 0;
  static  unsigned long long aesl_llvm_cbe_1673_count = 0;
  static  unsigned long long aesl_llvm_cbe_1674_count = 0;
  static  unsigned long long aesl_llvm_cbe_1675_count = 0;
  static  unsigned long long aesl_llvm_cbe_1676_count = 0;
  static  unsigned long long aesl_llvm_cbe_1677_count = 0;
  static  unsigned long long aesl_llvm_cbe_1678_count = 0;
  static  unsigned long long aesl_llvm_cbe_1679_count = 0;
  static  unsigned long long aesl_llvm_cbe_1680_count = 0;
  static  unsigned long long aesl_llvm_cbe_1681_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond128_count = 0;
  static  unsigned long long aesl_llvm_cbe_1682_count = 0;
  static  unsigned long long aesl_llvm_cbe_1683_count = 0;
  static  unsigned long long aesl_llvm_cbe_1684_count = 0;
  static  unsigned long long aesl_llvm_cbe_1685_count = 0;
  static  unsigned long long aesl_llvm_cbe_1686_count = 0;
  static  unsigned long long aesl_llvm_cbe_1687_count = 0;
  static  unsigned long long aesl_llvm_cbe_1688_count = 0;
  static  unsigned long long aesl_llvm_cbe_1689_count = 0;
  static  unsigned long long aesl_llvm_cbe_1690_count = 0;
  static  unsigned long long aesl_llvm_cbe_1691_count = 0;
  static  unsigned long long aesl_llvm_cbe_1692_count = 0;
  static  unsigned long long aesl_llvm_cbe_1693_count = 0;
  static  unsigned long long aesl_llvm_cbe_1694_count = 0;
  static  unsigned long long aesl_llvm_cbe_1695_count = 0;
  static  unsigned long long aesl_llvm_cbe_1696_count = 0;
  static  unsigned long long aesl_llvm_cbe_1697_count = 0;
  static  unsigned long long aesl_llvm_cbe_1698_count = 0;
  static  unsigned long long aesl_llvm_cbe_1699_count = 0;
  static  unsigned long long aesl_llvm_cbe_1700_count = 0;
  static  unsigned long long aesl_llvm_cbe_1701_count = 0;
  static  unsigned long long aesl_llvm_cbe_1702_count = 0;
  static  unsigned long long aesl_llvm_cbe_1703_count = 0;
  static  unsigned long long aesl_llvm_cbe_1704_count = 0;
  static  unsigned long long aesl_llvm_cbe_1705_count = 0;
  static  unsigned long long aesl_llvm_cbe_1706_count = 0;
  static  unsigned long long aesl_llvm_cbe_1707_count = 0;
  static  unsigned long long aesl_llvm_cbe_1708_count = 0;
  static  unsigned long long aesl_llvm_cbe_1709_count = 0;
  static  unsigned long long aesl_llvm_cbe_1710_count = 0;
  static  unsigned long long aesl_llvm_cbe_1711_count = 0;
  static  unsigned long long aesl_llvm_cbe_1712_count = 0;
  static  unsigned long long aesl_llvm_cbe_1713_count = 0;
  static  unsigned long long aesl_llvm_cbe_1714_count = 0;
  static  unsigned long long aesl_llvm_cbe_1715_count = 0;
  static  unsigned long long aesl_llvm_cbe_1716_count = 0;
  static  unsigned long long aesl_llvm_cbe_1717_count = 0;
  static  unsigned long long aesl_llvm_cbe_1718_count = 0;
  static  unsigned long long aesl_llvm_cbe_1719_count = 0;
  static  unsigned long long aesl_llvm_cbe_1720_count = 0;
  static  unsigned long long aesl_llvm_cbe_1721_count = 0;
  static  unsigned long long aesl_llvm_cbe_1722_count = 0;
  static  unsigned long long aesl_llvm_cbe_1723_count = 0;
  static  unsigned long long aesl_llvm_cbe_1724_count = 0;
  static  unsigned long long aesl_llvm_cbe_1725_count = 0;
  static  unsigned long long aesl_llvm_cbe_1726_count = 0;
  static  unsigned long long aesl_llvm_cbe_1727_count = 0;
  static  unsigned long long aesl_llvm_cbe_1728_count = 0;
  static  unsigned long long aesl_llvm_cbe_1729_count = 0;
  static  unsigned long long aesl_llvm_cbe_1730_count = 0;
  static  unsigned long long aesl_llvm_cbe_1731_count = 0;
  static  unsigned long long aesl_llvm_cbe_1732_count = 0;
  static  unsigned long long aesl_llvm_cbe_1733_count = 0;
  static  unsigned long long aesl_llvm_cbe_1734_count = 0;
  static  unsigned long long aesl_llvm_cbe_1735_count = 0;
  static  unsigned long long aesl_llvm_cbe_1736_count = 0;
  static  unsigned long long aesl_llvm_cbe_1737_count = 0;
  static  unsigned long long aesl_llvm_cbe_1738_count = 0;
  static  unsigned long long aesl_llvm_cbe_1739_count = 0;
  static  unsigned long long aesl_llvm_cbe_1740_count = 0;
  static  unsigned long long aesl_llvm_cbe_1741_count = 0;
  static  unsigned long long aesl_llvm_cbe_1742_count = 0;
  signed long long *llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_1743_count = 0;
  signed long long *llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_1744_count = 0;
  signed long long *llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_1745_count = 0;
  signed long long *llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_1746_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge874_count = 0;
  unsigned long long llvm_cbe_storemerge874;
  unsigned long long llvm_cbe_storemerge874__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1747_count = 0;
  signed long long *llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_1748_count = 0;
  unsigned long long llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_1749_count = 0;
  signed long long *llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_1750_count = 0;
  unsigned long long llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_1751_count = 0;
  signed long long *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_1752_count = 0;
  static  unsigned long long aesl_llvm_cbe_1753_count = 0;
  unsigned long long llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_1754_count = 0;
  static  unsigned long long aesl_llvm_cbe_1755_count = 0;
  static  unsigned long long aesl_llvm_cbe_1756_count = 0;
  static  unsigned long long aesl_llvm_cbe_1757_count = 0;
  static  unsigned long long aesl_llvm_cbe_1758_count = 0;
  static  unsigned long long aesl_llvm_cbe_1759_count = 0;
  static  unsigned long long aesl_llvm_cbe_1760_count = 0;
  static  unsigned long long aesl_llvm_cbe_1761_count = 0;
  static  unsigned long long aesl_llvm_cbe_1762_count = 0;
  static  unsigned long long aesl_llvm_cbe_1763_count = 0;
  static  unsigned long long aesl_llvm_cbe_1764_count = 0;
  static  unsigned long long aesl_llvm_cbe_1765_count = 0;
  static  unsigned long long aesl_llvm_cbe_1766_count = 0;
  static  unsigned long long aesl_llvm_cbe_1767_count = 0;
  static  unsigned long long aesl_llvm_cbe_1768_count = 0;
  static  unsigned long long aesl_llvm_cbe_1769_count = 0;
  static  unsigned long long aesl_llvm_cbe_1770_count = 0;
  static  unsigned long long aesl_llvm_cbe_1771_count = 0;
  static  unsigned long long aesl_llvm_cbe_1772_count = 0;
  static  unsigned long long aesl_llvm_cbe_1773_count = 0;
  static  unsigned long long aesl_llvm_cbe_1774_count = 0;
  static  unsigned long long aesl_llvm_cbe_1775_count = 0;
  static  unsigned long long aesl_llvm_cbe_1776_count = 0;
  static  unsigned long long aesl_llvm_cbe_1777_count = 0;
  static  unsigned long long aesl_llvm_cbe_1778_count = 0;
  static  unsigned long long aesl_llvm_cbe_1779_count = 0;
  static  unsigned long long aesl_llvm_cbe_1780_count = 0;
  static  unsigned long long aesl_llvm_cbe_1781_count = 0;
  static  unsigned long long aesl_llvm_cbe_1782_count = 0;
  static  unsigned long long aesl_llvm_cbe_1783_count = 0;
  static  unsigned long long aesl_llvm_cbe_1784_count = 0;
  static  unsigned long long aesl_llvm_cbe_1785_count = 0;
  static  unsigned long long aesl_llvm_cbe_1786_count = 0;
  static  unsigned long long aesl_llvm_cbe_1787_count = 0;
  static  unsigned long long aesl_llvm_cbe_1788_count = 0;
  static  unsigned long long aesl_llvm_cbe_1789_count = 0;
  static  unsigned long long aesl_llvm_cbe_1790_count = 0;
  static  unsigned long long aesl_llvm_cbe_1791_count = 0;
  static  unsigned long long aesl_llvm_cbe_1792_count = 0;
  static  unsigned long long aesl_llvm_cbe_1793_count = 0;
  static  unsigned long long aesl_llvm_cbe_1794_count = 0;
  static  unsigned long long aesl_llvm_cbe_1795_count = 0;
  static  unsigned long long aesl_llvm_cbe_1796_count = 0;
  static  unsigned long long aesl_llvm_cbe_1797_count = 0;
  static  unsigned long long aesl_llvm_cbe_1798_count = 0;
  static  unsigned long long aesl_llvm_cbe_1799_count = 0;
  static  unsigned long long aesl_llvm_cbe_1800_count = 0;
  static  unsigned long long aesl_llvm_cbe_1801_count = 0;
  static  unsigned long long aesl_llvm_cbe_1802_count = 0;
  static  unsigned long long aesl_llvm_cbe_1803_count = 0;
  static  unsigned long long aesl_llvm_cbe_1804_count = 0;
  static  unsigned long long aesl_llvm_cbe_1805_count = 0;
  static  unsigned long long aesl_llvm_cbe_1806_count = 0;
  static  unsigned long long aesl_llvm_cbe_1807_count = 0;
  static  unsigned long long aesl_llvm_cbe_1808_count = 0;
  static  unsigned long long aesl_llvm_cbe_1809_count = 0;
  static  unsigned long long aesl_llvm_cbe_1810_count = 0;
  static  unsigned long long aesl_llvm_cbe_1811_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond127_count = 0;
  static  unsigned long long aesl_llvm_cbe_1812_count = 0;
  static  unsigned long long aesl_llvm_cbe_1813_count = 0;
  static  unsigned long long aesl_llvm_cbe_1814_count = 0;
  static  unsigned long long aesl_llvm_cbe_1815_count = 0;
  static  unsigned long long aesl_llvm_cbe_1816_count = 0;
  static  unsigned long long aesl_llvm_cbe_1817_count = 0;
  static  unsigned long long aesl_llvm_cbe_1818_count = 0;
  static  unsigned long long aesl_llvm_cbe_1819_count = 0;
  static  unsigned long long aesl_llvm_cbe_1820_count = 0;
  static  unsigned long long aesl_llvm_cbe_1821_count = 0;
  static  unsigned long long aesl_llvm_cbe_1822_count = 0;
  static  unsigned long long aesl_llvm_cbe_1823_count = 0;
  static  unsigned long long aesl_llvm_cbe_1824_count = 0;
  static  unsigned long long aesl_llvm_cbe_1825_count = 0;
  static  unsigned long long aesl_llvm_cbe_1826_count = 0;
  static  unsigned long long aesl_llvm_cbe_1827_count = 0;
  static  unsigned long long aesl_llvm_cbe_1828_count = 0;
  static  unsigned long long aesl_llvm_cbe_1829_count = 0;
  static  unsigned long long aesl_llvm_cbe_1830_count = 0;
  static  unsigned long long aesl_llvm_cbe_1831_count = 0;
  static  unsigned long long aesl_llvm_cbe_1832_count = 0;
  static  unsigned long long aesl_llvm_cbe_1833_count = 0;
  static  unsigned long long aesl_llvm_cbe_1834_count = 0;
  static  unsigned long long aesl_llvm_cbe_1835_count = 0;
  static  unsigned long long aesl_llvm_cbe_1836_count = 0;
  static  unsigned long long aesl_llvm_cbe_1837_count = 0;
  static  unsigned long long aesl_llvm_cbe_1838_count = 0;
  static  unsigned long long aesl_llvm_cbe_1839_count = 0;
  static  unsigned long long aesl_llvm_cbe_1840_count = 0;
  static  unsigned long long aesl_llvm_cbe_1841_count = 0;
  static  unsigned long long aesl_llvm_cbe_1842_count = 0;
  static  unsigned long long aesl_llvm_cbe_1843_count = 0;
  static  unsigned long long aesl_llvm_cbe_1844_count = 0;
  static  unsigned long long aesl_llvm_cbe_1845_count = 0;
  static  unsigned long long aesl_llvm_cbe_1846_count = 0;
  static  unsigned long long aesl_llvm_cbe_1847_count = 0;
  static  unsigned long long aesl_llvm_cbe_1848_count = 0;
  static  unsigned long long aesl_llvm_cbe_1849_count = 0;
  static  unsigned long long aesl_llvm_cbe_1850_count = 0;
  static  unsigned long long aesl_llvm_cbe_1851_count = 0;
  static  unsigned long long aesl_llvm_cbe_1852_count = 0;
  static  unsigned long long aesl_llvm_cbe_1853_count = 0;
  static  unsigned long long aesl_llvm_cbe_1854_count = 0;
  static  unsigned long long aesl_llvm_cbe_1855_count = 0;
  static  unsigned long long aesl_llvm_cbe_1856_count = 0;
  static  unsigned long long aesl_llvm_cbe_1857_count = 0;
  static  unsigned long long aesl_llvm_cbe_1858_count = 0;
  static  unsigned long long aesl_llvm_cbe_1859_count = 0;
  static  unsigned long long aesl_llvm_cbe_1860_count = 0;
  static  unsigned long long aesl_llvm_cbe_1861_count = 0;
  static  unsigned long long aesl_llvm_cbe_1862_count = 0;
  static  unsigned long long aesl_llvm_cbe_1863_count = 0;
  static  unsigned long long aesl_llvm_cbe_1864_count = 0;
  static  unsigned long long aesl_llvm_cbe_1865_count = 0;
  static  unsigned long long aesl_llvm_cbe_1866_count = 0;
  static  unsigned long long aesl_llvm_cbe_1867_count = 0;
  static  unsigned long long aesl_llvm_cbe_1868_count = 0;
  static  unsigned long long aesl_llvm_cbe_1869_count = 0;
  static  unsigned long long aesl_llvm_cbe_1870_count = 0;
  unsigned long long llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_1871_count = 0;
  static  unsigned long long aesl_llvm_cbe_1872_count = 0;
  static  unsigned long long aesl_llvm_cbe_1873_count = 0;
  signed long long *llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_1874_count = 0;
  signed long long *llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_1875_count = 0;
  signed long long *llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_1876_count = 0;
  signed long long *llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_1877_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge971_count = 0;
  unsigned long long llvm_cbe_storemerge971;
  unsigned long long llvm_cbe_storemerge971__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1878_count = 0;
  static  unsigned long long aesl_llvm_cbe_1879_count = 0;
  static  unsigned long long aesl_llvm_cbe_1880_count = 0;
  static  unsigned long long aesl_llvm_cbe_1881_count = 0;
  static  unsigned long long aesl_llvm_cbe_1882_count = 0;
  static  unsigned long long aesl_llvm_cbe_1883_count = 0;
  static  unsigned long long aesl_llvm_cbe_1884_count = 0;
  static  unsigned long long aesl_llvm_cbe_1885_count = 0;
  static  unsigned long long aesl_llvm_cbe_1886_count = 0;
  static  unsigned long long aesl_llvm_cbe_1887_count = 0;
  static  unsigned long long aesl_llvm_cbe_1888_count = 0;
  static  unsigned long long aesl_llvm_cbe_1889_count = 0;
  static  unsigned long long aesl_llvm_cbe_1890_count = 0;
  static  unsigned long long aesl_llvm_cbe_1891_count = 0;
  static  unsigned long long aesl_llvm_cbe_1892_count = 0;
  static  unsigned long long aesl_llvm_cbe_1893_count = 0;
  static  unsigned long long aesl_llvm_cbe_1894_count = 0;
  static  unsigned long long aesl_llvm_cbe_1895_count = 0;
  static  unsigned long long aesl_llvm_cbe_1896_count = 0;
  static  unsigned long long aesl_llvm_cbe_1897_count = 0;
  static  unsigned long long aesl_llvm_cbe_1898_count = 0;
  static  unsigned long long aesl_llvm_cbe_1899_count = 0;
  static  unsigned long long aesl_llvm_cbe_1900_count = 0;
  static  unsigned long long aesl_llvm_cbe_1901_count = 0;
  static  unsigned long long aesl_llvm_cbe_1902_count = 0;
  static  unsigned long long aesl_llvm_cbe_1903_count = 0;
  static  unsigned long long aesl_llvm_cbe_1904_count = 0;
  static  unsigned long long aesl_llvm_cbe_1905_count = 0;
  static  unsigned long long aesl_llvm_cbe_1906_count = 0;
  static  unsigned long long aesl_llvm_cbe_1907_count = 0;
  static  unsigned long long aesl_llvm_cbe_1908_count = 0;
  static  unsigned long long aesl_llvm_cbe_1909_count = 0;
  static  unsigned long long aesl_llvm_cbe_1910_count = 0;
  static  unsigned long long aesl_llvm_cbe_1911_count = 0;
  static  unsigned long long aesl_llvm_cbe_1912_count = 0;
  static  unsigned long long aesl_llvm_cbe_1913_count = 0;
  static  unsigned long long aesl_llvm_cbe_1914_count = 0;
  static  unsigned long long aesl_llvm_cbe_1915_count = 0;
  static  unsigned long long aesl_llvm_cbe_1916_count = 0;
  static  unsigned long long aesl_llvm_cbe_1917_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2166_count = 0;
  unsigned long long llvm_cbe_storemerge2166;
  unsigned long long llvm_cbe_storemerge2166__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1918_count = 0;
  signed long long *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_1919_count = 0;
  unsigned long long llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_1920_count = 0;
  signed long long *llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_1921_count = 0;
  unsigned long long llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_1922_count = 0;
  signed long long *llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_1923_count = 0;
  static  unsigned long long aesl_llvm_cbe_1924_count = 0;
  unsigned long long llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_1925_count = 0;
  static  unsigned long long aesl_llvm_cbe_1926_count = 0;
  static  unsigned long long aesl_llvm_cbe_1927_count = 0;
  static  unsigned long long aesl_llvm_cbe_1928_count = 0;
  static  unsigned long long aesl_llvm_cbe_1929_count = 0;
  static  unsigned long long aesl_llvm_cbe_1930_count = 0;
  static  unsigned long long aesl_llvm_cbe_1931_count = 0;
  static  unsigned long long aesl_llvm_cbe_1932_count = 0;
  static  unsigned long long aesl_llvm_cbe_1933_count = 0;
  static  unsigned long long aesl_llvm_cbe_1934_count = 0;
  static  unsigned long long aesl_llvm_cbe_1935_count = 0;
  static  unsigned long long aesl_llvm_cbe_1936_count = 0;
  static  unsigned long long aesl_llvm_cbe_1937_count = 0;
  static  unsigned long long aesl_llvm_cbe_1938_count = 0;
  static  unsigned long long aesl_llvm_cbe_1939_count = 0;
  static  unsigned long long aesl_llvm_cbe_1940_count = 0;
  static  unsigned long long aesl_llvm_cbe_1941_count = 0;
  static  unsigned long long aesl_llvm_cbe_1942_count = 0;
  static  unsigned long long aesl_llvm_cbe_1943_count = 0;
  static  unsigned long long aesl_llvm_cbe_1944_count = 0;
  static  unsigned long long aesl_llvm_cbe_1945_count = 0;
  static  unsigned long long aesl_llvm_cbe_1946_count = 0;
  static  unsigned long long aesl_llvm_cbe_1947_count = 0;
  static  unsigned long long aesl_llvm_cbe_1948_count = 0;
  static  unsigned long long aesl_llvm_cbe_1949_count = 0;
  static  unsigned long long aesl_llvm_cbe_1950_count = 0;
  static  unsigned long long aesl_llvm_cbe_1951_count = 0;
  static  unsigned long long aesl_llvm_cbe_1952_count = 0;
  static  unsigned long long aesl_llvm_cbe_1953_count = 0;
  static  unsigned long long aesl_llvm_cbe_1954_count = 0;
  static  unsigned long long aesl_llvm_cbe_1955_count = 0;
  static  unsigned long long aesl_llvm_cbe_1956_count = 0;
  static  unsigned long long aesl_llvm_cbe_1957_count = 0;
  static  unsigned long long aesl_llvm_cbe_1958_count = 0;
  static  unsigned long long aesl_llvm_cbe_1959_count = 0;
  static  unsigned long long aesl_llvm_cbe_1960_count = 0;
  static  unsigned long long aesl_llvm_cbe_1961_count = 0;
  static  unsigned long long aesl_llvm_cbe_1962_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond126_count = 0;
  static  unsigned long long aesl_llvm_cbe_1963_count = 0;
  static  unsigned long long aesl_llvm_cbe_1964_count = 0;
  unsigned long long llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_1965_count = 0;
  static  unsigned long long aesl_llvm_cbe_1966_count = 0;
  float *llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_1967_count = 0;
  float llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_1968_count = 0;
  static  unsigned long long aesl_llvm_cbe_1969_count = 0;
  float *llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_1970_count = 0;
  static  unsigned long long aesl_llvm_cbe_1971_count = 0;
  unsigned long long llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_1972_count = 0;
  static  unsigned long long aesl_llvm_cbe_1973_count = 0;
  static  unsigned long long aesl_llvm_cbe_1974_count = 0;
  static  unsigned long long aesl_llvm_cbe_1975_count = 0;
  static  unsigned long long aesl_llvm_cbe_1976_count = 0;
  static  unsigned long long aesl_llvm_cbe_1977_count = 0;
  static  unsigned long long aesl_llvm_cbe_1978_count = 0;
  static  unsigned long long aesl_llvm_cbe_1979_count = 0;
  static  unsigned long long aesl_llvm_cbe_1980_count = 0;
  static  unsigned long long aesl_llvm_cbe_1981_count = 0;
  static  unsigned long long aesl_llvm_cbe_1982_count = 0;
  static  unsigned long long aesl_llvm_cbe_1983_count = 0;
  static  unsigned long long aesl_llvm_cbe_1984_count = 0;
  static  unsigned long long aesl_llvm_cbe_1985_count = 0;
  static  unsigned long long aesl_llvm_cbe_1986_count = 0;
  static  unsigned long long aesl_llvm_cbe_1987_count = 0;
  static  unsigned long long aesl_llvm_cbe_1988_count = 0;
  static  unsigned long long aesl_llvm_cbe_1989_count = 0;
  static  unsigned long long aesl_llvm_cbe_1990_count = 0;
  static  unsigned long long aesl_llvm_cbe_1991_count = 0;
  static  unsigned long long aesl_llvm_cbe_1992_count = 0;
  static  unsigned long long aesl_llvm_cbe_1993_count = 0;
  static  unsigned long long aesl_llvm_cbe_1994_count = 0;
  static  unsigned long long aesl_llvm_cbe_1995_count = 0;
  static  unsigned long long aesl_llvm_cbe_1996_count = 0;
  static  unsigned long long aesl_llvm_cbe_1997_count = 0;
  static  unsigned long long aesl_llvm_cbe_1998_count = 0;
  static  unsigned long long aesl_llvm_cbe_1999_count = 0;
  static  unsigned long long aesl_llvm_cbe_2000_count = 0;
  static  unsigned long long aesl_llvm_cbe_2001_count = 0;
  static  unsigned long long aesl_llvm_cbe_2002_count = 0;
  static  unsigned long long aesl_llvm_cbe_2003_count = 0;
  static  unsigned long long aesl_llvm_cbe_2004_count = 0;
  static  unsigned long long aesl_llvm_cbe_2005_count = 0;
  static  unsigned long long aesl_llvm_cbe_2006_count = 0;
  static  unsigned long long aesl_llvm_cbe_2007_count = 0;
  static  unsigned long long aesl_llvm_cbe_2008_count = 0;
  static  unsigned long long aesl_llvm_cbe_2009_count = 0;
  static  unsigned long long aesl_llvm_cbe_2010_count = 0;
  static  unsigned long long aesl_llvm_cbe_2011_count = 0;
  static  unsigned long long aesl_llvm_cbe_2012_count = 0;
  static  unsigned long long aesl_llvm_cbe_2013_count = 0;
  static  unsigned long long aesl_llvm_cbe_2014_count = 0;
  static  unsigned long long aesl_llvm_cbe_2015_count = 0;
  static  unsigned long long aesl_llvm_cbe_2016_count = 0;
  static  unsigned long long aesl_llvm_cbe_2017_count = 0;
  static  unsigned long long aesl_llvm_cbe_2018_count = 0;
  static  unsigned long long aesl_llvm_cbe_2019_count = 0;
  static  unsigned long long aesl_llvm_cbe_2020_count = 0;
  static  unsigned long long aesl_llvm_cbe_2021_count = 0;
  static  unsigned long long aesl_llvm_cbe_2022_count = 0;
  static  unsigned long long aesl_llvm_cbe_2023_count = 0;
  static  unsigned long long aesl_llvm_cbe_2024_count = 0;
  static  unsigned long long aesl_llvm_cbe_2025_count = 0;
  static  unsigned long long aesl_llvm_cbe_2026_count = 0;
  static  unsigned long long aesl_llvm_cbe_2027_count = 0;
  static  unsigned long long aesl_llvm_cbe_2028_count = 0;
  static  unsigned long long aesl_llvm_cbe_2029_count = 0;
  static  unsigned long long aesl_llvm_cbe_2030_count = 0;
  unsigned long long llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_2031_count = 0;
  static  unsigned long long aesl_llvm_cbe_2032_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1063_count = 0;
  unsigned long long llvm_cbe_storemerge1063;
  unsigned long long llvm_cbe_storemerge1063__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2033_count = 0;
  static  unsigned long long aesl_llvm_cbe_2034_count = 0;
  static  unsigned long long aesl_llvm_cbe_2035_count = 0;
  static  unsigned long long aesl_llvm_cbe_2036_count = 0;
  static  unsigned long long aesl_llvm_cbe_2037_count = 0;
  static  unsigned long long aesl_llvm_cbe_2038_count = 0;
  static  unsigned long long aesl_llvm_cbe_2039_count = 0;
  static  unsigned long long aesl_llvm_cbe_2040_count = 0;
  static  unsigned long long aesl_llvm_cbe_2041_count = 0;
  static  unsigned long long aesl_llvm_cbe_2042_count = 0;
  static  unsigned long long aesl_llvm_cbe_2043_count = 0;
  static  unsigned long long aesl_llvm_cbe_2044_count = 0;
  static  unsigned long long aesl_llvm_cbe_2045_count = 0;
  static  unsigned long long aesl_llvm_cbe_2046_count = 0;
  static  unsigned long long aesl_llvm_cbe_2047_count = 0;
  static  unsigned long long aesl_llvm_cbe_2048_count = 0;
  static  unsigned long long aesl_llvm_cbe_2049_count = 0;
  static  unsigned long long aesl_llvm_cbe_2050_count = 0;
  static  unsigned long long aesl_llvm_cbe_2051_count = 0;
  static  unsigned long long aesl_llvm_cbe_2052_count = 0;
  static  unsigned long long aesl_llvm_cbe_2053_count = 0;
  static  unsigned long long aesl_llvm_cbe_2054_count = 0;
  static  unsigned long long aesl_llvm_cbe_2055_count = 0;
  static  unsigned long long aesl_llvm_cbe_2056_count = 0;
  static  unsigned long long aesl_llvm_cbe_2057_count = 0;
  static  unsigned long long aesl_llvm_cbe_2058_count = 0;
  static  unsigned long long aesl_llvm_cbe_2059_count = 0;
  static  unsigned long long aesl_llvm_cbe_2060_count = 0;
  static  unsigned long long aesl_llvm_cbe_2061_count = 0;
  static  unsigned long long aesl_llvm_cbe_2062_count = 0;
  static  unsigned long long aesl_llvm_cbe_2063_count = 0;
  static  unsigned long long aesl_llvm_cbe_2064_count = 0;
  static  unsigned long long aesl_llvm_cbe_2065_count = 0;
  static  unsigned long long aesl_llvm_cbe_2066_count = 0;
  static  unsigned long long aesl_llvm_cbe_2067_count = 0;
  static  unsigned long long aesl_llvm_cbe_2068_count = 0;
  static  unsigned long long aesl_llvm_cbe_2069_count = 0;
  static  unsigned long long aesl_llvm_cbe_2070_count = 0;
  static  unsigned long long aesl_llvm_cbe_2071_count = 0;
  static  unsigned long long aesl_llvm_cbe_2072_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2058_count = 0;
  unsigned long long llvm_cbe_storemerge2058;
  unsigned long long llvm_cbe_storemerge2058__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2073_count = 0;
  signed long long *llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_2074_count = 0;
  unsigned long long llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_2075_count = 0;
  signed long long *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_2076_count = 0;
  unsigned long long llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_2077_count = 0;
  signed long long *llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_2078_count = 0;
  static  unsigned long long aesl_llvm_cbe_2079_count = 0;
  unsigned long long llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_2080_count = 0;
  static  unsigned long long aesl_llvm_cbe_2081_count = 0;
  static  unsigned long long aesl_llvm_cbe_2082_count = 0;
  static  unsigned long long aesl_llvm_cbe_2083_count = 0;
  static  unsigned long long aesl_llvm_cbe_2084_count = 0;
  static  unsigned long long aesl_llvm_cbe_2085_count = 0;
  static  unsigned long long aesl_llvm_cbe_2086_count = 0;
  static  unsigned long long aesl_llvm_cbe_2087_count = 0;
  static  unsigned long long aesl_llvm_cbe_2088_count = 0;
  static  unsigned long long aesl_llvm_cbe_2089_count = 0;
  static  unsigned long long aesl_llvm_cbe_2090_count = 0;
  static  unsigned long long aesl_llvm_cbe_2091_count = 0;
  static  unsigned long long aesl_llvm_cbe_2092_count = 0;
  static  unsigned long long aesl_llvm_cbe_2093_count = 0;
  static  unsigned long long aesl_llvm_cbe_2094_count = 0;
  static  unsigned long long aesl_llvm_cbe_2095_count = 0;
  static  unsigned long long aesl_llvm_cbe_2096_count = 0;
  static  unsigned long long aesl_llvm_cbe_2097_count = 0;
  static  unsigned long long aesl_llvm_cbe_2098_count = 0;
  static  unsigned long long aesl_llvm_cbe_2099_count = 0;
  static  unsigned long long aesl_llvm_cbe_2100_count = 0;
  static  unsigned long long aesl_llvm_cbe_2101_count = 0;
  static  unsigned long long aesl_llvm_cbe_2102_count = 0;
  static  unsigned long long aesl_llvm_cbe_2103_count = 0;
  static  unsigned long long aesl_llvm_cbe_2104_count = 0;
  static  unsigned long long aesl_llvm_cbe_2105_count = 0;
  static  unsigned long long aesl_llvm_cbe_2106_count = 0;
  static  unsigned long long aesl_llvm_cbe_2107_count = 0;
  static  unsigned long long aesl_llvm_cbe_2108_count = 0;
  static  unsigned long long aesl_llvm_cbe_2109_count = 0;
  static  unsigned long long aesl_llvm_cbe_2110_count = 0;
  static  unsigned long long aesl_llvm_cbe_2111_count = 0;
  static  unsigned long long aesl_llvm_cbe_2112_count = 0;
  static  unsigned long long aesl_llvm_cbe_2113_count = 0;
  static  unsigned long long aesl_llvm_cbe_2114_count = 0;
  static  unsigned long long aesl_llvm_cbe_2115_count = 0;
  static  unsigned long long aesl_llvm_cbe_2116_count = 0;
  static  unsigned long long aesl_llvm_cbe_2117_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond125_count = 0;
  static  unsigned long long aesl_llvm_cbe_2118_count = 0;
  static  unsigned long long aesl_llvm_cbe_2119_count = 0;
  unsigned long long llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_2120_count = 0;
  static  unsigned long long aesl_llvm_cbe_2121_count = 0;
  float *llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_2122_count = 0;
  float llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_2123_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_sum29_count = 0;
  unsigned long long llvm_cbe__2e_sum29;
  static  unsigned long long aesl_llvm_cbe_2124_count = 0;
  float *llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_2125_count = 0;
  static  unsigned long long aesl_llvm_cbe_2126_count = 0;
  unsigned long long llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_2127_count = 0;
  static  unsigned long long aesl_llvm_cbe_2128_count = 0;
  static  unsigned long long aesl_llvm_cbe_2129_count = 0;
  static  unsigned long long aesl_llvm_cbe_2130_count = 0;
  static  unsigned long long aesl_llvm_cbe_2131_count = 0;
  static  unsigned long long aesl_llvm_cbe_2132_count = 0;
  static  unsigned long long aesl_llvm_cbe_2133_count = 0;
  static  unsigned long long aesl_llvm_cbe_2134_count = 0;
  static  unsigned long long aesl_llvm_cbe_2135_count = 0;
  static  unsigned long long aesl_llvm_cbe_2136_count = 0;
  static  unsigned long long aesl_llvm_cbe_2137_count = 0;
  static  unsigned long long aesl_llvm_cbe_2138_count = 0;
  static  unsigned long long aesl_llvm_cbe_2139_count = 0;
  static  unsigned long long aesl_llvm_cbe_2140_count = 0;
  static  unsigned long long aesl_llvm_cbe_2141_count = 0;
  static  unsigned long long aesl_llvm_cbe_2142_count = 0;
  static  unsigned long long aesl_llvm_cbe_2143_count = 0;
  static  unsigned long long aesl_llvm_cbe_2144_count = 0;
  static  unsigned long long aesl_llvm_cbe_2145_count = 0;
  static  unsigned long long aesl_llvm_cbe_2146_count = 0;
  static  unsigned long long aesl_llvm_cbe_2147_count = 0;
  static  unsigned long long aesl_llvm_cbe_2148_count = 0;
  static  unsigned long long aesl_llvm_cbe_2149_count = 0;
  static  unsigned long long aesl_llvm_cbe_2150_count = 0;
  static  unsigned long long aesl_llvm_cbe_2151_count = 0;
  static  unsigned long long aesl_llvm_cbe_2152_count = 0;
  static  unsigned long long aesl_llvm_cbe_2153_count = 0;
  static  unsigned long long aesl_llvm_cbe_2154_count = 0;
  static  unsigned long long aesl_llvm_cbe_2155_count = 0;
  static  unsigned long long aesl_llvm_cbe_2156_count = 0;
  static  unsigned long long aesl_llvm_cbe_2157_count = 0;
  static  unsigned long long aesl_llvm_cbe_2158_count = 0;
  static  unsigned long long aesl_llvm_cbe_2159_count = 0;
  static  unsigned long long aesl_llvm_cbe_2160_count = 0;
  static  unsigned long long aesl_llvm_cbe_2161_count = 0;
  static  unsigned long long aesl_llvm_cbe_2162_count = 0;
  static  unsigned long long aesl_llvm_cbe_2163_count = 0;
  static  unsigned long long aesl_llvm_cbe_2164_count = 0;
  static  unsigned long long aesl_llvm_cbe_2165_count = 0;
  static  unsigned long long aesl_llvm_cbe_2166_count = 0;
  static  unsigned long long aesl_llvm_cbe_2167_count = 0;
  static  unsigned long long aesl_llvm_cbe_2168_count = 0;
  static  unsigned long long aesl_llvm_cbe_2169_count = 0;
  static  unsigned long long aesl_llvm_cbe_2170_count = 0;
  static  unsigned long long aesl_llvm_cbe_2171_count = 0;
  static  unsigned long long aesl_llvm_cbe_2172_count = 0;
  static  unsigned long long aesl_llvm_cbe_2173_count = 0;
  static  unsigned long long aesl_llvm_cbe_2174_count = 0;
  static  unsigned long long aesl_llvm_cbe_2175_count = 0;
  static  unsigned long long aesl_llvm_cbe_2176_count = 0;
  static  unsigned long long aesl_llvm_cbe_2177_count = 0;
  static  unsigned long long aesl_llvm_cbe_2178_count = 0;
  static  unsigned long long aesl_llvm_cbe_2179_count = 0;
  static  unsigned long long aesl_llvm_cbe_2180_count = 0;
  static  unsigned long long aesl_llvm_cbe_2181_count = 0;
  static  unsigned long long aesl_llvm_cbe_2182_count = 0;
  static  unsigned long long aesl_llvm_cbe_2183_count = 0;
  static  unsigned long long aesl_llvm_cbe_2184_count = 0;
  static  unsigned long long aesl_llvm_cbe_2185_count = 0;
  unsigned long long llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_2186_count = 0;
  static  unsigned long long aesl_llvm_cbe_2187_count = 0;
  static  unsigned long long aesl_llvm_cbe_2188_count = 0;
  static  unsigned long long aesl_llvm_cbe_2189_count = 0;
  static  unsigned long long aesl_llvm_cbe_2190_count = 0;
  static  unsigned long long aesl_llvm_cbe_2191_count = 0;
  static  unsigned long long aesl_llvm_cbe_2192_count = 0;
  static  unsigned long long aesl_llvm_cbe_2193_count = 0;
  static  unsigned long long aesl_llvm_cbe_2194_count = 0;
  static  unsigned long long aesl_llvm_cbe_2195_count = 0;
  static  unsigned long long aesl_llvm_cbe_2196_count = 0;
  static  unsigned long long aesl_llvm_cbe_2197_count = 0;
  static  unsigned long long aesl_llvm_cbe_2198_count = 0;
  static  unsigned long long aesl_llvm_cbe_2199_count = 0;
  static  unsigned long long aesl_llvm_cbe_2200_count = 0;
  static  unsigned long long aesl_llvm_cbe_2201_count = 0;
  static  unsigned long long aesl_llvm_cbe_2202_count = 0;
  static  unsigned long long aesl_llvm_cbe_2203_count = 0;
  static  unsigned long long aesl_llvm_cbe_2204_count = 0;
  static  unsigned long long aesl_llvm_cbe_2205_count = 0;
  static  unsigned long long aesl_llvm_cbe_2206_count = 0;
  static  unsigned long long aesl_llvm_cbe_2207_count = 0;
  static  unsigned long long aesl_llvm_cbe_2208_count = 0;
  static  unsigned long long aesl_llvm_cbe_2209_count = 0;
  static  unsigned long long aesl_llvm_cbe_2210_count = 0;
  static  unsigned long long aesl_llvm_cbe_2211_count = 0;
  static  unsigned long long aesl_llvm_cbe_2212_count = 0;
  static  unsigned long long aesl_llvm_cbe_2213_count = 0;
  static  unsigned long long aesl_llvm_cbe_2214_count = 0;
  static  unsigned long long aesl_llvm_cbe_2215_count = 0;
  static  unsigned long long aesl_llvm_cbe_2216_count = 0;
  static  unsigned long long aesl_llvm_cbe_2217_count = 0;
  static  unsigned long long aesl_llvm_cbe_2218_count = 0;
  static  unsigned long long aesl_llvm_cbe_2219_count = 0;
  static  unsigned long long aesl_llvm_cbe_2220_count = 0;
  static  unsigned long long aesl_llvm_cbe_2221_count = 0;
  static  unsigned long long aesl_llvm_cbe_2222_count = 0;
  static  unsigned long long aesl_llvm_cbe_2223_count = 0;
  static  unsigned long long aesl_llvm_cbe_2224_count = 0;
  static  unsigned long long aesl_llvm_cbe_2225_count = 0;
  static  unsigned long long aesl_llvm_cbe_2226_count = 0;
  static  unsigned long long aesl_llvm_cbe_2227_count = 0;
  static  unsigned long long aesl_llvm_cbe_2228_count = 0;
  static  unsigned long long aesl_llvm_cbe_2229_count = 0;
  static  unsigned long long aesl_llvm_cbe_2230_count = 0;
  static  unsigned long long aesl_llvm_cbe_2231_count = 0;
  static  unsigned long long aesl_llvm_cbe_2232_count = 0;
  static  unsigned long long aesl_llvm_cbe_2233_count = 0;
  static  unsigned long long aesl_llvm_cbe_2234_count = 0;
  static  unsigned long long aesl_llvm_cbe_2235_count = 0;
  static  unsigned long long aesl_llvm_cbe_2236_count = 0;
  static  unsigned long long aesl_llvm_cbe_2237_count = 0;
  static  unsigned long long aesl_llvm_cbe_2238_count = 0;
  static  unsigned long long aesl_llvm_cbe_2239_count = 0;
  static  unsigned long long aesl_llvm_cbe_2240_count = 0;
  static  unsigned long long aesl_llvm_cbe_2241_count = 0;
  static  unsigned long long aesl_llvm_cbe_2242_count = 0;
  static  unsigned long long aesl_llvm_cbe_2243_count = 0;
  static  unsigned long long aesl_llvm_cbe_2244_count = 0;
  static  unsigned long long aesl_llvm_cbe_2245_count = 0;
  static  unsigned long long aesl_llvm_cbe_2246_count = 0;
  static  unsigned long long aesl_llvm_cbe_2247_count = 0;
  static  unsigned long long aesl_llvm_cbe_2248_count = 0;
  static  unsigned long long aesl_llvm_cbe_2249_count = 0;
  static  unsigned long long aesl_llvm_cbe_2250_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1457_count = 0;
  unsigned long long llvm_cbe_storemerge1457;
  unsigned long long llvm_cbe_storemerge1457__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2251_count = 0;
  static  unsigned long long aesl_llvm_cbe_2252_count = 0;
  static  unsigned long long aesl_llvm_cbe_2253_count = 0;
  static  unsigned long long aesl_llvm_cbe_2254_count = 0;
  static  unsigned long long aesl_llvm_cbe_2255_count = 0;
  static  unsigned long long aesl_llvm_cbe_2256_count = 0;
  static  unsigned long long aesl_llvm_cbe_2257_count = 0;
  static  unsigned long long aesl_llvm_cbe_2258_count = 0;
  static  unsigned long long aesl_llvm_cbe_2259_count = 0;
  static  unsigned long long aesl_llvm_cbe_2260_count = 0;
  static  unsigned long long aesl_llvm_cbe_2261_count = 0;
  static  unsigned long long aesl_llvm_cbe_2262_count = 0;
  static  unsigned long long aesl_llvm_cbe_2263_count = 0;
  static  unsigned long long aesl_llvm_cbe_2264_count = 0;
  static  unsigned long long aesl_llvm_cbe_2265_count = 0;
  static  unsigned long long aesl_llvm_cbe_2266_count = 0;
  static  unsigned long long aesl_llvm_cbe_2267_count = 0;
  static  unsigned long long aesl_llvm_cbe_2268_count = 0;
  static  unsigned long long aesl_llvm_cbe_2269_count = 0;
  static  unsigned long long aesl_llvm_cbe_2270_count = 0;
  static  unsigned long long aesl_llvm_cbe_2271_count = 0;
  static  unsigned long long aesl_llvm_cbe_2272_count = 0;
  static  unsigned long long aesl_llvm_cbe_2273_count = 0;
  static  unsigned long long aesl_llvm_cbe_2274_count = 0;
  static  unsigned long long aesl_llvm_cbe_2275_count = 0;
  static  unsigned long long aesl_llvm_cbe_2276_count = 0;
  static  unsigned long long aesl_llvm_cbe_2277_count = 0;
  static  unsigned long long aesl_llvm_cbe_2278_count = 0;
  static  unsigned long long aesl_llvm_cbe_2279_count = 0;
  static  unsigned long long aesl_llvm_cbe_2280_count = 0;
  static  unsigned long long aesl_llvm_cbe_2281_count = 0;
  static  unsigned long long aesl_llvm_cbe_2282_count = 0;
  static  unsigned long long aesl_llvm_cbe_2283_count = 0;
  static  unsigned long long aesl_llvm_cbe_2284_count = 0;
  static  unsigned long long aesl_llvm_cbe_2285_count = 0;
  static  unsigned long long aesl_llvm_cbe_2286_count = 0;
  static  unsigned long long aesl_llvm_cbe_2287_count = 0;
  static  unsigned long long aesl_llvm_cbe_2288_count = 0;
  static  unsigned long long aesl_llvm_cbe_2289_count = 0;
  unsigned long long llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_2290_count = 0;
  static  unsigned long long aesl_llvm_cbe_2291_count = 0;
  static  unsigned long long aesl_llvm_cbe_2292_count = 0;
  static  unsigned long long aesl_llvm_cbe_2293_count = 0;
  static  unsigned long long aesl_llvm_cbe_2294_count = 0;
  static  unsigned long long aesl_llvm_cbe_2295_count = 0;
  static  unsigned long long aesl_llvm_cbe_2296_count = 0;
  static  unsigned long long aesl_llvm_cbe_2297_count = 0;
  static  unsigned long long aesl_llvm_cbe_2298_count = 0;
  static  unsigned long long aesl_llvm_cbe_2299_count = 0;
  static  unsigned long long aesl_llvm_cbe_2300_count = 0;
  static  unsigned long long aesl_llvm_cbe_2301_count = 0;
  static  unsigned long long aesl_llvm_cbe_2302_count = 0;
  static  unsigned long long aesl_llvm_cbe_2303_count = 0;
  static  unsigned long long aesl_llvm_cbe_2304_count = 0;
  static  unsigned long long aesl_llvm_cbe_2305_count = 0;
  static  unsigned long long aesl_llvm_cbe_2306_count = 0;
  static  unsigned long long aesl_llvm_cbe_2307_count = 0;
  static  unsigned long long aesl_llvm_cbe_2308_count = 0;
  static  unsigned long long aesl_llvm_cbe_2309_count = 0;
  static  unsigned long long aesl_llvm_cbe_2310_count = 0;
  static  unsigned long long aesl_llvm_cbe_2311_count = 0;
  static  unsigned long long aesl_llvm_cbe_2312_count = 0;
  static  unsigned long long aesl_llvm_cbe_2313_count = 0;
  static  unsigned long long aesl_llvm_cbe_2314_count = 0;
  static  unsigned long long aesl_llvm_cbe_2315_count = 0;
  static  unsigned long long aesl_llvm_cbe_2316_count = 0;
  static  unsigned long long aesl_llvm_cbe_2317_count = 0;
  static  unsigned long long aesl_llvm_cbe_2318_count = 0;
  static  unsigned long long aesl_llvm_cbe_2319_count = 0;
  static  unsigned long long aesl_llvm_cbe_2320_count = 0;
  static  unsigned long long aesl_llvm_cbe_2321_count = 0;
  static  unsigned long long aesl_llvm_cbe_2322_count = 0;
  static  unsigned long long aesl_llvm_cbe_2323_count = 0;
  static  unsigned long long aesl_llvm_cbe_2324_count = 0;
  static  unsigned long long aesl_llvm_cbe_2325_count = 0;
  static  unsigned long long aesl_llvm_cbe_2326_count = 0;
  static  unsigned long long aesl_llvm_cbe_2327_count = 0;
  static  unsigned long long aesl_llvm_cbe_2328_count = 0;
  static  unsigned long long aesl_llvm_cbe_2329_count = 0;
  static  unsigned long long aesl_llvm_cbe_2330_count = 0;
  static  unsigned long long aesl_llvm_cbe_2331_count = 0;
  static  unsigned long long aesl_llvm_cbe_2332_count = 0;
  static  unsigned long long aesl_llvm_cbe_2333_count = 0;
  static  unsigned long long aesl_llvm_cbe_2334_count = 0;
  static  unsigned long long aesl_llvm_cbe_2335_count = 0;
  static  unsigned long long aesl_llvm_cbe_2336_count = 0;
  static  unsigned long long aesl_llvm_cbe_2337_count = 0;
  static  unsigned long long aesl_llvm_cbe_2338_count = 0;
  static  unsigned long long aesl_llvm_cbe_2339_count = 0;
  static  unsigned long long aesl_llvm_cbe_2340_count = 0;
  static  unsigned long long aesl_llvm_cbe_2341_count = 0;
  static  unsigned long long aesl_llvm_cbe_2342_count = 0;
  static  unsigned long long aesl_llvm_cbe_2343_count = 0;
  static  unsigned long long aesl_llvm_cbe_2344_count = 0;
  static  unsigned long long aesl_llvm_cbe_2345_count = 0;
  static  unsigned long long aesl_llvm_cbe_2346_count = 0;
  static  unsigned long long aesl_llvm_cbe_2347_count = 0;
  static  unsigned long long aesl_llvm_cbe_2348_count = 0;
  static  unsigned long long aesl_llvm_cbe_2349_count = 0;
  static  unsigned long long aesl_llvm_cbe_2350_count = 0;
  static  unsigned long long aesl_llvm_cbe_2351_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1852_count = 0;
  unsigned long long llvm_cbe_storemerge1852;
  unsigned long long llvm_cbe_storemerge1852__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2352_count = 0;
  float llvm_cbe_tmp__157;
  float llvm_cbe_tmp__157__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2353_count = 0;
  unsigned long long llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_2354_count = 0;
  float *llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_2355_count = 0;
  float llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_2356_count = 0;
  float llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_2357_count = 0;
  float llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_2358_count = 0;
  static  unsigned long long aesl_llvm_cbe_2359_count = 0;
  static  unsigned long long aesl_llvm_cbe_2360_count = 0;
  static  unsigned long long aesl_llvm_cbe_2361_count = 0;
  static  unsigned long long aesl_llvm_cbe_2362_count = 0;
  static  unsigned long long aesl_llvm_cbe_2363_count = 0;
  unsigned long long llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_2364_count = 0;
  static  unsigned long long aesl_llvm_cbe_2365_count = 0;
  static  unsigned long long aesl_llvm_cbe_2366_count = 0;
  static  unsigned long long aesl_llvm_cbe_2367_count = 0;
  static  unsigned long long aesl_llvm_cbe_2368_count = 0;
  static  unsigned long long aesl_llvm_cbe_2369_count = 0;
  static  unsigned long long aesl_llvm_cbe_2370_count = 0;
  static  unsigned long long aesl_llvm_cbe_2371_count = 0;
  static  unsigned long long aesl_llvm_cbe_2372_count = 0;
  static  unsigned long long aesl_llvm_cbe_2373_count = 0;
  static  unsigned long long aesl_llvm_cbe_2374_count = 0;
  static  unsigned long long aesl_llvm_cbe_2375_count = 0;
  static  unsigned long long aesl_llvm_cbe_2376_count = 0;
  static  unsigned long long aesl_llvm_cbe_2377_count = 0;
  static  unsigned long long aesl_llvm_cbe_2378_count = 0;
  static  unsigned long long aesl_llvm_cbe_2379_count = 0;
  static  unsigned long long aesl_llvm_cbe_2380_count = 0;
  static  unsigned long long aesl_llvm_cbe_2381_count = 0;
  static  unsigned long long aesl_llvm_cbe_2382_count = 0;
  static  unsigned long long aesl_llvm_cbe_2383_count = 0;
  static  unsigned long long aesl_llvm_cbe_2384_count = 0;
  static  unsigned long long aesl_llvm_cbe_2385_count = 0;
  static  unsigned long long aesl_llvm_cbe_2386_count = 0;
  static  unsigned long long aesl_llvm_cbe_2387_count = 0;
  static  unsigned long long aesl_llvm_cbe_2388_count = 0;
  static  unsigned long long aesl_llvm_cbe_2389_count = 0;
  static  unsigned long long aesl_llvm_cbe_2390_count = 0;
  static  unsigned long long aesl_llvm_cbe_2391_count = 0;
  static  unsigned long long aesl_llvm_cbe_2392_count = 0;
  static  unsigned long long aesl_llvm_cbe_2393_count = 0;
  static  unsigned long long aesl_llvm_cbe_2394_count = 0;
  static  unsigned long long aesl_llvm_cbe_2395_count = 0;
  static  unsigned long long aesl_llvm_cbe_2396_count = 0;
  static  unsigned long long aesl_llvm_cbe_2397_count = 0;
  static  unsigned long long aesl_llvm_cbe_2398_count = 0;
  static  unsigned long long aesl_llvm_cbe_2399_count = 0;
  static  unsigned long long aesl_llvm_cbe_2400_count = 0;
  static  unsigned long long aesl_llvm_cbe_2401_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond124_count = 0;
  static  unsigned long long aesl_llvm_cbe_2402_count = 0;
  static  unsigned long long aesl_llvm_cbe_2403_count = 0;
  float llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_2404_count = 0;
  float llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_2405_count = 0;
  static  unsigned long long aesl_llvm_cbe_2406_count = 0;
  static  unsigned long long aesl_llvm_cbe_2407_count = 0;
  static  unsigned long long aesl_llvm_cbe_2408_count = 0;
  static  unsigned long long aesl_llvm_cbe_2409_count = 0;
  static  unsigned long long aesl_llvm_cbe_2410_count = 0;
  static  unsigned long long aesl_llvm_cbe_2411_count = 0;
  static  unsigned long long aesl_llvm_cbe_2412_count = 0;
  static  unsigned long long aesl_llvm_cbe_2413_count = 0;
  static  unsigned long long aesl_llvm_cbe_2414_count = 0;
  static  unsigned long long aesl_llvm_cbe_2415_count = 0;
  static  unsigned long long aesl_llvm_cbe_2416_count = 0;
  static  unsigned long long aesl_llvm_cbe_2417_count = 0;
  static  unsigned long long aesl_llvm_cbe_2418_count = 0;
  static  unsigned long long aesl_llvm_cbe_2419_count = 0;
  static  unsigned long long aesl_llvm_cbe_2420_count = 0;
  static  unsigned long long aesl_llvm_cbe_2421_count = 0;
  static  unsigned long long aesl_llvm_cbe_2422_count = 0;
  static  unsigned long long aesl_llvm_cbe_2423_count = 0;
  static  unsigned long long aesl_llvm_cbe_2424_count = 0;
  static  unsigned long long aesl_llvm_cbe_2425_count = 0;
  static  unsigned long long aesl_llvm_cbe_2426_count = 0;
  static  unsigned long long aesl_llvm_cbe_2427_count = 0;
  static  unsigned long long aesl_llvm_cbe_2428_count = 0;
  static  unsigned long long aesl_llvm_cbe_2429_count = 0;
  static  unsigned long long aesl_llvm_cbe_2430_count = 0;
  static  unsigned long long aesl_llvm_cbe_2431_count = 0;
  static  unsigned long long aesl_llvm_cbe_2432_count = 0;
  static  unsigned long long aesl_llvm_cbe_2433_count = 0;
  static  unsigned long long aesl_llvm_cbe_2434_count = 0;
  static  unsigned long long aesl_llvm_cbe_2435_count = 0;
  static  unsigned long long aesl_llvm_cbe_2436_count = 0;
  static  unsigned long long aesl_llvm_cbe_2437_count = 0;
  static  unsigned long long aesl_llvm_cbe_2438_count = 0;
  static  unsigned long long aesl_llvm_cbe_2439_count = 0;
  static  unsigned long long aesl_llvm_cbe_2440_count = 0;
  static  unsigned long long aesl_llvm_cbe_2441_count = 0;
  static  unsigned long long aesl_llvm_cbe_2442_count = 0;
  static  unsigned long long aesl_llvm_cbe_2443_count = 0;
  static  unsigned long long aesl_llvm_cbe_2444_count = 0;
  static  unsigned long long aesl_llvm_cbe_2445_count = 0;
  static  unsigned long long aesl_llvm_cbe_2446_count = 0;
  static  unsigned long long aesl_llvm_cbe_2447_count = 0;
  static  unsigned long long aesl_llvm_cbe_2448_count = 0;
  static  unsigned long long aesl_llvm_cbe_2449_count = 0;
  static  unsigned long long aesl_llvm_cbe_2450_count = 0;
  unsigned long long llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_2451_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1946_count = 0;
  unsigned long long llvm_cbe_storemerge1946;
  unsigned long long llvm_cbe_storemerge1946__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2452_count = 0;
  unsigned long long llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_2453_count = 0;
  float *llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_2454_count = 0;
  float llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_2455_count = 0;
  float llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_2456_count = 0;
  static  unsigned long long aesl_llvm_cbe_2457_count = 0;
  unsigned long long llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_2458_count = 0;
  static  unsigned long long aesl_llvm_cbe_2459_count = 0;
  static  unsigned long long aesl_llvm_cbe_2460_count = 0;
  static  unsigned long long aesl_llvm_cbe_2461_count = 0;
  static  unsigned long long aesl_llvm_cbe_2462_count = 0;
  static  unsigned long long aesl_llvm_cbe_2463_count = 0;
  static  unsigned long long aesl_llvm_cbe_2464_count = 0;
  static  unsigned long long aesl_llvm_cbe_2465_count = 0;
  static  unsigned long long aesl_llvm_cbe_2466_count = 0;
  static  unsigned long long aesl_llvm_cbe_2467_count = 0;
  static  unsigned long long aesl_llvm_cbe_2468_count = 0;
  static  unsigned long long aesl_llvm_cbe_2469_count = 0;
  static  unsigned long long aesl_llvm_cbe_2470_count = 0;
  static  unsigned long long aesl_llvm_cbe_2471_count = 0;
  static  unsigned long long aesl_llvm_cbe_2472_count = 0;
  static  unsigned long long aesl_llvm_cbe_2473_count = 0;
  static  unsigned long long aesl_llvm_cbe_2474_count = 0;
  static  unsigned long long aesl_llvm_cbe_2475_count = 0;
  static  unsigned long long aesl_llvm_cbe_2476_count = 0;
  static  unsigned long long aesl_llvm_cbe_2477_count = 0;
  static  unsigned long long aesl_llvm_cbe_2478_count = 0;
  static  unsigned long long aesl_llvm_cbe_2479_count = 0;
  static  unsigned long long aesl_llvm_cbe_2480_count = 0;
  static  unsigned long long aesl_llvm_cbe_2481_count = 0;
  static  unsigned long long aesl_llvm_cbe_2482_count = 0;
  static  unsigned long long aesl_llvm_cbe_2483_count = 0;
  static  unsigned long long aesl_llvm_cbe_2484_count = 0;
  static  unsigned long long aesl_llvm_cbe_2485_count = 0;
  static  unsigned long long aesl_llvm_cbe_2486_count = 0;
  static  unsigned long long aesl_llvm_cbe_2487_count = 0;
  static  unsigned long long aesl_llvm_cbe_2488_count = 0;
  static  unsigned long long aesl_llvm_cbe_2489_count = 0;
  static  unsigned long long aesl_llvm_cbe_2490_count = 0;
  static  unsigned long long aesl_llvm_cbe_2491_count = 0;
  static  unsigned long long aesl_llvm_cbe_2492_count = 0;
  static  unsigned long long aesl_llvm_cbe_2493_count = 0;
  static  unsigned long long aesl_llvm_cbe_2494_count = 0;
  static  unsigned long long aesl_llvm_cbe_2495_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond122_count = 0;
  static  unsigned long long aesl_llvm_cbe_2496_count = 0;
  static  unsigned long long aesl_llvm_cbe_2497_count = 0;
  unsigned long long llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_2498_count = 0;
  static  unsigned long long aesl_llvm_cbe_2499_count = 0;
  static  unsigned long long aesl_llvm_cbe_2500_count = 0;
  static  unsigned long long aesl_llvm_cbe_2501_count = 0;
  static  unsigned long long aesl_llvm_cbe_2502_count = 0;
  static  unsigned long long aesl_llvm_cbe_2503_count = 0;
  static  unsigned long long aesl_llvm_cbe_2504_count = 0;
  static  unsigned long long aesl_llvm_cbe_2505_count = 0;
  static  unsigned long long aesl_llvm_cbe_2506_count = 0;
  static  unsigned long long aesl_llvm_cbe_2507_count = 0;
  static  unsigned long long aesl_llvm_cbe_2508_count = 0;
  static  unsigned long long aesl_llvm_cbe_2509_count = 0;
  static  unsigned long long aesl_llvm_cbe_2510_count = 0;
  static  unsigned long long aesl_llvm_cbe_2511_count = 0;
  static  unsigned long long aesl_llvm_cbe_2512_count = 0;
  static  unsigned long long aesl_llvm_cbe_2513_count = 0;
  static  unsigned long long aesl_llvm_cbe_2514_count = 0;
  static  unsigned long long aesl_llvm_cbe_2515_count = 0;
  static  unsigned long long aesl_llvm_cbe_2516_count = 0;
  static  unsigned long long aesl_llvm_cbe_2517_count = 0;
  static  unsigned long long aesl_llvm_cbe_2518_count = 0;
  static  unsigned long long aesl_llvm_cbe_2519_count = 0;
  static  unsigned long long aesl_llvm_cbe_2520_count = 0;
  static  unsigned long long aesl_llvm_cbe_2521_count = 0;
  static  unsigned long long aesl_llvm_cbe_2522_count = 0;
  static  unsigned long long aesl_llvm_cbe_2523_count = 0;
  static  unsigned long long aesl_llvm_cbe_2524_count = 0;
  static  unsigned long long aesl_llvm_cbe_2525_count = 0;
  static  unsigned long long aesl_llvm_cbe_2526_count = 0;
  static  unsigned long long aesl_llvm_cbe_2527_count = 0;
  static  unsigned long long aesl_llvm_cbe_2528_count = 0;
  static  unsigned long long aesl_llvm_cbe_2529_count = 0;
  static  unsigned long long aesl_llvm_cbe_2530_count = 0;
  static  unsigned long long aesl_llvm_cbe_2531_count = 0;
  static  unsigned long long aesl_llvm_cbe_2532_count = 0;
  static  unsigned long long aesl_llvm_cbe_2533_count = 0;
  static  unsigned long long aesl_llvm_cbe_2534_count = 0;
  static  unsigned long long aesl_llvm_cbe_2535_count = 0;
  static  unsigned long long aesl_llvm_cbe_2536_count = 0;
  static  unsigned long long aesl_llvm_cbe_2537_count = 0;
  static  unsigned long long aesl_llvm_cbe_2538_count = 0;
  static  unsigned long long aesl_llvm_cbe_2539_count = 0;
  static  unsigned long long aesl_llvm_cbe_2540_count = 0;
  static  unsigned long long aesl_llvm_cbe_2541_count = 0;
  static  unsigned long long aesl_llvm_cbe_2542_count = 0;
  static  unsigned long long aesl_llvm_cbe_2543_count = 0;
  static  unsigned long long aesl_llvm_cbe_2544_count = 0;
  static  unsigned long long aesl_llvm_cbe_2545_count = 0;
  static  unsigned long long aesl_llvm_cbe_2546_count = 0;
  static  unsigned long long aesl_llvm_cbe_2547_count = 0;
  static  unsigned long long aesl_llvm_cbe_2548_count = 0;
  static  unsigned long long aesl_llvm_cbe_2549_count = 0;
  static  unsigned long long aesl_llvm_cbe_2550_count = 0;
  static  unsigned long long aesl_llvm_cbe_2551_count = 0;
  static  unsigned long long aesl_llvm_cbe_2552_count = 0;
  static  unsigned long long aesl_llvm_cbe_2553_count = 0;
  static  unsigned long long aesl_llvm_cbe_2554_count = 0;
  static  unsigned long long aesl_llvm_cbe_2555_count = 0;
  static  unsigned long long aesl_llvm_cbe_2556_count = 0;
  static  unsigned long long aesl_llvm_cbe_2557_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1545_count = 0;
  unsigned long long llvm_cbe_storemerge1545;
  unsigned long long llvm_cbe_storemerge1545__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2558_count = 0;
  static  unsigned long long aesl_llvm_cbe_2559_count = 0;
  static  unsigned long long aesl_llvm_cbe_2560_count = 0;
  static  unsigned long long aesl_llvm_cbe_2561_count = 0;
  static  unsigned long long aesl_llvm_cbe_2562_count = 0;
  static  unsigned long long aesl_llvm_cbe_2563_count = 0;
  static  unsigned long long aesl_llvm_cbe_2564_count = 0;
  static  unsigned long long aesl_llvm_cbe_2565_count = 0;
  static  unsigned long long aesl_llvm_cbe_2566_count = 0;
  static  unsigned long long aesl_llvm_cbe_2567_count = 0;
  static  unsigned long long aesl_llvm_cbe_2568_count = 0;
  static  unsigned long long aesl_llvm_cbe_2569_count = 0;
  static  unsigned long long aesl_llvm_cbe_2570_count = 0;
  static  unsigned long long aesl_llvm_cbe_2571_count = 0;
  static  unsigned long long aesl_llvm_cbe_2572_count = 0;
  static  unsigned long long aesl_llvm_cbe_2573_count = 0;
  static  unsigned long long aesl_llvm_cbe_2574_count = 0;
  static  unsigned long long aesl_llvm_cbe_2575_count = 0;
  static  unsigned long long aesl_llvm_cbe_2576_count = 0;
  static  unsigned long long aesl_llvm_cbe_2577_count = 0;
  static  unsigned long long aesl_llvm_cbe_2578_count = 0;
  static  unsigned long long aesl_llvm_cbe_2579_count = 0;
  static  unsigned long long aesl_llvm_cbe_2580_count = 0;
  static  unsigned long long aesl_llvm_cbe_2581_count = 0;
  static  unsigned long long aesl_llvm_cbe_2582_count = 0;
  static  unsigned long long aesl_llvm_cbe_2583_count = 0;
  static  unsigned long long aesl_llvm_cbe_2584_count = 0;
  static  unsigned long long aesl_llvm_cbe_2585_count = 0;
  static  unsigned long long aesl_llvm_cbe_2586_count = 0;
  static  unsigned long long aesl_llvm_cbe_2587_count = 0;
  static  unsigned long long aesl_llvm_cbe_2588_count = 0;
  static  unsigned long long aesl_llvm_cbe_2589_count = 0;
  static  unsigned long long aesl_llvm_cbe_2590_count = 0;
  static  unsigned long long aesl_llvm_cbe_2591_count = 0;
  static  unsigned long long aesl_llvm_cbe_2592_count = 0;
  static  unsigned long long aesl_llvm_cbe_2593_count = 0;
  static  unsigned long long aesl_llvm_cbe_2594_count = 0;
  static  unsigned long long aesl_llvm_cbe_2595_count = 0;
  static  unsigned long long aesl_llvm_cbe_2596_count = 0;
  unsigned long long llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_2597_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1641_count = 0;
  unsigned long long llvm_cbe_storemerge1641;
  unsigned long long llvm_cbe_storemerge1641__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2598_count = 0;
  float llvm_cbe_tmp__174;
  float llvm_cbe_tmp__174__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2599_count = 0;
  unsigned long long llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe__2e_sum28_count = 0;
  unsigned long long llvm_cbe__2e_sum28;
  static  unsigned long long aesl_llvm_cbe_2600_count = 0;
  float *llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_2601_count = 0;
  float llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_2602_count = 0;
  float llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_2603_count = 0;
  float llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_2604_count = 0;
  static  unsigned long long aesl_llvm_cbe_2605_count = 0;
  static  unsigned long long aesl_llvm_cbe_2606_count = 0;
  static  unsigned long long aesl_llvm_cbe_2607_count = 0;
  static  unsigned long long aesl_llvm_cbe_2608_count = 0;
  static  unsigned long long aesl_llvm_cbe_2609_count = 0;
  unsigned long long llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_2610_count = 0;
  static  unsigned long long aesl_llvm_cbe_2611_count = 0;
  static  unsigned long long aesl_llvm_cbe_2612_count = 0;
  static  unsigned long long aesl_llvm_cbe_2613_count = 0;
  static  unsigned long long aesl_llvm_cbe_2614_count = 0;
  static  unsigned long long aesl_llvm_cbe_2615_count = 0;
  static  unsigned long long aesl_llvm_cbe_2616_count = 0;
  static  unsigned long long aesl_llvm_cbe_2617_count = 0;
  static  unsigned long long aesl_llvm_cbe_2618_count = 0;
  static  unsigned long long aesl_llvm_cbe_2619_count = 0;
  static  unsigned long long aesl_llvm_cbe_2620_count = 0;
  static  unsigned long long aesl_llvm_cbe_2621_count = 0;
  static  unsigned long long aesl_llvm_cbe_2622_count = 0;
  static  unsigned long long aesl_llvm_cbe_2623_count = 0;
  static  unsigned long long aesl_llvm_cbe_2624_count = 0;
  static  unsigned long long aesl_llvm_cbe_2625_count = 0;
  static  unsigned long long aesl_llvm_cbe_2626_count = 0;
  static  unsigned long long aesl_llvm_cbe_2627_count = 0;
  static  unsigned long long aesl_llvm_cbe_2628_count = 0;
  static  unsigned long long aesl_llvm_cbe_2629_count = 0;
  static  unsigned long long aesl_llvm_cbe_2630_count = 0;
  static  unsigned long long aesl_llvm_cbe_2631_count = 0;
  static  unsigned long long aesl_llvm_cbe_2632_count = 0;
  static  unsigned long long aesl_llvm_cbe_2633_count = 0;
  static  unsigned long long aesl_llvm_cbe_2634_count = 0;
  static  unsigned long long aesl_llvm_cbe_2635_count = 0;
  static  unsigned long long aesl_llvm_cbe_2636_count = 0;
  static  unsigned long long aesl_llvm_cbe_2637_count = 0;
  static  unsigned long long aesl_llvm_cbe_2638_count = 0;
  static  unsigned long long aesl_llvm_cbe_2639_count = 0;
  static  unsigned long long aesl_llvm_cbe_2640_count = 0;
  static  unsigned long long aesl_llvm_cbe_2641_count = 0;
  static  unsigned long long aesl_llvm_cbe_2642_count = 0;
  static  unsigned long long aesl_llvm_cbe_2643_count = 0;
  static  unsigned long long aesl_llvm_cbe_2644_count = 0;
  static  unsigned long long aesl_llvm_cbe_2645_count = 0;
  static  unsigned long long aesl_llvm_cbe_2646_count = 0;
  static  unsigned long long aesl_llvm_cbe_2647_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond121_count = 0;
  static  unsigned long long aesl_llvm_cbe_2648_count = 0;
  static  unsigned long long aesl_llvm_cbe_2649_count = 0;
  float llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_2650_count = 0;
  float llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_2651_count = 0;
  static  unsigned long long aesl_llvm_cbe_2652_count = 0;
  static  unsigned long long aesl_llvm_cbe_2653_count = 0;
  static  unsigned long long aesl_llvm_cbe_2654_count = 0;
  static  unsigned long long aesl_llvm_cbe_2655_count = 0;
  static  unsigned long long aesl_llvm_cbe_2656_count = 0;
  static  unsigned long long aesl_llvm_cbe_2657_count = 0;
  static  unsigned long long aesl_llvm_cbe_2658_count = 0;
  static  unsigned long long aesl_llvm_cbe_2659_count = 0;
  static  unsigned long long aesl_llvm_cbe_2660_count = 0;
  static  unsigned long long aesl_llvm_cbe_2661_count = 0;
  static  unsigned long long aesl_llvm_cbe_2662_count = 0;
  static  unsigned long long aesl_llvm_cbe_2663_count = 0;
  static  unsigned long long aesl_llvm_cbe_2664_count = 0;
  static  unsigned long long aesl_llvm_cbe_2665_count = 0;
  static  unsigned long long aesl_llvm_cbe_2666_count = 0;
  static  unsigned long long aesl_llvm_cbe_2667_count = 0;
  static  unsigned long long aesl_llvm_cbe_2668_count = 0;
  static  unsigned long long aesl_llvm_cbe_2669_count = 0;
  static  unsigned long long aesl_llvm_cbe_2670_count = 0;
  static  unsigned long long aesl_llvm_cbe_2671_count = 0;
  static  unsigned long long aesl_llvm_cbe_2672_count = 0;
  static  unsigned long long aesl_llvm_cbe_2673_count = 0;
  static  unsigned long long aesl_llvm_cbe_2674_count = 0;
  static  unsigned long long aesl_llvm_cbe_2675_count = 0;
  static  unsigned long long aesl_llvm_cbe_2676_count = 0;
  static  unsigned long long aesl_llvm_cbe_2677_count = 0;
  static  unsigned long long aesl_llvm_cbe_2678_count = 0;
  static  unsigned long long aesl_llvm_cbe_2679_count = 0;
  static  unsigned long long aesl_llvm_cbe_2680_count = 0;
  static  unsigned long long aesl_llvm_cbe_2681_count = 0;
  static  unsigned long long aesl_llvm_cbe_2682_count = 0;
  static  unsigned long long aesl_llvm_cbe_2683_count = 0;
  static  unsigned long long aesl_llvm_cbe_2684_count = 0;
  static  unsigned long long aesl_llvm_cbe_2685_count = 0;
  static  unsigned long long aesl_llvm_cbe_2686_count = 0;
  static  unsigned long long aesl_llvm_cbe_2687_count = 0;
  static  unsigned long long aesl_llvm_cbe_2688_count = 0;
  static  unsigned long long aesl_llvm_cbe_2689_count = 0;
  static  unsigned long long aesl_llvm_cbe_2690_count = 0;
  static  unsigned long long aesl_llvm_cbe_2691_count = 0;
  static  unsigned long long aesl_llvm_cbe_2692_count = 0;
  static  unsigned long long aesl_llvm_cbe_2693_count = 0;
  static  unsigned long long aesl_llvm_cbe_2694_count = 0;
  static  unsigned long long aesl_llvm_cbe_2695_count = 0;
  static  unsigned long long aesl_llvm_cbe_2696_count = 0;
  unsigned long long llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_2697_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1736_count = 0;
  unsigned long long llvm_cbe_storemerge1736;
  unsigned long long llvm_cbe_storemerge1736__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2698_count = 0;
  unsigned long long llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe__2e_sum27_count = 0;
  unsigned long long llvm_cbe__2e_sum27;
  static  unsigned long long aesl_llvm_cbe_2699_count = 0;
  float *llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_2700_count = 0;
  float llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_2701_count = 0;
  float llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_2702_count = 0;
  static  unsigned long long aesl_llvm_cbe_2703_count = 0;
  unsigned long long llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_2704_count = 0;
  static  unsigned long long aesl_llvm_cbe_2705_count = 0;
  static  unsigned long long aesl_llvm_cbe_2706_count = 0;
  static  unsigned long long aesl_llvm_cbe_2707_count = 0;
  static  unsigned long long aesl_llvm_cbe_2708_count = 0;
  static  unsigned long long aesl_llvm_cbe_2709_count = 0;
  static  unsigned long long aesl_llvm_cbe_2710_count = 0;
  static  unsigned long long aesl_llvm_cbe_2711_count = 0;
  static  unsigned long long aesl_llvm_cbe_2712_count = 0;
  static  unsigned long long aesl_llvm_cbe_2713_count = 0;
  static  unsigned long long aesl_llvm_cbe_2714_count = 0;
  static  unsigned long long aesl_llvm_cbe_2715_count = 0;
  static  unsigned long long aesl_llvm_cbe_2716_count = 0;
  static  unsigned long long aesl_llvm_cbe_2717_count = 0;
  static  unsigned long long aesl_llvm_cbe_2718_count = 0;
  static  unsigned long long aesl_llvm_cbe_2719_count = 0;
  static  unsigned long long aesl_llvm_cbe_2720_count = 0;
  static  unsigned long long aesl_llvm_cbe_2721_count = 0;
  static  unsigned long long aesl_llvm_cbe_2722_count = 0;
  static  unsigned long long aesl_llvm_cbe_2723_count = 0;
  static  unsigned long long aesl_llvm_cbe_2724_count = 0;
  static  unsigned long long aesl_llvm_cbe_2725_count = 0;
  static  unsigned long long aesl_llvm_cbe_2726_count = 0;
  static  unsigned long long aesl_llvm_cbe_2727_count = 0;
  static  unsigned long long aesl_llvm_cbe_2728_count = 0;
  static  unsigned long long aesl_llvm_cbe_2729_count = 0;
  static  unsigned long long aesl_llvm_cbe_2730_count = 0;
  static  unsigned long long aesl_llvm_cbe_2731_count = 0;
  static  unsigned long long aesl_llvm_cbe_2732_count = 0;
  static  unsigned long long aesl_llvm_cbe_2733_count = 0;
  static  unsigned long long aesl_llvm_cbe_2734_count = 0;
  static  unsigned long long aesl_llvm_cbe_2735_count = 0;
  static  unsigned long long aesl_llvm_cbe_2736_count = 0;
  static  unsigned long long aesl_llvm_cbe_2737_count = 0;
  static  unsigned long long aesl_llvm_cbe_2738_count = 0;
  static  unsigned long long aesl_llvm_cbe_2739_count = 0;
  static  unsigned long long aesl_llvm_cbe_2740_count = 0;
  static  unsigned long long aesl_llvm_cbe_2741_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond119_count = 0;
  static  unsigned long long aesl_llvm_cbe_2742_count = 0;
  static  unsigned long long aesl_llvm_cbe_2743_count = 0;
  unsigned long long llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_2744_count = 0;
  static  unsigned long long aesl_llvm_cbe_2745_count = 0;
  static  unsigned long long aesl_llvm_cbe_2746_count = 0;
  static  unsigned long long aesl_llvm_cbe_2747_count = 0;
  static  unsigned long long aesl_llvm_cbe_2748_count = 0;
  static  unsigned long long aesl_llvm_cbe_2749_count = 0;
  static  unsigned long long aesl_llvm_cbe_2750_count = 0;
  static  unsigned long long aesl_llvm_cbe_2751_count = 0;
  static  unsigned long long aesl_llvm_cbe_2752_count = 0;
  static  unsigned long long aesl_llvm_cbe_2753_count = 0;
  static  unsigned long long aesl_llvm_cbe_2754_count = 0;
  static  unsigned long long aesl_llvm_cbe_2755_count = 0;
  static  unsigned long long aesl_llvm_cbe_2756_count = 0;
  static  unsigned long long aesl_llvm_cbe_2757_count = 0;
  static  unsigned long long aesl_llvm_cbe_2758_count = 0;
  static  unsigned long long aesl_llvm_cbe_2759_count = 0;
  static  unsigned long long aesl_llvm_cbe_2760_count = 0;
  static  unsigned long long aesl_llvm_cbe_2761_count = 0;
  static  unsigned long long aesl_llvm_cbe_2762_count = 0;
  static  unsigned long long aesl_llvm_cbe_2763_count = 0;
  static  unsigned long long aesl_llvm_cbe_2764_count = 0;
  static  unsigned long long aesl_llvm_cbe_2765_count = 0;
  static  unsigned long long aesl_llvm_cbe_2766_count = 0;
  static  unsigned long long aesl_llvm_cbe_2767_count = 0;
  static  unsigned long long aesl_llvm_cbe_2768_count = 0;
  static  unsigned long long aesl_llvm_cbe_2769_count = 0;
  static  unsigned long long aesl_llvm_cbe_2770_count = 0;
  static  unsigned long long aesl_llvm_cbe_2771_count = 0;
  static  unsigned long long aesl_llvm_cbe_2772_count = 0;
  static  unsigned long long aesl_llvm_cbe_2773_count = 0;
  static  unsigned long long aesl_llvm_cbe_2774_count = 0;
  static  unsigned long long aesl_llvm_cbe_2775_count = 0;
  static  unsigned long long aesl_llvm_cbe_2776_count = 0;
  static  unsigned long long aesl_llvm_cbe_2777_count = 0;
  static  unsigned long long aesl_llvm_cbe_2778_count = 0;
  static  unsigned long long aesl_llvm_cbe_2779_count = 0;
  static  unsigned long long aesl_llvm_cbe_2780_count = 0;
  static  unsigned long long aesl_llvm_cbe_2781_count = 0;
  static  unsigned long long aesl_llvm_cbe_2782_count = 0;
  static  unsigned long long aesl_llvm_cbe_2783_count = 0;
  static  unsigned long long aesl_llvm_cbe_2784_count = 0;
  static  unsigned long long aesl_llvm_cbe_2785_count = 0;
  static  unsigned long long aesl_llvm_cbe_2786_count = 0;
  static  unsigned long long aesl_llvm_cbe_2787_count = 0;
  static  unsigned long long aesl_llvm_cbe_2788_count = 0;
  static  unsigned long long aesl_llvm_cbe_2789_count = 0;
  static  unsigned long long aesl_llvm_cbe_2790_count = 0;
  static  unsigned long long aesl_llvm_cbe_2791_count = 0;
  static  unsigned long long aesl_llvm_cbe_2792_count = 0;
  static  unsigned long long aesl_llvm_cbe_2793_count = 0;
  static  unsigned long long aesl_llvm_cbe_2794_count = 0;
  static  unsigned long long aesl_llvm_cbe_2795_count = 0;
  static  unsigned long long aesl_llvm_cbe_2796_count = 0;
  static  unsigned long long aesl_llvm_cbe_2797_count = 0;
  static  unsigned long long aesl_llvm_cbe_2798_count = 0;
  static  unsigned long long aesl_llvm_cbe_2799_count = 0;
  static  unsigned long long aesl_llvm_cbe_2800_count = 0;
  static  unsigned long long aesl_llvm_cbe_2801_count = 0;
  static  unsigned long long aesl_llvm_cbe_2802_count = 0;
  static  unsigned long long aesl_llvm_cbe_2803_count = 0;
  static  unsigned long long aesl_llvm_cbe_2804_count = 0;
  static  unsigned long long aesl_llvm_cbe_2805_count = 0;
  static  unsigned long long aesl_llvm_cbe_2806_count = 0;
  static  unsigned long long aesl_llvm_cbe_2807_count = 0;
  static  unsigned long long aesl_llvm_cbe_2808_count = 0;
  static  unsigned long long aesl_llvm_cbe_2809_count = 0;
  static  unsigned long long aesl_llvm_cbe_2810_count = 0;
  static  unsigned long long aesl_llvm_cbe_2811_count = 0;
  static  unsigned long long aesl_llvm_cbe_2812_count = 0;
  static  unsigned long long aesl_llvm_cbe_2813_count = 0;
  static  unsigned long long aesl_llvm_cbe_2814_count = 0;
  static  unsigned long long aesl_llvm_cbe_2815_count = 0;
  static  unsigned long long aesl_llvm_cbe_2816_count = 0;
  static  unsigned long long aesl_llvm_cbe_2817_count = 0;
  static  unsigned long long aesl_llvm_cbe_2818_count = 0;
  static  unsigned long long aesl_llvm_cbe_2819_count = 0;
  static  unsigned long long aesl_llvm_cbe_2820_count = 0;
  static  unsigned long long aesl_llvm_cbe_2821_count = 0;
  static  unsigned long long aesl_llvm_cbe_2822_count = 0;
  static  unsigned long long aesl_llvm_cbe_2823_count = 0;
  static  unsigned long long aesl_llvm_cbe_2824_count = 0;
  static  unsigned long long aesl_llvm_cbe_2825_count = 0;
  static  unsigned long long aesl_llvm_cbe_2826_count = 0;
  static  unsigned long long aesl_llvm_cbe_2827_count = 0;
  static  unsigned long long aesl_llvm_cbe_2828_count = 0;
  static  unsigned long long aesl_llvm_cbe_2829_count = 0;
  static  unsigned long long aesl_llvm_cbe_2830_count = 0;
  static  unsigned long long aesl_llvm_cbe_2831_count = 0;
  static  unsigned long long aesl_llvm_cbe_2832_count = 0;
  static  unsigned long long aesl_llvm_cbe_2833_count = 0;
  static  unsigned long long aesl_llvm_cbe_2834_count = 0;
  static  unsigned long long aesl_llvm_cbe_2835_count = 0;
  static  unsigned long long aesl_llvm_cbe_2836_count = 0;
  static  unsigned long long aesl_llvm_cbe_2837_count = 0;
  static  unsigned long long aesl_llvm_cbe_2838_count = 0;
  static  unsigned long long aesl_llvm_cbe_2839_count = 0;
  static  unsigned long long aesl_llvm_cbe_2840_count = 0;
  static  unsigned long long aesl_llvm_cbe_2841_count = 0;
  static  unsigned long long aesl_llvm_cbe_2842_count = 0;
  static  unsigned long long aesl_llvm_cbe_2843_count = 0;
  static  unsigned long long aesl_llvm_cbe_2844_count = 0;
  static  unsigned long long aesl_llvm_cbe_2845_count = 0;
  static  unsigned long long aesl_llvm_cbe_2846_count = 0;
  static  unsigned long long aesl_llvm_cbe_2847_count = 0;
  static  unsigned long long aesl_llvm_cbe_2848_count = 0;
  static  unsigned long long aesl_llvm_cbe_2849_count = 0;
  static  unsigned long long aesl_llvm_cbe_2850_count = 0;
  static  unsigned long long aesl_llvm_cbe_2851_count = 0;
  static  unsigned long long aesl_llvm_cbe_2852_count = 0;
  static  unsigned long long aesl_llvm_cbe_2853_count = 0;
  static  unsigned long long aesl_llvm_cbe_2854_count = 0;
  static  unsigned long long aesl_llvm_cbe_2855_count = 0;
  static  unsigned long long aesl_llvm_cbe_2856_count = 0;
  static  unsigned long long aesl_llvm_cbe_2857_count = 0;
  static  unsigned long long aesl_llvm_cbe_2858_count = 0;
  static  unsigned long long aesl_llvm_cbe_2859_count = 0;
  static  unsigned long long aesl_llvm_cbe_2860_count = 0;
  static  unsigned long long aesl_llvm_cbe_2861_count = 0;
  static  unsigned long long aesl_llvm_cbe_2862_count = 0;
  static  unsigned long long aesl_llvm_cbe_2863_count = 0;
  static  unsigned long long aesl_llvm_cbe_2864_count = 0;
  static  unsigned long long aesl_llvm_cbe_2865_count = 0;
  static  unsigned long long aesl_llvm_cbe_2866_count = 0;
  static  unsigned long long aesl_llvm_cbe_2867_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1134_count = 0;
  unsigned long long llvm_cbe_storemerge1134;
  unsigned long long llvm_cbe_storemerge1134__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2868_count = 0;
  static  unsigned long long aesl_llvm_cbe_2869_count = 0;
  static  unsigned long long aesl_llvm_cbe_2870_count = 0;
  static  unsigned long long aesl_llvm_cbe_2871_count = 0;
  static  unsigned long long aesl_llvm_cbe_2872_count = 0;
  static  unsigned long long aesl_llvm_cbe_2873_count = 0;
  static  unsigned long long aesl_llvm_cbe_2874_count = 0;
  static  unsigned long long aesl_llvm_cbe_2875_count = 0;
  static  unsigned long long aesl_llvm_cbe_2876_count = 0;
  static  unsigned long long aesl_llvm_cbe_2877_count = 0;
  static  unsigned long long aesl_llvm_cbe_2878_count = 0;
  static  unsigned long long aesl_llvm_cbe_2879_count = 0;
  static  unsigned long long aesl_llvm_cbe_2880_count = 0;
  static  unsigned long long aesl_llvm_cbe_2881_count = 0;
  static  unsigned long long aesl_llvm_cbe_2882_count = 0;
  static  unsigned long long aesl_llvm_cbe_2883_count = 0;
  static  unsigned long long aesl_llvm_cbe_2884_count = 0;
  static  unsigned long long aesl_llvm_cbe_2885_count = 0;
  static  unsigned long long aesl_llvm_cbe_2886_count = 0;
  static  unsigned long long aesl_llvm_cbe_2887_count = 0;
  static  unsigned long long aesl_llvm_cbe_2888_count = 0;
  static  unsigned long long aesl_llvm_cbe_2889_count = 0;
  static  unsigned long long aesl_llvm_cbe_2890_count = 0;
  static  unsigned long long aesl_llvm_cbe_2891_count = 0;
  static  unsigned long long aesl_llvm_cbe_2892_count = 0;
  static  unsigned long long aesl_llvm_cbe_2893_count = 0;
  static  unsigned long long aesl_llvm_cbe_2894_count = 0;
  static  unsigned long long aesl_llvm_cbe_2895_count = 0;
  static  unsigned long long aesl_llvm_cbe_2896_count = 0;
  static  unsigned long long aesl_llvm_cbe_2897_count = 0;
  static  unsigned long long aesl_llvm_cbe_2898_count = 0;
  static  unsigned long long aesl_llvm_cbe_2899_count = 0;
  static  unsigned long long aesl_llvm_cbe_2900_count = 0;
  static  unsigned long long aesl_llvm_cbe_2901_count = 0;
  static  unsigned long long aesl_llvm_cbe_2902_count = 0;
  static  unsigned long long aesl_llvm_cbe_2903_count = 0;
  static  unsigned long long aesl_llvm_cbe_2904_count = 0;
  static  unsigned long long aesl_llvm_cbe_2905_count = 0;
  static  unsigned long long aesl_llvm_cbe_2906_count = 0;
  unsigned long long llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_2907_count = 0;
  unsigned long long llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_2908_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1231_count = 0;
  unsigned long long llvm_cbe_storemerge1231;
  unsigned long long llvm_cbe_storemerge1231__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2909_count = 0;
  unsigned long long llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_2910_count = 0;
  float *llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_2911_count = 0;
  static  unsigned long long aesl_llvm_cbe_2912_count = 0;
  static  unsigned long long aesl_llvm_cbe_2913_count = 0;
  static  unsigned long long aesl_llvm_cbe_2914_count = 0;
  static  unsigned long long aesl_llvm_cbe_2915_count = 0;
  static  unsigned long long aesl_llvm_cbe_2916_count = 0;
  static  unsigned long long aesl_llvm_cbe_2917_count = 0;
  static  unsigned long long aesl_llvm_cbe_2918_count = 0;
  unsigned long long llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_2919_count = 0;
  static  unsigned long long aesl_llvm_cbe_2920_count = 0;
  float llvm_cbe_tmp__195;
  float llvm_cbe_tmp__195__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge1330_count = 0;
  unsigned long long llvm_cbe_storemerge1330;
  unsigned long long llvm_cbe_storemerge1330__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2921_count = 0;
  unsigned long long llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_2922_count = 0;
  float *llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_2923_count = 0;
  float llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_2924_count = 0;
  unsigned long long llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe__2e_sum_count = 0;
  unsigned long long llvm_cbe__2e_sum;
  static  unsigned long long aesl_llvm_cbe_2925_count = 0;
  float *llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_2926_count = 0;
  float llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_2927_count = 0;
  float llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_2928_count = 0;
  float llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_2929_count = 0;
  static  unsigned long long aesl_llvm_cbe_2930_count = 0;
  unsigned long long llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_2931_count = 0;
  static  unsigned long long aesl_llvm_cbe_2932_count = 0;
  static  unsigned long long aesl_llvm_cbe_2933_count = 0;
  static  unsigned long long aesl_llvm_cbe_2934_count = 0;
  static  unsigned long long aesl_llvm_cbe_2935_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2936_count = 0;
  static  unsigned long long aesl_llvm_cbe_2937_count = 0;
  unsigned long long llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_2938_count = 0;
  static  unsigned long long aesl_llvm_cbe_2939_count = 0;
  static  unsigned long long aesl_llvm_cbe_2940_count = 0;
  static  unsigned long long aesl_llvm_cbe_2941_count = 0;
  static  unsigned long long aesl_llvm_cbe_2942_count = 0;
  static  unsigned long long aesl_llvm_cbe_2943_count = 0;
  static  unsigned long long aesl_llvm_cbe_2944_count = 0;
  static  unsigned long long aesl_llvm_cbe_2945_count = 0;
  static  unsigned long long aesl_llvm_cbe_2946_count = 0;
  static  unsigned long long aesl_llvm_cbe_2947_count = 0;
  static  unsigned long long aesl_llvm_cbe_2948_count = 0;
  static  unsigned long long aesl_llvm_cbe_2949_count = 0;
  static  unsigned long long aesl_llvm_cbe_2950_count = 0;
  static  unsigned long long aesl_llvm_cbe_2951_count = 0;
  static  unsigned long long aesl_llvm_cbe_2952_count = 0;
  static  unsigned long long aesl_llvm_cbe_2953_count = 0;
  static  unsigned long long aesl_llvm_cbe_2954_count = 0;
  static  unsigned long long aesl_llvm_cbe_2955_count = 0;
  static  unsigned long long aesl_llvm_cbe_2956_count = 0;
  static  unsigned long long aesl_llvm_cbe_2957_count = 0;
  static  unsigned long long aesl_llvm_cbe_2958_count = 0;
  static  unsigned long long aesl_llvm_cbe_2959_count = 0;
  static  unsigned long long aesl_llvm_cbe_2960_count = 0;
  static  unsigned long long aesl_llvm_cbe_2961_count = 0;
  static  unsigned long long aesl_llvm_cbe_2962_count = 0;
  static  unsigned long long aesl_llvm_cbe_2963_count = 0;
  static  unsigned long long aesl_llvm_cbe_2964_count = 0;
  static  unsigned long long aesl_llvm_cbe_2965_count = 0;
  static  unsigned long long aesl_llvm_cbe_2966_count = 0;
  static  unsigned long long aesl_llvm_cbe_2967_count = 0;
  static  unsigned long long aesl_llvm_cbe_2968_count = 0;
  static  unsigned long long aesl_llvm_cbe_2969_count = 0;
  static  unsigned long long aesl_llvm_cbe_2970_count = 0;
  static  unsigned long long aesl_llvm_cbe_2971_count = 0;
  static  unsigned long long aesl_llvm_cbe_2972_count = 0;
  static  unsigned long long aesl_llvm_cbe_2973_count = 0;
  static  unsigned long long aesl_llvm_cbe_2974_count = 0;
  static  unsigned long long aesl_llvm_cbe_2975_count = 0;
  static  unsigned long long aesl_llvm_cbe_2976_count = 0;
  static  unsigned long long aesl_llvm_cbe_2977_count = 0;
  static  unsigned long long aesl_llvm_cbe_2978_count = 0;
  unsigned long long llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_2979_count = 0;
  static  unsigned long long aesl_llvm_cbe_2980_count = 0;
  static  unsigned long long aesl_llvm_cbe_2981_count = 0;
  static  unsigned long long aesl_llvm_cbe_2982_count = 0;
  static  unsigned long long aesl_llvm_cbe_2983_count = 0;
  static  unsigned long long aesl_llvm_cbe_2984_count = 0;
  static  unsigned long long aesl_llvm_cbe_2985_count = 0;
  static  unsigned long long aesl_llvm_cbe_2986_count = 0;
  static  unsigned long long aesl_llvm_cbe_2987_count = 0;
  static  unsigned long long aesl_llvm_cbe_2988_count = 0;
  static  unsigned long long aesl_llvm_cbe_2989_count = 0;
  static  unsigned long long aesl_llvm_cbe_2990_count = 0;
  static  unsigned long long aesl_llvm_cbe_2991_count = 0;
  static  unsigned long long aesl_llvm_cbe_2992_count = 0;
  static  unsigned long long aesl_llvm_cbe_2993_count = 0;
  static  unsigned long long aesl_llvm_cbe_2994_count = 0;
  static  unsigned long long aesl_llvm_cbe_2995_count = 0;
  static  unsigned long long aesl_llvm_cbe_2996_count = 0;
  static  unsigned long long aesl_llvm_cbe_2997_count = 0;
  static  unsigned long long aesl_llvm_cbe_2998_count = 0;
  static  unsigned long long aesl_llvm_cbe_2999_count = 0;
  static  unsigned long long aesl_llvm_cbe_3000_count = 0;
  static  unsigned long long aesl_llvm_cbe_3001_count = 0;
  static  unsigned long long aesl_llvm_cbe_3002_count = 0;
  static  unsigned long long aesl_llvm_cbe_3003_count = 0;
  static  unsigned long long aesl_llvm_cbe_3004_count = 0;
  static  unsigned long long aesl_llvm_cbe_3005_count = 0;
  static  unsigned long long aesl_llvm_cbe_3006_count = 0;
  static  unsigned long long aesl_llvm_cbe_3007_count = 0;
  static  unsigned long long aesl_llvm_cbe_3008_count = 0;
  static  unsigned long long aesl_llvm_cbe_3009_count = 0;
  static  unsigned long long aesl_llvm_cbe_3010_count = 0;
  static  unsigned long long aesl_llvm_cbe_3011_count = 0;
  static  unsigned long long aesl_llvm_cbe_3012_count = 0;
  static  unsigned long long aesl_llvm_cbe_3013_count = 0;
  static  unsigned long long aesl_llvm_cbe_3014_count = 0;
  static  unsigned long long aesl_llvm_cbe_3015_count = 0;
  static  unsigned long long aesl_llvm_cbe_3016_count = 0;
  static  unsigned long long aesl_llvm_cbe_3017_count = 0;
  static  unsigned long long aesl_llvm_cbe_3018_count = 0;
  static  unsigned long long aesl_llvm_cbe_3019_count = 0;
  static  unsigned long long aesl_llvm_cbe_3020_count = 0;
  static  unsigned long long aesl_llvm_cbe_3021_count = 0;
  static  unsigned long long aesl_llvm_cbe_3022_count = 0;
  static  unsigned long long aesl_llvm_cbe_3023_count = 0;
  static  unsigned long long aesl_llvm_cbe_3024_count = 0;
  static  unsigned long long aesl_llvm_cbe_3025_count = 0;
  static  unsigned long long aesl_llvm_cbe_3026_count = 0;
  static  unsigned long long aesl_llvm_cbe_3027_count = 0;
  static  unsigned long long aesl_llvm_cbe_3028_count = 0;
  static  unsigned long long aesl_llvm_cbe_3029_count = 0;
  static  unsigned long long aesl_llvm_cbe_3030_count = 0;
  static  unsigned long long aesl_llvm_cbe_3031_count = 0;
  static  unsigned long long aesl_llvm_cbe_3032_count = 0;
  static  unsigned long long aesl_llvm_cbe_3033_count = 0;
  static  unsigned long long aesl_llvm_cbe_3034_count = 0;
  static  unsigned long long aesl_llvm_cbe_3035_count = 0;
  static  unsigned long long aesl_llvm_cbe_3036_count = 0;
  static  unsigned long long aesl_llvm_cbe_3037_count = 0;
  static  unsigned long long aesl_llvm_cbe_3038_count = 0;
  static  unsigned long long aesl_llvm_cbe_3039_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_dot\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 1, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_281_count);
  llvm_cbe_tmp__50 = (signed long long *)(&llvm_cbe_Ar->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_282_count);
  llvm_cbe_tmp__51 = (unsigned long long )*llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.k2c_tensor* %%B, i64 0, i32 1, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_292_count);
  llvm_cbe_tmp__52 = (signed long long *)(&llvm_cbe_B->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i64* %%3, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_293_count);
  llvm_cbe_tmp__53 = (unsigned long long )*llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 2, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__54 = (signed long long *)(&llvm_cbe_Ar->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i64* %%5, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__55 = (unsigned long long )*llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__55);
  if (((llvm_cbe_tmp__51&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader109;
  } else {
    goto llvm_cbe__2e_preheader111_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader111_2e_lr_2e_ph:
  llvm_cbe_storemerge117__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__56__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader111;

  do {     /* Syntactic loop '.preheader111' to make GCC happy */
llvm_cbe__2e_preheader111:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge117 = phi i64 [ 0, %%.preheader111.lr.ph ], [ %%22, %%20  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge117_count);
  llvm_cbe_storemerge117 = (unsigned long long )llvm_cbe_storemerge117__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge117 = 0x%I64X",llvm_cbe_storemerge117);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__64);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi i64 [ 0, %%.preheader111.lr.ph ], [ %%21, %%20  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_378_count);
  llvm_cbe_tmp__56 = (unsigned long long )llvm_cbe_tmp__56__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__56);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__63);
}
  if (((llvm_cbe_naxes&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_thread;
  } else {
    llvm_cbe_storemerge23113__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__57__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph114;
  }

llvm_cbe_tmp__207:
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = phi i64 [ %%19, %%.thread ], [ %%9, %%17  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_532_count);
  llvm_cbe_tmp__63 = (unsigned long long )llvm_cbe_tmp__63__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__63);
printf("\n = 0x%I64X",llvm_cbe_tmp__62);
printf("\n = 0x%I64X",llvm_cbe_tmp__56);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add i64 %%storemerge117, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_533_count);
  llvm_cbe_tmp__64 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge117&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__64&18446744073709551615ull)));
  if (((llvm_cbe_tmp__64&18446744073709551615ULL) == (llvm_cbe_tmp__51&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader109;
  } else {
    llvm_cbe_storemerge117__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__64;   /* for PHI node */
    llvm_cbe_tmp__56__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__63;   /* for PHI node */
    goto llvm_cbe__2e_preheader111;
  }

llvm_cbe_tmp__208:
  if (((llvm_cbe__2e_&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e_thread;
  } else {
    llvm_cbe_tmp__63__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__56;   /* for PHI node */
    goto llvm_cbe_tmp__207;
  }

  do {     /* Syntactic loop '.lr.ph114' to make GCC happy */
llvm_cbe__2e_lr_2e_ph114:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23113 = phi i64 [ %%16, %%.lr.ph114 ], [ 0, %%.preheader111  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge23113_count);
  llvm_cbe_storemerge23113 = (unsigned long long )llvm_cbe_storemerge23113__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23113 = 0x%I64X",llvm_cbe_storemerge23113);
printf("\n = 0x%I64X",llvm_cbe_tmp__60);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = phi i32 [ %%., %%.lr.ph114 ], [ 0, %%.preheader111  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_478_count);
  llvm_cbe_tmp__57 = (unsigned int )llvm_cbe_tmp__57__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__57);
printf("\n. = 0x%X",llvm_cbe__2e_);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i64* %%axesA, i64 %%storemerge23113, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_479_count);
  llvm_cbe_tmp__58 = (signed long long *)(&llvm_cbe_axesA[(((signed long long )llvm_cbe_storemerge23113))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23113 = 0x%I64X",((signed long long )llvm_cbe_storemerge23113));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%13, align 8, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_480_count);
  llvm_cbe_tmp__59 = (unsigned long long )*llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%15, i32 1, i32 %%12, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned int )((((llvm_cbe_storemerge117&18446744073709551615ULL) == (llvm_cbe_tmp__59&18446744073709551615ULL))) ? ((unsigned int )1u) : ((unsigned int )llvm_cbe_tmp__57));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add i64 %%storemerge23113, 1, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_482_count);
  llvm_cbe_tmp__60 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge23113&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__60&18446744073709551615ull)));
  if (((llvm_cbe_tmp__60&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__208;
  } else {
    llvm_cbe_storemerge23113__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__60;   /* for PHI node */
    llvm_cbe_tmp__57__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph114;
  }

  } while (1); /* end of syntactic loop '.lr.ph114' */
llvm_cbe__2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [5 x i64]* %%freeA, i64 0, i64 %%9, !dbg !25 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_523_count);
  llvm_cbe_tmp__61 = (signed long long *)(&llvm_cbe_freeA[(((signed long long )llvm_cbe_tmp__56))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__56));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__56) < 5 && "Write access out of array 'freeA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%storemerge117, i64* %%18, align 8, !dbg !25 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_524_count);
  *llvm_cbe_tmp__61 = llvm_cbe_storemerge117;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge117 = 0x%I64X\n", llvm_cbe_storemerge117);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add i64 %%9, 1, !dbg !25 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_525_count);
  llvm_cbe_tmp__62 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__56&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__62&18446744073709551615ull)));
  llvm_cbe_tmp__63__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__62;   /* for PHI node */
  goto llvm_cbe_tmp__207;

  } while (1); /* end of syntactic loop '.preheader111' */
llvm_cbe__2e_preheader109:
  if (((llvm_cbe_tmp__53&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader95;
  } else {
    goto llvm_cbe__2e_preheader103_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader103_2e_lr_2e_ph:
  llvm_cbe_storemerge1110__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__65__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader103;

  do {     /* Syntactic loop '.preheader103' to make GCC happy */
llvm_cbe__2e_preheader103:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1110 = phi i64 [ 0, %%.preheader103.lr.ph ], [ %%35, %%33  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1110_count);
  llvm_cbe_storemerge1110 = (unsigned long long )llvm_cbe_storemerge1110__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1110 = 0x%I64X",llvm_cbe_storemerge1110);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__73);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = phi i64 [ 0, %%.preheader103.lr.ph ], [ %%34, %%33  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_593_count);
  llvm_cbe_tmp__65 = (unsigned long long )llvm_cbe_tmp__65__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__65);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__72);
}
  if (((llvm_cbe_naxes&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_thread139;
  } else {
    llvm_cbe_storemerge22105__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__66__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph106;
  }

llvm_cbe_tmp__209:
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = phi i64 [ %%32, %%.thread139 ], [ %%23, %%30  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_745_count);
  llvm_cbe_tmp__72 = (unsigned long long )llvm_cbe_tmp__72__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__72);
printf("\n = 0x%I64X",llvm_cbe_tmp__71);
printf("\n = 0x%I64X",llvm_cbe_tmp__65);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = add i64 %%storemerge1110, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_746_count);
  llvm_cbe_tmp__73 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1110&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__73&18446744073709551615ull)));
  if (((llvm_cbe_tmp__73&18446744073709551615ULL) == (llvm_cbe_tmp__53&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader95;
  } else {
    llvm_cbe_storemerge1110__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__73;   /* for PHI node */
    llvm_cbe_tmp__65__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__72;   /* for PHI node */
    goto llvm_cbe__2e_preheader103;
  }

llvm_cbe_tmp__210:
  if (((llvm_cbe__2e_26&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e_thread139;
  } else {
    llvm_cbe_tmp__72__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__65;   /* for PHI node */
    goto llvm_cbe_tmp__209;
  }

  do {     /* Syntactic loop '.lr.ph106' to make GCC happy */
llvm_cbe__2e_lr_2e_ph106:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge22105 = phi i64 [ %%29, %%.lr.ph106 ], [ 0, %%.preheader103  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge22105_count);
  llvm_cbe_storemerge22105 = (unsigned long long )llvm_cbe_storemerge22105__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge22105 = 0x%I64X",llvm_cbe_storemerge22105);
printf("\n = 0x%I64X",llvm_cbe_tmp__69);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = phi i32 [ %%.26, %%.lr.ph106 ], [ 0, %%.preheader103  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_691_count);
  llvm_cbe_tmp__66 = (unsigned int )llvm_cbe_tmp__66__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__66);
printf("\n.26 = 0x%X",llvm_cbe__2e_26);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i64* %%axesB, i64 %%storemerge22105, !dbg !17 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_692_count);
  llvm_cbe_tmp__67 = (signed long long *)(&llvm_cbe_axesB[(((signed long long )llvm_cbe_storemerge22105))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge22105 = 0x%I64X",((signed long long )llvm_cbe_storemerge22105));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i64* %%26, align 8, !dbg !17 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_693_count);
  llvm_cbe_tmp__68 = (unsigned long long )*llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%.26 = select i1 %%28, i32 1, i32 %%25, !dbg !17 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe__2e_26_count);
  llvm_cbe__2e_26 = (unsigned int )((((llvm_cbe_storemerge1110&18446744073709551615ULL) == (llvm_cbe_tmp__68&18446744073709551615ULL))) ? ((unsigned int )1u) : ((unsigned int )llvm_cbe_tmp__66));
if (AESL_DEBUG_TRACE)
printf("\n.26 = 0x%X\n", llvm_cbe__2e_26);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i64 %%storemerge22105, 1, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_695_count);
  llvm_cbe_tmp__69 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge22105&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__69&18446744073709551615ull)));
  if (((llvm_cbe_tmp__69&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__210;
  } else {
    llvm_cbe_storemerge22105__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__69;   /* for PHI node */
    llvm_cbe_tmp__66__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_26;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph106;
  }

  } while (1); /* end of syntactic loop '.lr.ph106' */
llvm_cbe__2e_thread139:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [5 x i64]* %%freeB, i64 0, i64 %%23, !dbg !25 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_736_count);
  llvm_cbe_tmp__70 = (signed long long *)(&llvm_cbe_freeB[(((signed long long )llvm_cbe_tmp__65))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__65));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__65) < 5 && "Write access out of array 'freeB' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%storemerge1110, i64* %%31, align 8, !dbg !25 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_737_count);
  *llvm_cbe_tmp__70 = llvm_cbe_storemerge1110;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1110 = 0x%I64X\n", llvm_cbe_storemerge1110);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i64 %%23, 1, !dbg !25 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_738_count);
  llvm_cbe_tmp__71 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__65&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__71&18446744073709551615ull)));
  llvm_cbe_tmp__72__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__71;   /* for PHI node */
  goto llvm_cbe_tmp__209;

  } while (1); /* end of syntactic loop '.preheader103' */
llvm_cbe__2e_preheader95:
  if (((llvm_cbe_naxes&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa97__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    llvm_cbe__2e_lcssa96__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge100;
  } else {
    llvm_cbe_storemerge298__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__74__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    llvm_cbe_tmp__75__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph99;
  }

  do {     /* Syntactic loop '.lr.ph99' to make GCC happy */
llvm_cbe__2e_lr_2e_ph99:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge298 = phi i64 [ %%48, %%.lr.ph99 ], [ 0, %%.preheader95  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge298_count);
  llvm_cbe_storemerge298 = (unsigned long long )llvm_cbe_storemerge298__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge298 = 0x%I64X",llvm_cbe_storemerge298);
printf("\n = 0x%I64X",llvm_cbe_tmp__86);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = phi i64 [ %%42, %%.lr.ph99 ], [ 1, %%.preheader95  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_806_count);
  llvm_cbe_tmp__74 = (unsigned long long )llvm_cbe_tmp__74__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__74);
printf("\n = 0x%I64X",llvm_cbe_tmp__80);
printf("\n = 0x%I64X",1ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = phi i64 [ %%47, %%.lr.ph99 ], [ 1, %%.preheader95  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_807_count);
  llvm_cbe_tmp__75 = (unsigned long long )llvm_cbe_tmp__75__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__75);
printf("\n = 0x%I64X",llvm_cbe_tmp__85);
printf("\n = 0x%I64X",1ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds i64* %%axesA, i64 %%storemerge298, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_808_count);
  llvm_cbe_tmp__76 = (signed long long *)(&llvm_cbe_axesA[(((signed long long )llvm_cbe_storemerge298))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge298 = 0x%I64X",((signed long long )llvm_cbe_storemerge298));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i64* %%38, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_809_count);
  llvm_cbe_tmp__77 = (unsigned long long )*llvm_cbe_tmp__76;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 3, i64 %%39, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_810_count);
  llvm_cbe_tmp__78 = (signed long long *)(&llvm_cbe_Ar->field3[(((signed long long )llvm_cbe_tmp__77))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__77));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load i64* %%40, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_811_count);
  llvm_cbe_tmp__79 = (unsigned long long )*llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = mul i64 %%41, %%36, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_812_count);
  llvm_cbe_tmp__80 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__79&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__74&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__80&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds i64* %%axesB, i64 %%storemerge298, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_823_count);
  llvm_cbe_tmp__81 = (signed long long *)(&llvm_cbe_axesB[(((signed long long )llvm_cbe_storemerge298))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge298 = 0x%I64X",((signed long long )llvm_cbe_storemerge298));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load i64* %%43, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_824_count);
  llvm_cbe_tmp__82 = (unsigned long long )*llvm_cbe_tmp__81;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds %%struct.k2c_tensor* %%B, i64 0, i32 3, i64 %%44, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_825_count);
  llvm_cbe_tmp__83 = (signed long long *)(&llvm_cbe_B->field3[(((signed long long )llvm_cbe_tmp__82))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__82));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i64* %%45, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_826_count);
  llvm_cbe_tmp__84 = (unsigned long long )*llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = mul i64 %%46, %%37, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_827_count);
  llvm_cbe_tmp__85 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__84&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__75&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__85&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = add i64 %%storemerge298, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_833_count);
  llvm_cbe_tmp__86 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge298&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__86&18446744073709551615ull)));
  if (((llvm_cbe_tmp__86&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa97__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__80;   /* for PHI node */
    llvm_cbe__2e_lcssa96__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__85;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge100;
  } else {
    llvm_cbe_storemerge298__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__86;   /* for PHI node */
    llvm_cbe_tmp__74__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__80;   /* for PHI node */
    llvm_cbe_tmp__75__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__85;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph99;
  }

  } while (1); /* end of syntactic loop '.lr.ph99' */
llvm_cbe__2e__crit_edge100:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa97 = phi i64 [ 1, %%.preheader95 ], [ %%42, %%.lr.ph99  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe__2e_lcssa97_count);
  llvm_cbe__2e_lcssa97 = (unsigned long long )llvm_cbe__2e_lcssa97__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa97 = 0x%I64X",llvm_cbe__2e_lcssa97);
printf("\n = 0x%I64X",1ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__80);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa96 = phi i64 [ 1, %%.preheader95 ], [ %%47, %%.lr.ph99  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe__2e_lcssa96_count);
  llvm_cbe__2e_lcssa96 = (unsigned long long )llvm_cbe__2e_lcssa96__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa96 = 0x%I64X",llvm_cbe__2e_lcssa96);
printf("\n = 0x%I64X",1ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__85);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = udiv i64 %%6, %%.lcssa97, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_893_count);
  llvm_cbe_tmp__87 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__55&18446744073709551615ull)) / ((unsigned long long )(llvm_cbe__2e_lcssa97&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__87&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds %%struct.k2c_tensor* %%B, i64 0, i32 2, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_897_count);
  llvm_cbe_tmp__88 = (signed long long *)(&llvm_cbe_B->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load i64* %%50, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_898_count);
  llvm_cbe_tmp__89 = (unsigned long long )*llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = udiv i64 %%51, %%.lcssa96, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_899_count);
  llvm_cbe_tmp__90 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__89&18446744073709551615ull)) / ((unsigned long long )(llvm_cbe__2e_lcssa96&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__90&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = sub i64 %%2, %%naxes, !dbg !18 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_967_count);
  llvm_cbe_tmp__91 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__51&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_naxes&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__91&18446744073709551615ull)));
  if (((llvm_cbe_tmp__51&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader86;
  } else {
    llvm_cbe_storemerge391__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph93;
  }

llvm_cbe__2e_preheader86:
  if ((((unsigned long long )llvm_cbe_tmp__91&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__51&18446744073709551615ULL))) {
    llvm_cbe_storemerge488__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_storemerge152587__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__91;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph89;
  } else {
    goto llvm_cbe__2e_preheader83;
  }

  do {     /* Syntactic loop '.lr.ph93' to make GCC happy */
llvm_cbe__2e_lr_2e_ph93:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge391 = phi i64 [ %%59, %%.lr.ph93 ], [ 0, %%._crit_edge100  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge391_count);
  llvm_cbe_storemerge391 = (unsigned long long )llvm_cbe_storemerge391__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge391 = 0x%I64X",llvm_cbe_storemerge391);
printf("\n = 0x%I64X",llvm_cbe_tmp__95);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = getelementptr inbounds [5 x i64]* %%freeA, i64 0, i64 %%storemerge391, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1009_count);
  llvm_cbe_tmp__92 = (signed long long *)(&llvm_cbe_freeA[(((signed long long )llvm_cbe_storemerge391))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge391 = 0x%I64X",((signed long long )llvm_cbe_storemerge391));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge391) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'freeA' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = load i64* %%56, align 8, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1010_count);
  llvm_cbe_tmp__93 = (unsigned long long )*llvm_cbe_tmp__92;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [5 x i64]* %%permA, i64 0, i64 %%storemerge391, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1011_count);
  llvm_cbe_tmp__94 = (signed long long *)(&llvm_cbe_permA[(((signed long long )llvm_cbe_storemerge391))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge391 = 0x%I64X",((signed long long )llvm_cbe_storemerge391));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge391) < 5 && "Write access out of array 'permA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%57, i64* %%58, align 8, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1012_count);
  *llvm_cbe_tmp__94 = llvm_cbe_tmp__93;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add i64 %%storemerge391, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1013_count);
  llvm_cbe_tmp__95 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge391&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__95&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__95&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__91&18446744073709551615ULL))) {
    llvm_cbe_storemerge391__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__95;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph93;
  } else {
    goto llvm_cbe__2e_preheader86;
  }

  } while (1); /* end of syntactic loop '.lr.ph93' */
llvm_cbe__2e_preheader83:
  if (((llvm_cbe_naxes&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader79;
  } else {
    llvm_cbe_storemerge584__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph85;
  }

  do {     /* Syntactic loop '.lr.ph89' to make GCC happy */
llvm_cbe__2e_lr_2e_ph89:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge488 = phi i64 [ %%65, %%.lr.ph89 ], [ 0, %%.preheader86  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge488_count);
  llvm_cbe_storemerge488 = (unsigned long long )llvm_cbe_storemerge488__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge488 = 0x%I64X",llvm_cbe_storemerge488);
printf("\n = 0x%I64X",llvm_cbe_tmp__100);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge152587 = phi i64 [ %%64, %%.lr.ph89 ], [ %%53, %%.preheader86  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge152587_count);
  llvm_cbe_storemerge152587 = (unsigned long long )llvm_cbe_storemerge152587__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge152587 = 0x%I64X",llvm_cbe_storemerge152587);
printf("\n = 0x%I64X",llvm_cbe_tmp__99);
printf("\n = 0x%I64X",llvm_cbe_tmp__91);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds i64* %%axesA, i64 %%storemerge488, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1190_count);
  llvm_cbe_tmp__96 = (signed long long *)(&llvm_cbe_axesA[(((signed long long )llvm_cbe_storemerge488))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge488 = 0x%I64X",((signed long long )llvm_cbe_storemerge488));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load i64* %%61, align 8, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1191_count);
  llvm_cbe_tmp__97 = (unsigned long long )*llvm_cbe_tmp__96;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds [5 x i64]* %%permA, i64 0, i64 %%storemerge152587, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1192_count);
  llvm_cbe_tmp__98 = (signed long long *)(&llvm_cbe_permA[(((signed long long )llvm_cbe_storemerge152587))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge152587 = 0x%I64X",((signed long long )llvm_cbe_storemerge152587));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge152587) < 5 && "Write access out of array 'permA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%62, i64* %%63, align 8, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1193_count);
  *llvm_cbe_tmp__98 = llvm_cbe_tmp__97;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = add i64 %%storemerge152587, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1194_count);
  llvm_cbe_tmp__99 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge152587&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__99&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = add i64 %%storemerge488, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1253_count);
  llvm_cbe_tmp__100 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge488&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__100&18446744073709551615ull)));
  if (((llvm_cbe_tmp__100&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader83;
  } else {
    llvm_cbe_storemerge488__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__100;   /* for PHI node */
    llvm_cbe_storemerge152587__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__99;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph89;
  }

  } while (1); /* end of syntactic loop '.lr.ph89' */
llvm_cbe__2e_preheader79:
  if ((((unsigned long long )llvm_cbe_tmp__53&18446744073709551615ULL) > ((unsigned long long )llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe__2e_lr_2e_ph82;
  } else {
    goto llvm_cbe__2e_preheader76;
  }

llvm_cbe__2e_lr_2e_ph82:
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = sub i64 %%4, %%naxes, !dbg !19 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1332_count);
  llvm_cbe_tmp__101 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__53&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_naxes&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__101&18446744073709551615ull)));
  llvm_cbe_storemerge681__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_storemerge152480__PHI_TEMPORARY = (unsigned long long )llvm_cbe_naxes;   /* for PHI node */
  goto llvm_cbe_tmp__211;

  do {     /* Syntactic loop '.lr.ph85' to make GCC happy */
llvm_cbe__2e_lr_2e_ph85:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge584 = phi i64 [ %%71, %%.lr.ph85 ], [ 0, %%.preheader83  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge584_count);
  llvm_cbe_storemerge584 = (unsigned long long )llvm_cbe_storemerge584__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge584 = 0x%I64X",llvm_cbe_storemerge584);
printf("\n = 0x%I64X",llvm_cbe_tmp__105);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = getelementptr inbounds i64* %%axesB, i64 %%storemerge584, !dbg !17 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1334_count);
  llvm_cbe_tmp__102 = (signed long long *)(&llvm_cbe_axesB[(((signed long long )llvm_cbe_storemerge584))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge584 = 0x%I64X",((signed long long )llvm_cbe_storemerge584));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load i64* %%68, align 8, !dbg !17 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1335_count);
  llvm_cbe_tmp__103 = (unsigned long long )*llvm_cbe_tmp__102;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds [5 x i64]* %%permB, i64 0, i64 %%storemerge584, !dbg !17 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1336_count);
  llvm_cbe_tmp__104 = (signed long long *)(&llvm_cbe_permB[(((signed long long )llvm_cbe_storemerge584))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge584 = 0x%I64X",((signed long long )llvm_cbe_storemerge584));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge584) < 5 && "Write access out of array 'permB' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%69, i64* %%70, align 8, !dbg !17 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1337_count);
  *llvm_cbe_tmp__104 = llvm_cbe_tmp__103;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = add i64 %%storemerge584, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1338_count);
  llvm_cbe_tmp__105 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge584&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__105&18446744073709551615ull)));
  if (((llvm_cbe_tmp__105&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader79;
  } else {
    llvm_cbe_storemerge584__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__105;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph85;
  }

  } while (1); /* end of syntactic loop '.lr.ph85' */
llvm_cbe__2e_preheader76:
  if (((llvm_cbe_tmp__51&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader73;
  } else {
    llvm_cbe_storemerge777__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph78;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__211:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge681 = phi i64 [ 0, %%.lr.ph82 ], [ %%77, %%72  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge681_count);
  llvm_cbe_storemerge681 = (unsigned long long )llvm_cbe_storemerge681__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge681 = 0x%I64X",llvm_cbe_storemerge681);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__110);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge152480 = phi i64 [ %%naxes, %%.lr.ph82 ], [ %%76, %%72  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge152480_count);
  llvm_cbe_storemerge152480 = (unsigned long long )llvm_cbe_storemerge152480__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge152480 = 0x%I64X",llvm_cbe_storemerge152480);
printf("\nnaxes = 0x%I64X",llvm_cbe_naxes);
printf("\n = 0x%I64X",llvm_cbe_tmp__109);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [5 x i64]* %%freeB, i64 0, i64 %%storemerge681, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1456_count);
  llvm_cbe_tmp__106 = (signed long long *)(&llvm_cbe_freeB[(((signed long long )llvm_cbe_storemerge681))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge681 = 0x%I64X",((signed long long )llvm_cbe_storemerge681));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge681) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'freeB' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load i64* %%73, align 8, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1457_count);
  llvm_cbe_tmp__107 = (unsigned long long )*llvm_cbe_tmp__106;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [5 x i64]* %%permB, i64 0, i64 %%storemerge152480, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1458_count);
  llvm_cbe_tmp__108 = (signed long long *)(&llvm_cbe_permB[(((signed long long )llvm_cbe_storemerge152480))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge152480 = 0x%I64X",((signed long long )llvm_cbe_storemerge152480));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge152480) < 5 && "Write access out of array 'permB' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%74, i64* %%75, align 8, !dbg !26 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1459_count);
  *llvm_cbe_tmp__108 = llvm_cbe_tmp__107;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = add i64 %%storemerge152480, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1460_count);
  llvm_cbe_tmp__109 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge152480&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__109&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add i64 %%storemerge681, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1519_count);
  llvm_cbe_tmp__110 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge681&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__110&18446744073709551615ull)));
  if (((llvm_cbe_tmp__110&18446744073709551615ULL) == (llvm_cbe_tmp__101&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader76;
  } else {
    llvm_cbe_storemerge681__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__110;   /* for PHI node */
    llvm_cbe_storemerge152480__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__109;   /* for PHI node */
    goto llvm_cbe_tmp__211;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader73:
  if (((llvm_cbe_tmp__53&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader70;
  } else {
    llvm_cbe_storemerge874__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph75;
  }

  do {     /* Syntactic loop '.lr.ph78' to make GCC happy */
llvm_cbe__2e_lr_2e_ph78:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge777 = phi i64 [ %%83, %%.lr.ph78 ], [ 0, %%.preheader76  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge777_count);
  llvm_cbe_storemerge777 = (unsigned long long )llvm_cbe_storemerge777__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge777 = 0x%I64X",llvm_cbe_storemerge777);
printf("\n = 0x%I64X",llvm_cbe_tmp__116);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = getelementptr inbounds [5 x i64]* %%permA, i64 0, i64 %%storemerge777, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1617_count);
  llvm_cbe_tmp__111 = (signed long long *)(&llvm_cbe_permA[(((signed long long )llvm_cbe_storemerge777))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge777 = 0x%I64X",((signed long long )llvm_cbe_storemerge777));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge777) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'permA' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load i64* %%78, align 8, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1618_count);
  llvm_cbe_tmp__112 = (unsigned long long )*llvm_cbe_tmp__111;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 3, i64 %%79, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1619_count);
  llvm_cbe_tmp__113 = (signed long long *)(&llvm_cbe_Ar->field3[(((signed long long )llvm_cbe_tmp__112))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__112));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load i64* %%80, align 8, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1620_count);
  llvm_cbe_tmp__114 = (unsigned long long )*llvm_cbe_tmp__113;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds [5 x i64]* %%newshpA, i64 0, i64 %%storemerge777, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1621_count);
  llvm_cbe_tmp__115 = (signed long long *)(&llvm_cbe_newshpA[(((signed long long )llvm_cbe_storemerge777))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge777 = 0x%I64X",((signed long long )llvm_cbe_storemerge777));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge777) < 5 && "Write access out of array 'newshpA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%81, i64* %%82, align 8, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1622_count);
  *llvm_cbe_tmp__115 = llvm_cbe_tmp__114;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = add i64 %%storemerge777, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1623_count);
  llvm_cbe_tmp__116 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge777&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__116&18446744073709551615ull)));
  if (((llvm_cbe_tmp__116&18446744073709551615ULL) == (llvm_cbe_tmp__51&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader73;
  } else {
    llvm_cbe_storemerge777__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__116;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph78;
  }

  } while (1); /* end of syntactic loop '.lr.ph78' */
llvm_cbe__2e_preheader70:
  if (((llvm_cbe_tmp__55&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader62;
  } else {
    goto llvm_cbe__2e_lr_2e_ph72;
  }

llvm_cbe__2e_lr_2e_ph72:
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1742_count);
  llvm_cbe_tmp__117 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 3, i64 0, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1743_count);
  llvm_cbe_tmp__118 = (signed long long *)(&llvm_cbe_Ar->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1744_count);
  llvm_cbe_tmp__119 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = getelementptr inbounds [5 x i64]* %%newshpA, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1745_count);
  llvm_cbe_tmp__120 = (signed long long *)(&llvm_cbe_newshpA[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge971__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__212;

  do {     /* Syntactic loop '.lr.ph75' to make GCC happy */
llvm_cbe__2e_lr_2e_ph75:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge874 = phi i64 [ %%94, %%.lr.ph75 ], [ 0, %%.preheader73  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge874_count);
  llvm_cbe_storemerge874 = (unsigned long long )llvm_cbe_storemerge874__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge874 = 0x%I64X",llvm_cbe_storemerge874);
printf("\n = 0x%I64X",llvm_cbe_tmp__126);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = getelementptr inbounds [5 x i64]* %%permB, i64 0, i64 %%storemerge874, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1747_count);
  llvm_cbe_tmp__121 = (signed long long *)(&llvm_cbe_permB[(((signed long long )llvm_cbe_storemerge874))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge874 = 0x%I64X",((signed long long )llvm_cbe_storemerge874));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge874) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'permB' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load i64* %%89, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1748_count);
  llvm_cbe_tmp__122 = (unsigned long long )*llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = getelementptr inbounds %%struct.k2c_tensor* %%B, i64 0, i32 3, i64 %%90, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1749_count);
  llvm_cbe_tmp__123 = (signed long long *)(&llvm_cbe_B->field3[(((signed long long )llvm_cbe_tmp__122))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__122));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = load i64* %%91, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1750_count);
  llvm_cbe_tmp__124 = (unsigned long long )*llvm_cbe_tmp__123;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = getelementptr inbounds [5 x i64]* %%newshpB, i64 0, i64 %%storemerge874, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1751_count);
  llvm_cbe_tmp__125 = (signed long long *)(&llvm_cbe_newshpB[(((signed long long )llvm_cbe_storemerge874))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge874 = 0x%I64X",((signed long long )llvm_cbe_storemerge874));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge874) < 5 && "Write access out of array 'newshpB' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%92, i64* %%93, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1752_count);
  *llvm_cbe_tmp__125 = llvm_cbe_tmp__124;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = add i64 %%storemerge874, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1753_count);
  llvm_cbe_tmp__126 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge874&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__126&18446744073709551615ull)));
  if (((llvm_cbe_tmp__126&18446744073709551615ULL) == (llvm_cbe_tmp__53&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader70;
  } else {
    llvm_cbe_storemerge874__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__126;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph75;
  }

  } while (1); /* end of syntactic loop '.lr.ph75' */
llvm_cbe__2e_preheader62:
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load i64* %%50, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1870_count);
  llvm_cbe_tmp__127 = (unsigned long long )*llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__127);
  if (((llvm_cbe_tmp__127&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge65;
  } else {
    goto llvm_cbe__2e_lr_2e_ph64;
  }

llvm_cbe__2e_lr_2e_ph64:
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 0, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1873_count);
  llvm_cbe_tmp__128 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = getelementptr inbounds %%struct.k2c_tensor* %%B, i64 0, i32 3, i64 0, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1874_count);
  llvm_cbe_tmp__129 = (signed long long *)(&llvm_cbe_B->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 0, !dbg !24 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1875_count);
  llvm_cbe_tmp__130 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = getelementptr inbounds [5 x i64]* %%newshpB, i64 0, i64 0, !dbg !24 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1876_count);
  llvm_cbe_tmp__131 = (signed long long *)(&llvm_cbe_newshpB[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1063__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__213;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__212:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge971 = phi i64 [ 0, %%.lr.ph72 ], [ %%112, %%._crit_edge69  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge971_count);
  llvm_cbe_storemerge971 = (unsigned long long )llvm_cbe_storemerge971__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge971 = 0x%I64X",llvm_cbe_storemerge971);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__142);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_idx2sub(i64 %%storemerge971, i64* %%85, i64* %%86, i64 %%2), !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1878_count);
  k2c_idx2sub(llvm_cbe_storemerge971, (signed long long *)llvm_cbe_tmp__117, (signed long long *)llvm_cbe_tmp__118, llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge971 = 0x%I64X",llvm_cbe_storemerge971);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__51);
}
  if (((llvm_cbe_tmp__51&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge69;
  } else {
    llvm_cbe_storemerge2166__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph68;
  }

llvm_cbe__2e__crit_edge69:
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = call i64 @k2c_sub2idx(i64* %%87, i64* %%88, i64 %%2), !dbg !23 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1964_count);
  llvm_cbe_tmp__138 = (unsigned long long )k2c_sub2idx((signed long long *)llvm_cbe_tmp__119, (signed long long *)llvm_cbe_tmp__120, llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__51);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__138);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 0, i64 %%storemerge971, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1966_count);
  llvm_cbe_tmp__139 = (float *)(&llvm_cbe_Ar->field0[(((signed long long )llvm_cbe_storemerge971))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge971 = 0x%I64X",((signed long long )llvm_cbe_storemerge971));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = load float* %%109, align 4, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1967_count);
  llvm_cbe_tmp__140 = (float )*llvm_cbe_tmp__139;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__140, *(int*)(&llvm_cbe_tmp__140));
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = getelementptr inbounds float* %%fwork, i64 %%108, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1969_count);
  llvm_cbe_tmp__141 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe_tmp__138))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%110, float* %%111, align 4, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1970_count);
  *llvm_cbe_tmp__141 = llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__140);
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = add i64 %%storemerge971, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1971_count);
  llvm_cbe_tmp__142 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge971&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__142&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = load i64* %%5, align 8, !dbg !14 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2030_count);
  llvm_cbe_tmp__143 = (unsigned long long )*llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__143);
  if ((((unsigned long long )llvm_cbe_tmp__142&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__143&18446744073709551615ULL))) {
    llvm_cbe_storemerge971__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__142;   /* for PHI node */
    goto llvm_cbe_tmp__212;
  } else {
    goto llvm_cbe__2e_preheader62;
  }

  do {     /* Syntactic loop '.lr.ph68' to make GCC happy */
llvm_cbe__2e_lr_2e_ph68:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2166 = phi i64 [ %%107, %%.lr.ph68 ], [ 0, %%101  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge2166_count);
  llvm_cbe_storemerge2166 = (unsigned long long )llvm_cbe_storemerge2166__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2166 = 0x%I64X",llvm_cbe_storemerge2166);
printf("\n = 0x%I64X",llvm_cbe_tmp__137);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = getelementptr inbounds [5 x i64]* %%permA, i64 0, i64 %%storemerge2166, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1918_count);
  llvm_cbe_tmp__132 = (signed long long *)(&llvm_cbe_permA[(((signed long long )llvm_cbe_storemerge2166))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2166 = 0x%I64X",((signed long long )llvm_cbe_storemerge2166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge2166) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'permA' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = load i64* %%102, align 8, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1919_count);
  llvm_cbe_tmp__133 = (unsigned long long )*llvm_cbe_tmp__132;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 %%103, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1920_count);
  llvm_cbe_tmp__134 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )llvm_cbe_tmp__133))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__133));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__133) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'Asub' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = load i64* %%104, align 8, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1921_count);
  llvm_cbe_tmp__135 = (unsigned long long )*llvm_cbe_tmp__134;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 %%storemerge2166, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1922_count);
  llvm_cbe_tmp__136 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )llvm_cbe_storemerge2166))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2166 = 0x%I64X",((signed long long )llvm_cbe_storemerge2166));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge2166) < 5 && "Write access out of array 'Bsub' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%105, i64* %%106, align 8, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1923_count);
  *llvm_cbe_tmp__136 = llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = add i64 %%storemerge2166, 1, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_1924_count);
  llvm_cbe_tmp__137 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge2166&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__137&18446744073709551615ull)));
  if (((llvm_cbe_tmp__137&18446744073709551615ULL) == (llvm_cbe_tmp__51&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge69;
  } else {
    llvm_cbe_storemerge2166__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__137;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph68;
  }

  } while (1); /* end of syntactic loop '.lr.ph68' */
  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__213:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1063 = phi i64 [ 0, %%.lr.ph64 ], [ %%126, %%._crit_edge61  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1063_count);
  llvm_cbe_storemerge1063 = (unsigned long long )llvm_cbe_storemerge1063__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1063 = 0x%I64X",llvm_cbe_storemerge1063);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__154);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_idx2sub(i64 %%storemerge1063, i64* %%97, i64* %%98, i64 %%4), !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2033_count);
  k2c_idx2sub(llvm_cbe_storemerge1063, (signed long long *)llvm_cbe_tmp__128, (signed long long *)llvm_cbe_tmp__129, llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge1063 = 0x%I64X",llvm_cbe_storemerge1063);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__53);
}
  if (((llvm_cbe_tmp__53&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge61;
  } else {
    llvm_cbe_storemerge2058__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph60;
  }

llvm_cbe__2e__crit_edge61:
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = call i64 @k2c_sub2idx(i64* %%99, i64* %%100, i64 %%4), !dbg !24 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2119_count);
  llvm_cbe_tmp__150 = (unsigned long long )k2c_sub2idx((signed long long *)llvm_cbe_tmp__130, (signed long long *)llvm_cbe_tmp__131, llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__53);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__150);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = getelementptr inbounds %%struct.k2c_tensor* %%B, i64 0, i32 0, i64 %%storemerge1063, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2121_count);
  llvm_cbe_tmp__151 = (float *)(&llvm_cbe_B->field0[(((signed long long )llvm_cbe_storemerge1063))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1063 = 0x%I64X",((signed long long )llvm_cbe_storemerge1063));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = load float* %%123, align 4, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2122_count);
  llvm_cbe_tmp__152 = (float )*llvm_cbe_tmp__151;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__152, *(int*)(&llvm_cbe_tmp__152));
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum29 = add i64 %%122, %%6, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe__2e_sum29_count);
  llvm_cbe__2e_sum29 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__150&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__55&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum29 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum29&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = getelementptr inbounds float* %%fwork, i64 %%.sum29, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2124_count);
  llvm_cbe_tmp__153 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe__2e_sum29))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum29 = 0x%I64X",((signed long long )llvm_cbe__2e_sum29));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%124, float* %%125, align 4, !dbg !16 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2125_count);
  *llvm_cbe_tmp__153 = llvm_cbe_tmp__152;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__152);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = add i64 %%storemerge1063, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2126_count);
  llvm_cbe_tmp__154 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1063&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__154&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = load i64* %%50, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2185_count);
  llvm_cbe_tmp__155 = (unsigned long long )*llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__155);
  if ((((unsigned long long )llvm_cbe_tmp__154&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__155&18446744073709551615ULL))) {
    llvm_cbe_storemerge1063__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__154;   /* for PHI node */
    goto llvm_cbe_tmp__213;
  } else {
    goto llvm_cbe__2e__crit_edge65;
  }

  do {     /* Syntactic loop '.lr.ph60' to make GCC happy */
llvm_cbe__2e_lr_2e_ph60:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2058 = phi i64 [ %%121, %%.lr.ph60 ], [ 0, %%115  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge2058_count);
  llvm_cbe_storemerge2058 = (unsigned long long )llvm_cbe_storemerge2058__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2058 = 0x%I64X",llvm_cbe_storemerge2058);
printf("\n = 0x%I64X",llvm_cbe_tmp__149);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds [5 x i64]* %%permB, i64 0, i64 %%storemerge2058, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2073_count);
  llvm_cbe_tmp__144 = (signed long long *)(&llvm_cbe_permB[(((signed long long )llvm_cbe_storemerge2058))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2058 = 0x%I64X",((signed long long )llvm_cbe_storemerge2058));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge2058) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'permB' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load i64* %%116, align 8, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2074_count);
  llvm_cbe_tmp__145 = (unsigned long long )*llvm_cbe_tmp__144;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 %%117, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2075_count);
  llvm_cbe_tmp__146 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )llvm_cbe_tmp__145))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__145));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__145) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'Bsub' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = load i64* %%118, align 8, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2076_count);
  llvm_cbe_tmp__147 = (unsigned long long )*llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 %%storemerge2058, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2077_count);
  llvm_cbe_tmp__148 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )llvm_cbe_storemerge2058))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2058 = 0x%I64X",((signed long long )llvm_cbe_storemerge2058));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge2058) < 5 && "Write access out of array 'Asub' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%119, i64* %%120, align 8, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2078_count);
  *llvm_cbe_tmp__148 = llvm_cbe_tmp__147;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = add i64 %%storemerge2058, 1, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2079_count);
  llvm_cbe_tmp__149 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge2058&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__149&18446744073709551615ull)));
  if (((llvm_cbe_tmp__149&18446744073709551615ULL) == (llvm_cbe_tmp__53&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge61;
  } else {
    llvm_cbe_storemerge2058__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__149;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph60;
  }

  } while (1); /* end of syntactic loop '.lr.ph60' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge65:
  if (((llvm_cbe_normalize&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__214;
  } else {
    goto llvm_cbe__2e_preheader56;
  }

llvm_cbe__2e_preheader56:
  if (((llvm_cbe_tmp__87&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader44;
  } else {
    goto llvm_cbe__2e_preheader50_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader50_2e_lr_2e_ph:
  llvm_cbe_storemerge1457__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader50;

  do {     /* Syntactic loop '.preheader50' to make GCC happy */
llvm_cbe__2e_preheader50:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1457 = phi i64 [ 0, %%.preheader50.lr.ph ], [ %%152, %%._crit_edge49  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1457_count);
  llvm_cbe_storemerge1457 = (unsigned long long )llvm_cbe_storemerge1457__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1457 = 0x%I64X",llvm_cbe_storemerge1457);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__172);
}
  if (((llvm_cbe__2e_lcssa97&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge49;
  } else {
    goto llvm_cbe__2e_lr_2e_ph53;
  }

llvm_cbe__2e__crit_edge49:
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = add i64 %%storemerge1457, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2497_count);
  llvm_cbe_tmp__172 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1457&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__172&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__172&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__87&18446744073709551615ULL))) {
    llvm_cbe_storemerge1457__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__172;   /* for PHI node */
    goto llvm_cbe__2e_preheader50;
  } else {
    goto llvm_cbe__2e_preheader44;
  }

llvm_cbe__2e__crit_edge54:
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = call float @sqrtf(float %%141) nounwind readnone, !dbg !31 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2403_count);
  llvm_cbe_tmp__164 = (float )sqrtf(llvm_cbe_tmp__162);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__162, *(int*)(&llvm_cbe_tmp__162));
printf("\nReturn  = %f",llvm_cbe_tmp__164);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = fdiv float 1.000000e+00, %%143, !dbg !31 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2404_count);
  llvm_cbe_tmp__165 = (float )((float )(0x1p0 / llvm_cbe_tmp__164));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__165, *(int*)(&llvm_cbe_tmp__165));
  if (((llvm_cbe__2e_lcssa97&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge49;
  } else {
    goto llvm_cbe__2e_lr_2e_ph48;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__215:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1852 = phi i64 [ 0, %%.lr.ph53 ], [ %%142, %%135  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1852_count);
  llvm_cbe_storemerge1852 = (unsigned long long )llvm_cbe_storemerge1852__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1852 = 0x%I64X",llvm_cbe_storemerge1852);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__163);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = phi float [ 0.000000e+00, %%.lr.ph53 ], [ %%141, %%135  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2352_count);
  llvm_cbe_tmp__157 = (float )llvm_cbe_tmp__157__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__157);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__162);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = add i64 %%storemerge1852, %%132, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2353_count);
  llvm_cbe_tmp__158 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1852&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__156&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__158&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds float* %%fwork, i64 %%137, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2354_count);
  llvm_cbe_tmp__159 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe_tmp__158))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__158));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load float* %%138, align 4, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2355_count);
  llvm_cbe_tmp__160 = (float )*llvm_cbe_tmp__159;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__160, *(int*)(&llvm_cbe_tmp__160));
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = fmul float %%139, %%139, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2356_count);
  llvm_cbe_tmp__161 = (float )((float )(llvm_cbe_tmp__160 * llvm_cbe_tmp__160));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__161, *(int*)(&llvm_cbe_tmp__161));
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = fadd float %%136, %%140, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2357_count);
  llvm_cbe_tmp__162 = (float )((float )(llvm_cbe_tmp__157 + llvm_cbe_tmp__161));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__162, *(int*)(&llvm_cbe_tmp__162));
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = add i64 %%storemerge1852, 1, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2363_count);
  llvm_cbe_tmp__163 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1852&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__163&18446744073709551615ull)));
  if (((llvm_cbe_tmp__163&18446744073709551615ULL) == (llvm_cbe__2e_lcssa97&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge54;
  } else {
    llvm_cbe_storemerge1852__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__163;   /* for PHI node */
    llvm_cbe_tmp__157__PHI_TEMPORARY = (float )llvm_cbe_tmp__162;   /* for PHI node */
    goto llvm_cbe_tmp__215;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph53:
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = mul i64 %%storemerge1457, %%.lcssa97, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2289_count);
  llvm_cbe_tmp__156 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1457&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe__2e_lcssa97&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__156&18446744073709551615ull)));
  llvm_cbe_storemerge1852__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__157__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
  goto llvm_cbe_tmp__215;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__216:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1946 = phi i64 [ 0, %%.lr.ph48 ], [ %%151, %%146  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1946_count);
  llvm_cbe_storemerge1946 = (unsigned long long )llvm_cbe_storemerge1946__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1946 = 0x%I64X",llvm_cbe_storemerge1946);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__171);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = add i64 %%storemerge1946, %%145, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2452_count);
  llvm_cbe_tmp__167 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1946&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__166&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__167&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = getelementptr inbounds float* %%fwork, i64 %%147, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2453_count);
  llvm_cbe_tmp__168 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe_tmp__167))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__167));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = load float* %%148, align 4, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2454_count);
  llvm_cbe_tmp__169 = (float )*llvm_cbe_tmp__168;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__169, *(int*)(&llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = fmul float %%149, %%144, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2455_count);
  llvm_cbe_tmp__170 = (float )((float )(llvm_cbe_tmp__169 * llvm_cbe_tmp__165));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__170, *(int*)(&llvm_cbe_tmp__170));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%150, float* %%148, align 4, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2456_count);
  *llvm_cbe_tmp__168 = llvm_cbe_tmp__170;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = add i64 %%storemerge1946, 1, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2457_count);
  llvm_cbe_tmp__171 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1946&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__171&18446744073709551615ull)));
  if (((llvm_cbe_tmp__171&18446744073709551615ULL) == (llvm_cbe__2e_lcssa97&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge49;
  } else {
    llvm_cbe_storemerge1946__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__171;   /* for PHI node */
    goto llvm_cbe_tmp__216;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph48:
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = mul i64 %%storemerge1457, %%.lcssa97, !dbg !21 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2450_count);
  llvm_cbe_tmp__166 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1457&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe__2e_lcssa97&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__166&18446744073709551615ull)));
  llvm_cbe_storemerge1946__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__216;

  } while (1); /* end of syntactic loop '.preheader50' */
llvm_cbe__2e_preheader44:
  if (((llvm_cbe_tmp__90&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    goto llvm_cbe__2e_preheader40_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader40_2e_lr_2e_ph:
  llvm_cbe_storemerge1545__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader40;

  do {     /* Syntactic loop '.preheader40' to make GCC happy */
llvm_cbe__2e_preheader40:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1545 = phi i64 [ 0, %%.preheader40.lr.ph ], [ %%172, %%._crit_edge39  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1545_count);
  llvm_cbe_storemerge1545 = (unsigned long long )llvm_cbe_storemerge1545__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1545 = 0x%I64X",llvm_cbe_storemerge1545);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__189);
}
  if (((llvm_cbe__2e_lcssa96&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge39;
  } else {
    goto llvm_cbe__2e_lr_2e_ph42;
  }

llvm_cbe__2e__crit_edge39:
if (AESL_DEBUG_TRACE)
printf("\n  %%172 = add i64 %%storemerge1545, 1, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2743_count);
  llvm_cbe_tmp__189 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1545&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__189&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__189&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__90&18446744073709551615ULL))) {
    llvm_cbe_storemerge1545__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__189;   /* for PHI node */
    goto llvm_cbe__2e_preheader40;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

llvm_cbe__2e__crit_edge43:
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = call float @sqrtf(float %%161) nounwind readnone, !dbg !31 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2649_count);
  llvm_cbe_tmp__181 = (float )sqrtf(llvm_cbe_tmp__179);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__179, *(int*)(&llvm_cbe_tmp__179));
printf("\nReturn  = %f",llvm_cbe_tmp__181);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = fdiv float 1.000000e+00, %%163, !dbg !31 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2650_count);
  llvm_cbe_tmp__182 = (float )((float )(0x1p0 / llvm_cbe_tmp__181));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__182, *(int*)(&llvm_cbe_tmp__182));
  if (((llvm_cbe__2e_lcssa96&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge39;
  } else {
    goto llvm_cbe__2e_lr_2e_ph38;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__217:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1641 = phi i64 [ 0, %%.lr.ph42 ], [ %%162, %%155  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1641_count);
  llvm_cbe_storemerge1641 = (unsigned long long )llvm_cbe_storemerge1641__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1641 = 0x%I64X",llvm_cbe_storemerge1641);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__180);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = phi float [ 0.000000e+00, %%.lr.ph42 ], [ %%161, %%155  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2598_count);
  llvm_cbe_tmp__174 = (float )llvm_cbe_tmp__174__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__174);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__179);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = mul i64 %%storemerge1641, %%52, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2599_count);
  llvm_cbe_tmp__175 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1641&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__90&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__175&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum28 = add i64 %%154, %%157, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe__2e_sum28_count);
  llvm_cbe__2e_sum28 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__173&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__175&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum28 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum28&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = getelementptr inbounds float* %%fwork, i64 %%.sum28, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2600_count);
  llvm_cbe_tmp__176 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe__2e_sum28))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum28 = 0x%I64X",((signed long long )llvm_cbe__2e_sum28));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = load float* %%158, align 4, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2601_count);
  llvm_cbe_tmp__177 = (float )*llvm_cbe_tmp__176;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__177, *(int*)(&llvm_cbe_tmp__177));
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = fmul float %%159, %%159, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2602_count);
  llvm_cbe_tmp__178 = (float )((float )(llvm_cbe_tmp__177 * llvm_cbe_tmp__177));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__178, *(int*)(&llvm_cbe_tmp__178));
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = fadd float %%156, %%160, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2603_count);
  llvm_cbe_tmp__179 = (float )((float )(llvm_cbe_tmp__174 + llvm_cbe_tmp__178));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__179, *(int*)(&llvm_cbe_tmp__179));
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = add i64 %%storemerge1641, 1, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2609_count);
  llvm_cbe_tmp__180 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1641&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__180&18446744073709551615ull)));
  if (((llvm_cbe_tmp__180&18446744073709551615ULL) == (llvm_cbe__2e_lcssa96&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge43;
  } else {
    llvm_cbe_storemerge1641__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__180;   /* for PHI node */
    llvm_cbe_tmp__174__PHI_TEMPORARY = (float )llvm_cbe_tmp__179;   /* for PHI node */
    goto llvm_cbe_tmp__217;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph42:
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = add i64 %%storemerge1545, %%6, !dbg !27 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2596_count);
  llvm_cbe_tmp__173 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1545&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__55&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__173&18446744073709551615ull)));
  llvm_cbe_storemerge1641__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__174__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
  goto llvm_cbe_tmp__217;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__218:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1736 = phi i64 [ 0, %%.lr.ph38 ], [ %%171, %%166  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1736_count);
  llvm_cbe_storemerge1736 = (unsigned long long )llvm_cbe_storemerge1736__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1736 = 0x%I64X",llvm_cbe_storemerge1736);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__188);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = mul i64 %%storemerge1736, %%52, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2698_count);
  llvm_cbe_tmp__184 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1736&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__90&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__184&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum27 = add i64 %%165, %%167, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe__2e_sum27_count);
  llvm_cbe__2e_sum27 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__183&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__184&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum27 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum27&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%168 = getelementptr inbounds float* %%fwork, i64 %%.sum27, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2699_count);
  llvm_cbe_tmp__185 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe__2e_sum27))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum27 = 0x%I64X",((signed long long )llvm_cbe__2e_sum27));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%169 = load float* %%168, align 4, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2700_count);
  llvm_cbe_tmp__186 = (float )*llvm_cbe_tmp__185;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__186, *(int*)(&llvm_cbe_tmp__186));
if (AESL_DEBUG_TRACE)
printf("\n  %%170 = fmul float %%169, %%164, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2701_count);
  llvm_cbe_tmp__187 = (float )((float )(llvm_cbe_tmp__186 * llvm_cbe_tmp__182));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__187, *(int*)(&llvm_cbe_tmp__187));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%170, float* %%168, align 4, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2702_count);
  *llvm_cbe_tmp__185 = llvm_cbe_tmp__187;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__187);
if (AESL_DEBUG_TRACE)
printf("\n  %%171 = add i64 %%storemerge1736, 1, !dbg !29 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2703_count);
  llvm_cbe_tmp__188 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1736&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__188&18446744073709551615ull)));
  if (((llvm_cbe_tmp__188&18446744073709551615ULL) == (llvm_cbe__2e_lcssa96&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge39;
  } else {
    llvm_cbe_storemerge1736__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__188;   /* for PHI node */
    goto llvm_cbe_tmp__218;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph38:
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = add i64 %%storemerge1545, %%6, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2696_count);
  llvm_cbe_tmp__183 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1545&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__55&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__183&18446744073709551615ull)));
  llvm_cbe_storemerge1736__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__218;

  } while (1); /* end of syntactic loop '.preheader40' */
llvm_cbe__2e_loopexit:
  goto llvm_cbe_tmp__214;

llvm_cbe_tmp__214:
  if (((llvm_cbe_tmp__87&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge35;
  } else {
    goto llvm_cbe__2e_preheader_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader_2e_lr_2e_ph:
  llvm_cbe_storemerge1134__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1134 = phi i64 [ 0, %%.preheader.lr.ph ], [ %%197, %%._crit_edge33  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1134_count);
  llvm_cbe_storemerge1134 = (unsigned long long )llvm_cbe_storemerge1134__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1134 = 0x%I64X",llvm_cbe_storemerge1134);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__206);
}
  if (((llvm_cbe_tmp__90&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge33;
  } else {
    goto llvm_cbe__2e_lr_2e_ph32;
  }

llvm_cbe__2e__crit_edge33:
if (AESL_DEBUG_TRACE)
printf("\n  %%197 = add i64 %%storemerge1134, 1, !dbg !28 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2978_count);
  llvm_cbe_tmp__206 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1134&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__206&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__206&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__87&18446744073709551615ULL))) {
    llvm_cbe_storemerge1134__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__206;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe__2e__crit_edge35;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__219:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1231 = phi i64 [ 0, %%.lr.ph32 ], [ %%195, %%._crit_edge  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1231_count);
  llvm_cbe_storemerge1231 = (unsigned long long )llvm_cbe_storemerge1231__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1231 = 0x%I64X",llvm_cbe_storemerge1231);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__205);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%181 = add i64 %%storemerge1231, %%178, !dbg !12 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2909_count);
  llvm_cbe_tmp__192 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1231&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__190&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__192&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%182 = getelementptr inbounds %%struct.k2c_tensor2* %%C, i64 0, i32 0, i64 %%181, !dbg !12 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2910_count);
  llvm_cbe_tmp__193 = (float *)(&llvm_cbe_C->field0[(((signed long long )llvm_cbe_tmp__192))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__192));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%182, align 4, !dbg !12 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2911_count);
  *llvm_cbe_tmp__193 = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
  if (((llvm_cbe__2e_lcssa97&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%195 = add i64 %%storemerge1231, 1, !dbg !30 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2937_count);
  llvm_cbe_tmp__205 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1231&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__205&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__205&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__90&18446744073709551615ULL))) {
    llvm_cbe_storemerge1231__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__205;   /* for PHI node */
    goto llvm_cbe_tmp__219;
  } else {
    goto llvm_cbe__2e__crit_edge33;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__220:
if (AESL_DEBUG_TRACE)
printf("\n  %%185 = phi float [ 0.000000e+00, %%.lr.ph ], [ %%193, %%184 ], !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2920_count);
  llvm_cbe_tmp__195 = (float )llvm_cbe_tmp__195__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__195);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__203);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1330 = phi i64 [ 0, %%.lr.ph ], [ %%194, %%184  for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_storemerge1330_count);
  llvm_cbe_storemerge1330 = (unsigned long long )llvm_cbe_storemerge1330__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1330 = 0x%I64X",llvm_cbe_storemerge1330);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__204);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%186 = add i64 %%storemerge1330, %%179, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2921_count);
  llvm_cbe_tmp__196 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1330&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__191&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__196&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%187 = getelementptr inbounds float* %%fwork, i64 %%186, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2922_count);
  llvm_cbe_tmp__197 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe_tmp__196))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__196));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%188 = load float* %%187, align 4, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2923_count);
  llvm_cbe_tmp__198 = (float )*llvm_cbe_tmp__197;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__198, *(int*)(&llvm_cbe_tmp__198));
if (AESL_DEBUG_TRACE)
printf("\n  %%189 = mul i64 %%storemerge1330, %%52, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2924_count);
  llvm_cbe_tmp__199 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1330&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__90&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__199&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum = add i64 %%183, %%189, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe__2e_sum_count);
  llvm_cbe__2e_sum = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__194&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__199&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%190 = getelementptr inbounds float* %%fwork, i64 %%.sum, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2925_count);
  llvm_cbe_tmp__200 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe__2e_sum))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum = 0x%I64X",((signed long long )llvm_cbe__2e_sum));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%191 = load float* %%190, align 4, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2926_count);
  llvm_cbe_tmp__201 = (float )*llvm_cbe_tmp__200;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__201, *(int*)(&llvm_cbe_tmp__201));
if (AESL_DEBUG_TRACE)
printf("\n  %%192 = fmul float %%188, %%191, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2927_count);
  llvm_cbe_tmp__202 = (float )((float )(llvm_cbe_tmp__198 * llvm_cbe_tmp__201));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__202, *(int*)(&llvm_cbe_tmp__202));
if (AESL_DEBUG_TRACE)
printf("\n  %%193 = fadd float %%185, %%192, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2928_count);
  llvm_cbe_tmp__203 = (float )((float )(llvm_cbe_tmp__195 + llvm_cbe_tmp__202));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__203, *(int*)(&llvm_cbe_tmp__203));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%193, float* %%182, align 4, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2929_count);
  *llvm_cbe_tmp__193 = llvm_cbe_tmp__203;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__203);
if (AESL_DEBUG_TRACE)
printf("\n  %%194 = add i64 %%storemerge1330, 1, !dbg !31 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2930_count);
  llvm_cbe_tmp__204 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1330&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__204&18446744073709551615ull)));
  if (((llvm_cbe_tmp__204&18446744073709551615ULL) == (llvm_cbe__2e_lcssa97&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_tmp__195__PHI_TEMPORARY = (float )llvm_cbe_tmp__203;   /* for PHI node */
    llvm_cbe_storemerge1330__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__204;   /* for PHI node */
    goto llvm_cbe_tmp__220;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%183 = add i64 %%storemerge1231, %%6, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2918_count);
  llvm_cbe_tmp__194 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1231&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__55&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__194&18446744073709551615ull)));
  llvm_cbe_tmp__195__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
  llvm_cbe_storemerge1330__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__220;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph32:
if (AESL_DEBUG_TRACE)
printf("\n  %%178 = mul i64 %%storemerge1134, %%52, !dbg !12 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2906_count);
  llvm_cbe_tmp__190 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1134&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__90&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__190&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%179 = mul i64 %%storemerge1134, %%.lcssa97, !dbg !13 for 0x%I64xth hint within @k2c_dot  --> \n", ++aesl_llvm_cbe_2907_count);
  llvm_cbe_tmp__191 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1134&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe__2e_lcssa97&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__191&18446744073709551615ull)));
  llvm_cbe_storemerge1231__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__219;

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe__2e__crit_edge35:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_dot}\n");
  return;
}


void k2c_dot2(l_struct_OC_k2c_tensor2 *llvm_cbe_C, l_struct_OC_k2c_tensor2 *llvm_cbe_Ar, l_struct_OC_k2c_tensor2 *llvm_cbe_B, signed long long *llvm_cbe_axesA, signed long long *llvm_cbe_axesB, signed long long llvm_cbe_naxes, signed int llvm_cbe_normalize, float *llvm_cbe_fwork) {
  static  unsigned long long aesl_llvm_cbe_permA_count = 0;
  signed long long llvm_cbe_permA[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_permB_count = 0;
  signed long long llvm_cbe_permB[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_freeA_count = 0;
  signed long long llvm_cbe_freeA[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_freeB_count = 0;
  signed long long llvm_cbe_freeB[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_newshpA_count = 0;
  signed long long llvm_cbe_newshpA[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_newshpB_count = 0;
  signed long long llvm_cbe_newshpB[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_Asub_count = 0;
  signed long long llvm_cbe_Asub[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_Bsub_count = 0;
  signed long long llvm_cbe_Bsub[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_3040_count = 0;
  static  unsigned long long aesl_llvm_cbe_3041_count = 0;
  static  unsigned long long aesl_llvm_cbe_3042_count = 0;
  static  unsigned long long aesl_llvm_cbe_3043_count = 0;
  static  unsigned long long aesl_llvm_cbe_3044_count = 0;
  static  unsigned long long aesl_llvm_cbe_3045_count = 0;
  static  unsigned long long aesl_llvm_cbe_3046_count = 0;
  static  unsigned long long aesl_llvm_cbe_3047_count = 0;
  static  unsigned long long aesl_llvm_cbe_3048_count = 0;
  static  unsigned long long aesl_llvm_cbe_3049_count = 0;
  static  unsigned long long aesl_llvm_cbe_3050_count = 0;
  static  unsigned long long aesl_llvm_cbe_3051_count = 0;
  static  unsigned long long aesl_llvm_cbe_3052_count = 0;
  static  unsigned long long aesl_llvm_cbe_3053_count = 0;
  static  unsigned long long aesl_llvm_cbe_3054_count = 0;
  static  unsigned long long aesl_llvm_cbe_3055_count = 0;
  static  unsigned long long aesl_llvm_cbe_3056_count = 0;
  static  unsigned long long aesl_llvm_cbe_3057_count = 0;
  static  unsigned long long aesl_llvm_cbe_3058_count = 0;
  static  unsigned long long aesl_llvm_cbe_3059_count = 0;
  static  unsigned long long aesl_llvm_cbe_3060_count = 0;
  static  unsigned long long aesl_llvm_cbe_3061_count = 0;
  static  unsigned long long aesl_llvm_cbe_3062_count = 0;
  static  unsigned long long aesl_llvm_cbe_3063_count = 0;
  static  unsigned long long aesl_llvm_cbe_3064_count = 0;
  static  unsigned long long aesl_llvm_cbe_3065_count = 0;
  static  unsigned long long aesl_llvm_cbe_3066_count = 0;
  static  unsigned long long aesl_llvm_cbe_3067_count = 0;
  static  unsigned long long aesl_llvm_cbe_3068_count = 0;
  static  unsigned long long aesl_llvm_cbe_3069_count = 0;
  static  unsigned long long aesl_llvm_cbe_3070_count = 0;
  static  unsigned long long aesl_llvm_cbe_3071_count = 0;
  static  unsigned long long aesl_llvm_cbe_3072_count = 0;
  static  unsigned long long aesl_llvm_cbe_3073_count = 0;
  static  unsigned long long aesl_llvm_cbe_3074_count = 0;
  static  unsigned long long aesl_llvm_cbe_3075_count = 0;
  static  unsigned long long aesl_llvm_cbe_3076_count = 0;
  static  unsigned long long aesl_llvm_cbe_3077_count = 0;
  static  unsigned long long aesl_llvm_cbe_3078_count = 0;
  static  unsigned long long aesl_llvm_cbe_3079_count = 0;
  static  unsigned long long aesl_llvm_cbe_3080_count = 0;
  static  unsigned long long aesl_llvm_cbe_3081_count = 0;
  static  unsigned long long aesl_llvm_cbe_3082_count = 0;
  static  unsigned long long aesl_llvm_cbe_3083_count = 0;
  static  unsigned long long aesl_llvm_cbe_3084_count = 0;
  static  unsigned long long aesl_llvm_cbe_3085_count = 0;
  static  unsigned long long aesl_llvm_cbe_3086_count = 0;
  static  unsigned long long aesl_llvm_cbe_3087_count = 0;
  static  unsigned long long aesl_llvm_cbe_3088_count = 0;
  static  unsigned long long aesl_llvm_cbe_3089_count = 0;
  static  unsigned long long aesl_llvm_cbe_3090_count = 0;
  static  unsigned long long aesl_llvm_cbe_3091_count = 0;
  static  unsigned long long aesl_llvm_cbe_3092_count = 0;
  static  unsigned long long aesl_llvm_cbe_3093_count = 0;
  static  unsigned long long aesl_llvm_cbe_3094_count = 0;
  static  unsigned long long aesl_llvm_cbe_3095_count = 0;
  static  unsigned long long aesl_llvm_cbe_3096_count = 0;
  static  unsigned long long aesl_llvm_cbe_3097_count = 0;
  static  unsigned long long aesl_llvm_cbe_3098_count = 0;
  static  unsigned long long aesl_llvm_cbe_3099_count = 0;
  static  unsigned long long aesl_llvm_cbe_3100_count = 0;
  static  unsigned long long aesl_llvm_cbe_3101_count = 0;
  static  unsigned long long aesl_llvm_cbe_3102_count = 0;
  signed long long *llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_3103_count = 0;
  unsigned long long llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_3104_count = 0;
  static  unsigned long long aesl_llvm_cbe_3105_count = 0;
  static  unsigned long long aesl_llvm_cbe_3106_count = 0;
  static  unsigned long long aesl_llvm_cbe_3107_count = 0;
  static  unsigned long long aesl_llvm_cbe_3108_count = 0;
  static  unsigned long long aesl_llvm_cbe_3109_count = 0;
  static  unsigned long long aesl_llvm_cbe_3110_count = 0;
  static  unsigned long long aesl_llvm_cbe_3111_count = 0;
  static  unsigned long long aesl_llvm_cbe_3112_count = 0;
  static  unsigned long long aesl_llvm_cbe_3113_count = 0;
  signed long long *llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_3114_count = 0;
  unsigned long long llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_3115_count = 0;
  static  unsigned long long aesl_llvm_cbe_3116_count = 0;
  static  unsigned long long aesl_llvm_cbe_3117_count = 0;
  static  unsigned long long aesl_llvm_cbe_3118_count = 0;
  static  unsigned long long aesl_llvm_cbe_3119_count = 0;
  static  unsigned long long aesl_llvm_cbe_3120_count = 0;
  static  unsigned long long aesl_llvm_cbe_3121_count = 0;
  static  unsigned long long aesl_llvm_cbe_3122_count = 0;
  static  unsigned long long aesl_llvm_cbe_3123_count = 0;
  static  unsigned long long aesl_llvm_cbe_3124_count = 0;
  static  unsigned long long aesl_llvm_cbe_3125_count = 0;
  static  unsigned long long aesl_llvm_cbe_3126_count = 0;
  static  unsigned long long aesl_llvm_cbe_3127_count = 0;
  static  unsigned long long aesl_llvm_cbe_3128_count = 0;
  signed long long *llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_3129_count = 0;
  unsigned long long llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_3130_count = 0;
  static  unsigned long long aesl_llvm_cbe_3131_count = 0;
  static  unsigned long long aesl_llvm_cbe_3132_count = 0;
  static  unsigned long long aesl_llvm_cbe_3133_count = 0;
  static  unsigned long long aesl_llvm_cbe_3134_count = 0;
  static  unsigned long long aesl_llvm_cbe_3135_count = 0;
  static  unsigned long long aesl_llvm_cbe_3136_count = 0;
  static  unsigned long long aesl_llvm_cbe_3137_count = 0;
  static  unsigned long long aesl_llvm_cbe_3138_count = 0;
  static  unsigned long long aesl_llvm_cbe_3139_count = 0;
  static  unsigned long long aesl_llvm_cbe_3140_count = 0;
  static  unsigned long long aesl_llvm_cbe_3141_count = 0;
  static  unsigned long long aesl_llvm_cbe_3142_count = 0;
  static  unsigned long long aesl_llvm_cbe_3143_count = 0;
  static  unsigned long long aesl_llvm_cbe_3144_count = 0;
  static  unsigned long long aesl_llvm_cbe_3145_count = 0;
  static  unsigned long long aesl_llvm_cbe_3146_count = 0;
  static  unsigned long long aesl_llvm_cbe_3147_count = 0;
  static  unsigned long long aesl_llvm_cbe_3148_count = 0;
  static  unsigned long long aesl_llvm_cbe_3149_count = 0;
  static  unsigned long long aesl_llvm_cbe_3150_count = 0;
  static  unsigned long long aesl_llvm_cbe_3151_count = 0;
  static  unsigned long long aesl_llvm_cbe_3152_count = 0;
  static  unsigned long long aesl_llvm_cbe_3153_count = 0;
  static  unsigned long long aesl_llvm_cbe_3154_count = 0;
  static  unsigned long long aesl_llvm_cbe_3155_count = 0;
  static  unsigned long long aesl_llvm_cbe_3156_count = 0;
  static  unsigned long long aesl_llvm_cbe_3157_count = 0;
  static  unsigned long long aesl_llvm_cbe_3158_count = 0;
  static  unsigned long long aesl_llvm_cbe_3159_count = 0;
  static  unsigned long long aesl_llvm_cbe_3160_count = 0;
  static  unsigned long long aesl_llvm_cbe_3161_count = 0;
  static  unsigned long long aesl_llvm_cbe_3162_count = 0;
  static  unsigned long long aesl_llvm_cbe_3163_count = 0;
  static  unsigned long long aesl_llvm_cbe_3164_count = 0;
  static  unsigned long long aesl_llvm_cbe_3165_count = 0;
  static  unsigned long long aesl_llvm_cbe_3166_count = 0;
  static  unsigned long long aesl_llvm_cbe_3167_count = 0;
  static  unsigned long long aesl_llvm_cbe_3168_count = 0;
  static  unsigned long long aesl_llvm_cbe_3169_count = 0;
  static  unsigned long long aesl_llvm_cbe_3170_count = 0;
  static  unsigned long long aesl_llvm_cbe_3171_count = 0;
  static  unsigned long long aesl_llvm_cbe_3172_count = 0;
  static  unsigned long long aesl_llvm_cbe_3173_count = 0;
  static  unsigned long long aesl_llvm_cbe_3174_count = 0;
  static  unsigned long long aesl_llvm_cbe_3175_count = 0;
  static  unsigned long long aesl_llvm_cbe_3176_count = 0;
  static  unsigned long long aesl_llvm_cbe_3177_count = 0;
  static  unsigned long long aesl_llvm_cbe_3178_count = 0;
  static  unsigned long long aesl_llvm_cbe_3179_count = 0;
  static  unsigned long long aesl_llvm_cbe_3180_count = 0;
  static  unsigned long long aesl_llvm_cbe_3181_count = 0;
  static  unsigned long long aesl_llvm_cbe_3182_count = 0;
  static  unsigned long long aesl_llvm_cbe_3183_count = 0;
  static  unsigned long long aesl_llvm_cbe_3184_count = 0;
  static  unsigned long long aesl_llvm_cbe_3185_count = 0;
  static  unsigned long long aesl_llvm_cbe_3186_count = 0;
  static  unsigned long long aesl_llvm_cbe_3187_count = 0;
  static  unsigned long long aesl_llvm_cbe_3188_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge117_count = 0;
  unsigned long long llvm_cbe_storemerge117;
  unsigned long long llvm_cbe_storemerge117__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3189_count = 0;
  unsigned long long llvm_cbe_tmp__227;
  unsigned long long llvm_cbe_tmp__227__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3190_count = 0;
  static  unsigned long long aesl_llvm_cbe_3191_count = 0;
  static  unsigned long long aesl_llvm_cbe_3192_count = 0;
  static  unsigned long long aesl_llvm_cbe_3193_count = 0;
  static  unsigned long long aesl_llvm_cbe_3194_count = 0;
  static  unsigned long long aesl_llvm_cbe_3195_count = 0;
  static  unsigned long long aesl_llvm_cbe_3196_count = 0;
  static  unsigned long long aesl_llvm_cbe_3197_count = 0;
  static  unsigned long long aesl_llvm_cbe_3198_count = 0;
  static  unsigned long long aesl_llvm_cbe_3199_count = 0;
  static  unsigned long long aesl_llvm_cbe_3200_count = 0;
  static  unsigned long long aesl_llvm_cbe_3201_count = 0;
  static  unsigned long long aesl_llvm_cbe_3202_count = 0;
  static  unsigned long long aesl_llvm_cbe_3203_count = 0;
  static  unsigned long long aesl_llvm_cbe_3204_count = 0;
  static  unsigned long long aesl_llvm_cbe_3205_count = 0;
  static  unsigned long long aesl_llvm_cbe_3206_count = 0;
  static  unsigned long long aesl_llvm_cbe_3207_count = 0;
  static  unsigned long long aesl_llvm_cbe_3208_count = 0;
  static  unsigned long long aesl_llvm_cbe_3209_count = 0;
  static  unsigned long long aesl_llvm_cbe_3210_count = 0;
  static  unsigned long long aesl_llvm_cbe_3211_count = 0;
  static  unsigned long long aesl_llvm_cbe_3212_count = 0;
  static  unsigned long long aesl_llvm_cbe_3213_count = 0;
  static  unsigned long long aesl_llvm_cbe_3214_count = 0;
  static  unsigned long long aesl_llvm_cbe_3215_count = 0;
  static  unsigned long long aesl_llvm_cbe_3216_count = 0;
  static  unsigned long long aesl_llvm_cbe_3217_count = 0;
  static  unsigned long long aesl_llvm_cbe_3218_count = 0;
  static  unsigned long long aesl_llvm_cbe_3219_count = 0;
  static  unsigned long long aesl_llvm_cbe_3220_count = 0;
  static  unsigned long long aesl_llvm_cbe_3221_count = 0;
  static  unsigned long long aesl_llvm_cbe_3222_count = 0;
  static  unsigned long long aesl_llvm_cbe_3223_count = 0;
  static  unsigned long long aesl_llvm_cbe_3224_count = 0;
  static  unsigned long long aesl_llvm_cbe_3225_count = 0;
  static  unsigned long long aesl_llvm_cbe_3226_count = 0;
  static  unsigned long long aesl_llvm_cbe_3227_count = 0;
  static  unsigned long long aesl_llvm_cbe_3228_count = 0;
  static  unsigned long long aesl_llvm_cbe_3229_count = 0;
  static  unsigned long long aesl_llvm_cbe_3230_count = 0;
  static  unsigned long long aesl_llvm_cbe_3231_count = 0;
  static  unsigned long long aesl_llvm_cbe_3232_count = 0;
  static  unsigned long long aesl_llvm_cbe_3233_count = 0;
  static  unsigned long long aesl_llvm_cbe_3234_count = 0;
  static  unsigned long long aesl_llvm_cbe_3235_count = 0;
  static  unsigned long long aesl_llvm_cbe_3236_count = 0;
  static  unsigned long long aesl_llvm_cbe_3237_count = 0;
  static  unsigned long long aesl_llvm_cbe_3238_count = 0;
  static  unsigned long long aesl_llvm_cbe_3239_count = 0;
  static  unsigned long long aesl_llvm_cbe_3240_count = 0;
  static  unsigned long long aesl_llvm_cbe_3241_count = 0;
  static  unsigned long long aesl_llvm_cbe_3242_count = 0;
  static  unsigned long long aesl_llvm_cbe_3243_count = 0;
  static  unsigned long long aesl_llvm_cbe_3244_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23113_count = 0;
  unsigned long long llvm_cbe_storemerge23113;
  unsigned long long llvm_cbe_storemerge23113__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3245_count = 0;
  unsigned int llvm_cbe_tmp__228;
  unsigned int llvm_cbe_tmp__228__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3246_count = 0;
  signed long long *llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_3247_count = 0;
  unsigned long long llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_3248_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned int llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe_3249_count = 0;
  unsigned long long llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_3250_count = 0;
  static  unsigned long long aesl_llvm_cbe_3251_count = 0;
  static  unsigned long long aesl_llvm_cbe_3252_count = 0;
  static  unsigned long long aesl_llvm_cbe_3253_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond137_count = 0;
  static  unsigned long long aesl_llvm_cbe_3254_count = 0;
  static  unsigned long long aesl_llvm_cbe_phitmp_count = 0;
  static  unsigned long long aesl_llvm_cbe_3255_count = 0;
  static  unsigned long long aesl_llvm_cbe_3256_count = 0;
  signed long long *llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_3257_count = 0;
  static  unsigned long long aesl_llvm_cbe_3258_count = 0;
  unsigned long long llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_3259_count = 0;
  static  unsigned long long aesl_llvm_cbe_3260_count = 0;
  static  unsigned long long aesl_llvm_cbe_3261_count = 0;
  static  unsigned long long aesl_llvm_cbe_3262_count = 0;
  static  unsigned long long aesl_llvm_cbe_3263_count = 0;
  static  unsigned long long aesl_llvm_cbe_3264_count = 0;
  static  unsigned long long aesl_llvm_cbe_3265_count = 0;
  unsigned long long llvm_cbe_tmp__234;
  unsigned long long llvm_cbe_tmp__234__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3266_count = 0;
  unsigned long long llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_3267_count = 0;
  static  unsigned long long aesl_llvm_cbe_3268_count = 0;
  static  unsigned long long aesl_llvm_cbe_3269_count = 0;
  static  unsigned long long aesl_llvm_cbe_3270_count = 0;
  static  unsigned long long aesl_llvm_cbe_3271_count = 0;
  static  unsigned long long aesl_llvm_cbe_3272_count = 0;
  static  unsigned long long aesl_llvm_cbe_3273_count = 0;
  static  unsigned long long aesl_llvm_cbe_3274_count = 0;
  static  unsigned long long aesl_llvm_cbe_3275_count = 0;
  static  unsigned long long aesl_llvm_cbe_3276_count = 0;
  static  unsigned long long aesl_llvm_cbe_3277_count = 0;
  static  unsigned long long aesl_llvm_cbe_3278_count = 0;
  static  unsigned long long aesl_llvm_cbe_3279_count = 0;
  static  unsigned long long aesl_llvm_cbe_3280_count = 0;
  static  unsigned long long aesl_llvm_cbe_3281_count = 0;
  static  unsigned long long aesl_llvm_cbe_3282_count = 0;
  static  unsigned long long aesl_llvm_cbe_3283_count = 0;
  static  unsigned long long aesl_llvm_cbe_3284_count = 0;
  static  unsigned long long aesl_llvm_cbe_3285_count = 0;
  static  unsigned long long aesl_llvm_cbe_3286_count = 0;
  static  unsigned long long aesl_llvm_cbe_3287_count = 0;
  static  unsigned long long aesl_llvm_cbe_3288_count = 0;
  static  unsigned long long aesl_llvm_cbe_3289_count = 0;
  static  unsigned long long aesl_llvm_cbe_3290_count = 0;
  static  unsigned long long aesl_llvm_cbe_3291_count = 0;
  static  unsigned long long aesl_llvm_cbe_3292_count = 0;
  static  unsigned long long aesl_llvm_cbe_3293_count = 0;
  static  unsigned long long aesl_llvm_cbe_3294_count = 0;
  static  unsigned long long aesl_llvm_cbe_3295_count = 0;
  static  unsigned long long aesl_llvm_cbe_3296_count = 0;
  static  unsigned long long aesl_llvm_cbe_3297_count = 0;
  static  unsigned long long aesl_llvm_cbe_3298_count = 0;
  static  unsigned long long aesl_llvm_cbe_3299_count = 0;
  static  unsigned long long aesl_llvm_cbe_3300_count = 0;
  static  unsigned long long aesl_llvm_cbe_3301_count = 0;
  static  unsigned long long aesl_llvm_cbe_3302_count = 0;
  static  unsigned long long aesl_llvm_cbe_3303_count = 0;
  static  unsigned long long aesl_llvm_cbe_3304_count = 0;
  static  unsigned long long aesl_llvm_cbe_3305_count = 0;
  static  unsigned long long aesl_llvm_cbe_3306_count = 0;
  static  unsigned long long aesl_llvm_cbe_3307_count = 0;
  static  unsigned long long aesl_llvm_cbe_3308_count = 0;
  static  unsigned long long aesl_llvm_cbe_3309_count = 0;
  static  unsigned long long aesl_llvm_cbe_3310_count = 0;
  static  unsigned long long aesl_llvm_cbe_3311_count = 0;
  static  unsigned long long aesl_llvm_cbe_3312_count = 0;
  static  unsigned long long aesl_llvm_cbe_3313_count = 0;
  static  unsigned long long aesl_llvm_cbe_3314_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond138_count = 0;
  static  unsigned long long aesl_llvm_cbe_3315_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1110_count = 0;
  unsigned long long llvm_cbe_storemerge1110;
  unsigned long long llvm_cbe_storemerge1110__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3316_count = 0;
  unsigned long long llvm_cbe_tmp__236;
  unsigned long long llvm_cbe_tmp__236__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3317_count = 0;
  static  unsigned long long aesl_llvm_cbe_3318_count = 0;
  static  unsigned long long aesl_llvm_cbe_3319_count = 0;
  static  unsigned long long aesl_llvm_cbe_3320_count = 0;
  static  unsigned long long aesl_llvm_cbe_3321_count = 0;
  static  unsigned long long aesl_llvm_cbe_3322_count = 0;
  static  unsigned long long aesl_llvm_cbe_3323_count = 0;
  static  unsigned long long aesl_llvm_cbe_3324_count = 0;
  static  unsigned long long aesl_llvm_cbe_3325_count = 0;
  static  unsigned long long aesl_llvm_cbe_3326_count = 0;
  static  unsigned long long aesl_llvm_cbe_3327_count = 0;
  static  unsigned long long aesl_llvm_cbe_3328_count = 0;
  static  unsigned long long aesl_llvm_cbe_3329_count = 0;
  static  unsigned long long aesl_llvm_cbe_3330_count = 0;
  static  unsigned long long aesl_llvm_cbe_3331_count = 0;
  static  unsigned long long aesl_llvm_cbe_3332_count = 0;
  static  unsigned long long aesl_llvm_cbe_3333_count = 0;
  static  unsigned long long aesl_llvm_cbe_3334_count = 0;
  static  unsigned long long aesl_llvm_cbe_3335_count = 0;
  static  unsigned long long aesl_llvm_cbe_3336_count = 0;
  static  unsigned long long aesl_llvm_cbe_3337_count = 0;
  static  unsigned long long aesl_llvm_cbe_3338_count = 0;
  static  unsigned long long aesl_llvm_cbe_3339_count = 0;
  static  unsigned long long aesl_llvm_cbe_3340_count = 0;
  static  unsigned long long aesl_llvm_cbe_3341_count = 0;
  static  unsigned long long aesl_llvm_cbe_3342_count = 0;
  static  unsigned long long aesl_llvm_cbe_3343_count = 0;
  static  unsigned long long aesl_llvm_cbe_3344_count = 0;
  static  unsigned long long aesl_llvm_cbe_3345_count = 0;
  static  unsigned long long aesl_llvm_cbe_3346_count = 0;
  static  unsigned long long aesl_llvm_cbe_3347_count = 0;
  static  unsigned long long aesl_llvm_cbe_3348_count = 0;
  static  unsigned long long aesl_llvm_cbe_3349_count = 0;
  static  unsigned long long aesl_llvm_cbe_3350_count = 0;
  static  unsigned long long aesl_llvm_cbe_3351_count = 0;
  static  unsigned long long aesl_llvm_cbe_3352_count = 0;
  static  unsigned long long aesl_llvm_cbe_3353_count = 0;
  static  unsigned long long aesl_llvm_cbe_3354_count = 0;
  static  unsigned long long aesl_llvm_cbe_3355_count = 0;
  static  unsigned long long aesl_llvm_cbe_3356_count = 0;
  static  unsigned long long aesl_llvm_cbe_3357_count = 0;
  static  unsigned long long aesl_llvm_cbe_3358_count = 0;
  static  unsigned long long aesl_llvm_cbe_3359_count = 0;
  static  unsigned long long aesl_llvm_cbe_3360_count = 0;
  static  unsigned long long aesl_llvm_cbe_3361_count = 0;
  static  unsigned long long aesl_llvm_cbe_3362_count = 0;
  static  unsigned long long aesl_llvm_cbe_3363_count = 0;
  static  unsigned long long aesl_llvm_cbe_3364_count = 0;
  static  unsigned long long aesl_llvm_cbe_3365_count = 0;
  static  unsigned long long aesl_llvm_cbe_3366_count = 0;
  static  unsigned long long aesl_llvm_cbe_3367_count = 0;
  static  unsigned long long aesl_llvm_cbe_3368_count = 0;
  static  unsigned long long aesl_llvm_cbe_3369_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge22105_count = 0;
  unsigned long long llvm_cbe_storemerge22105;
  unsigned long long llvm_cbe_storemerge22105__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3370_count = 0;
  unsigned int llvm_cbe_tmp__237;
  unsigned int llvm_cbe_tmp__237__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3371_count = 0;
  signed long long *llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_3372_count = 0;
  unsigned long long llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_3373_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_26_count = 0;
  unsigned int llvm_cbe__2e_26;
  static  unsigned long long aesl_llvm_cbe_3374_count = 0;
  unsigned long long llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_3375_count = 0;
  static  unsigned long long aesl_llvm_cbe_3376_count = 0;
  static  unsigned long long aesl_llvm_cbe_3377_count = 0;
  static  unsigned long long aesl_llvm_cbe_3378_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond135_count = 0;
  static  unsigned long long aesl_llvm_cbe_3379_count = 0;
  static  unsigned long long aesl_llvm_cbe_phitmp118_count = 0;
  static  unsigned long long aesl_llvm_cbe_3380_count = 0;
  static  unsigned long long aesl_llvm_cbe_3381_count = 0;
  signed long long *llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_3382_count = 0;
  static  unsigned long long aesl_llvm_cbe_3383_count = 0;
  unsigned long long llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_3384_count = 0;
  static  unsigned long long aesl_llvm_cbe_3385_count = 0;
  static  unsigned long long aesl_llvm_cbe_3386_count = 0;
  static  unsigned long long aesl_llvm_cbe_3387_count = 0;
  static  unsigned long long aesl_llvm_cbe_3388_count = 0;
  static  unsigned long long aesl_llvm_cbe_3389_count = 0;
  static  unsigned long long aesl_llvm_cbe_3390_count = 0;
  unsigned long long llvm_cbe_tmp__243;
  unsigned long long llvm_cbe_tmp__243__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3391_count = 0;
  unsigned long long llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_3392_count = 0;
  static  unsigned long long aesl_llvm_cbe_3393_count = 0;
  static  unsigned long long aesl_llvm_cbe_3394_count = 0;
  static  unsigned long long aesl_llvm_cbe_3395_count = 0;
  static  unsigned long long aesl_llvm_cbe_3396_count = 0;
  static  unsigned long long aesl_llvm_cbe_3397_count = 0;
  static  unsigned long long aesl_llvm_cbe_3398_count = 0;
  static  unsigned long long aesl_llvm_cbe_3399_count = 0;
  static  unsigned long long aesl_llvm_cbe_3400_count = 0;
  static  unsigned long long aesl_llvm_cbe_3401_count = 0;
  static  unsigned long long aesl_llvm_cbe_3402_count = 0;
  static  unsigned long long aesl_llvm_cbe_3403_count = 0;
  static  unsigned long long aesl_llvm_cbe_3404_count = 0;
  static  unsigned long long aesl_llvm_cbe_3405_count = 0;
  static  unsigned long long aesl_llvm_cbe_3406_count = 0;
  static  unsigned long long aesl_llvm_cbe_3407_count = 0;
  static  unsigned long long aesl_llvm_cbe_3408_count = 0;
  static  unsigned long long aesl_llvm_cbe_3409_count = 0;
  static  unsigned long long aesl_llvm_cbe_3410_count = 0;
  static  unsigned long long aesl_llvm_cbe_3411_count = 0;
  static  unsigned long long aesl_llvm_cbe_3412_count = 0;
  static  unsigned long long aesl_llvm_cbe_3413_count = 0;
  static  unsigned long long aesl_llvm_cbe_3414_count = 0;
  static  unsigned long long aesl_llvm_cbe_3415_count = 0;
  static  unsigned long long aesl_llvm_cbe_3416_count = 0;
  static  unsigned long long aesl_llvm_cbe_3417_count = 0;
  static  unsigned long long aesl_llvm_cbe_3418_count = 0;
  static  unsigned long long aesl_llvm_cbe_3419_count = 0;
  static  unsigned long long aesl_llvm_cbe_3420_count = 0;
  static  unsigned long long aesl_llvm_cbe_3421_count = 0;
  static  unsigned long long aesl_llvm_cbe_3422_count = 0;
  static  unsigned long long aesl_llvm_cbe_3423_count = 0;
  static  unsigned long long aesl_llvm_cbe_3424_count = 0;
  static  unsigned long long aesl_llvm_cbe_3425_count = 0;
  static  unsigned long long aesl_llvm_cbe_3426_count = 0;
  static  unsigned long long aesl_llvm_cbe_3427_count = 0;
  static  unsigned long long aesl_llvm_cbe_3428_count = 0;
  static  unsigned long long aesl_llvm_cbe_3429_count = 0;
  static  unsigned long long aesl_llvm_cbe_3430_count = 0;
  static  unsigned long long aesl_llvm_cbe_3431_count = 0;
  static  unsigned long long aesl_llvm_cbe_3432_count = 0;
  static  unsigned long long aesl_llvm_cbe_3433_count = 0;
  static  unsigned long long aesl_llvm_cbe_3434_count = 0;
  static  unsigned long long aesl_llvm_cbe_3435_count = 0;
  static  unsigned long long aesl_llvm_cbe_3436_count = 0;
  static  unsigned long long aesl_llvm_cbe_3437_count = 0;
  static  unsigned long long aesl_llvm_cbe_3438_count = 0;
  static  unsigned long long aesl_llvm_cbe_3439_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond136_count = 0;
  static  unsigned long long aesl_llvm_cbe_3440_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge298_count = 0;
  unsigned long long llvm_cbe_storemerge298;
  unsigned long long llvm_cbe_storemerge298__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3441_count = 0;
  unsigned long long llvm_cbe_tmp__245;
  unsigned long long llvm_cbe_tmp__245__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3442_count = 0;
  unsigned long long llvm_cbe_tmp__246;
  unsigned long long llvm_cbe_tmp__246__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3443_count = 0;
  signed long long *llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_3444_count = 0;
  unsigned long long llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_3445_count = 0;
  signed long long *llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_3446_count = 0;
  unsigned long long llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_3447_count = 0;
  unsigned long long llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_3448_count = 0;
  static  unsigned long long aesl_llvm_cbe_3449_count = 0;
  static  unsigned long long aesl_llvm_cbe_3450_count = 0;
  static  unsigned long long aesl_llvm_cbe_3451_count = 0;
  static  unsigned long long aesl_llvm_cbe_3452_count = 0;
  static  unsigned long long aesl_llvm_cbe_3453_count = 0;
  static  unsigned long long aesl_llvm_cbe_3454_count = 0;
  static  unsigned long long aesl_llvm_cbe_3455_count = 0;
  static  unsigned long long aesl_llvm_cbe_3456_count = 0;
  static  unsigned long long aesl_llvm_cbe_3457_count = 0;
  static  unsigned long long aesl_llvm_cbe_3458_count = 0;
  signed long long *llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_3459_count = 0;
  unsigned long long llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_3460_count = 0;
  signed long long *llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_3461_count = 0;
  unsigned long long llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_3462_count = 0;
  unsigned long long llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_3463_count = 0;
  static  unsigned long long aesl_llvm_cbe_3464_count = 0;
  static  unsigned long long aesl_llvm_cbe_3465_count = 0;
  static  unsigned long long aesl_llvm_cbe_3466_count = 0;
  static  unsigned long long aesl_llvm_cbe_3467_count = 0;
  static  unsigned long long aesl_llvm_cbe_3468_count = 0;
  unsigned long long llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_3469_count = 0;
  static  unsigned long long aesl_llvm_cbe_3470_count = 0;
  static  unsigned long long aesl_llvm_cbe_3471_count = 0;
  static  unsigned long long aesl_llvm_cbe_3472_count = 0;
  static  unsigned long long aesl_llvm_cbe_3473_count = 0;
  static  unsigned long long aesl_llvm_cbe_3474_count = 0;
  static  unsigned long long aesl_llvm_cbe_3475_count = 0;
  static  unsigned long long aesl_llvm_cbe_3476_count = 0;
  static  unsigned long long aesl_llvm_cbe_3477_count = 0;
  static  unsigned long long aesl_llvm_cbe_3478_count = 0;
  static  unsigned long long aesl_llvm_cbe_3479_count = 0;
  static  unsigned long long aesl_llvm_cbe_3480_count = 0;
  static  unsigned long long aesl_llvm_cbe_3481_count = 0;
  static  unsigned long long aesl_llvm_cbe_3482_count = 0;
  static  unsigned long long aesl_llvm_cbe_3483_count = 0;
  static  unsigned long long aesl_llvm_cbe_3484_count = 0;
  static  unsigned long long aesl_llvm_cbe_3485_count = 0;
  static  unsigned long long aesl_llvm_cbe_3486_count = 0;
  static  unsigned long long aesl_llvm_cbe_3487_count = 0;
  static  unsigned long long aesl_llvm_cbe_3488_count = 0;
  static  unsigned long long aesl_llvm_cbe_3489_count = 0;
  static  unsigned long long aesl_llvm_cbe_3490_count = 0;
  static  unsigned long long aesl_llvm_cbe_3491_count = 0;
  static  unsigned long long aesl_llvm_cbe_3492_count = 0;
  static  unsigned long long aesl_llvm_cbe_3493_count = 0;
  static  unsigned long long aesl_llvm_cbe_3494_count = 0;
  static  unsigned long long aesl_llvm_cbe_3495_count = 0;
  static  unsigned long long aesl_llvm_cbe_3496_count = 0;
  static  unsigned long long aesl_llvm_cbe_3497_count = 0;
  static  unsigned long long aesl_llvm_cbe_3498_count = 0;
  static  unsigned long long aesl_llvm_cbe_3499_count = 0;
  static  unsigned long long aesl_llvm_cbe_3500_count = 0;
  static  unsigned long long aesl_llvm_cbe_3501_count = 0;
  static  unsigned long long aesl_llvm_cbe_3502_count = 0;
  static  unsigned long long aesl_llvm_cbe_3503_count = 0;
  static  unsigned long long aesl_llvm_cbe_3504_count = 0;
  static  unsigned long long aesl_llvm_cbe_3505_count = 0;
  static  unsigned long long aesl_llvm_cbe_3506_count = 0;
  static  unsigned long long aesl_llvm_cbe_3507_count = 0;
  static  unsigned long long aesl_llvm_cbe_3508_count = 0;
  static  unsigned long long aesl_llvm_cbe_3509_count = 0;
  static  unsigned long long aesl_llvm_cbe_3510_count = 0;
  static  unsigned long long aesl_llvm_cbe_3511_count = 0;
  static  unsigned long long aesl_llvm_cbe_3512_count = 0;
  static  unsigned long long aesl_llvm_cbe_3513_count = 0;
  static  unsigned long long aesl_llvm_cbe_3514_count = 0;
  static  unsigned long long aesl_llvm_cbe_3515_count = 0;
  static  unsigned long long aesl_llvm_cbe_3516_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond134_count = 0;
  static  unsigned long long aesl_llvm_cbe_3517_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa97_count = 0;
  unsigned long long llvm_cbe__2e_lcssa97;
  unsigned long long llvm_cbe__2e_lcssa97__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa96_count = 0;
  unsigned long long llvm_cbe__2e_lcssa96;
  unsigned long long llvm_cbe__2e_lcssa96__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3518_count = 0;
  unsigned long long llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_3519_count = 0;
  static  unsigned long long aesl_llvm_cbe_3520_count = 0;
  static  unsigned long long aesl_llvm_cbe_3521_count = 0;
  static  unsigned long long aesl_llvm_cbe_3522_count = 0;
  signed long long *llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_3523_count = 0;
  unsigned long long llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_3524_count = 0;
  unsigned long long llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_3525_count = 0;
  static  unsigned long long aesl_llvm_cbe_3526_count = 0;
  static  unsigned long long aesl_llvm_cbe_3527_count = 0;
  static  unsigned long long aesl_llvm_cbe_3528_count = 0;
  static  unsigned long long aesl_llvm_cbe_3529_count = 0;
  static  unsigned long long aesl_llvm_cbe_3530_count = 0;
  static  unsigned long long aesl_llvm_cbe_3531_count = 0;
  static  unsigned long long aesl_llvm_cbe_3532_count = 0;
  static  unsigned long long aesl_llvm_cbe_3533_count = 0;
  static  unsigned long long aesl_llvm_cbe_3534_count = 0;
  static  unsigned long long aesl_llvm_cbe_3535_count = 0;
  static  unsigned long long aesl_llvm_cbe_3536_count = 0;
  static  unsigned long long aesl_llvm_cbe_3537_count = 0;
  static  unsigned long long aesl_llvm_cbe_3538_count = 0;
  static  unsigned long long aesl_llvm_cbe_3539_count = 0;
  static  unsigned long long aesl_llvm_cbe_3540_count = 0;
  static  unsigned long long aesl_llvm_cbe_3541_count = 0;
  static  unsigned long long aesl_llvm_cbe_3542_count = 0;
  static  unsigned long long aesl_llvm_cbe_3543_count = 0;
  static  unsigned long long aesl_llvm_cbe_3544_count = 0;
  static  unsigned long long aesl_llvm_cbe_3545_count = 0;
  static  unsigned long long aesl_llvm_cbe_3546_count = 0;
  static  unsigned long long aesl_llvm_cbe_3547_count = 0;
  static  unsigned long long aesl_llvm_cbe_3548_count = 0;
  static  unsigned long long aesl_llvm_cbe_3549_count = 0;
  static  unsigned long long aesl_llvm_cbe_3550_count = 0;
  static  unsigned long long aesl_llvm_cbe_3551_count = 0;
  static  unsigned long long aesl_llvm_cbe_3552_count = 0;
  static  unsigned long long aesl_llvm_cbe_3553_count = 0;
  static  unsigned long long aesl_llvm_cbe_3554_count = 0;
  static  unsigned long long aesl_llvm_cbe_3555_count = 0;
  static  unsigned long long aesl_llvm_cbe_3556_count = 0;
  static  unsigned long long aesl_llvm_cbe_3557_count = 0;
  static  unsigned long long aesl_llvm_cbe_3558_count = 0;
  static  unsigned long long aesl_llvm_cbe_3559_count = 0;
  static  unsigned long long aesl_llvm_cbe_3560_count = 0;
  static  unsigned long long aesl_llvm_cbe_3561_count = 0;
  static  unsigned long long aesl_llvm_cbe_3562_count = 0;
  static  unsigned long long aesl_llvm_cbe_3563_count = 0;
  static  unsigned long long aesl_llvm_cbe_3564_count = 0;
  static  unsigned long long aesl_llvm_cbe_3565_count = 0;
  static  unsigned long long aesl_llvm_cbe_3566_count = 0;
  static  unsigned long long aesl_llvm_cbe_3567_count = 0;
  static  unsigned long long aesl_llvm_cbe_3568_count = 0;
  static  unsigned long long aesl_llvm_cbe_3569_count = 0;
  static  unsigned long long aesl_llvm_cbe_3570_count = 0;
  static  unsigned long long aesl_llvm_cbe_3571_count = 0;
  static  unsigned long long aesl_llvm_cbe_3572_count = 0;
  static  unsigned long long aesl_llvm_cbe_3573_count = 0;
  static  unsigned long long aesl_llvm_cbe_3574_count = 0;
  static  unsigned long long aesl_llvm_cbe_3575_count = 0;
  static  unsigned long long aesl_llvm_cbe_3576_count = 0;
  static  unsigned long long aesl_llvm_cbe_3577_count = 0;
  static  unsigned long long aesl_llvm_cbe_3578_count = 0;
  static  unsigned long long aesl_llvm_cbe_3579_count = 0;
  static  unsigned long long aesl_llvm_cbe_3580_count = 0;
  static  unsigned long long aesl_llvm_cbe_3581_count = 0;
  static  unsigned long long aesl_llvm_cbe_3582_count = 0;
  unsigned long long llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_3583_count = 0;
  static  unsigned long long aesl_llvm_cbe_3584_count = 0;
  static  unsigned long long aesl_llvm_cbe_3585_count = 0;
  static  unsigned long long aesl_llvm_cbe_3586_count = 0;
  static  unsigned long long aesl_llvm_cbe_3587_count = 0;
  static  unsigned long long aesl_llvm_cbe_3588_count = 0;
  static  unsigned long long aesl_llvm_cbe_3589_count = 0;
  static  unsigned long long aesl_llvm_cbe_3590_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge391_count = 0;
  unsigned long long llvm_cbe_storemerge391;
  unsigned long long llvm_cbe_storemerge391__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3591_count = 0;
  signed long long *llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_3592_count = 0;
  unsigned long long llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_3593_count = 0;
  signed long long *llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_3594_count = 0;
  static  unsigned long long aesl_llvm_cbe_3595_count = 0;
  unsigned long long llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_3596_count = 0;
  static  unsigned long long aesl_llvm_cbe_3597_count = 0;
  static  unsigned long long aesl_llvm_cbe_3598_count = 0;
  static  unsigned long long aesl_llvm_cbe_3599_count = 0;
  static  unsigned long long aesl_llvm_cbe_3600_count = 0;
  static  unsigned long long aesl_llvm_cbe_3601_count = 0;
  static  unsigned long long aesl_llvm_cbe_3602_count = 0;
  static  unsigned long long aesl_llvm_cbe_3603_count = 0;
  static  unsigned long long aesl_llvm_cbe_3604_count = 0;
  static  unsigned long long aesl_llvm_cbe_3605_count = 0;
  static  unsigned long long aesl_llvm_cbe_3606_count = 0;
  static  unsigned long long aesl_llvm_cbe_3607_count = 0;
  static  unsigned long long aesl_llvm_cbe_3608_count = 0;
  static  unsigned long long aesl_llvm_cbe_3609_count = 0;
  static  unsigned long long aesl_llvm_cbe_3610_count = 0;
  static  unsigned long long aesl_llvm_cbe_3611_count = 0;
  static  unsigned long long aesl_llvm_cbe_3612_count = 0;
  static  unsigned long long aesl_llvm_cbe_3613_count = 0;
  static  unsigned long long aesl_llvm_cbe_3614_count = 0;
  static  unsigned long long aesl_llvm_cbe_3615_count = 0;
  static  unsigned long long aesl_llvm_cbe_3616_count = 0;
  static  unsigned long long aesl_llvm_cbe_3617_count = 0;
  static  unsigned long long aesl_llvm_cbe_3618_count = 0;
  static  unsigned long long aesl_llvm_cbe_3619_count = 0;
  static  unsigned long long aesl_llvm_cbe_3620_count = 0;
  static  unsigned long long aesl_llvm_cbe_3621_count = 0;
  static  unsigned long long aesl_llvm_cbe_3622_count = 0;
  static  unsigned long long aesl_llvm_cbe_3623_count = 0;
  static  unsigned long long aesl_llvm_cbe_3624_count = 0;
  static  unsigned long long aesl_llvm_cbe_3625_count = 0;
  static  unsigned long long aesl_llvm_cbe_3626_count = 0;
  static  unsigned long long aesl_llvm_cbe_3627_count = 0;
  static  unsigned long long aesl_llvm_cbe_3628_count = 0;
  static  unsigned long long aesl_llvm_cbe_3629_count = 0;
  static  unsigned long long aesl_llvm_cbe_3630_count = 0;
  static  unsigned long long aesl_llvm_cbe_3631_count = 0;
  static  unsigned long long aesl_llvm_cbe_3632_count = 0;
  static  unsigned long long aesl_llvm_cbe_3633_count = 0;
  static  unsigned long long aesl_llvm_cbe_3634_count = 0;
  static  unsigned long long aesl_llvm_cbe_3635_count = 0;
  static  unsigned long long aesl_llvm_cbe_3636_count = 0;
  static  unsigned long long aesl_llvm_cbe_3637_count = 0;
  static  unsigned long long aesl_llvm_cbe_3638_count = 0;
  static  unsigned long long aesl_llvm_cbe_3639_count = 0;
  static  unsigned long long aesl_llvm_cbe_3640_count = 0;
  static  unsigned long long aesl_llvm_cbe_3641_count = 0;
  static  unsigned long long aesl_llvm_cbe_3642_count = 0;
  static  unsigned long long aesl_llvm_cbe_3643_count = 0;
  static  unsigned long long aesl_llvm_cbe_3644_count = 0;
  static  unsigned long long aesl_llvm_cbe_3645_count = 0;
  static  unsigned long long aesl_llvm_cbe_3646_count = 0;
  static  unsigned long long aesl_llvm_cbe_3647_count = 0;
  static  unsigned long long aesl_llvm_cbe_3648_count = 0;
  static  unsigned long long aesl_llvm_cbe_3649_count = 0;
  static  unsigned long long aesl_llvm_cbe_3650_count = 0;
  static  unsigned long long aesl_llvm_cbe_3651_count = 0;
  static  unsigned long long aesl_llvm_cbe_3652_count = 0;
  static  unsigned long long aesl_llvm_cbe_3653_count = 0;
  static  unsigned long long aesl_llvm_cbe_3654_count = 0;
  static  unsigned long long aesl_llvm_cbe_3655_count = 0;
  static  unsigned long long aesl_llvm_cbe_3656_count = 0;
  static  unsigned long long aesl_llvm_cbe_3657_count = 0;
  static  unsigned long long aesl_llvm_cbe_3658_count = 0;
  static  unsigned long long aesl_llvm_cbe_3659_count = 0;
  static  unsigned long long aesl_llvm_cbe_3660_count = 0;
  static  unsigned long long aesl_llvm_cbe_3661_count = 0;
  static  unsigned long long aesl_llvm_cbe_3662_count = 0;
  static  unsigned long long aesl_llvm_cbe_3663_count = 0;
  static  unsigned long long aesl_llvm_cbe_3664_count = 0;
  static  unsigned long long aesl_llvm_cbe_3665_count = 0;
  static  unsigned long long aesl_llvm_cbe_3666_count = 0;
  static  unsigned long long aesl_llvm_cbe_3667_count = 0;
  static  unsigned long long aesl_llvm_cbe_3668_count = 0;
  static  unsigned long long aesl_llvm_cbe_3669_count = 0;
  static  unsigned long long aesl_llvm_cbe_3670_count = 0;
  static  unsigned long long aesl_llvm_cbe_3671_count = 0;
  static  unsigned long long aesl_llvm_cbe_3672_count = 0;
  static  unsigned long long aesl_llvm_cbe_3673_count = 0;
  static  unsigned long long aesl_llvm_cbe_3674_count = 0;
  static  unsigned long long aesl_llvm_cbe_3675_count = 0;
  static  unsigned long long aesl_llvm_cbe_3676_count = 0;
  static  unsigned long long aesl_llvm_cbe_3677_count = 0;
  static  unsigned long long aesl_llvm_cbe_3678_count = 0;
  static  unsigned long long aesl_llvm_cbe_3679_count = 0;
  static  unsigned long long aesl_llvm_cbe_3680_count = 0;
  static  unsigned long long aesl_llvm_cbe_3681_count = 0;
  static  unsigned long long aesl_llvm_cbe_3682_count = 0;
  static  unsigned long long aesl_llvm_cbe_3683_count = 0;
  static  unsigned long long aesl_llvm_cbe_3684_count = 0;
  static  unsigned long long aesl_llvm_cbe_3685_count = 0;
  static  unsigned long long aesl_llvm_cbe_3686_count = 0;
  static  unsigned long long aesl_llvm_cbe_3687_count = 0;
  static  unsigned long long aesl_llvm_cbe_3688_count = 0;
  static  unsigned long long aesl_llvm_cbe_3689_count = 0;
  static  unsigned long long aesl_llvm_cbe_3690_count = 0;
  static  unsigned long long aesl_llvm_cbe_3691_count = 0;
  static  unsigned long long aesl_llvm_cbe_3692_count = 0;
  static  unsigned long long aesl_llvm_cbe_3693_count = 0;
  static  unsigned long long aesl_llvm_cbe_3694_count = 0;
  static  unsigned long long aesl_llvm_cbe_3695_count = 0;
  static  unsigned long long aesl_llvm_cbe_3696_count = 0;
  static  unsigned long long aesl_llvm_cbe_3697_count = 0;
  static  unsigned long long aesl_llvm_cbe_3698_count = 0;
  static  unsigned long long aesl_llvm_cbe_3699_count = 0;
  static  unsigned long long aesl_llvm_cbe_3700_count = 0;
  static  unsigned long long aesl_llvm_cbe_3701_count = 0;
  static  unsigned long long aesl_llvm_cbe_3702_count = 0;
  static  unsigned long long aesl_llvm_cbe_3703_count = 0;
  static  unsigned long long aesl_llvm_cbe_3704_count = 0;
  static  unsigned long long aesl_llvm_cbe_3705_count = 0;
  static  unsigned long long aesl_llvm_cbe_3706_count = 0;
  static  unsigned long long aesl_llvm_cbe_3707_count = 0;
  static  unsigned long long aesl_llvm_cbe_3708_count = 0;
  static  unsigned long long aesl_llvm_cbe_3709_count = 0;
  static  unsigned long long aesl_llvm_cbe_3710_count = 0;
  static  unsigned long long aesl_llvm_cbe_3711_count = 0;
  static  unsigned long long aesl_llvm_cbe_3712_count = 0;
  static  unsigned long long aesl_llvm_cbe_3713_count = 0;
  static  unsigned long long aesl_llvm_cbe_3714_count = 0;
  static  unsigned long long aesl_llvm_cbe_3715_count = 0;
  static  unsigned long long aesl_llvm_cbe_3716_count = 0;
  static  unsigned long long aesl_llvm_cbe_3717_count = 0;
  static  unsigned long long aesl_llvm_cbe_3718_count = 0;
  static  unsigned long long aesl_llvm_cbe_3719_count = 0;
  static  unsigned long long aesl_llvm_cbe_3720_count = 0;
  static  unsigned long long aesl_llvm_cbe_3721_count = 0;
  static  unsigned long long aesl_llvm_cbe_3722_count = 0;
  static  unsigned long long aesl_llvm_cbe_3723_count = 0;
  static  unsigned long long aesl_llvm_cbe_3724_count = 0;
  static  unsigned long long aesl_llvm_cbe_3725_count = 0;
  static  unsigned long long aesl_llvm_cbe_3726_count = 0;
  static  unsigned long long aesl_llvm_cbe_3727_count = 0;
  static  unsigned long long aesl_llvm_cbe_3728_count = 0;
  static  unsigned long long aesl_llvm_cbe_3729_count = 0;
  static  unsigned long long aesl_llvm_cbe_3730_count = 0;
  static  unsigned long long aesl_llvm_cbe_3731_count = 0;
  static  unsigned long long aesl_llvm_cbe_3732_count = 0;
  static  unsigned long long aesl_llvm_cbe_3733_count = 0;
  static  unsigned long long aesl_llvm_cbe_3734_count = 0;
  static  unsigned long long aesl_llvm_cbe_3735_count = 0;
  static  unsigned long long aesl_llvm_cbe_3736_count = 0;
  static  unsigned long long aesl_llvm_cbe_3737_count = 0;
  static  unsigned long long aesl_llvm_cbe_3738_count = 0;
  static  unsigned long long aesl_llvm_cbe_3739_count = 0;
  static  unsigned long long aesl_llvm_cbe_3740_count = 0;
  static  unsigned long long aesl_llvm_cbe_3741_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge488_count = 0;
  unsigned long long llvm_cbe_storemerge488;
  unsigned long long llvm_cbe_storemerge488__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge112587_count = 0;
  unsigned long long llvm_cbe_storemerge112587;
  unsigned long long llvm_cbe_storemerge112587__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3742_count = 0;
  signed long long *llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_3743_count = 0;
  unsigned long long llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_3744_count = 0;
  signed long long *llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_3745_count = 0;
  static  unsigned long long aesl_llvm_cbe_3746_count = 0;
  unsigned long long llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_3747_count = 0;
  static  unsigned long long aesl_llvm_cbe_3748_count = 0;
  static  unsigned long long aesl_llvm_cbe_3749_count = 0;
  static  unsigned long long aesl_llvm_cbe_3750_count = 0;
  static  unsigned long long aesl_llvm_cbe_3751_count = 0;
  static  unsigned long long aesl_llvm_cbe_3752_count = 0;
  static  unsigned long long aesl_llvm_cbe_3753_count = 0;
  static  unsigned long long aesl_llvm_cbe_3754_count = 0;
  static  unsigned long long aesl_llvm_cbe_3755_count = 0;
  static  unsigned long long aesl_llvm_cbe_3756_count = 0;
  static  unsigned long long aesl_llvm_cbe_3757_count = 0;
  static  unsigned long long aesl_llvm_cbe_3758_count = 0;
  static  unsigned long long aesl_llvm_cbe_3759_count = 0;
  static  unsigned long long aesl_llvm_cbe_3760_count = 0;
  static  unsigned long long aesl_llvm_cbe_3761_count = 0;
  static  unsigned long long aesl_llvm_cbe_3762_count = 0;
  static  unsigned long long aesl_llvm_cbe_3763_count = 0;
  static  unsigned long long aesl_llvm_cbe_3764_count = 0;
  static  unsigned long long aesl_llvm_cbe_3765_count = 0;
  static  unsigned long long aesl_llvm_cbe_3766_count = 0;
  static  unsigned long long aesl_llvm_cbe_3767_count = 0;
  static  unsigned long long aesl_llvm_cbe_3768_count = 0;
  static  unsigned long long aesl_llvm_cbe_3769_count = 0;
  static  unsigned long long aesl_llvm_cbe_3770_count = 0;
  static  unsigned long long aesl_llvm_cbe_3771_count = 0;
  static  unsigned long long aesl_llvm_cbe_3772_count = 0;
  static  unsigned long long aesl_llvm_cbe_3773_count = 0;
  static  unsigned long long aesl_llvm_cbe_3774_count = 0;
  static  unsigned long long aesl_llvm_cbe_3775_count = 0;
  static  unsigned long long aesl_llvm_cbe_3776_count = 0;
  static  unsigned long long aesl_llvm_cbe_3777_count = 0;
  static  unsigned long long aesl_llvm_cbe_3778_count = 0;
  static  unsigned long long aesl_llvm_cbe_3779_count = 0;
  static  unsigned long long aesl_llvm_cbe_3780_count = 0;
  static  unsigned long long aesl_llvm_cbe_3781_count = 0;
  static  unsigned long long aesl_llvm_cbe_3782_count = 0;
  static  unsigned long long aesl_llvm_cbe_3783_count = 0;
  static  unsigned long long aesl_llvm_cbe_3784_count = 0;
  static  unsigned long long aesl_llvm_cbe_3785_count = 0;
  static  unsigned long long aesl_llvm_cbe_3786_count = 0;
  static  unsigned long long aesl_llvm_cbe_3787_count = 0;
  static  unsigned long long aesl_llvm_cbe_3788_count = 0;
  static  unsigned long long aesl_llvm_cbe_3789_count = 0;
  static  unsigned long long aesl_llvm_cbe_3790_count = 0;
  static  unsigned long long aesl_llvm_cbe_3791_count = 0;
  static  unsigned long long aesl_llvm_cbe_3792_count = 0;
  static  unsigned long long aesl_llvm_cbe_3793_count = 0;
  static  unsigned long long aesl_llvm_cbe_3794_count = 0;
  static  unsigned long long aesl_llvm_cbe_3795_count = 0;
  unsigned long long llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_3796_count = 0;
  static  unsigned long long aesl_llvm_cbe_3797_count = 0;
  static  unsigned long long aesl_llvm_cbe_3798_count = 0;
  static  unsigned long long aesl_llvm_cbe_3799_count = 0;
  static  unsigned long long aesl_llvm_cbe_3800_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond131_count = 0;
  static  unsigned long long aesl_llvm_cbe_3801_count = 0;
  static  unsigned long long aesl_llvm_cbe_3802_count = 0;
  static  unsigned long long aesl_llvm_cbe_3803_count = 0;
  static  unsigned long long aesl_llvm_cbe_3804_count = 0;
  static  unsigned long long aesl_llvm_cbe_3805_count = 0;
  static  unsigned long long aesl_llvm_cbe_3806_count = 0;
  static  unsigned long long aesl_llvm_cbe_3807_count = 0;
  static  unsigned long long aesl_llvm_cbe_3808_count = 0;
  unsigned long long llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_3809_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge584_count = 0;
  unsigned long long llvm_cbe_storemerge584;
  unsigned long long llvm_cbe_storemerge584__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3810_count = 0;
  signed long long *llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_3811_count = 0;
  unsigned long long llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_3812_count = 0;
  signed long long *llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_3813_count = 0;
  static  unsigned long long aesl_llvm_cbe_3814_count = 0;
  unsigned long long llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_3815_count = 0;
  static  unsigned long long aesl_llvm_cbe_3816_count = 0;
  static  unsigned long long aesl_llvm_cbe_3817_count = 0;
  static  unsigned long long aesl_llvm_cbe_3818_count = 0;
  static  unsigned long long aesl_llvm_cbe_3819_count = 0;
  static  unsigned long long aesl_llvm_cbe_3820_count = 0;
  static  unsigned long long aesl_llvm_cbe_3821_count = 0;
  static  unsigned long long aesl_llvm_cbe_3822_count = 0;
  static  unsigned long long aesl_llvm_cbe_3823_count = 0;
  static  unsigned long long aesl_llvm_cbe_3824_count = 0;
  static  unsigned long long aesl_llvm_cbe_3825_count = 0;
  static  unsigned long long aesl_llvm_cbe_3826_count = 0;
  static  unsigned long long aesl_llvm_cbe_3827_count = 0;
  static  unsigned long long aesl_llvm_cbe_3828_count = 0;
  static  unsigned long long aesl_llvm_cbe_3829_count = 0;
  static  unsigned long long aesl_llvm_cbe_3830_count = 0;
  static  unsigned long long aesl_llvm_cbe_3831_count = 0;
  static  unsigned long long aesl_llvm_cbe_3832_count = 0;
  static  unsigned long long aesl_llvm_cbe_3833_count = 0;
  static  unsigned long long aesl_llvm_cbe_3834_count = 0;
  static  unsigned long long aesl_llvm_cbe_3835_count = 0;
  static  unsigned long long aesl_llvm_cbe_3836_count = 0;
  static  unsigned long long aesl_llvm_cbe_3837_count = 0;
  static  unsigned long long aesl_llvm_cbe_3838_count = 0;
  static  unsigned long long aesl_llvm_cbe_3839_count = 0;
  static  unsigned long long aesl_llvm_cbe_3840_count = 0;
  static  unsigned long long aesl_llvm_cbe_3841_count = 0;
  static  unsigned long long aesl_llvm_cbe_3842_count = 0;
  static  unsigned long long aesl_llvm_cbe_3843_count = 0;
  static  unsigned long long aesl_llvm_cbe_3844_count = 0;
  static  unsigned long long aesl_llvm_cbe_3845_count = 0;
  static  unsigned long long aesl_llvm_cbe_3846_count = 0;
  static  unsigned long long aesl_llvm_cbe_3847_count = 0;
  static  unsigned long long aesl_llvm_cbe_3848_count = 0;
  static  unsigned long long aesl_llvm_cbe_3849_count = 0;
  static  unsigned long long aesl_llvm_cbe_3850_count = 0;
  static  unsigned long long aesl_llvm_cbe_3851_count = 0;
  static  unsigned long long aesl_llvm_cbe_3852_count = 0;
  static  unsigned long long aesl_llvm_cbe_3853_count = 0;
  static  unsigned long long aesl_llvm_cbe_3854_count = 0;
  static  unsigned long long aesl_llvm_cbe_3855_count = 0;
  static  unsigned long long aesl_llvm_cbe_3856_count = 0;
  static  unsigned long long aesl_llvm_cbe_3857_count = 0;
  static  unsigned long long aesl_llvm_cbe_3858_count = 0;
  static  unsigned long long aesl_llvm_cbe_3859_count = 0;
  static  unsigned long long aesl_llvm_cbe_3860_count = 0;
  static  unsigned long long aesl_llvm_cbe_3861_count = 0;
  static  unsigned long long aesl_llvm_cbe_3862_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond130_count = 0;
  static  unsigned long long aesl_llvm_cbe_3863_count = 0;
  static  unsigned long long aesl_llvm_cbe_3864_count = 0;
  static  unsigned long long aesl_llvm_cbe_3865_count = 0;
  static  unsigned long long aesl_llvm_cbe_3866_count = 0;
  static  unsigned long long aesl_llvm_cbe_3867_count = 0;
  static  unsigned long long aesl_llvm_cbe_3868_count = 0;
  static  unsigned long long aesl_llvm_cbe_3869_count = 0;
  static  unsigned long long aesl_llvm_cbe_3870_count = 0;
  static  unsigned long long aesl_llvm_cbe_3871_count = 0;
  static  unsigned long long aesl_llvm_cbe_3872_count = 0;
  static  unsigned long long aesl_llvm_cbe_3873_count = 0;
  static  unsigned long long aesl_llvm_cbe_3874_count = 0;
  static  unsigned long long aesl_llvm_cbe_3875_count = 0;
  static  unsigned long long aesl_llvm_cbe_3876_count = 0;
  static  unsigned long long aesl_llvm_cbe_3877_count = 0;
  static  unsigned long long aesl_llvm_cbe_3878_count = 0;
  static  unsigned long long aesl_llvm_cbe_3879_count = 0;
  static  unsigned long long aesl_llvm_cbe_3880_count = 0;
  static  unsigned long long aesl_llvm_cbe_3881_count = 0;
  static  unsigned long long aesl_llvm_cbe_3882_count = 0;
  static  unsigned long long aesl_llvm_cbe_3883_count = 0;
  static  unsigned long long aesl_llvm_cbe_3884_count = 0;
  static  unsigned long long aesl_llvm_cbe_3885_count = 0;
  static  unsigned long long aesl_llvm_cbe_3886_count = 0;
  static  unsigned long long aesl_llvm_cbe_3887_count = 0;
  static  unsigned long long aesl_llvm_cbe_3888_count = 0;
  static  unsigned long long aesl_llvm_cbe_3889_count = 0;
  static  unsigned long long aesl_llvm_cbe_3890_count = 0;
  static  unsigned long long aesl_llvm_cbe_3891_count = 0;
  static  unsigned long long aesl_llvm_cbe_3892_count = 0;
  static  unsigned long long aesl_llvm_cbe_3893_count = 0;
  static  unsigned long long aesl_llvm_cbe_3894_count = 0;
  static  unsigned long long aesl_llvm_cbe_3895_count = 0;
  static  unsigned long long aesl_llvm_cbe_3896_count = 0;
  static  unsigned long long aesl_llvm_cbe_3897_count = 0;
  static  unsigned long long aesl_llvm_cbe_3898_count = 0;
  static  unsigned long long aesl_llvm_cbe_3899_count = 0;
  static  unsigned long long aesl_llvm_cbe_3900_count = 0;
  static  unsigned long long aesl_llvm_cbe_3901_count = 0;
  static  unsigned long long aesl_llvm_cbe_3902_count = 0;
  static  unsigned long long aesl_llvm_cbe_3903_count = 0;
  static  unsigned long long aesl_llvm_cbe_3904_count = 0;
  static  unsigned long long aesl_llvm_cbe_3905_count = 0;
  static  unsigned long long aesl_llvm_cbe_3906_count = 0;
  static  unsigned long long aesl_llvm_cbe_3907_count = 0;
  static  unsigned long long aesl_llvm_cbe_3908_count = 0;
  static  unsigned long long aesl_llvm_cbe_3909_count = 0;
  static  unsigned long long aesl_llvm_cbe_3910_count = 0;
  static  unsigned long long aesl_llvm_cbe_3911_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge681_count = 0;
  unsigned long long llvm_cbe_storemerge681;
  unsigned long long llvm_cbe_storemerge681__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge112480_count = 0;
  unsigned long long llvm_cbe_storemerge112480;
  unsigned long long llvm_cbe_storemerge112480__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3912_count = 0;
  signed long long *llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_3913_count = 0;
  unsigned long long llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_3914_count = 0;
  signed long long *llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_3915_count = 0;
  static  unsigned long long aesl_llvm_cbe_3916_count = 0;
  unsigned long long llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_3917_count = 0;
  static  unsigned long long aesl_llvm_cbe_3918_count = 0;
  static  unsigned long long aesl_llvm_cbe_3919_count = 0;
  static  unsigned long long aesl_llvm_cbe_3920_count = 0;
  static  unsigned long long aesl_llvm_cbe_3921_count = 0;
  static  unsigned long long aesl_llvm_cbe_3922_count = 0;
  static  unsigned long long aesl_llvm_cbe_3923_count = 0;
  static  unsigned long long aesl_llvm_cbe_3924_count = 0;
  static  unsigned long long aesl_llvm_cbe_3925_count = 0;
  static  unsigned long long aesl_llvm_cbe_3926_count = 0;
  static  unsigned long long aesl_llvm_cbe_3927_count = 0;
  static  unsigned long long aesl_llvm_cbe_3928_count = 0;
  static  unsigned long long aesl_llvm_cbe_3929_count = 0;
  static  unsigned long long aesl_llvm_cbe_3930_count = 0;
  static  unsigned long long aesl_llvm_cbe_3931_count = 0;
  static  unsigned long long aesl_llvm_cbe_3932_count = 0;
  static  unsigned long long aesl_llvm_cbe_3933_count = 0;
  static  unsigned long long aesl_llvm_cbe_3934_count = 0;
  static  unsigned long long aesl_llvm_cbe_3935_count = 0;
  static  unsigned long long aesl_llvm_cbe_3936_count = 0;
  static  unsigned long long aesl_llvm_cbe_3937_count = 0;
  static  unsigned long long aesl_llvm_cbe_3938_count = 0;
  static  unsigned long long aesl_llvm_cbe_3939_count = 0;
  static  unsigned long long aesl_llvm_cbe_3940_count = 0;
  static  unsigned long long aesl_llvm_cbe_3941_count = 0;
  static  unsigned long long aesl_llvm_cbe_3942_count = 0;
  static  unsigned long long aesl_llvm_cbe_3943_count = 0;
  static  unsigned long long aesl_llvm_cbe_3944_count = 0;
  static  unsigned long long aesl_llvm_cbe_3945_count = 0;
  static  unsigned long long aesl_llvm_cbe_3946_count = 0;
  static  unsigned long long aesl_llvm_cbe_3947_count = 0;
  static  unsigned long long aesl_llvm_cbe_3948_count = 0;
  static  unsigned long long aesl_llvm_cbe_3949_count = 0;
  static  unsigned long long aesl_llvm_cbe_3950_count = 0;
  static  unsigned long long aesl_llvm_cbe_3951_count = 0;
  static  unsigned long long aesl_llvm_cbe_3952_count = 0;
  static  unsigned long long aesl_llvm_cbe_3953_count = 0;
  static  unsigned long long aesl_llvm_cbe_3954_count = 0;
  static  unsigned long long aesl_llvm_cbe_3955_count = 0;
  static  unsigned long long aesl_llvm_cbe_3956_count = 0;
  static  unsigned long long aesl_llvm_cbe_3957_count = 0;
  static  unsigned long long aesl_llvm_cbe_3958_count = 0;
  static  unsigned long long aesl_llvm_cbe_3959_count = 0;
  static  unsigned long long aesl_llvm_cbe_3960_count = 0;
  static  unsigned long long aesl_llvm_cbe_3961_count = 0;
  static  unsigned long long aesl_llvm_cbe_3962_count = 0;
  static  unsigned long long aesl_llvm_cbe_3963_count = 0;
  static  unsigned long long aesl_llvm_cbe_3964_count = 0;
  static  unsigned long long aesl_llvm_cbe_3965_count = 0;
  unsigned long long llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_3966_count = 0;
  static  unsigned long long aesl_llvm_cbe_3967_count = 0;
  static  unsigned long long aesl_llvm_cbe_3968_count = 0;
  static  unsigned long long aesl_llvm_cbe_3969_count = 0;
  static  unsigned long long aesl_llvm_cbe_3970_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond129_count = 0;
  static  unsigned long long aesl_llvm_cbe_3971_count = 0;
  static  unsigned long long aesl_llvm_cbe_3972_count = 0;
  static  unsigned long long aesl_llvm_cbe_3973_count = 0;
  static  unsigned long long aesl_llvm_cbe_3974_count = 0;
  static  unsigned long long aesl_llvm_cbe_3975_count = 0;
  static  unsigned long long aesl_llvm_cbe_3976_count = 0;
  static  unsigned long long aesl_llvm_cbe_3977_count = 0;
  static  unsigned long long aesl_llvm_cbe_3978_count = 0;
  static  unsigned long long aesl_llvm_cbe_3979_count = 0;
  static  unsigned long long aesl_llvm_cbe_3980_count = 0;
  static  unsigned long long aesl_llvm_cbe_3981_count = 0;
  static  unsigned long long aesl_llvm_cbe_3982_count = 0;
  static  unsigned long long aesl_llvm_cbe_3983_count = 0;
  static  unsigned long long aesl_llvm_cbe_3984_count = 0;
  static  unsigned long long aesl_llvm_cbe_3985_count = 0;
  static  unsigned long long aesl_llvm_cbe_3986_count = 0;
  static  unsigned long long aesl_llvm_cbe_3987_count = 0;
  static  unsigned long long aesl_llvm_cbe_3988_count = 0;
  static  unsigned long long aesl_llvm_cbe_3989_count = 0;
  static  unsigned long long aesl_llvm_cbe_3990_count = 0;
  static  unsigned long long aesl_llvm_cbe_3991_count = 0;
  static  unsigned long long aesl_llvm_cbe_3992_count = 0;
  static  unsigned long long aesl_llvm_cbe_3993_count = 0;
  static  unsigned long long aesl_llvm_cbe_3994_count = 0;
  static  unsigned long long aesl_llvm_cbe_3995_count = 0;
  static  unsigned long long aesl_llvm_cbe_3996_count = 0;
  static  unsigned long long aesl_llvm_cbe_3997_count = 0;
  static  unsigned long long aesl_llvm_cbe_3998_count = 0;
  static  unsigned long long aesl_llvm_cbe_3999_count = 0;
  static  unsigned long long aesl_llvm_cbe_4000_count = 0;
  static  unsigned long long aesl_llvm_cbe_4001_count = 0;
  static  unsigned long long aesl_llvm_cbe_4002_count = 0;
  static  unsigned long long aesl_llvm_cbe_4003_count = 0;
  static  unsigned long long aesl_llvm_cbe_4004_count = 0;
  static  unsigned long long aesl_llvm_cbe_4005_count = 0;
  static  unsigned long long aesl_llvm_cbe_4006_count = 0;
  static  unsigned long long aesl_llvm_cbe_4007_count = 0;
  static  unsigned long long aesl_llvm_cbe_4008_count = 0;
  static  unsigned long long aesl_llvm_cbe_4009_count = 0;
  static  unsigned long long aesl_llvm_cbe_4010_count = 0;
  static  unsigned long long aesl_llvm_cbe_4011_count = 0;
  static  unsigned long long aesl_llvm_cbe_4012_count = 0;
  static  unsigned long long aesl_llvm_cbe_4013_count = 0;
  static  unsigned long long aesl_llvm_cbe_4014_count = 0;
  static  unsigned long long aesl_llvm_cbe_4015_count = 0;
  static  unsigned long long aesl_llvm_cbe_4016_count = 0;
  static  unsigned long long aesl_llvm_cbe_4017_count = 0;
  static  unsigned long long aesl_llvm_cbe_4018_count = 0;
  static  unsigned long long aesl_llvm_cbe_4019_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge777_count = 0;
  unsigned long long llvm_cbe_storemerge777;
  unsigned long long llvm_cbe_storemerge777__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4020_count = 0;
  signed long long *llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_4021_count = 0;
  unsigned long long llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_4022_count = 0;
  signed long long *llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_4023_count = 0;
  unsigned long long llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_4024_count = 0;
  signed long long *llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_4025_count = 0;
  static  unsigned long long aesl_llvm_cbe_4026_count = 0;
  unsigned long long llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_4027_count = 0;
  static  unsigned long long aesl_llvm_cbe_4028_count = 0;
  static  unsigned long long aesl_llvm_cbe_4029_count = 0;
  static  unsigned long long aesl_llvm_cbe_4030_count = 0;
  static  unsigned long long aesl_llvm_cbe_4031_count = 0;
  static  unsigned long long aesl_llvm_cbe_4032_count = 0;
  static  unsigned long long aesl_llvm_cbe_4033_count = 0;
  static  unsigned long long aesl_llvm_cbe_4034_count = 0;
  static  unsigned long long aesl_llvm_cbe_4035_count = 0;
  static  unsigned long long aesl_llvm_cbe_4036_count = 0;
  static  unsigned long long aesl_llvm_cbe_4037_count = 0;
  static  unsigned long long aesl_llvm_cbe_4038_count = 0;
  static  unsigned long long aesl_llvm_cbe_4039_count = 0;
  static  unsigned long long aesl_llvm_cbe_4040_count = 0;
  static  unsigned long long aesl_llvm_cbe_4041_count = 0;
  static  unsigned long long aesl_llvm_cbe_4042_count = 0;
  static  unsigned long long aesl_llvm_cbe_4043_count = 0;
  static  unsigned long long aesl_llvm_cbe_4044_count = 0;
  static  unsigned long long aesl_llvm_cbe_4045_count = 0;
  static  unsigned long long aesl_llvm_cbe_4046_count = 0;
  static  unsigned long long aesl_llvm_cbe_4047_count = 0;
  static  unsigned long long aesl_llvm_cbe_4048_count = 0;
  static  unsigned long long aesl_llvm_cbe_4049_count = 0;
  static  unsigned long long aesl_llvm_cbe_4050_count = 0;
  static  unsigned long long aesl_llvm_cbe_4051_count = 0;
  static  unsigned long long aesl_llvm_cbe_4052_count = 0;
  static  unsigned long long aesl_llvm_cbe_4053_count = 0;
  static  unsigned long long aesl_llvm_cbe_4054_count = 0;
  static  unsigned long long aesl_llvm_cbe_4055_count = 0;
  static  unsigned long long aesl_llvm_cbe_4056_count = 0;
  static  unsigned long long aesl_llvm_cbe_4057_count = 0;
  static  unsigned long long aesl_llvm_cbe_4058_count = 0;
  static  unsigned long long aesl_llvm_cbe_4059_count = 0;
  static  unsigned long long aesl_llvm_cbe_4060_count = 0;
  static  unsigned long long aesl_llvm_cbe_4061_count = 0;
  static  unsigned long long aesl_llvm_cbe_4062_count = 0;
  static  unsigned long long aesl_llvm_cbe_4063_count = 0;
  static  unsigned long long aesl_llvm_cbe_4064_count = 0;
  static  unsigned long long aesl_llvm_cbe_4065_count = 0;
  static  unsigned long long aesl_llvm_cbe_4066_count = 0;
  static  unsigned long long aesl_llvm_cbe_4067_count = 0;
  static  unsigned long long aesl_llvm_cbe_4068_count = 0;
  static  unsigned long long aesl_llvm_cbe_4069_count = 0;
  static  unsigned long long aesl_llvm_cbe_4070_count = 0;
  static  unsigned long long aesl_llvm_cbe_4071_count = 0;
  static  unsigned long long aesl_llvm_cbe_4072_count = 0;
  static  unsigned long long aesl_llvm_cbe_4073_count = 0;
  static  unsigned long long aesl_llvm_cbe_4074_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond128_count = 0;
  static  unsigned long long aesl_llvm_cbe_4075_count = 0;
  static  unsigned long long aesl_llvm_cbe_4076_count = 0;
  static  unsigned long long aesl_llvm_cbe_4077_count = 0;
  static  unsigned long long aesl_llvm_cbe_4078_count = 0;
  static  unsigned long long aesl_llvm_cbe_4079_count = 0;
  static  unsigned long long aesl_llvm_cbe_4080_count = 0;
  static  unsigned long long aesl_llvm_cbe_4081_count = 0;
  static  unsigned long long aesl_llvm_cbe_4082_count = 0;
  static  unsigned long long aesl_llvm_cbe_4083_count = 0;
  static  unsigned long long aesl_llvm_cbe_4084_count = 0;
  static  unsigned long long aesl_llvm_cbe_4085_count = 0;
  static  unsigned long long aesl_llvm_cbe_4086_count = 0;
  static  unsigned long long aesl_llvm_cbe_4087_count = 0;
  static  unsigned long long aesl_llvm_cbe_4088_count = 0;
  static  unsigned long long aesl_llvm_cbe_4089_count = 0;
  static  unsigned long long aesl_llvm_cbe_4090_count = 0;
  static  unsigned long long aesl_llvm_cbe_4091_count = 0;
  static  unsigned long long aesl_llvm_cbe_4092_count = 0;
  static  unsigned long long aesl_llvm_cbe_4093_count = 0;
  static  unsigned long long aesl_llvm_cbe_4094_count = 0;
  static  unsigned long long aesl_llvm_cbe_4095_count = 0;
  static  unsigned long long aesl_llvm_cbe_4096_count = 0;
  static  unsigned long long aesl_llvm_cbe_4097_count = 0;
  static  unsigned long long aesl_llvm_cbe_4098_count = 0;
  static  unsigned long long aesl_llvm_cbe_4099_count = 0;
  static  unsigned long long aesl_llvm_cbe_4100_count = 0;
  static  unsigned long long aesl_llvm_cbe_4101_count = 0;
  static  unsigned long long aesl_llvm_cbe_4102_count = 0;
  static  unsigned long long aesl_llvm_cbe_4103_count = 0;
  static  unsigned long long aesl_llvm_cbe_4104_count = 0;
  static  unsigned long long aesl_llvm_cbe_4105_count = 0;
  static  unsigned long long aesl_llvm_cbe_4106_count = 0;
  static  unsigned long long aesl_llvm_cbe_4107_count = 0;
  static  unsigned long long aesl_llvm_cbe_4108_count = 0;
  static  unsigned long long aesl_llvm_cbe_4109_count = 0;
  static  unsigned long long aesl_llvm_cbe_4110_count = 0;
  static  unsigned long long aesl_llvm_cbe_4111_count = 0;
  static  unsigned long long aesl_llvm_cbe_4112_count = 0;
  static  unsigned long long aesl_llvm_cbe_4113_count = 0;
  static  unsigned long long aesl_llvm_cbe_4114_count = 0;
  static  unsigned long long aesl_llvm_cbe_4115_count = 0;
  static  unsigned long long aesl_llvm_cbe_4116_count = 0;
  static  unsigned long long aesl_llvm_cbe_4117_count = 0;
  static  unsigned long long aesl_llvm_cbe_4118_count = 0;
  static  unsigned long long aesl_llvm_cbe_4119_count = 0;
  static  unsigned long long aesl_llvm_cbe_4120_count = 0;
  static  unsigned long long aesl_llvm_cbe_4121_count = 0;
  static  unsigned long long aesl_llvm_cbe_4122_count = 0;
  static  unsigned long long aesl_llvm_cbe_4123_count = 0;
  static  unsigned long long aesl_llvm_cbe_4124_count = 0;
  static  unsigned long long aesl_llvm_cbe_4125_count = 0;
  signed long long *llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_4126_count = 0;
  signed long long *llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_4127_count = 0;
  signed long long *llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_4128_count = 0;
  signed long long *llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_4129_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge874_count = 0;
  unsigned long long llvm_cbe_storemerge874;
  unsigned long long llvm_cbe_storemerge874__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4130_count = 0;
  signed long long *llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_4131_count = 0;
  unsigned long long llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_4132_count = 0;
  signed long long *llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_4133_count = 0;
  unsigned long long llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_4134_count = 0;
  signed long long *llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_4135_count = 0;
  static  unsigned long long aesl_llvm_cbe_4136_count = 0;
  unsigned long long llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_4137_count = 0;
  static  unsigned long long aesl_llvm_cbe_4138_count = 0;
  static  unsigned long long aesl_llvm_cbe_4139_count = 0;
  static  unsigned long long aesl_llvm_cbe_4140_count = 0;
  static  unsigned long long aesl_llvm_cbe_4141_count = 0;
  static  unsigned long long aesl_llvm_cbe_4142_count = 0;
  static  unsigned long long aesl_llvm_cbe_4143_count = 0;
  static  unsigned long long aesl_llvm_cbe_4144_count = 0;
  static  unsigned long long aesl_llvm_cbe_4145_count = 0;
  static  unsigned long long aesl_llvm_cbe_4146_count = 0;
  static  unsigned long long aesl_llvm_cbe_4147_count = 0;
  static  unsigned long long aesl_llvm_cbe_4148_count = 0;
  static  unsigned long long aesl_llvm_cbe_4149_count = 0;
  static  unsigned long long aesl_llvm_cbe_4150_count = 0;
  static  unsigned long long aesl_llvm_cbe_4151_count = 0;
  static  unsigned long long aesl_llvm_cbe_4152_count = 0;
  static  unsigned long long aesl_llvm_cbe_4153_count = 0;
  static  unsigned long long aesl_llvm_cbe_4154_count = 0;
  static  unsigned long long aesl_llvm_cbe_4155_count = 0;
  static  unsigned long long aesl_llvm_cbe_4156_count = 0;
  static  unsigned long long aesl_llvm_cbe_4157_count = 0;
  static  unsigned long long aesl_llvm_cbe_4158_count = 0;
  static  unsigned long long aesl_llvm_cbe_4159_count = 0;
  static  unsigned long long aesl_llvm_cbe_4160_count = 0;
  static  unsigned long long aesl_llvm_cbe_4161_count = 0;
  static  unsigned long long aesl_llvm_cbe_4162_count = 0;
  static  unsigned long long aesl_llvm_cbe_4163_count = 0;
  static  unsigned long long aesl_llvm_cbe_4164_count = 0;
  static  unsigned long long aesl_llvm_cbe_4165_count = 0;
  static  unsigned long long aesl_llvm_cbe_4166_count = 0;
  static  unsigned long long aesl_llvm_cbe_4167_count = 0;
  static  unsigned long long aesl_llvm_cbe_4168_count = 0;
  static  unsigned long long aesl_llvm_cbe_4169_count = 0;
  static  unsigned long long aesl_llvm_cbe_4170_count = 0;
  static  unsigned long long aesl_llvm_cbe_4171_count = 0;
  static  unsigned long long aesl_llvm_cbe_4172_count = 0;
  static  unsigned long long aesl_llvm_cbe_4173_count = 0;
  static  unsigned long long aesl_llvm_cbe_4174_count = 0;
  static  unsigned long long aesl_llvm_cbe_4175_count = 0;
  static  unsigned long long aesl_llvm_cbe_4176_count = 0;
  static  unsigned long long aesl_llvm_cbe_4177_count = 0;
  static  unsigned long long aesl_llvm_cbe_4178_count = 0;
  static  unsigned long long aesl_llvm_cbe_4179_count = 0;
  static  unsigned long long aesl_llvm_cbe_4180_count = 0;
  static  unsigned long long aesl_llvm_cbe_4181_count = 0;
  static  unsigned long long aesl_llvm_cbe_4182_count = 0;
  static  unsigned long long aesl_llvm_cbe_4183_count = 0;
  static  unsigned long long aesl_llvm_cbe_4184_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond127_count = 0;
  static  unsigned long long aesl_llvm_cbe_4185_count = 0;
  static  unsigned long long aesl_llvm_cbe_4186_count = 0;
  static  unsigned long long aesl_llvm_cbe_4187_count = 0;
  static  unsigned long long aesl_llvm_cbe_4188_count = 0;
  static  unsigned long long aesl_llvm_cbe_4189_count = 0;
  static  unsigned long long aesl_llvm_cbe_4190_count = 0;
  static  unsigned long long aesl_llvm_cbe_4191_count = 0;
  static  unsigned long long aesl_llvm_cbe_4192_count = 0;
  static  unsigned long long aesl_llvm_cbe_4193_count = 0;
  static  unsigned long long aesl_llvm_cbe_4194_count = 0;
  static  unsigned long long aesl_llvm_cbe_4195_count = 0;
  static  unsigned long long aesl_llvm_cbe_4196_count = 0;
  static  unsigned long long aesl_llvm_cbe_4197_count = 0;
  static  unsigned long long aesl_llvm_cbe_4198_count = 0;
  static  unsigned long long aesl_llvm_cbe_4199_count = 0;
  static  unsigned long long aesl_llvm_cbe_4200_count = 0;
  static  unsigned long long aesl_llvm_cbe_4201_count = 0;
  static  unsigned long long aesl_llvm_cbe_4202_count = 0;
  static  unsigned long long aesl_llvm_cbe_4203_count = 0;
  static  unsigned long long aesl_llvm_cbe_4204_count = 0;
  static  unsigned long long aesl_llvm_cbe_4205_count = 0;
  static  unsigned long long aesl_llvm_cbe_4206_count = 0;
  static  unsigned long long aesl_llvm_cbe_4207_count = 0;
  static  unsigned long long aesl_llvm_cbe_4208_count = 0;
  static  unsigned long long aesl_llvm_cbe_4209_count = 0;
  static  unsigned long long aesl_llvm_cbe_4210_count = 0;
  static  unsigned long long aesl_llvm_cbe_4211_count = 0;
  static  unsigned long long aesl_llvm_cbe_4212_count = 0;
  static  unsigned long long aesl_llvm_cbe_4213_count = 0;
  static  unsigned long long aesl_llvm_cbe_4214_count = 0;
  static  unsigned long long aesl_llvm_cbe_4215_count = 0;
  static  unsigned long long aesl_llvm_cbe_4216_count = 0;
  static  unsigned long long aesl_llvm_cbe_4217_count = 0;
  static  unsigned long long aesl_llvm_cbe_4218_count = 0;
  static  unsigned long long aesl_llvm_cbe_4219_count = 0;
  static  unsigned long long aesl_llvm_cbe_4220_count = 0;
  static  unsigned long long aesl_llvm_cbe_4221_count = 0;
  static  unsigned long long aesl_llvm_cbe_4222_count = 0;
  static  unsigned long long aesl_llvm_cbe_4223_count = 0;
  static  unsigned long long aesl_llvm_cbe_4224_count = 0;
  static  unsigned long long aesl_llvm_cbe_4225_count = 0;
  static  unsigned long long aesl_llvm_cbe_4226_count = 0;
  static  unsigned long long aesl_llvm_cbe_4227_count = 0;
  static  unsigned long long aesl_llvm_cbe_4228_count = 0;
  static  unsigned long long aesl_llvm_cbe_4229_count = 0;
  static  unsigned long long aesl_llvm_cbe_4230_count = 0;
  static  unsigned long long aesl_llvm_cbe_4231_count = 0;
  static  unsigned long long aesl_llvm_cbe_4232_count = 0;
  static  unsigned long long aesl_llvm_cbe_4233_count = 0;
  unsigned long long llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_4234_count = 0;
  static  unsigned long long aesl_llvm_cbe_4235_count = 0;
  static  unsigned long long aesl_llvm_cbe_4236_count = 0;
  signed long long *llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_4237_count = 0;
  signed long long *llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_4238_count = 0;
  signed long long *llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_4239_count = 0;
  signed long long *llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_4240_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge971_count = 0;
  unsigned long long llvm_cbe_storemerge971;
  unsigned long long llvm_cbe_storemerge971__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4241_count = 0;
  static  unsigned long long aesl_llvm_cbe_4242_count = 0;
  static  unsigned long long aesl_llvm_cbe_4243_count = 0;
  static  unsigned long long aesl_llvm_cbe_4244_count = 0;
  static  unsigned long long aesl_llvm_cbe_4245_count = 0;
  static  unsigned long long aesl_llvm_cbe_4246_count = 0;
  static  unsigned long long aesl_llvm_cbe_4247_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2166_count = 0;
  unsigned long long llvm_cbe_storemerge2166;
  unsigned long long llvm_cbe_storemerge2166__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4248_count = 0;
  signed long long *llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_4249_count = 0;
  unsigned long long llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_4250_count = 0;
  signed long long *llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_4251_count = 0;
  unsigned long long llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_4252_count = 0;
  signed long long *llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_4253_count = 0;
  static  unsigned long long aesl_llvm_cbe_4254_count = 0;
  unsigned long long llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_4255_count = 0;
  static  unsigned long long aesl_llvm_cbe_4256_count = 0;
  static  unsigned long long aesl_llvm_cbe_4257_count = 0;
  static  unsigned long long aesl_llvm_cbe_4258_count = 0;
  static  unsigned long long aesl_llvm_cbe_4259_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond126_count = 0;
  static  unsigned long long aesl_llvm_cbe_4260_count = 0;
  static  unsigned long long aesl_llvm_cbe_4261_count = 0;
  unsigned long long llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_4262_count = 0;
  static  unsigned long long aesl_llvm_cbe_4263_count = 0;
  float *llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_4264_count = 0;
  float llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_4265_count = 0;
  static  unsigned long long aesl_llvm_cbe_4266_count = 0;
  float *llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_4267_count = 0;
  static  unsigned long long aesl_llvm_cbe_4268_count = 0;
  unsigned long long llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_4269_count = 0;
  static  unsigned long long aesl_llvm_cbe_4270_count = 0;
  static  unsigned long long aesl_llvm_cbe_4271_count = 0;
  static  unsigned long long aesl_llvm_cbe_4272_count = 0;
  static  unsigned long long aesl_llvm_cbe_4273_count = 0;
  static  unsigned long long aesl_llvm_cbe_4274_count = 0;
  static  unsigned long long aesl_llvm_cbe_4275_count = 0;
  static  unsigned long long aesl_llvm_cbe_4276_count = 0;
  static  unsigned long long aesl_llvm_cbe_4277_count = 0;
  static  unsigned long long aesl_llvm_cbe_4278_count = 0;
  static  unsigned long long aesl_llvm_cbe_4279_count = 0;
  static  unsigned long long aesl_llvm_cbe_4280_count = 0;
  static  unsigned long long aesl_llvm_cbe_4281_count = 0;
  static  unsigned long long aesl_llvm_cbe_4282_count = 0;
  static  unsigned long long aesl_llvm_cbe_4283_count = 0;
  static  unsigned long long aesl_llvm_cbe_4284_count = 0;
  static  unsigned long long aesl_llvm_cbe_4285_count = 0;
  static  unsigned long long aesl_llvm_cbe_4286_count = 0;
  static  unsigned long long aesl_llvm_cbe_4287_count = 0;
  static  unsigned long long aesl_llvm_cbe_4288_count = 0;
  static  unsigned long long aesl_llvm_cbe_4289_count = 0;
  static  unsigned long long aesl_llvm_cbe_4290_count = 0;
  static  unsigned long long aesl_llvm_cbe_4291_count = 0;
  static  unsigned long long aesl_llvm_cbe_4292_count = 0;
  static  unsigned long long aesl_llvm_cbe_4293_count = 0;
  static  unsigned long long aesl_llvm_cbe_4294_count = 0;
  static  unsigned long long aesl_llvm_cbe_4295_count = 0;
  static  unsigned long long aesl_llvm_cbe_4296_count = 0;
  static  unsigned long long aesl_llvm_cbe_4297_count = 0;
  static  unsigned long long aesl_llvm_cbe_4298_count = 0;
  static  unsigned long long aesl_llvm_cbe_4299_count = 0;
  static  unsigned long long aesl_llvm_cbe_4300_count = 0;
  static  unsigned long long aesl_llvm_cbe_4301_count = 0;
  static  unsigned long long aesl_llvm_cbe_4302_count = 0;
  static  unsigned long long aesl_llvm_cbe_4303_count = 0;
  static  unsigned long long aesl_llvm_cbe_4304_count = 0;
  static  unsigned long long aesl_llvm_cbe_4305_count = 0;
  static  unsigned long long aesl_llvm_cbe_4306_count = 0;
  static  unsigned long long aesl_llvm_cbe_4307_count = 0;
  static  unsigned long long aesl_llvm_cbe_4308_count = 0;
  static  unsigned long long aesl_llvm_cbe_4309_count = 0;
  static  unsigned long long aesl_llvm_cbe_4310_count = 0;
  static  unsigned long long aesl_llvm_cbe_4311_count = 0;
  static  unsigned long long aesl_llvm_cbe_4312_count = 0;
  static  unsigned long long aesl_llvm_cbe_4313_count = 0;
  static  unsigned long long aesl_llvm_cbe_4314_count = 0;
  static  unsigned long long aesl_llvm_cbe_4315_count = 0;
  static  unsigned long long aesl_llvm_cbe_4316_count = 0;
  static  unsigned long long aesl_llvm_cbe_4317_count = 0;
  unsigned long long llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_4318_count = 0;
  static  unsigned long long aesl_llvm_cbe_4319_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1063_count = 0;
  unsigned long long llvm_cbe_storemerge1063;
  unsigned long long llvm_cbe_storemerge1063__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4320_count = 0;
  static  unsigned long long aesl_llvm_cbe_4321_count = 0;
  static  unsigned long long aesl_llvm_cbe_4322_count = 0;
  static  unsigned long long aesl_llvm_cbe_4323_count = 0;
  static  unsigned long long aesl_llvm_cbe_4324_count = 0;
  static  unsigned long long aesl_llvm_cbe_4325_count = 0;
  static  unsigned long long aesl_llvm_cbe_4326_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2058_count = 0;
  unsigned long long llvm_cbe_storemerge2058;
  unsigned long long llvm_cbe_storemerge2058__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4327_count = 0;
  signed long long *llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_4328_count = 0;
  unsigned long long llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_4329_count = 0;
  signed long long *llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_4330_count = 0;
  unsigned long long llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_4331_count = 0;
  signed long long *llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_4332_count = 0;
  static  unsigned long long aesl_llvm_cbe_4333_count = 0;
  unsigned long long llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_4334_count = 0;
  static  unsigned long long aesl_llvm_cbe_4335_count = 0;
  static  unsigned long long aesl_llvm_cbe_4336_count = 0;
  static  unsigned long long aesl_llvm_cbe_4337_count = 0;
  static  unsigned long long aesl_llvm_cbe_4338_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond125_count = 0;
  static  unsigned long long aesl_llvm_cbe_4339_count = 0;
  static  unsigned long long aesl_llvm_cbe_4340_count = 0;
  unsigned long long llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_4341_count = 0;
  static  unsigned long long aesl_llvm_cbe_4342_count = 0;
  float *llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_4343_count = 0;
  float llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_4344_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_sum29_count = 0;
  unsigned long long llvm_cbe__2e_sum29;
  static  unsigned long long aesl_llvm_cbe_4345_count = 0;
  float *llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_4346_count = 0;
  static  unsigned long long aesl_llvm_cbe_4347_count = 0;
  unsigned long long llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_4348_count = 0;
  static  unsigned long long aesl_llvm_cbe_4349_count = 0;
  static  unsigned long long aesl_llvm_cbe_4350_count = 0;
  static  unsigned long long aesl_llvm_cbe_4351_count = 0;
  static  unsigned long long aesl_llvm_cbe_4352_count = 0;
  static  unsigned long long aesl_llvm_cbe_4353_count = 0;
  static  unsigned long long aesl_llvm_cbe_4354_count = 0;
  static  unsigned long long aesl_llvm_cbe_4355_count = 0;
  static  unsigned long long aesl_llvm_cbe_4356_count = 0;
  static  unsigned long long aesl_llvm_cbe_4357_count = 0;
  static  unsigned long long aesl_llvm_cbe_4358_count = 0;
  static  unsigned long long aesl_llvm_cbe_4359_count = 0;
  static  unsigned long long aesl_llvm_cbe_4360_count = 0;
  static  unsigned long long aesl_llvm_cbe_4361_count = 0;
  static  unsigned long long aesl_llvm_cbe_4362_count = 0;
  static  unsigned long long aesl_llvm_cbe_4363_count = 0;
  static  unsigned long long aesl_llvm_cbe_4364_count = 0;
  static  unsigned long long aesl_llvm_cbe_4365_count = 0;
  static  unsigned long long aesl_llvm_cbe_4366_count = 0;
  static  unsigned long long aesl_llvm_cbe_4367_count = 0;
  static  unsigned long long aesl_llvm_cbe_4368_count = 0;
  static  unsigned long long aesl_llvm_cbe_4369_count = 0;
  static  unsigned long long aesl_llvm_cbe_4370_count = 0;
  static  unsigned long long aesl_llvm_cbe_4371_count = 0;
  static  unsigned long long aesl_llvm_cbe_4372_count = 0;
  static  unsigned long long aesl_llvm_cbe_4373_count = 0;
  static  unsigned long long aesl_llvm_cbe_4374_count = 0;
  static  unsigned long long aesl_llvm_cbe_4375_count = 0;
  static  unsigned long long aesl_llvm_cbe_4376_count = 0;
  static  unsigned long long aesl_llvm_cbe_4377_count = 0;
  static  unsigned long long aesl_llvm_cbe_4378_count = 0;
  static  unsigned long long aesl_llvm_cbe_4379_count = 0;
  static  unsigned long long aesl_llvm_cbe_4380_count = 0;
  static  unsigned long long aesl_llvm_cbe_4381_count = 0;
  static  unsigned long long aesl_llvm_cbe_4382_count = 0;
  static  unsigned long long aesl_llvm_cbe_4383_count = 0;
  static  unsigned long long aesl_llvm_cbe_4384_count = 0;
  static  unsigned long long aesl_llvm_cbe_4385_count = 0;
  static  unsigned long long aesl_llvm_cbe_4386_count = 0;
  static  unsigned long long aesl_llvm_cbe_4387_count = 0;
  static  unsigned long long aesl_llvm_cbe_4388_count = 0;
  static  unsigned long long aesl_llvm_cbe_4389_count = 0;
  static  unsigned long long aesl_llvm_cbe_4390_count = 0;
  static  unsigned long long aesl_llvm_cbe_4391_count = 0;
  static  unsigned long long aesl_llvm_cbe_4392_count = 0;
  static  unsigned long long aesl_llvm_cbe_4393_count = 0;
  static  unsigned long long aesl_llvm_cbe_4394_count = 0;
  static  unsigned long long aesl_llvm_cbe_4395_count = 0;
  static  unsigned long long aesl_llvm_cbe_4396_count = 0;
  unsigned long long llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_4397_count = 0;
  static  unsigned long long aesl_llvm_cbe_4398_count = 0;
  static  unsigned long long aesl_llvm_cbe_4399_count = 0;
  static  unsigned long long aesl_llvm_cbe_4400_count = 0;
  static  unsigned long long aesl_llvm_cbe_4401_count = 0;
  static  unsigned long long aesl_llvm_cbe_4402_count = 0;
  static  unsigned long long aesl_llvm_cbe_4403_count = 0;
  static  unsigned long long aesl_llvm_cbe_4404_count = 0;
  static  unsigned long long aesl_llvm_cbe_4405_count = 0;
  static  unsigned long long aesl_llvm_cbe_4406_count = 0;
  static  unsigned long long aesl_llvm_cbe_4407_count = 0;
  static  unsigned long long aesl_llvm_cbe_4408_count = 0;
  static  unsigned long long aesl_llvm_cbe_4409_count = 0;
  static  unsigned long long aesl_llvm_cbe_4410_count = 0;
  static  unsigned long long aesl_llvm_cbe_4411_count = 0;
  static  unsigned long long aesl_llvm_cbe_4412_count = 0;
  static  unsigned long long aesl_llvm_cbe_4413_count = 0;
  static  unsigned long long aesl_llvm_cbe_4414_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1457_count = 0;
  unsigned long long llvm_cbe_storemerge1457;
  unsigned long long llvm_cbe_storemerge1457__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4415_count = 0;
  static  unsigned long long aesl_llvm_cbe_4416_count = 0;
  static  unsigned long long aesl_llvm_cbe_4417_count = 0;
  static  unsigned long long aesl_llvm_cbe_4418_count = 0;
  static  unsigned long long aesl_llvm_cbe_4419_count = 0;
  static  unsigned long long aesl_llvm_cbe_4420_count = 0;
  static  unsigned long long aesl_llvm_cbe_4421_count = 0;
  static  unsigned long long aesl_llvm_cbe_4422_count = 0;
  static  unsigned long long aesl_llvm_cbe_4423_count = 0;
  unsigned long long llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_4424_count = 0;
  static  unsigned long long aesl_llvm_cbe_4425_count = 0;
  static  unsigned long long aesl_llvm_cbe_4426_count = 0;
  static  unsigned long long aesl_llvm_cbe_4427_count = 0;
  static  unsigned long long aesl_llvm_cbe_4428_count = 0;
  static  unsigned long long aesl_llvm_cbe_4429_count = 0;
  static  unsigned long long aesl_llvm_cbe_4430_count = 0;
  static  unsigned long long aesl_llvm_cbe_4431_count = 0;
  static  unsigned long long aesl_llvm_cbe_4432_count = 0;
  static  unsigned long long aesl_llvm_cbe_4433_count = 0;
  static  unsigned long long aesl_llvm_cbe_4434_count = 0;
  static  unsigned long long aesl_llvm_cbe_4435_count = 0;
  static  unsigned long long aesl_llvm_cbe_4436_count = 0;
  static  unsigned long long aesl_llvm_cbe_4437_count = 0;
  static  unsigned long long aesl_llvm_cbe_4438_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1852_count = 0;
  unsigned long long llvm_cbe_storemerge1852;
  unsigned long long llvm_cbe_storemerge1852__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4439_count = 0;
  float llvm_cbe_tmp__328;
  float llvm_cbe_tmp__328__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4440_count = 0;
  unsigned long long llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_4441_count = 0;
  float *llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_4442_count = 0;
  float llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_4443_count = 0;
  float llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_4444_count = 0;
  float llvm_cbe_tmp__333;
  static  unsigned long long aesl_llvm_cbe_4445_count = 0;
  static  unsigned long long aesl_llvm_cbe_4446_count = 0;
  static  unsigned long long aesl_llvm_cbe_4447_count = 0;
  static  unsigned long long aesl_llvm_cbe_4448_count = 0;
  static  unsigned long long aesl_llvm_cbe_4449_count = 0;
  static  unsigned long long aesl_llvm_cbe_4450_count = 0;
  unsigned long long llvm_cbe_tmp__334;
  static  unsigned long long aesl_llvm_cbe_4451_count = 0;
  static  unsigned long long aesl_llvm_cbe_4452_count = 0;
  static  unsigned long long aesl_llvm_cbe_4453_count = 0;
  static  unsigned long long aesl_llvm_cbe_4454_count = 0;
  static  unsigned long long aesl_llvm_cbe_4455_count = 0;
  static  unsigned long long aesl_llvm_cbe_4456_count = 0;
  static  unsigned long long aesl_llvm_cbe_4457_count = 0;
  static  unsigned long long aesl_llvm_cbe_4458_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond124_count = 0;
  static  unsigned long long aesl_llvm_cbe_4459_count = 0;
  static  unsigned long long aesl_llvm_cbe_4460_count = 0;
  float llvm_cbe_tmp__335;
  static  unsigned long long aesl_llvm_cbe_4461_count = 0;
  float llvm_cbe_tmp__336;
  static  unsigned long long aesl_llvm_cbe_4462_count = 0;
  static  unsigned long long aesl_llvm_cbe_4463_count = 0;
  static  unsigned long long aesl_llvm_cbe_4464_count = 0;
  static  unsigned long long aesl_llvm_cbe_4465_count = 0;
  static  unsigned long long aesl_llvm_cbe_4466_count = 0;
  static  unsigned long long aesl_llvm_cbe_4467_count = 0;
  static  unsigned long long aesl_llvm_cbe_4468_count = 0;
  static  unsigned long long aesl_llvm_cbe_4469_count = 0;
  static  unsigned long long aesl_llvm_cbe_4470_count = 0;
  static  unsigned long long aesl_llvm_cbe_4471_count = 0;
  static  unsigned long long aesl_llvm_cbe_4472_count = 0;
  static  unsigned long long aesl_llvm_cbe_4473_count = 0;
  static  unsigned long long aesl_llvm_cbe_4474_count = 0;
  static  unsigned long long aesl_llvm_cbe_4475_count = 0;
  static  unsigned long long aesl_llvm_cbe_4476_count = 0;
  static  unsigned long long aesl_llvm_cbe_4477_count = 0;
  unsigned long long llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_4478_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1946_count = 0;
  unsigned long long llvm_cbe_storemerge1946;
  unsigned long long llvm_cbe_storemerge1946__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4479_count = 0;
  unsigned long long llvm_cbe_tmp__338;
  static  unsigned long long aesl_llvm_cbe_4480_count = 0;
  float *llvm_cbe_tmp__339;
  static  unsigned long long aesl_llvm_cbe_4481_count = 0;
  float llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_4482_count = 0;
  float llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_4483_count = 0;
  static  unsigned long long aesl_llvm_cbe_4484_count = 0;
  unsigned long long llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_4485_count = 0;
  static  unsigned long long aesl_llvm_cbe_4486_count = 0;
  static  unsigned long long aesl_llvm_cbe_4487_count = 0;
  static  unsigned long long aesl_llvm_cbe_4488_count = 0;
  static  unsigned long long aesl_llvm_cbe_4489_count = 0;
  static  unsigned long long aesl_llvm_cbe_4490_count = 0;
  static  unsigned long long aesl_llvm_cbe_4491_count = 0;
  static  unsigned long long aesl_llvm_cbe_4492_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond122_count = 0;
  static  unsigned long long aesl_llvm_cbe_4493_count = 0;
  static  unsigned long long aesl_llvm_cbe_4494_count = 0;
  unsigned long long llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_4495_count = 0;
  static  unsigned long long aesl_llvm_cbe_4496_count = 0;
  static  unsigned long long aesl_llvm_cbe_4497_count = 0;
  static  unsigned long long aesl_llvm_cbe_4498_count = 0;
  static  unsigned long long aesl_llvm_cbe_4499_count = 0;
  static  unsigned long long aesl_llvm_cbe_4500_count = 0;
  static  unsigned long long aesl_llvm_cbe_4501_count = 0;
  static  unsigned long long aesl_llvm_cbe_4502_count = 0;
  static  unsigned long long aesl_llvm_cbe_4503_count = 0;
  static  unsigned long long aesl_llvm_cbe_4504_count = 0;
  static  unsigned long long aesl_llvm_cbe_4505_count = 0;
  static  unsigned long long aesl_llvm_cbe_4506_count = 0;
  static  unsigned long long aesl_llvm_cbe_4507_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1545_count = 0;
  unsigned long long llvm_cbe_storemerge1545;
  unsigned long long llvm_cbe_storemerge1545__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4508_count = 0;
  static  unsigned long long aesl_llvm_cbe_4509_count = 0;
  static  unsigned long long aesl_llvm_cbe_4510_count = 0;
  static  unsigned long long aesl_llvm_cbe_4511_count = 0;
  static  unsigned long long aesl_llvm_cbe_4512_count = 0;
  static  unsigned long long aesl_llvm_cbe_4513_count = 0;
  static  unsigned long long aesl_llvm_cbe_4514_count = 0;
  static  unsigned long long aesl_llvm_cbe_4515_count = 0;
  static  unsigned long long aesl_llvm_cbe_4516_count = 0;
  unsigned long long llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_4517_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1641_count = 0;
  unsigned long long llvm_cbe_storemerge1641;
  unsigned long long llvm_cbe_storemerge1641__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4518_count = 0;
  float llvm_cbe_tmp__345;
  float llvm_cbe_tmp__345__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4519_count = 0;
  unsigned long long llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe__2e_sum28_count = 0;
  unsigned long long llvm_cbe__2e_sum28;
  static  unsigned long long aesl_llvm_cbe_4520_count = 0;
  float *llvm_cbe_tmp__347;
  static  unsigned long long aesl_llvm_cbe_4521_count = 0;
  float llvm_cbe_tmp__348;
  static  unsigned long long aesl_llvm_cbe_4522_count = 0;
  float llvm_cbe_tmp__349;
  static  unsigned long long aesl_llvm_cbe_4523_count = 0;
  float llvm_cbe_tmp__350;
  static  unsigned long long aesl_llvm_cbe_4524_count = 0;
  static  unsigned long long aesl_llvm_cbe_4525_count = 0;
  static  unsigned long long aesl_llvm_cbe_4526_count = 0;
  static  unsigned long long aesl_llvm_cbe_4527_count = 0;
  static  unsigned long long aesl_llvm_cbe_4528_count = 0;
  static  unsigned long long aesl_llvm_cbe_4529_count = 0;
  unsigned long long llvm_cbe_tmp__351;
  static  unsigned long long aesl_llvm_cbe_4530_count = 0;
  static  unsigned long long aesl_llvm_cbe_4531_count = 0;
  static  unsigned long long aesl_llvm_cbe_4532_count = 0;
  static  unsigned long long aesl_llvm_cbe_4533_count = 0;
  static  unsigned long long aesl_llvm_cbe_4534_count = 0;
  static  unsigned long long aesl_llvm_cbe_4535_count = 0;
  static  unsigned long long aesl_llvm_cbe_4536_count = 0;
  static  unsigned long long aesl_llvm_cbe_4537_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond121_count = 0;
  static  unsigned long long aesl_llvm_cbe_4538_count = 0;
  static  unsigned long long aesl_llvm_cbe_4539_count = 0;
  float llvm_cbe_tmp__352;
  static  unsigned long long aesl_llvm_cbe_4540_count = 0;
  float llvm_cbe_tmp__353;
  static  unsigned long long aesl_llvm_cbe_4541_count = 0;
  static  unsigned long long aesl_llvm_cbe_4542_count = 0;
  static  unsigned long long aesl_llvm_cbe_4543_count = 0;
  static  unsigned long long aesl_llvm_cbe_4544_count = 0;
  static  unsigned long long aesl_llvm_cbe_4545_count = 0;
  static  unsigned long long aesl_llvm_cbe_4546_count = 0;
  static  unsigned long long aesl_llvm_cbe_4547_count = 0;
  static  unsigned long long aesl_llvm_cbe_4548_count = 0;
  static  unsigned long long aesl_llvm_cbe_4549_count = 0;
  static  unsigned long long aesl_llvm_cbe_4550_count = 0;
  static  unsigned long long aesl_llvm_cbe_4551_count = 0;
  static  unsigned long long aesl_llvm_cbe_4552_count = 0;
  static  unsigned long long aesl_llvm_cbe_4553_count = 0;
  static  unsigned long long aesl_llvm_cbe_4554_count = 0;
  static  unsigned long long aesl_llvm_cbe_4555_count = 0;
  static  unsigned long long aesl_llvm_cbe_4556_count = 0;
  unsigned long long llvm_cbe_tmp__354;
  static  unsigned long long aesl_llvm_cbe_4557_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1736_count = 0;
  unsigned long long llvm_cbe_storemerge1736;
  unsigned long long llvm_cbe_storemerge1736__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4558_count = 0;
  unsigned long long llvm_cbe_tmp__355;
  static  unsigned long long aesl_llvm_cbe__2e_sum27_count = 0;
  unsigned long long llvm_cbe__2e_sum27;
  static  unsigned long long aesl_llvm_cbe_4559_count = 0;
  float *llvm_cbe_tmp__356;
  static  unsigned long long aesl_llvm_cbe_4560_count = 0;
  float llvm_cbe_tmp__357;
  static  unsigned long long aesl_llvm_cbe_4561_count = 0;
  float llvm_cbe_tmp__358;
  static  unsigned long long aesl_llvm_cbe_4562_count = 0;
  static  unsigned long long aesl_llvm_cbe_4563_count = 0;
  unsigned long long llvm_cbe_tmp__359;
  static  unsigned long long aesl_llvm_cbe_4564_count = 0;
  static  unsigned long long aesl_llvm_cbe_4565_count = 0;
  static  unsigned long long aesl_llvm_cbe_4566_count = 0;
  static  unsigned long long aesl_llvm_cbe_4567_count = 0;
  static  unsigned long long aesl_llvm_cbe_4568_count = 0;
  static  unsigned long long aesl_llvm_cbe_4569_count = 0;
  static  unsigned long long aesl_llvm_cbe_4570_count = 0;
  static  unsigned long long aesl_llvm_cbe_4571_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond119_count = 0;
  static  unsigned long long aesl_llvm_cbe_4572_count = 0;
  static  unsigned long long aesl_llvm_cbe_4573_count = 0;
  unsigned long long llvm_cbe_tmp__360;
  static  unsigned long long aesl_llvm_cbe_4574_count = 0;
  static  unsigned long long aesl_llvm_cbe_4575_count = 0;
  static  unsigned long long aesl_llvm_cbe_4576_count = 0;
  static  unsigned long long aesl_llvm_cbe_4577_count = 0;
  static  unsigned long long aesl_llvm_cbe_4578_count = 0;
  static  unsigned long long aesl_llvm_cbe_4579_count = 0;
  static  unsigned long long aesl_llvm_cbe_4580_count = 0;
  static  unsigned long long aesl_llvm_cbe_4581_count = 0;
  static  unsigned long long aesl_llvm_cbe_4582_count = 0;
  static  unsigned long long aesl_llvm_cbe_4583_count = 0;
  static  unsigned long long aesl_llvm_cbe_4584_count = 0;
  static  unsigned long long aesl_llvm_cbe_4585_count = 0;
  static  unsigned long long aesl_llvm_cbe_4586_count = 0;
  static  unsigned long long aesl_llvm_cbe_4587_count = 0;
  static  unsigned long long aesl_llvm_cbe_4588_count = 0;
  static  unsigned long long aesl_llvm_cbe_4589_count = 0;
  static  unsigned long long aesl_llvm_cbe_4590_count = 0;
  static  unsigned long long aesl_llvm_cbe_4591_count = 0;
  static  unsigned long long aesl_llvm_cbe_4592_count = 0;
  static  unsigned long long aesl_llvm_cbe_4593_count = 0;
  static  unsigned long long aesl_llvm_cbe_4594_count = 0;
  static  unsigned long long aesl_llvm_cbe_4595_count = 0;
  static  unsigned long long aesl_llvm_cbe_4596_count = 0;
  static  unsigned long long aesl_llvm_cbe_4597_count = 0;
  static  unsigned long long aesl_llvm_cbe_4598_count = 0;
  static  unsigned long long aesl_llvm_cbe_4599_count = 0;
  static  unsigned long long aesl_llvm_cbe_4600_count = 0;
  static  unsigned long long aesl_llvm_cbe_4601_count = 0;
  static  unsigned long long aesl_llvm_cbe_4602_count = 0;
  static  unsigned long long aesl_llvm_cbe_4603_count = 0;
  static  unsigned long long aesl_llvm_cbe_4604_count = 0;
  static  unsigned long long aesl_llvm_cbe_4605_count = 0;
  static  unsigned long long aesl_llvm_cbe_4606_count = 0;
  static  unsigned long long aesl_llvm_cbe_4607_count = 0;
  static  unsigned long long aesl_llvm_cbe_4608_count = 0;
  static  unsigned long long aesl_llvm_cbe_4609_count = 0;
  static  unsigned long long aesl_llvm_cbe_4610_count = 0;
  static  unsigned long long aesl_llvm_cbe_4611_count = 0;
  static  unsigned long long aesl_llvm_cbe_4612_count = 0;
  static  unsigned long long aesl_llvm_cbe_4613_count = 0;
  static  unsigned long long aesl_llvm_cbe_4614_count = 0;
  static  unsigned long long aesl_llvm_cbe_4615_count = 0;
  static  unsigned long long aesl_llvm_cbe_4616_count = 0;
  static  unsigned long long aesl_llvm_cbe_4617_count = 0;
  static  unsigned long long aesl_llvm_cbe_4618_count = 0;
  static  unsigned long long aesl_llvm_cbe_4619_count = 0;
  static  unsigned long long aesl_llvm_cbe_4620_count = 0;
  static  unsigned long long aesl_llvm_cbe_4621_count = 0;
  static  unsigned long long aesl_llvm_cbe_4622_count = 0;
  static  unsigned long long aesl_llvm_cbe_4623_count = 0;
  static  unsigned long long aesl_llvm_cbe_4624_count = 0;
  static  unsigned long long aesl_llvm_cbe_4625_count = 0;
  static  unsigned long long aesl_llvm_cbe_4626_count = 0;
  static  unsigned long long aesl_llvm_cbe_4627_count = 0;
  static  unsigned long long aesl_llvm_cbe_4628_count = 0;
  static  unsigned long long aesl_llvm_cbe_4629_count = 0;
  static  unsigned long long aesl_llvm_cbe_4630_count = 0;
  static  unsigned long long aesl_llvm_cbe_4631_count = 0;
  static  unsigned long long aesl_llvm_cbe_4632_count = 0;
  static  unsigned long long aesl_llvm_cbe_4633_count = 0;
  static  unsigned long long aesl_llvm_cbe_4634_count = 0;
  static  unsigned long long aesl_llvm_cbe_4635_count = 0;
  static  unsigned long long aesl_llvm_cbe_4636_count = 0;
  static  unsigned long long aesl_llvm_cbe_4637_count = 0;
  static  unsigned long long aesl_llvm_cbe_4638_count = 0;
  static  unsigned long long aesl_llvm_cbe_4639_count = 0;
  static  unsigned long long aesl_llvm_cbe_4640_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1134_count = 0;
  unsigned long long llvm_cbe_storemerge1134;
  unsigned long long llvm_cbe_storemerge1134__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4641_count = 0;
  static  unsigned long long aesl_llvm_cbe_4642_count = 0;
  static  unsigned long long aesl_llvm_cbe_4643_count = 0;
  static  unsigned long long aesl_llvm_cbe_4644_count = 0;
  static  unsigned long long aesl_llvm_cbe_4645_count = 0;
  static  unsigned long long aesl_llvm_cbe_4646_count = 0;
  static  unsigned long long aesl_llvm_cbe_4647_count = 0;
  unsigned long long llvm_cbe_tmp__361;
  static  unsigned long long aesl_llvm_cbe_4648_count = 0;
  unsigned long long llvm_cbe_tmp__362;
  static  unsigned long long aesl_llvm_cbe_4649_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1231_count = 0;
  unsigned long long llvm_cbe_storemerge1231;
  unsigned long long llvm_cbe_storemerge1231__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4650_count = 0;
  unsigned long long llvm_cbe_tmp__363;
  static  unsigned long long aesl_llvm_cbe_4651_count = 0;
  float *llvm_cbe_tmp__364;
  static  unsigned long long aesl_llvm_cbe_4652_count = 0;
  static  unsigned long long aesl_llvm_cbe_4653_count = 0;
  static  unsigned long long aesl_llvm_cbe_4654_count = 0;
  static  unsigned long long aesl_llvm_cbe_4655_count = 0;
  static  unsigned long long aesl_llvm_cbe_4656_count = 0;
  static  unsigned long long aesl_llvm_cbe_4657_count = 0;
  static  unsigned long long aesl_llvm_cbe_4658_count = 0;
  static  unsigned long long aesl_llvm_cbe_4659_count = 0;
  unsigned long long llvm_cbe_tmp__365;
  static  unsigned long long aesl_llvm_cbe_4660_count = 0;
  static  unsigned long long aesl_llvm_cbe_4661_count = 0;
  float llvm_cbe_tmp__366;
  float llvm_cbe_tmp__366__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge1330_count = 0;
  unsigned long long llvm_cbe_storemerge1330;
  unsigned long long llvm_cbe_storemerge1330__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4662_count = 0;
  unsigned long long llvm_cbe_tmp__367;
  static  unsigned long long aesl_llvm_cbe_4663_count = 0;
  float *llvm_cbe_tmp__368;
  static  unsigned long long aesl_llvm_cbe_4664_count = 0;
  float llvm_cbe_tmp__369;
  static  unsigned long long aesl_llvm_cbe_4665_count = 0;
  unsigned long long llvm_cbe_tmp__370;
  static  unsigned long long aesl_llvm_cbe__2e_sum_count = 0;
  unsigned long long llvm_cbe__2e_sum;
  static  unsigned long long aesl_llvm_cbe_4666_count = 0;
  float *llvm_cbe_tmp__371;
  static  unsigned long long aesl_llvm_cbe_4667_count = 0;
  float llvm_cbe_tmp__372;
  static  unsigned long long aesl_llvm_cbe_4668_count = 0;
  float llvm_cbe_tmp__373;
  static  unsigned long long aesl_llvm_cbe_4669_count = 0;
  float llvm_cbe_tmp__374;
  static  unsigned long long aesl_llvm_cbe_4670_count = 0;
  static  unsigned long long aesl_llvm_cbe_4671_count = 0;
  unsigned long long llvm_cbe_tmp__375;
  static  unsigned long long aesl_llvm_cbe_4672_count = 0;
  static  unsigned long long aesl_llvm_cbe_4673_count = 0;
  static  unsigned long long aesl_llvm_cbe_4674_count = 0;
  static  unsigned long long aesl_llvm_cbe_4675_count = 0;
  static  unsigned long long aesl_llvm_cbe_4676_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_4677_count = 0;
  static  unsigned long long aesl_llvm_cbe_4678_count = 0;
  unsigned long long llvm_cbe_tmp__376;
  static  unsigned long long aesl_llvm_cbe_4679_count = 0;
  static  unsigned long long aesl_llvm_cbe_4680_count = 0;
  static  unsigned long long aesl_llvm_cbe_4681_count = 0;
  static  unsigned long long aesl_llvm_cbe_4682_count = 0;
  static  unsigned long long aesl_llvm_cbe_4683_count = 0;
  static  unsigned long long aesl_llvm_cbe_4684_count = 0;
  static  unsigned long long aesl_llvm_cbe_4685_count = 0;
  static  unsigned long long aesl_llvm_cbe_4686_count = 0;
  static  unsigned long long aesl_llvm_cbe_4687_count = 0;
  unsigned long long llvm_cbe_tmp__377;
  static  unsigned long long aesl_llvm_cbe_4688_count = 0;
  static  unsigned long long aesl_llvm_cbe_4689_count = 0;
  static  unsigned long long aesl_llvm_cbe_4690_count = 0;
  static  unsigned long long aesl_llvm_cbe_4691_count = 0;
  static  unsigned long long aesl_llvm_cbe_4692_count = 0;
  static  unsigned long long aesl_llvm_cbe_4693_count = 0;
  static  unsigned long long aesl_llvm_cbe_4694_count = 0;
  static  unsigned long long aesl_llvm_cbe_4695_count = 0;
  static  unsigned long long aesl_llvm_cbe_4696_count = 0;
  static  unsigned long long aesl_llvm_cbe_4697_count = 0;
  static  unsigned long long aesl_llvm_cbe_4698_count = 0;
  static  unsigned long long aesl_llvm_cbe_4699_count = 0;
  static  unsigned long long aesl_llvm_cbe_4700_count = 0;
  static  unsigned long long aesl_llvm_cbe_4701_count = 0;
  static  unsigned long long aesl_llvm_cbe_4702_count = 0;
  static  unsigned long long aesl_llvm_cbe_4703_count = 0;
  static  unsigned long long aesl_llvm_cbe_4704_count = 0;
  static  unsigned long long aesl_llvm_cbe_4705_count = 0;
  static  unsigned long long aesl_llvm_cbe_4706_count = 0;
  static  unsigned long long aesl_llvm_cbe_4707_count = 0;
  static  unsigned long long aesl_llvm_cbe_4708_count = 0;
  static  unsigned long long aesl_llvm_cbe_4709_count = 0;
  static  unsigned long long aesl_llvm_cbe_4710_count = 0;
  static  unsigned long long aesl_llvm_cbe_4711_count = 0;
  static  unsigned long long aesl_llvm_cbe_4712_count = 0;
  static  unsigned long long aesl_llvm_cbe_4713_count = 0;
  static  unsigned long long aesl_llvm_cbe_4714_count = 0;
  static  unsigned long long aesl_llvm_cbe_4715_count = 0;
  static  unsigned long long aesl_llvm_cbe_4716_count = 0;
  static  unsigned long long aesl_llvm_cbe_4717_count = 0;
  static  unsigned long long aesl_llvm_cbe_4718_count = 0;
  static  unsigned long long aesl_llvm_cbe_4719_count = 0;
  static  unsigned long long aesl_llvm_cbe_4720_count = 0;
  static  unsigned long long aesl_llvm_cbe_4721_count = 0;
  static  unsigned long long aesl_llvm_cbe_4722_count = 0;
  static  unsigned long long aesl_llvm_cbe_4723_count = 0;
  static  unsigned long long aesl_llvm_cbe_4724_count = 0;
  static  unsigned long long aesl_llvm_cbe_4725_count = 0;
  static  unsigned long long aesl_llvm_cbe_4726_count = 0;
  static  unsigned long long aesl_llvm_cbe_4727_count = 0;
  static  unsigned long long aesl_llvm_cbe_4728_count = 0;
  static  unsigned long long aesl_llvm_cbe_4729_count = 0;
  static  unsigned long long aesl_llvm_cbe_4730_count = 0;
  static  unsigned long long aesl_llvm_cbe_4731_count = 0;
  static  unsigned long long aesl_llvm_cbe_4732_count = 0;
  static  unsigned long long aesl_llvm_cbe_4733_count = 0;
  static  unsigned long long aesl_llvm_cbe_4734_count = 0;
  static  unsigned long long aesl_llvm_cbe_4735_count = 0;
  static  unsigned long long aesl_llvm_cbe_4736_count = 0;
  static  unsigned long long aesl_llvm_cbe_4737_count = 0;
  static  unsigned long long aesl_llvm_cbe_4738_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_dot2\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 1, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3102_count);
  llvm_cbe_tmp__221 = (signed long long *)(&llvm_cbe_Ar->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3103_count);
  llvm_cbe_tmp__222 = (unsigned long long )*llvm_cbe_tmp__221;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.k2c_tensor2* %%B, i64 0, i32 1, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3113_count);
  llvm_cbe_tmp__223 = (signed long long *)(&llvm_cbe_B->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i64* %%3, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3114_count);
  llvm_cbe_tmp__224 = (unsigned long long )*llvm_cbe_tmp__223;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 2, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3128_count);
  llvm_cbe_tmp__225 = (signed long long *)(&llvm_cbe_Ar->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i64* %%5, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3129_count);
  llvm_cbe_tmp__226 = (unsigned long long )*llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__226);
  if (((llvm_cbe_tmp__222&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader109;
  } else {
    goto llvm_cbe__2e_preheader111_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader111_2e_lr_2e_ph:
  llvm_cbe_storemerge117__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__227__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader111;

  do {     /* Syntactic loop '.preheader111' to make GCC happy */
llvm_cbe__2e_preheader111:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge117 = phi i64 [ 0, %%.preheader111.lr.ph ], [ %%22, %%20  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge117_count);
  llvm_cbe_storemerge117 = (unsigned long long )llvm_cbe_storemerge117__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge117 = 0x%I64X",llvm_cbe_storemerge117);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__235);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi i64 [ 0, %%.preheader111.lr.ph ], [ %%21, %%20  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3189_count);
  llvm_cbe_tmp__227 = (unsigned long long )llvm_cbe_tmp__227__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__227);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__234);
}
  if (((llvm_cbe_naxes&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_thread;
  } else {
    llvm_cbe_storemerge23113__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__228__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph114;
  }

llvm_cbe_tmp__378:
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = phi i64 [ %%19, %%.thread ], [ %%9, %%17  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3265_count);
  llvm_cbe_tmp__234 = (unsigned long long )llvm_cbe_tmp__234__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__234);
printf("\n = 0x%I64X",llvm_cbe_tmp__233);
printf("\n = 0x%I64X",llvm_cbe_tmp__227);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add i64 %%storemerge117, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3266_count);
  llvm_cbe_tmp__235 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge117&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__235&18446744073709551615ull)));
  if (((llvm_cbe_tmp__235&18446744073709551615ULL) == (llvm_cbe_tmp__222&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader109;
  } else {
    llvm_cbe_storemerge117__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__235;   /* for PHI node */
    llvm_cbe_tmp__227__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__234;   /* for PHI node */
    goto llvm_cbe__2e_preheader111;
  }

llvm_cbe_tmp__379:
  if (((llvm_cbe__2e_&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e_thread;
  } else {
    llvm_cbe_tmp__234__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__227;   /* for PHI node */
    goto llvm_cbe_tmp__378;
  }

  do {     /* Syntactic loop '.lr.ph114' to make GCC happy */
llvm_cbe__2e_lr_2e_ph114:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23113 = phi i64 [ %%16, %%.lr.ph114 ], [ 0, %%.preheader111  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge23113_count);
  llvm_cbe_storemerge23113 = (unsigned long long )llvm_cbe_storemerge23113__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23113 = 0x%I64X",llvm_cbe_storemerge23113);
printf("\n = 0x%I64X",llvm_cbe_tmp__231);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = phi i32 [ %%., %%.lr.ph114 ], [ 0, %%.preheader111  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3245_count);
  llvm_cbe_tmp__228 = (unsigned int )llvm_cbe_tmp__228__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__228);
printf("\n. = 0x%X",llvm_cbe__2e_);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i64* %%axesA, i64 %%storemerge23113, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3246_count);
  llvm_cbe_tmp__229 = (signed long long *)(&llvm_cbe_axesA[(((signed long long )llvm_cbe_storemerge23113))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23113 = 0x%I64X",((signed long long )llvm_cbe_storemerge23113));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%13, align 8, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3247_count);
  llvm_cbe_tmp__230 = (unsigned long long )*llvm_cbe_tmp__229;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__230);
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%15, i32 1, i32 %%12, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned int )((((llvm_cbe_storemerge117&18446744073709551615ULL) == (llvm_cbe_tmp__230&18446744073709551615ULL))) ? ((unsigned int )1u) : ((unsigned int )llvm_cbe_tmp__228));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add i64 %%storemerge23113, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3249_count);
  llvm_cbe_tmp__231 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge23113&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__231&18446744073709551615ull)));
  if (((llvm_cbe_tmp__231&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__379;
  } else {
    llvm_cbe_storemerge23113__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__231;   /* for PHI node */
    llvm_cbe_tmp__228__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph114;
  }

  } while (1); /* end of syntactic loop '.lr.ph114' */
llvm_cbe__2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [5 x i64]* %%freeA, i64 0, i64 %%9, !dbg !25 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3256_count);
  llvm_cbe_tmp__232 = (signed long long *)(&llvm_cbe_freeA[(((signed long long )llvm_cbe_tmp__227))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__227));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__227) < 5 && "Write access out of array 'freeA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%storemerge117, i64* %%18, align 8, !dbg !25 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3257_count);
  *llvm_cbe_tmp__232 = llvm_cbe_storemerge117;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge117 = 0x%I64X\n", llvm_cbe_storemerge117);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add i64 %%9, 1, !dbg !25 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3258_count);
  llvm_cbe_tmp__233 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__227&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__233&18446744073709551615ull)));
  llvm_cbe_tmp__234__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__233;   /* for PHI node */
  goto llvm_cbe_tmp__378;

  } while (1); /* end of syntactic loop '.preheader111' */
llvm_cbe__2e_preheader109:
  if (((llvm_cbe_tmp__224&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader95;
  } else {
    goto llvm_cbe__2e_preheader103_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader103_2e_lr_2e_ph:
  llvm_cbe_storemerge1110__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__236__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader103;

  do {     /* Syntactic loop '.preheader103' to make GCC happy */
llvm_cbe__2e_preheader103:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1110 = phi i64 [ 0, %%.preheader103.lr.ph ], [ %%35, %%33  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1110_count);
  llvm_cbe_storemerge1110 = (unsigned long long )llvm_cbe_storemerge1110__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1110 = 0x%I64X",llvm_cbe_storemerge1110);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__244);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = phi i64 [ 0, %%.preheader103.lr.ph ], [ %%34, %%33  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3316_count);
  llvm_cbe_tmp__236 = (unsigned long long )llvm_cbe_tmp__236__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__236);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__243);
}
  if (((llvm_cbe_naxes&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_thread139;
  } else {
    llvm_cbe_storemerge22105__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__237__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph106;
  }

llvm_cbe_tmp__380:
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = phi i64 [ %%32, %%.thread139 ], [ %%23, %%30  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3390_count);
  llvm_cbe_tmp__243 = (unsigned long long )llvm_cbe_tmp__243__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__243);
printf("\n = 0x%I64X",llvm_cbe_tmp__242);
printf("\n = 0x%I64X",llvm_cbe_tmp__236);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = add i64 %%storemerge1110, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3391_count);
  llvm_cbe_tmp__244 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1110&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__244&18446744073709551615ull)));
  if (((llvm_cbe_tmp__244&18446744073709551615ULL) == (llvm_cbe_tmp__224&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader95;
  } else {
    llvm_cbe_storemerge1110__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__244;   /* for PHI node */
    llvm_cbe_tmp__236__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__243;   /* for PHI node */
    goto llvm_cbe__2e_preheader103;
  }

llvm_cbe_tmp__381:
  if (((llvm_cbe__2e_26&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e_thread139;
  } else {
    llvm_cbe_tmp__243__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__236;   /* for PHI node */
    goto llvm_cbe_tmp__380;
  }

  do {     /* Syntactic loop '.lr.ph106' to make GCC happy */
llvm_cbe__2e_lr_2e_ph106:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge22105 = phi i64 [ %%29, %%.lr.ph106 ], [ 0, %%.preheader103  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge22105_count);
  llvm_cbe_storemerge22105 = (unsigned long long )llvm_cbe_storemerge22105__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge22105 = 0x%I64X",llvm_cbe_storemerge22105);
printf("\n = 0x%I64X",llvm_cbe_tmp__240);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = phi i32 [ %%.26, %%.lr.ph106 ], [ 0, %%.preheader103  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3370_count);
  llvm_cbe_tmp__237 = (unsigned int )llvm_cbe_tmp__237__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__237);
printf("\n.26 = 0x%X",llvm_cbe__2e_26);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i64* %%axesB, i64 %%storemerge22105, !dbg !17 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3371_count);
  llvm_cbe_tmp__238 = (signed long long *)(&llvm_cbe_axesB[(((signed long long )llvm_cbe_storemerge22105))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge22105 = 0x%I64X",((signed long long )llvm_cbe_storemerge22105));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i64* %%26, align 8, !dbg !17 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3372_count);
  llvm_cbe_tmp__239 = (unsigned long long )*llvm_cbe_tmp__238;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n  %%.26 = select i1 %%28, i32 1, i32 %%25, !dbg !17 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe__2e_26_count);
  llvm_cbe__2e_26 = (unsigned int )((((llvm_cbe_storemerge1110&18446744073709551615ULL) == (llvm_cbe_tmp__239&18446744073709551615ULL))) ? ((unsigned int )1u) : ((unsigned int )llvm_cbe_tmp__237));
if (AESL_DEBUG_TRACE)
printf("\n.26 = 0x%X\n", llvm_cbe__2e_26);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i64 %%storemerge22105, 1, !dbg !28 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3374_count);
  llvm_cbe_tmp__240 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge22105&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__240&18446744073709551615ull)));
  if (((llvm_cbe_tmp__240&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__381;
  } else {
    llvm_cbe_storemerge22105__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__240;   /* for PHI node */
    llvm_cbe_tmp__237__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_26;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph106;
  }

  } while (1); /* end of syntactic loop '.lr.ph106' */
llvm_cbe__2e_thread139:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [5 x i64]* %%freeB, i64 0, i64 %%23, !dbg !25 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3381_count);
  llvm_cbe_tmp__241 = (signed long long *)(&llvm_cbe_freeB[(((signed long long )llvm_cbe_tmp__236))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__236));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__236) < 5 && "Write access out of array 'freeB' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%storemerge1110, i64* %%31, align 8, !dbg !25 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3382_count);
  *llvm_cbe_tmp__241 = llvm_cbe_storemerge1110;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1110 = 0x%I64X\n", llvm_cbe_storemerge1110);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i64 %%23, 1, !dbg !25 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3383_count);
  llvm_cbe_tmp__242 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__236&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__242&18446744073709551615ull)));
  llvm_cbe_tmp__243__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__242;   /* for PHI node */
  goto llvm_cbe_tmp__380;

  } while (1); /* end of syntactic loop '.preheader103' */
llvm_cbe__2e_preheader95:
  if (((llvm_cbe_naxes&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa97__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    llvm_cbe__2e_lcssa96__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge100;
  } else {
    llvm_cbe_storemerge298__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__245__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    llvm_cbe_tmp__246__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph99;
  }

  do {     /* Syntactic loop '.lr.ph99' to make GCC happy */
llvm_cbe__2e_lr_2e_ph99:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge298 = phi i64 [ %%48, %%.lr.ph99 ], [ 0, %%.preheader95  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge298_count);
  llvm_cbe_storemerge298 = (unsigned long long )llvm_cbe_storemerge298__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge298 = 0x%I64X",llvm_cbe_storemerge298);
printf("\n = 0x%I64X",llvm_cbe_tmp__257);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = phi i64 [ %%42, %%.lr.ph99 ], [ 1, %%.preheader95  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3441_count);
  llvm_cbe_tmp__245 = (unsigned long long )llvm_cbe_tmp__245__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__245);
printf("\n = 0x%I64X",llvm_cbe_tmp__251);
printf("\n = 0x%I64X",1ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = phi i64 [ %%47, %%.lr.ph99 ], [ 1, %%.preheader95  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3442_count);
  llvm_cbe_tmp__246 = (unsigned long long )llvm_cbe_tmp__246__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__246);
printf("\n = 0x%I64X",llvm_cbe_tmp__256);
printf("\n = 0x%I64X",1ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds i64* %%axesA, i64 %%storemerge298, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3443_count);
  llvm_cbe_tmp__247 = (signed long long *)(&llvm_cbe_axesA[(((signed long long )llvm_cbe_storemerge298))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge298 = 0x%I64X",((signed long long )llvm_cbe_storemerge298));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i64* %%38, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3444_count);
  llvm_cbe_tmp__248 = (unsigned long long )*llvm_cbe_tmp__247;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__248);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 3, i64 %%39, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3445_count);
  llvm_cbe_tmp__249 = (signed long long *)(&llvm_cbe_Ar->field3[(((signed long long )llvm_cbe_tmp__248))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__248));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load i64* %%40, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3446_count);
  llvm_cbe_tmp__250 = (unsigned long long )*llvm_cbe_tmp__249;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__250);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = mul i64 %%41, %%36, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3447_count);
  llvm_cbe_tmp__251 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__250&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__245&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__251&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds i64* %%axesB, i64 %%storemerge298, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3458_count);
  llvm_cbe_tmp__252 = (signed long long *)(&llvm_cbe_axesB[(((signed long long )llvm_cbe_storemerge298))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge298 = 0x%I64X",((signed long long )llvm_cbe_storemerge298));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load i64* %%43, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3459_count);
  llvm_cbe_tmp__253 = (unsigned long long )*llvm_cbe_tmp__252;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__253);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds %%struct.k2c_tensor2* %%B, i64 0, i32 3, i64 %%44, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3460_count);
  llvm_cbe_tmp__254 = (signed long long *)(&llvm_cbe_B->field3[(((signed long long )llvm_cbe_tmp__253))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__253));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i64* %%45, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3461_count);
  llvm_cbe_tmp__255 = (unsigned long long )*llvm_cbe_tmp__254;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__255);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = mul i64 %%46, %%37, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3462_count);
  llvm_cbe_tmp__256 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__255&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__246&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__256&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = add i64 %%storemerge298, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3468_count);
  llvm_cbe_tmp__257 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge298&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__257&18446744073709551615ull)));
  if (((llvm_cbe_tmp__257&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa97__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__251;   /* for PHI node */
    llvm_cbe__2e_lcssa96__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__256;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge100;
  } else {
    llvm_cbe_storemerge298__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__257;   /* for PHI node */
    llvm_cbe_tmp__245__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__251;   /* for PHI node */
    llvm_cbe_tmp__246__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__256;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph99;
  }

  } while (1); /* end of syntactic loop '.lr.ph99' */
llvm_cbe__2e__crit_edge100:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa97 = phi i64 [ 1, %%.preheader95 ], [ %%42, %%.lr.ph99  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe__2e_lcssa97_count);
  llvm_cbe__2e_lcssa97 = (unsigned long long )llvm_cbe__2e_lcssa97__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa97 = 0x%I64X",llvm_cbe__2e_lcssa97);
printf("\n = 0x%I64X",1ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__251);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa96 = phi i64 [ 1, %%.preheader95 ], [ %%47, %%.lr.ph99  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe__2e_lcssa96_count);
  llvm_cbe__2e_lcssa96 = (unsigned long long )llvm_cbe__2e_lcssa96__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa96 = 0x%I64X",llvm_cbe__2e_lcssa96);
printf("\n = 0x%I64X",1ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__256);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = udiv i64 %%6, %%.lcssa97, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3518_count);
  llvm_cbe_tmp__258 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__226&18446744073709551615ull)) / ((unsigned long long )(llvm_cbe__2e_lcssa97&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__258&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds %%struct.k2c_tensor2* %%B, i64 0, i32 2, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3522_count);
  llvm_cbe_tmp__259 = (signed long long *)(&llvm_cbe_B->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load i64* %%50, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3523_count);
  llvm_cbe_tmp__260 = (unsigned long long )*llvm_cbe_tmp__259;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__260);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = udiv i64 %%51, %%.lcssa96, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3524_count);
  llvm_cbe_tmp__261 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__260&18446744073709551615ull)) / ((unsigned long long )(llvm_cbe__2e_lcssa96&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__261&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = sub i64 %%2, %%naxes, !dbg !18 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3582_count);
  llvm_cbe_tmp__262 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__222&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_naxes&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__262&18446744073709551615ull)));
  if (((llvm_cbe_tmp__222&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader86;
  } else {
    llvm_cbe_storemerge391__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph93;
  }

llvm_cbe__2e_preheader86:
  if ((((unsigned long long )llvm_cbe_tmp__262&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__222&18446744073709551615ULL))) {
    llvm_cbe_storemerge488__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_storemerge112587__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__262;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph89;
  } else {
    goto llvm_cbe__2e_preheader83;
  }

  do {     /* Syntactic loop '.lr.ph93' to make GCC happy */
llvm_cbe__2e_lr_2e_ph93:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge391 = phi i64 [ %%59, %%.lr.ph93 ], [ 0, %%._crit_edge100  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge391_count);
  llvm_cbe_storemerge391 = (unsigned long long )llvm_cbe_storemerge391__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge391 = 0x%I64X",llvm_cbe_storemerge391);
printf("\n = 0x%I64X",llvm_cbe_tmp__266);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = getelementptr inbounds [5 x i64]* %%freeA, i64 0, i64 %%storemerge391, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3591_count);
  llvm_cbe_tmp__263 = (signed long long *)(&llvm_cbe_freeA[(((signed long long )llvm_cbe_storemerge391))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge391 = 0x%I64X",((signed long long )llvm_cbe_storemerge391));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge391) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'freeA' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = load i64* %%56, align 8, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3592_count);
  llvm_cbe_tmp__264 = (unsigned long long )*llvm_cbe_tmp__263;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__264);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [5 x i64]* %%permA, i64 0, i64 %%storemerge391, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3593_count);
  llvm_cbe_tmp__265 = (signed long long *)(&llvm_cbe_permA[(((signed long long )llvm_cbe_storemerge391))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge391 = 0x%I64X",((signed long long )llvm_cbe_storemerge391));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge391) < 5 && "Write access out of array 'permA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%57, i64* %%58, align 8, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3594_count);
  *llvm_cbe_tmp__265 = llvm_cbe_tmp__264;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__264);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add i64 %%storemerge391, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3595_count);
  llvm_cbe_tmp__266 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge391&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__266&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__266&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__262&18446744073709551615ULL))) {
    llvm_cbe_storemerge391__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__266;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph93;
  } else {
    goto llvm_cbe__2e_preheader86;
  }

  } while (1); /* end of syntactic loop '.lr.ph93' */
llvm_cbe__2e_preheader83:
  if (((llvm_cbe_naxes&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader79;
  } else {
    llvm_cbe_storemerge584__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph85;
  }

  do {     /* Syntactic loop '.lr.ph89' to make GCC happy */
llvm_cbe__2e_lr_2e_ph89:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge488 = phi i64 [ %%65, %%.lr.ph89 ], [ 0, %%.preheader86  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge488_count);
  llvm_cbe_storemerge488 = (unsigned long long )llvm_cbe_storemerge488__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge488 = 0x%I64X",llvm_cbe_storemerge488);
printf("\n = 0x%I64X",llvm_cbe_tmp__271);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge112587 = phi i64 [ %%64, %%.lr.ph89 ], [ %%53, %%.preheader86  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge112587_count);
  llvm_cbe_storemerge112587 = (unsigned long long )llvm_cbe_storemerge112587__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge112587 = 0x%I64X",llvm_cbe_storemerge112587);
printf("\n = 0x%I64X",llvm_cbe_tmp__270);
printf("\n = 0x%I64X",llvm_cbe_tmp__262);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds i64* %%axesA, i64 %%storemerge488, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3742_count);
  llvm_cbe_tmp__267 = (signed long long *)(&llvm_cbe_axesA[(((signed long long )llvm_cbe_storemerge488))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge488 = 0x%I64X",((signed long long )llvm_cbe_storemerge488));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load i64* %%61, align 8, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3743_count);
  llvm_cbe_tmp__268 = (unsigned long long )*llvm_cbe_tmp__267;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__268);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds [5 x i64]* %%permA, i64 0, i64 %%storemerge112587, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3744_count);
  llvm_cbe_tmp__269 = (signed long long *)(&llvm_cbe_permA[(((signed long long )llvm_cbe_storemerge112587))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge112587 = 0x%I64X",((signed long long )llvm_cbe_storemerge112587));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge112587) < 5 && "Write access out of array 'permA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%62, i64* %%63, align 8, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3745_count);
  *llvm_cbe_tmp__269 = llvm_cbe_tmp__268;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__268);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = add i64 %%storemerge112587, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3746_count);
  llvm_cbe_tmp__270 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge112587&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__270&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = add i64 %%storemerge488, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3795_count);
  llvm_cbe_tmp__271 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge488&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__271&18446744073709551615ull)));
  if (((llvm_cbe_tmp__271&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader83;
  } else {
    llvm_cbe_storemerge488__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__271;   /* for PHI node */
    llvm_cbe_storemerge112587__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__270;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph89;
  }

  } while (1); /* end of syntactic loop '.lr.ph89' */
llvm_cbe__2e_preheader79:
  if ((((unsigned long long )llvm_cbe_tmp__224&18446744073709551615ULL) > ((unsigned long long )llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe__2e_lr_2e_ph82;
  } else {
    goto llvm_cbe__2e_preheader76;
  }

llvm_cbe__2e_lr_2e_ph82:
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = sub i64 %%4, %%naxes, !dbg !19 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3808_count);
  llvm_cbe_tmp__272 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__224&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_naxes&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__272&18446744073709551615ull)));
  llvm_cbe_storemerge681__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_storemerge112480__PHI_TEMPORARY = (unsigned long long )llvm_cbe_naxes;   /* for PHI node */
  goto llvm_cbe_tmp__382;

  do {     /* Syntactic loop '.lr.ph85' to make GCC happy */
llvm_cbe__2e_lr_2e_ph85:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge584 = phi i64 [ %%71, %%.lr.ph85 ], [ 0, %%.preheader83  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge584_count);
  llvm_cbe_storemerge584 = (unsigned long long )llvm_cbe_storemerge584__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge584 = 0x%I64X",llvm_cbe_storemerge584);
printf("\n = 0x%I64X",llvm_cbe_tmp__276);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = getelementptr inbounds i64* %%axesB, i64 %%storemerge584, !dbg !17 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3810_count);
  llvm_cbe_tmp__273 = (signed long long *)(&llvm_cbe_axesB[(((signed long long )llvm_cbe_storemerge584))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge584 = 0x%I64X",((signed long long )llvm_cbe_storemerge584));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load i64* %%68, align 8, !dbg !17 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3811_count);
  llvm_cbe_tmp__274 = (unsigned long long )*llvm_cbe_tmp__273;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__274);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds [5 x i64]* %%permB, i64 0, i64 %%storemerge584, !dbg !17 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3812_count);
  llvm_cbe_tmp__275 = (signed long long *)(&llvm_cbe_permB[(((signed long long )llvm_cbe_storemerge584))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge584 = 0x%I64X",((signed long long )llvm_cbe_storemerge584));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge584) < 5 && "Write access out of array 'permB' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%69, i64* %%70, align 8, !dbg !17 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3813_count);
  *llvm_cbe_tmp__275 = llvm_cbe_tmp__274;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__274);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = add i64 %%storemerge584, 1, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3814_count);
  llvm_cbe_tmp__276 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge584&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__276&18446744073709551615ull)));
  if (((llvm_cbe_tmp__276&18446744073709551615ULL) == (llvm_cbe_naxes&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader79;
  } else {
    llvm_cbe_storemerge584__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__276;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph85;
  }

  } while (1); /* end of syntactic loop '.lr.ph85' */
llvm_cbe__2e_preheader76:
  if (((llvm_cbe_tmp__222&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader73;
  } else {
    llvm_cbe_storemerge777__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph78;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__382:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge681 = phi i64 [ 0, %%.lr.ph82 ], [ %%77, %%72  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge681_count);
  llvm_cbe_storemerge681 = (unsigned long long )llvm_cbe_storemerge681__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge681 = 0x%I64X",llvm_cbe_storemerge681);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__281);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge112480 = phi i64 [ %%naxes, %%.lr.ph82 ], [ %%76, %%72  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge112480_count);
  llvm_cbe_storemerge112480 = (unsigned long long )llvm_cbe_storemerge112480__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge112480 = 0x%I64X",llvm_cbe_storemerge112480);
printf("\nnaxes = 0x%I64X",llvm_cbe_naxes);
printf("\n = 0x%I64X",llvm_cbe_tmp__280);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [5 x i64]* %%freeB, i64 0, i64 %%storemerge681, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3912_count);
  llvm_cbe_tmp__277 = (signed long long *)(&llvm_cbe_freeB[(((signed long long )llvm_cbe_storemerge681))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge681 = 0x%I64X",((signed long long )llvm_cbe_storemerge681));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge681) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'freeB' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load i64* %%73, align 8, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3913_count);
  llvm_cbe_tmp__278 = (unsigned long long )*llvm_cbe_tmp__277;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__278);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [5 x i64]* %%permB, i64 0, i64 %%storemerge112480, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3914_count);
  llvm_cbe_tmp__279 = (signed long long *)(&llvm_cbe_permB[(((signed long long )llvm_cbe_storemerge112480))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge112480 = 0x%I64X",((signed long long )llvm_cbe_storemerge112480));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge112480) < 5 && "Write access out of array 'permB' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%74, i64* %%75, align 8, !dbg !26 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3915_count);
  *llvm_cbe_tmp__279 = llvm_cbe_tmp__278;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__278);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = add i64 %%storemerge112480, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3916_count);
  llvm_cbe_tmp__280 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge112480&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__280&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add i64 %%storemerge681, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_3965_count);
  llvm_cbe_tmp__281 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge681&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__281&18446744073709551615ull)));
  if (((llvm_cbe_tmp__281&18446744073709551615ULL) == (llvm_cbe_tmp__272&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader76;
  } else {
    llvm_cbe_storemerge681__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__281;   /* for PHI node */
    llvm_cbe_storemerge112480__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__280;   /* for PHI node */
    goto llvm_cbe_tmp__382;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader73:
  if (((llvm_cbe_tmp__224&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader70;
  } else {
    llvm_cbe_storemerge874__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph75;
  }

  do {     /* Syntactic loop '.lr.ph78' to make GCC happy */
llvm_cbe__2e_lr_2e_ph78:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge777 = phi i64 [ %%83, %%.lr.ph78 ], [ 0, %%.preheader76  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge777_count);
  llvm_cbe_storemerge777 = (unsigned long long )llvm_cbe_storemerge777__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge777 = 0x%I64X",llvm_cbe_storemerge777);
printf("\n = 0x%I64X",llvm_cbe_tmp__287);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = getelementptr inbounds [5 x i64]* %%permA, i64 0, i64 %%storemerge777, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4020_count);
  llvm_cbe_tmp__282 = (signed long long *)(&llvm_cbe_permA[(((signed long long )llvm_cbe_storemerge777))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge777 = 0x%I64X",((signed long long )llvm_cbe_storemerge777));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge777) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'permA' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load i64* %%78, align 8, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4021_count);
  llvm_cbe_tmp__283 = (unsigned long long )*llvm_cbe_tmp__282;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__283);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 3, i64 %%79, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4022_count);
  llvm_cbe_tmp__284 = (signed long long *)(&llvm_cbe_Ar->field3[(((signed long long )llvm_cbe_tmp__283))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__283));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load i64* %%80, align 8, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4023_count);
  llvm_cbe_tmp__285 = (unsigned long long )*llvm_cbe_tmp__284;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__285);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds [5 x i64]* %%newshpA, i64 0, i64 %%storemerge777, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4024_count);
  llvm_cbe_tmp__286 = (signed long long *)(&llvm_cbe_newshpA[(((signed long long )llvm_cbe_storemerge777))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge777 = 0x%I64X",((signed long long )llvm_cbe_storemerge777));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge777) < 5 && "Write access out of array 'newshpA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%81, i64* %%82, align 8, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4025_count);
  *llvm_cbe_tmp__286 = llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__285);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = add i64 %%storemerge777, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4026_count);
  llvm_cbe_tmp__287 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge777&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__287&18446744073709551615ull)));
  if (((llvm_cbe_tmp__287&18446744073709551615ULL) == (llvm_cbe_tmp__222&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader73;
  } else {
    llvm_cbe_storemerge777__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__287;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph78;
  }

  } while (1); /* end of syntactic loop '.lr.ph78' */
llvm_cbe__2e_preheader70:
  if (((llvm_cbe_tmp__226&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader62;
  } else {
    goto llvm_cbe__2e_lr_2e_ph72;
  }

llvm_cbe__2e_lr_2e_ph72:
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4125_count);
  llvm_cbe_tmp__288 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 3, i64 0, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4126_count);
  llvm_cbe_tmp__289 = (signed long long *)(&llvm_cbe_Ar->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4127_count);
  llvm_cbe_tmp__290 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = getelementptr inbounds [5 x i64]* %%newshpA, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4128_count);
  llvm_cbe_tmp__291 = (signed long long *)(&llvm_cbe_newshpA[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge971__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__383;

  do {     /* Syntactic loop '.lr.ph75' to make GCC happy */
llvm_cbe__2e_lr_2e_ph75:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge874 = phi i64 [ %%94, %%.lr.ph75 ], [ 0, %%.preheader73  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge874_count);
  llvm_cbe_storemerge874 = (unsigned long long )llvm_cbe_storemerge874__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge874 = 0x%I64X",llvm_cbe_storemerge874);
printf("\n = 0x%I64X",llvm_cbe_tmp__297);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = getelementptr inbounds [5 x i64]* %%permB, i64 0, i64 %%storemerge874, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4130_count);
  llvm_cbe_tmp__292 = (signed long long *)(&llvm_cbe_permB[(((signed long long )llvm_cbe_storemerge874))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge874 = 0x%I64X",((signed long long )llvm_cbe_storemerge874));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge874) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'permB' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load i64* %%89, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4131_count);
  llvm_cbe_tmp__293 = (unsigned long long )*llvm_cbe_tmp__292;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__293);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = getelementptr inbounds %%struct.k2c_tensor2* %%B, i64 0, i32 3, i64 %%90, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4132_count);
  llvm_cbe_tmp__294 = (signed long long *)(&llvm_cbe_B->field3[(((signed long long )llvm_cbe_tmp__293))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__293));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = load i64* %%91, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4133_count);
  llvm_cbe_tmp__295 = (unsigned long long )*llvm_cbe_tmp__294;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = getelementptr inbounds [5 x i64]* %%newshpB, i64 0, i64 %%storemerge874, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4134_count);
  llvm_cbe_tmp__296 = (signed long long *)(&llvm_cbe_newshpB[(((signed long long )llvm_cbe_storemerge874))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge874 = 0x%I64X",((signed long long )llvm_cbe_storemerge874));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge874) < 5 && "Write access out of array 'newshpB' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%92, i64* %%93, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4135_count);
  *llvm_cbe_tmp__296 = llvm_cbe_tmp__295;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = add i64 %%storemerge874, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4136_count);
  llvm_cbe_tmp__297 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge874&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__297&18446744073709551615ull)));
  if (((llvm_cbe_tmp__297&18446744073709551615ULL) == (llvm_cbe_tmp__224&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader70;
  } else {
    llvm_cbe_storemerge874__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__297;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph75;
  }

  } while (1); /* end of syntactic loop '.lr.ph75' */
llvm_cbe__2e_preheader62:
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load i64* %%50, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4233_count);
  llvm_cbe_tmp__298 = (unsigned long long )*llvm_cbe_tmp__259;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__298);
  if (((llvm_cbe_tmp__298&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge65;
  } else {
    goto llvm_cbe__2e_lr_2e_ph64;
  }

llvm_cbe__2e_lr_2e_ph64:
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 0, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4236_count);
  llvm_cbe_tmp__299 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = getelementptr inbounds %%struct.k2c_tensor2* %%B, i64 0, i32 3, i64 0, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4237_count);
  llvm_cbe_tmp__300 = (signed long long *)(&llvm_cbe_B->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 0, !dbg !24 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4238_count);
  llvm_cbe_tmp__301 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = getelementptr inbounds [5 x i64]* %%newshpB, i64 0, i64 0, !dbg !24 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4239_count);
  llvm_cbe_tmp__302 = (signed long long *)(&llvm_cbe_newshpB[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1063__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__384;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__383:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge971 = phi i64 [ 0, %%.lr.ph72 ], [ %%112, %%._crit_edge69  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge971_count);
  llvm_cbe_storemerge971 = (unsigned long long )llvm_cbe_storemerge971__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge971 = 0x%I64X",llvm_cbe_storemerge971);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__313);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_idx2sub(i64 %%storemerge971, i64* %%85, i64* %%86, i64 %%2), !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4241_count);
  k2c_idx2sub(llvm_cbe_storemerge971, (signed long long *)llvm_cbe_tmp__288, (signed long long *)llvm_cbe_tmp__289, llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge971 = 0x%I64X",llvm_cbe_storemerge971);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__222);
}
  if (((llvm_cbe_tmp__222&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge69;
  } else {
    llvm_cbe_storemerge2166__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph68;
  }

llvm_cbe__2e__crit_edge69:
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = call i64 @k2c_sub2idx(i64* %%87, i64* %%88, i64 %%2), !dbg !23 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4261_count);
  llvm_cbe_tmp__309 = (unsigned long long )k2c_sub2idx((signed long long *)llvm_cbe_tmp__290, (signed long long *)llvm_cbe_tmp__291, llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__222);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__309);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = getelementptr inbounds %%struct.k2c_tensor2* %%Ar, i64 0, i32 0, i64 %%storemerge971, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4263_count);
  llvm_cbe_tmp__310 = (float *)(&llvm_cbe_Ar->field0[(((signed long long )llvm_cbe_storemerge971))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge971 = 0x%I64X",((signed long long )llvm_cbe_storemerge971));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = load float* %%109, align 4, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4264_count);
  llvm_cbe_tmp__311 = (float )*llvm_cbe_tmp__310;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__311, *(int*)(&llvm_cbe_tmp__311));
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = getelementptr inbounds float* %%fwork, i64 %%108, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4266_count);
  llvm_cbe_tmp__312 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe_tmp__309))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__309));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%110, float* %%111, align 4, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4267_count);
  *llvm_cbe_tmp__312 = llvm_cbe_tmp__311;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__311);
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = add i64 %%storemerge971, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4268_count);
  llvm_cbe_tmp__313 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge971&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__313&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = load i64* %%5, align 8, !dbg !14 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4317_count);
  llvm_cbe_tmp__314 = (unsigned long long )*llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__314);
  if ((((unsigned long long )llvm_cbe_tmp__313&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__314&18446744073709551615ULL))) {
    llvm_cbe_storemerge971__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__313;   /* for PHI node */
    goto llvm_cbe_tmp__383;
  } else {
    goto llvm_cbe__2e_preheader62;
  }

  do {     /* Syntactic loop '.lr.ph68' to make GCC happy */
llvm_cbe__2e_lr_2e_ph68:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2166 = phi i64 [ %%107, %%.lr.ph68 ], [ 0, %%101  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge2166_count);
  llvm_cbe_storemerge2166 = (unsigned long long )llvm_cbe_storemerge2166__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2166 = 0x%I64X",llvm_cbe_storemerge2166);
printf("\n = 0x%I64X",llvm_cbe_tmp__308);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = getelementptr inbounds [5 x i64]* %%permA, i64 0, i64 %%storemerge2166, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4248_count);
  llvm_cbe_tmp__303 = (signed long long *)(&llvm_cbe_permA[(((signed long long )llvm_cbe_storemerge2166))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2166 = 0x%I64X",((signed long long )llvm_cbe_storemerge2166));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge2166) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'permA' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = load i64* %%102, align 8, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4249_count);
  llvm_cbe_tmp__304 = (unsigned long long )*llvm_cbe_tmp__303;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__304);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 %%103, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4250_count);
  llvm_cbe_tmp__305 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )llvm_cbe_tmp__304))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__304));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__304) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'Asub' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = load i64* %%104, align 8, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4251_count);
  llvm_cbe_tmp__306 = (unsigned long long )*llvm_cbe_tmp__305;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__306);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 %%storemerge2166, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4252_count);
  llvm_cbe_tmp__307 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )llvm_cbe_storemerge2166))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2166 = 0x%I64X",((signed long long )llvm_cbe_storemerge2166));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge2166) < 5 && "Write access out of array 'Bsub' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%105, i64* %%106, align 8, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4253_count);
  *llvm_cbe_tmp__307 = llvm_cbe_tmp__306;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__306);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = add i64 %%storemerge2166, 1, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4254_count);
  llvm_cbe_tmp__308 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge2166&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__308&18446744073709551615ull)));
  if (((llvm_cbe_tmp__308&18446744073709551615ULL) == (llvm_cbe_tmp__222&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge69;
  } else {
    llvm_cbe_storemerge2166__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__308;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph68;
  }

  } while (1); /* end of syntactic loop '.lr.ph68' */
  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__384:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1063 = phi i64 [ 0, %%.lr.ph64 ], [ %%126, %%._crit_edge61  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1063_count);
  llvm_cbe_storemerge1063 = (unsigned long long )llvm_cbe_storemerge1063__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1063 = 0x%I64X",llvm_cbe_storemerge1063);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__325);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_idx2sub(i64 %%storemerge1063, i64* %%97, i64* %%98, i64 %%4), !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4320_count);
  k2c_idx2sub(llvm_cbe_storemerge1063, (signed long long *)llvm_cbe_tmp__299, (signed long long *)llvm_cbe_tmp__300, llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge1063 = 0x%I64X",llvm_cbe_storemerge1063);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__224);
}
  if (((llvm_cbe_tmp__224&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge61;
  } else {
    llvm_cbe_storemerge2058__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph60;
  }

llvm_cbe__2e__crit_edge61:
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = call i64 @k2c_sub2idx(i64* %%99, i64* %%100, i64 %%4), !dbg !24 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4340_count);
  llvm_cbe_tmp__321 = (unsigned long long )k2c_sub2idx((signed long long *)llvm_cbe_tmp__301, (signed long long *)llvm_cbe_tmp__302, llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__224);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__321);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = getelementptr inbounds %%struct.k2c_tensor2* %%B, i64 0, i32 0, i64 %%storemerge1063, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4342_count);
  llvm_cbe_tmp__322 = (float *)(&llvm_cbe_B->field0[(((signed long long )llvm_cbe_storemerge1063))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1063 = 0x%I64X",((signed long long )llvm_cbe_storemerge1063));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = load float* %%123, align 4, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4343_count);
  llvm_cbe_tmp__323 = (float )*llvm_cbe_tmp__322;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__323, *(int*)(&llvm_cbe_tmp__323));
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum29 = add i64 %%122, %%6, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe__2e_sum29_count);
  llvm_cbe__2e_sum29 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__321&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__226&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum29 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum29&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = getelementptr inbounds float* %%fwork, i64 %%.sum29, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4345_count);
  llvm_cbe_tmp__324 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe__2e_sum29))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum29 = 0x%I64X",((signed long long )llvm_cbe__2e_sum29));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%124, float* %%125, align 4, !dbg !16 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4346_count);
  *llvm_cbe_tmp__324 = llvm_cbe_tmp__323;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__323);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = add i64 %%storemerge1063, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4347_count);
  llvm_cbe_tmp__325 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1063&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__325&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = load i64* %%50, align 8, !dbg !15 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4396_count);
  llvm_cbe_tmp__326 = (unsigned long long )*llvm_cbe_tmp__259;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__326);
  if ((((unsigned long long )llvm_cbe_tmp__325&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__326&18446744073709551615ULL))) {
    llvm_cbe_storemerge1063__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__325;   /* for PHI node */
    goto llvm_cbe_tmp__384;
  } else {
    goto llvm_cbe__2e__crit_edge65;
  }

  do {     /* Syntactic loop '.lr.ph60' to make GCC happy */
llvm_cbe__2e_lr_2e_ph60:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2058 = phi i64 [ %%121, %%.lr.ph60 ], [ 0, %%115  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge2058_count);
  llvm_cbe_storemerge2058 = (unsigned long long )llvm_cbe_storemerge2058__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2058 = 0x%I64X",llvm_cbe_storemerge2058);
printf("\n = 0x%I64X",llvm_cbe_tmp__320);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds [5 x i64]* %%permB, i64 0, i64 %%storemerge2058, !dbg !30 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4327_count);
  llvm_cbe_tmp__315 = (signed long long *)(&llvm_cbe_permB[(((signed long long )llvm_cbe_storemerge2058))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2058 = 0x%I64X",((signed long long )llvm_cbe_storemerge2058));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge2058) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'permB' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load i64* %%116, align 8, !dbg !30 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4328_count);
  llvm_cbe_tmp__316 = (unsigned long long )*llvm_cbe_tmp__315;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__316);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 %%117, !dbg !30 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4329_count);
  llvm_cbe_tmp__317 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )llvm_cbe_tmp__316))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__316));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__316) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'Bsub' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = load i64* %%118, align 8, !dbg !30 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4330_count);
  llvm_cbe_tmp__318 = (unsigned long long )*llvm_cbe_tmp__317;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__318);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 %%storemerge2058, !dbg !30 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4331_count);
  llvm_cbe_tmp__319 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )llvm_cbe_storemerge2058))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2058 = 0x%I64X",((signed long long )llvm_cbe_storemerge2058));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge2058) < 5 && "Write access out of array 'Asub' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%119, i64* %%120, align 8, !dbg !30 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4332_count);
  *llvm_cbe_tmp__319 = llvm_cbe_tmp__318;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__318);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = add i64 %%storemerge2058, 1, !dbg !30 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4333_count);
  llvm_cbe_tmp__320 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge2058&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__320&18446744073709551615ull)));
  if (((llvm_cbe_tmp__320&18446744073709551615ULL) == (llvm_cbe_tmp__224&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge61;
  } else {
    llvm_cbe_storemerge2058__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__320;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph60;
  }

  } while (1); /* end of syntactic loop '.lr.ph60' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge65:
  if (((llvm_cbe_normalize&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__385;
  } else {
    goto llvm_cbe__2e_preheader56;
  }

llvm_cbe__2e_preheader56:
  if (((llvm_cbe_tmp__258&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader44;
  } else {
    goto llvm_cbe__2e_preheader50_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader50_2e_lr_2e_ph:
  llvm_cbe_storemerge1457__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader50;

  do {     /* Syntactic loop '.preheader50' to make GCC happy */
llvm_cbe__2e_preheader50:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1457 = phi i64 [ 0, %%.preheader50.lr.ph ], [ %%152, %%._crit_edge49  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1457_count);
  llvm_cbe_storemerge1457 = (unsigned long long )llvm_cbe_storemerge1457__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1457 = 0x%I64X",llvm_cbe_storemerge1457);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__343);
}
  if (((llvm_cbe__2e_lcssa97&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge49;
  } else {
    goto llvm_cbe__2e_lr_2e_ph53;
  }

llvm_cbe__2e__crit_edge49:
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = add i64 %%storemerge1457, 1, !dbg !30 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4494_count);
  llvm_cbe_tmp__343 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1457&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__343&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__343&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__258&18446744073709551615ULL))) {
    llvm_cbe_storemerge1457__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__343;   /* for PHI node */
    goto llvm_cbe__2e_preheader50;
  } else {
    goto llvm_cbe__2e_preheader44;
  }

llvm_cbe__2e__crit_edge54:
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = call float @sqrtf(float %%141) nounwind readnone, !dbg !31 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4460_count);
  llvm_cbe_tmp__335 = (float )sqrtf(llvm_cbe_tmp__333);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__333, *(int*)(&llvm_cbe_tmp__333));
printf("\nReturn  = %f",llvm_cbe_tmp__335);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = fdiv float 1.000000e+00, %%143, !dbg !31 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4461_count);
  llvm_cbe_tmp__336 = (float )((float )(0x1p0 / llvm_cbe_tmp__335));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__336, *(int*)(&llvm_cbe_tmp__336));
  if (((llvm_cbe__2e_lcssa97&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge49;
  } else {
    goto llvm_cbe__2e_lr_2e_ph48;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__386:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1852 = phi i64 [ 0, %%.lr.ph53 ], [ %%142, %%135  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1852_count);
  llvm_cbe_storemerge1852 = (unsigned long long )llvm_cbe_storemerge1852__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1852 = 0x%I64X",llvm_cbe_storemerge1852);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__334);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = phi float [ 0.000000e+00, %%.lr.ph53 ], [ %%141, %%135  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4439_count);
  llvm_cbe_tmp__328 = (float )llvm_cbe_tmp__328__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__328);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__333);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = add i64 %%storemerge1852, %%132, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4440_count);
  llvm_cbe_tmp__329 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1852&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__327&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__329&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds float* %%fwork, i64 %%137, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4441_count);
  llvm_cbe_tmp__330 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe_tmp__329))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__329));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load float* %%138, align 4, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4442_count);
  llvm_cbe_tmp__331 = (float )*llvm_cbe_tmp__330;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__331, *(int*)(&llvm_cbe_tmp__331));
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = fmul float %%139, %%139, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4443_count);
  llvm_cbe_tmp__332 = (float )((float )(llvm_cbe_tmp__331 * llvm_cbe_tmp__331));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__332, *(int*)(&llvm_cbe_tmp__332));
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = fadd float %%136, %%140, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4444_count);
  llvm_cbe_tmp__333 = (float )((float )(llvm_cbe_tmp__328 + llvm_cbe_tmp__332));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__333, *(int*)(&llvm_cbe_tmp__333));
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = add i64 %%storemerge1852, 1, !dbg !31 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4450_count);
  llvm_cbe_tmp__334 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1852&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__334&18446744073709551615ull)));
  if (((llvm_cbe_tmp__334&18446744073709551615ULL) == (llvm_cbe__2e_lcssa97&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge54;
  } else {
    llvm_cbe_storemerge1852__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__334;   /* for PHI node */
    llvm_cbe_tmp__328__PHI_TEMPORARY = (float )llvm_cbe_tmp__333;   /* for PHI node */
    goto llvm_cbe_tmp__386;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph53:
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = mul i64 %%storemerge1457, %%.lcssa97, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4423_count);
  llvm_cbe_tmp__327 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1457&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe__2e_lcssa97&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__327&18446744073709551615ull)));
  llvm_cbe_storemerge1852__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__328__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
  goto llvm_cbe_tmp__386;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__387:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1946 = phi i64 [ 0, %%.lr.ph48 ], [ %%151, %%146  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1946_count);
  llvm_cbe_storemerge1946 = (unsigned long long )llvm_cbe_storemerge1946__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1946 = 0x%I64X",llvm_cbe_storemerge1946);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__342);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = add i64 %%storemerge1946, %%145, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4479_count);
  llvm_cbe_tmp__338 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1946&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__337&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__338&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = getelementptr inbounds float* %%fwork, i64 %%147, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4480_count);
  llvm_cbe_tmp__339 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe_tmp__338))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__338));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = load float* %%148, align 4, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4481_count);
  llvm_cbe_tmp__340 = (float )*llvm_cbe_tmp__339;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__340, *(int*)(&llvm_cbe_tmp__340));
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = fmul float %%149, %%144, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4482_count);
  llvm_cbe_tmp__341 = (float )((float )(llvm_cbe_tmp__340 * llvm_cbe_tmp__336));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__341, *(int*)(&llvm_cbe_tmp__341));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%150, float* %%148, align 4, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4483_count);
  *llvm_cbe_tmp__339 = llvm_cbe_tmp__341;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__341);
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = add i64 %%storemerge1946, 1, !dbg !31 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4484_count);
  llvm_cbe_tmp__342 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1946&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__342&18446744073709551615ull)));
  if (((llvm_cbe_tmp__342&18446744073709551615ULL) == (llvm_cbe__2e_lcssa97&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge49;
  } else {
    llvm_cbe_storemerge1946__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__342;   /* for PHI node */
    goto llvm_cbe_tmp__387;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph48:
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = mul i64 %%storemerge1457, %%.lcssa97, !dbg !21 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4477_count);
  llvm_cbe_tmp__337 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1457&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe__2e_lcssa97&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__337&18446744073709551615ull)));
  llvm_cbe_storemerge1946__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__387;

  } while (1); /* end of syntactic loop '.preheader50' */
llvm_cbe__2e_preheader44:
  if (((llvm_cbe_tmp__261&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    goto llvm_cbe__2e_preheader40_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader40_2e_lr_2e_ph:
  llvm_cbe_storemerge1545__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader40;

  do {     /* Syntactic loop '.preheader40' to make GCC happy */
llvm_cbe__2e_preheader40:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1545 = phi i64 [ 0, %%.preheader40.lr.ph ], [ %%172, %%._crit_edge39  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1545_count);
  llvm_cbe_storemerge1545 = (unsigned long long )llvm_cbe_storemerge1545__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1545 = 0x%I64X",llvm_cbe_storemerge1545);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__360);
}
  if (((llvm_cbe__2e_lcssa96&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge39;
  } else {
    goto llvm_cbe__2e_lr_2e_ph42;
  }

llvm_cbe__2e__crit_edge39:
if (AESL_DEBUG_TRACE)
printf("\n  %%172 = add i64 %%storemerge1545, 1, !dbg !30 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4573_count);
  llvm_cbe_tmp__360 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1545&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__360&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__360&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__261&18446744073709551615ULL))) {
    llvm_cbe_storemerge1545__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__360;   /* for PHI node */
    goto llvm_cbe__2e_preheader40;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

llvm_cbe__2e__crit_edge43:
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = call float @sqrtf(float %%161) nounwind readnone, !dbg !31 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4539_count);
  llvm_cbe_tmp__352 = (float )sqrtf(llvm_cbe_tmp__350);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__350, *(int*)(&llvm_cbe_tmp__350));
printf("\nReturn  = %f",llvm_cbe_tmp__352);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = fdiv float 1.000000e+00, %%163, !dbg !31 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4540_count);
  llvm_cbe_tmp__353 = (float )((float )(0x1p0 / llvm_cbe_tmp__352));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__353, *(int*)(&llvm_cbe_tmp__353));
  if (((llvm_cbe__2e_lcssa96&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge39;
  } else {
    goto llvm_cbe__2e_lr_2e_ph38;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__388:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1641 = phi i64 [ 0, %%.lr.ph42 ], [ %%162, %%155  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1641_count);
  llvm_cbe_storemerge1641 = (unsigned long long )llvm_cbe_storemerge1641__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1641 = 0x%I64X",llvm_cbe_storemerge1641);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__351);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = phi float [ 0.000000e+00, %%.lr.ph42 ], [ %%161, %%155  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4518_count);
  llvm_cbe_tmp__345 = (float )llvm_cbe_tmp__345__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__345);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__350);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = mul i64 %%storemerge1641, %%52, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4519_count);
  llvm_cbe_tmp__346 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1641&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__261&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__346&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum28 = add i64 %%154, %%157, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe__2e_sum28_count);
  llvm_cbe__2e_sum28 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__344&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__346&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum28 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum28&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = getelementptr inbounds float* %%fwork, i64 %%.sum28, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4520_count);
  llvm_cbe_tmp__347 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe__2e_sum28))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum28 = 0x%I64X",((signed long long )llvm_cbe__2e_sum28));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = load float* %%158, align 4, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4521_count);
  llvm_cbe_tmp__348 = (float )*llvm_cbe_tmp__347;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__348, *(int*)(&llvm_cbe_tmp__348));
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = fmul float %%159, %%159, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4522_count);
  llvm_cbe_tmp__349 = (float )((float )(llvm_cbe_tmp__348 * llvm_cbe_tmp__348));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__349, *(int*)(&llvm_cbe_tmp__349));
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = fadd float %%156, %%160, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4523_count);
  llvm_cbe_tmp__350 = (float )((float )(llvm_cbe_tmp__345 + llvm_cbe_tmp__349));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__350, *(int*)(&llvm_cbe_tmp__350));
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = add i64 %%storemerge1641, 1, !dbg !31 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4529_count);
  llvm_cbe_tmp__351 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1641&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__351&18446744073709551615ull)));
  if (((llvm_cbe_tmp__351&18446744073709551615ULL) == (llvm_cbe__2e_lcssa96&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge43;
  } else {
    llvm_cbe_storemerge1641__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__351;   /* for PHI node */
    llvm_cbe_tmp__345__PHI_TEMPORARY = (float )llvm_cbe_tmp__350;   /* for PHI node */
    goto llvm_cbe_tmp__388;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph42:
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = add i64 %%storemerge1545, %%6, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4516_count);
  llvm_cbe_tmp__344 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1545&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__226&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__344&18446744073709551615ull)));
  llvm_cbe_storemerge1641__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__345__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
  goto llvm_cbe_tmp__388;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__389:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1736 = phi i64 [ 0, %%.lr.ph38 ], [ %%171, %%166  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1736_count);
  llvm_cbe_storemerge1736 = (unsigned long long )llvm_cbe_storemerge1736__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1736 = 0x%I64X",llvm_cbe_storemerge1736);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__359);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = mul i64 %%storemerge1736, %%52, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4558_count);
  llvm_cbe_tmp__355 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1736&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__261&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__355&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum27 = add i64 %%165, %%167, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe__2e_sum27_count);
  llvm_cbe__2e_sum27 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__354&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__355&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum27 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum27&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%168 = getelementptr inbounds float* %%fwork, i64 %%.sum27, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4559_count);
  llvm_cbe_tmp__356 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe__2e_sum27))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum27 = 0x%I64X",((signed long long )llvm_cbe__2e_sum27));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%169 = load float* %%168, align 4, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4560_count);
  llvm_cbe_tmp__357 = (float )*llvm_cbe_tmp__356;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__357, *(int*)(&llvm_cbe_tmp__357));
if (AESL_DEBUG_TRACE)
printf("\n  %%170 = fmul float %%169, %%164, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4561_count);
  llvm_cbe_tmp__358 = (float )((float )(llvm_cbe_tmp__357 * llvm_cbe_tmp__353));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__358, *(int*)(&llvm_cbe_tmp__358));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%170, float* %%168, align 4, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4562_count);
  *llvm_cbe_tmp__356 = llvm_cbe_tmp__358;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__358);
if (AESL_DEBUG_TRACE)
printf("\n  %%171 = add i64 %%storemerge1736, 1, !dbg !31 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4563_count);
  llvm_cbe_tmp__359 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1736&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__359&18446744073709551615ull)));
  if (((llvm_cbe_tmp__359&18446744073709551615ULL) == (llvm_cbe__2e_lcssa96&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge39;
  } else {
    llvm_cbe_storemerge1736__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__359;   /* for PHI node */
    goto llvm_cbe_tmp__389;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph38:
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = add i64 %%storemerge1545, %%6, !dbg !29 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4556_count);
  llvm_cbe_tmp__354 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1545&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__226&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__354&18446744073709551615ull)));
  llvm_cbe_storemerge1736__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__389;

  } while (1); /* end of syntactic loop '.preheader40' */
llvm_cbe__2e_loopexit:
  goto llvm_cbe_tmp__385;

llvm_cbe_tmp__385:
  if (((llvm_cbe_tmp__258&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge35;
  } else {
    goto llvm_cbe__2e_preheader_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader_2e_lr_2e_ph:
  llvm_cbe_storemerge1134__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1134 = phi i64 [ 0, %%.preheader.lr.ph ], [ %%197, %%._crit_edge33  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1134_count);
  llvm_cbe_storemerge1134 = (unsigned long long )llvm_cbe_storemerge1134__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1134 = 0x%I64X",llvm_cbe_storemerge1134);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__377);
}
  if (((llvm_cbe_tmp__261&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge33;
  } else {
    goto llvm_cbe__2e_lr_2e_ph32;
  }

llvm_cbe__2e__crit_edge33:
if (AESL_DEBUG_TRACE)
printf("\n  %%197 = add i64 %%storemerge1134, 1, !dbg !27 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4687_count);
  llvm_cbe_tmp__377 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1134&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__377&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__377&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__258&18446744073709551615ULL))) {
    llvm_cbe_storemerge1134__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__377;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe__2e__crit_edge35;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__390:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1231 = phi i64 [ 0, %%.lr.ph32 ], [ %%195, %%._crit_edge  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1231_count);
  llvm_cbe_storemerge1231 = (unsigned long long )llvm_cbe_storemerge1231__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1231 = 0x%I64X",llvm_cbe_storemerge1231);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__376);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%181 = add i64 %%storemerge1231, %%178, !dbg !12 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4650_count);
  llvm_cbe_tmp__363 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1231&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__361&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__363&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%182 = getelementptr inbounds %%struct.k2c_tensor2* %%C, i64 0, i32 0, i64 %%181, !dbg !12 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4651_count);
  llvm_cbe_tmp__364 = (float *)(&llvm_cbe_C->field0[(((signed long long )llvm_cbe_tmp__363))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__363));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%182, align 4, !dbg !12 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4652_count);
  *llvm_cbe_tmp__364 = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
  if (((llvm_cbe__2e_lcssa97&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%195 = add i64 %%storemerge1231, 1, !dbg !32 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4678_count);
  llvm_cbe_tmp__376 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1231&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__376&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__376&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__261&18446744073709551615ULL))) {
    llvm_cbe_storemerge1231__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__376;   /* for PHI node */
    goto llvm_cbe_tmp__390;
  } else {
    goto llvm_cbe__2e__crit_edge33;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__391:
if (AESL_DEBUG_TRACE)
printf("\n  %%185 = phi float [ 0.000000e+00, %%.lr.ph ], [ %%193, %%184 ], !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4661_count);
  llvm_cbe_tmp__366 = (float )llvm_cbe_tmp__366__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__366);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__374);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1330 = phi i64 [ 0, %%.lr.ph ], [ %%194, %%184  for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_storemerge1330_count);
  llvm_cbe_storemerge1330 = (unsigned long long )llvm_cbe_storemerge1330__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1330 = 0x%I64X",llvm_cbe_storemerge1330);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__375);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%186 = add i64 %%storemerge1330, %%179, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4662_count);
  llvm_cbe_tmp__367 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1330&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__362&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__367&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%187 = getelementptr inbounds float* %%fwork, i64 %%186, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4663_count);
  llvm_cbe_tmp__368 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe_tmp__367))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__367));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%188 = load float* %%187, align 4, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4664_count);
  llvm_cbe_tmp__369 = (float )*llvm_cbe_tmp__368;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__369, *(int*)(&llvm_cbe_tmp__369));
if (AESL_DEBUG_TRACE)
printf("\n  %%189 = mul i64 %%storemerge1330, %%52, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4665_count);
  llvm_cbe_tmp__370 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1330&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__261&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__370&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum = add i64 %%183, %%189, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe__2e_sum_count);
  llvm_cbe__2e_sum = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__365&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__370&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%190 = getelementptr inbounds float* %%fwork, i64 %%.sum, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4666_count);
  llvm_cbe_tmp__371 = (float *)(&llvm_cbe_fwork[(((signed long long )llvm_cbe__2e_sum))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum = 0x%I64X",((signed long long )llvm_cbe__2e_sum));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%191 = load float* %%190, align 4, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4667_count);
  llvm_cbe_tmp__372 = (float )*llvm_cbe_tmp__371;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__372, *(int*)(&llvm_cbe_tmp__372));
if (AESL_DEBUG_TRACE)
printf("\n  %%192 = fmul float %%188, %%191, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4668_count);
  llvm_cbe_tmp__373 = (float )((float )(llvm_cbe_tmp__369 * llvm_cbe_tmp__372));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__373, *(int*)(&llvm_cbe_tmp__373));
if (AESL_DEBUG_TRACE)
printf("\n  %%193 = fadd float %%185, %%192, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4669_count);
  llvm_cbe_tmp__374 = (float )((float )(llvm_cbe_tmp__366 + llvm_cbe_tmp__373));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__374, *(int*)(&llvm_cbe_tmp__374));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%193, float* %%182, align 4, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4670_count);
  *llvm_cbe_tmp__364 = llvm_cbe_tmp__374;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__374);
if (AESL_DEBUG_TRACE)
printf("\n  %%194 = add i64 %%storemerge1330, 1, !dbg !32 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4671_count);
  llvm_cbe_tmp__375 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1330&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__375&18446744073709551615ull)));
  if (((llvm_cbe_tmp__375&18446744073709551615ULL) == (llvm_cbe__2e_lcssa97&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_tmp__366__PHI_TEMPORARY = (float )llvm_cbe_tmp__374;   /* for PHI node */
    llvm_cbe_storemerge1330__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__375;   /* for PHI node */
    goto llvm_cbe_tmp__391;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%183 = add i64 %%storemerge1231, %%6, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4659_count);
  llvm_cbe_tmp__365 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1231&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__226&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__365&18446744073709551615ull)));
  llvm_cbe_tmp__366__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
  llvm_cbe_storemerge1330__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__391;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph32:
if (AESL_DEBUG_TRACE)
printf("\n  %%178 = mul i64 %%storemerge1134, %%52, !dbg !12 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4647_count);
  llvm_cbe_tmp__361 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1134&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__261&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__361&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%179 = mul i64 %%storemerge1134, %%.lcssa97, !dbg !13 for 0x%I64xth hint within @k2c_dot2  --> \n", ++aesl_llvm_cbe_4648_count);
  llvm_cbe_tmp__362 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1134&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe__2e_lcssa97&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__362&18446744073709551615ull)));
  llvm_cbe_storemerge1231__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__390;

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe__2e__crit_edge35:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_dot2}\n");
  return;
}


void k2c_bias_add(l_struct_OC_k2c_tensor2 *llvm_cbe_A, l_struct_OC_k2c_tensor2 *llvm_cbe_b) {
  static  unsigned long long aesl_llvm_cbe_4739_count = 0;
  static  unsigned long long aesl_llvm_cbe_4740_count = 0;
  static  unsigned long long aesl_llvm_cbe_4741_count = 0;
  static  unsigned long long aesl_llvm_cbe_4742_count = 0;
  static  unsigned long long aesl_llvm_cbe_4743_count = 0;
  static  unsigned long long aesl_llvm_cbe_4744_count = 0;
  static  unsigned long long aesl_llvm_cbe_4745_count = 0;
  static  unsigned long long aesl_llvm_cbe_4746_count = 0;
  static  unsigned long long aesl_llvm_cbe_4747_count = 0;
  static  unsigned long long aesl_llvm_cbe_4748_count = 0;
  static  unsigned long long aesl_llvm_cbe_4749_count = 0;
  static  unsigned long long aesl_llvm_cbe_4750_count = 0;
  signed long long *llvm_cbe_tmp__392;
  static  unsigned long long aesl_llvm_cbe_4751_count = 0;
  unsigned long long llvm_cbe_tmp__393;
  static  unsigned long long aesl_llvm_cbe_4752_count = 0;
  static  unsigned long long aesl_llvm_cbe_4753_count = 0;
  static  unsigned long long aesl_llvm_cbe_4754_count = 0;
  signed long long *llvm_cbe_tmp__394;
  static  unsigned long long aesl_llvm_cbe_4755_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned long long llvm_cbe_storemerge3;
  unsigned long long llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4756_count = 0;
  static  unsigned long long aesl_llvm_cbe_4757_count = 0;
  static  unsigned long long aesl_llvm_cbe_4758_count = 0;
  static  unsigned long long aesl_llvm_cbe_4759_count = 0;
  static  unsigned long long aesl_llvm_cbe_4760_count = 0;
  unsigned long long llvm_cbe_tmp__395;
  static  unsigned long long aesl_llvm_cbe_4761_count = 0;
  static  unsigned long long aesl_llvm_cbe_4762_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned long long llvm_cbe_storemerge12;
  unsigned long long llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4763_count = 0;
  float *llvm_cbe_tmp__396;
  static  unsigned long long aesl_llvm_cbe_4764_count = 0;
  float llvm_cbe_tmp__397;
  static  unsigned long long aesl_llvm_cbe_4765_count = 0;
  unsigned long long llvm_cbe_tmp__398;
  static  unsigned long long aesl_llvm_cbe_4766_count = 0;
  float *llvm_cbe_tmp__399;
  static  unsigned long long aesl_llvm_cbe_4767_count = 0;
  float llvm_cbe_tmp__400;
  static  unsigned long long aesl_llvm_cbe_4768_count = 0;
  float llvm_cbe_tmp__401;
  static  unsigned long long aesl_llvm_cbe_4769_count = 0;
  static  unsigned long long aesl_llvm_cbe_4770_count = 0;
  unsigned long long llvm_cbe_tmp__402;
  static  unsigned long long aesl_llvm_cbe_4771_count = 0;
  static  unsigned long long aesl_llvm_cbe_4772_count = 0;
  static  unsigned long long aesl_llvm_cbe_4773_count = 0;
  static  unsigned long long aesl_llvm_cbe_4774_count = 0;
  static  unsigned long long aesl_llvm_cbe_4775_count = 0;
  static  unsigned long long aesl_llvm_cbe_4776_count = 0;
  unsigned long long llvm_cbe_tmp__403;
  static  unsigned long long aesl_llvm_cbe_4777_count = 0;
  static  unsigned long long aesl_llvm_cbe_4778_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  unsigned long long llvm_cbe__2e_lcssa;
  unsigned long long llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4779_count = 0;
  unsigned long long llvm_cbe_tmp__404;
  static  unsigned long long aesl_llvm_cbe_4780_count = 0;
  static  unsigned long long aesl_llvm_cbe_4781_count = 0;
  static  unsigned long long aesl_llvm_cbe_4782_count = 0;
  static  unsigned long long aesl_llvm_cbe_4783_count = 0;
  static  unsigned long long aesl_llvm_cbe_4784_count = 0;
  unsigned long long llvm_cbe_tmp__405;
  static  unsigned long long aesl_llvm_cbe_4785_count = 0;
  static  unsigned long long aesl_llvm_cbe_4786_count = 0;
  static  unsigned long long aesl_llvm_cbe_4787_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_bias_add\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor2* %%A, i64 0, i32 2, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4750_count);
  llvm_cbe_tmp__392 = (signed long long *)(&llvm_cbe_A->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4751_count);
  llvm_cbe_tmp__393 = (unsigned long long )*llvm_cbe_tmp__392;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__393);
  if (((llvm_cbe_tmp__393&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge4;
  } else {
    goto llvm_cbe__2e_preheader_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader_2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.k2c_tensor2* %%b, i64 0, i32 2, !dbg !13 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4754_count);
  llvm_cbe_tmp__394 = (signed long long *)(&llvm_cbe_b->field2);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i64 [ 0, %%.preheader.lr.ph ], [ %%16, %%._crit_edge  for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned long long )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%I64X",llvm_cbe_storemerge3);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__404);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i64* %%4, align 8, !dbg !13 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4760_count);
  llvm_cbe_tmp__395 = (unsigned long long )*llvm_cbe_tmp__394;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__395);
  if (((llvm_cbe_tmp__395&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi i64 [ 0, %%.preheader ], [ %%14, %%.lr.ph  for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (unsigned long long )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = 0x%I64X",llvm_cbe__2e_lcssa);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__403);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add i64 %%.lcssa, %%storemerge3, !dbg !13 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4779_count);
  llvm_cbe_tmp__404 = (unsigned long long )((unsigned long long )(llvm_cbe__2e_lcssa&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_storemerge3&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__404&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4784_count);
  llvm_cbe_tmp__405 = (unsigned long long )*llvm_cbe_tmp__392;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__405);
  if ((((unsigned long long )llvm_cbe_tmp__404&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__405&18446744073709551615ULL))) {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__404;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe__2e__crit_edge4;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i64 [ %%13, %%.lr.ph ], [ 0, %%.preheader  for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned long long )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%I64X",llvm_cbe_storemerge12);
printf("\n = 0x%I64X",llvm_cbe_tmp__402);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.k2c_tensor2* %%b, i64 0, i32 0, i64 %%storemerge12, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4763_count);
  llvm_cbe_tmp__396 = (float *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_storemerge12))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%I64X",((signed long long )llvm_cbe_storemerge12));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4764_count);
  llvm_cbe_tmp__397 = (float )*llvm_cbe_tmp__396;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__397, *(int*)(&llvm_cbe_tmp__397));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i64 %%storemerge12, %%storemerge3, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4765_count);
  llvm_cbe_tmp__398 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge12&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_storemerge3&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__398&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.k2c_tensor2* %%A, i64 0, i32 0, i64 %%9, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4766_count);
  llvm_cbe_tmp__399 = (float *)(&llvm_cbe_A->field0[(((signed long long )llvm_cbe_tmp__398))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__398));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load float* %%10, align 4, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4767_count);
  llvm_cbe_tmp__400 = (float )*llvm_cbe_tmp__399;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__400, *(int*)(&llvm_cbe_tmp__400));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = fadd float %%11, %%8, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4768_count);
  llvm_cbe_tmp__401 = (float )((float )(llvm_cbe_tmp__400 + llvm_cbe_tmp__397));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__401, *(int*)(&llvm_cbe_tmp__401));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%12, float* %%10, align 4, !dbg !12 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4769_count);
  *llvm_cbe_tmp__399 = llvm_cbe_tmp__401;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__401);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i64 %%storemerge12, 1, !dbg !13 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4770_count);
  llvm_cbe_tmp__402 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge12&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__402&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%4, align 8, !dbg !13 for 0x%I64xth hint within @k2c_bias_add  --> \n", ++aesl_llvm_cbe_4776_count);
  llvm_cbe_tmp__403 = (unsigned long long )*llvm_cbe_tmp__394;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__403);
  if ((((unsigned long long )llvm_cbe_tmp__402&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__403&18446744073709551615ULL))) {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__402;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__403;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe__2e__crit_edge4:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_bias_add}\n");
  return;
}


void k2c_flip(l_struct_OC_k2c_tensor *llvm_cbe_A, signed long long llvm_cbe_axis) {
  static  unsigned long long aesl_llvm_cbe_sub_count = 0;
  signed long long llvm_cbe_sub[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_4788_count = 0;
  static  unsigned long long aesl_llvm_cbe_4789_count = 0;
  static  unsigned long long aesl_llvm_cbe_4790_count = 0;
  static  unsigned long long aesl_llvm_cbe_4791_count = 0;
  static  unsigned long long aesl_llvm_cbe_4792_count = 0;
  static  unsigned long long aesl_llvm_cbe_4793_count = 0;
  static  unsigned long long aesl_llvm_cbe_4794_count = 0;
  static  unsigned long long aesl_llvm_cbe_4795_count = 0;
  static  unsigned long long aesl_llvm_cbe_4796_count = 0;
  static  unsigned long long aesl_llvm_cbe_4797_count = 0;
  static  unsigned long long aesl_llvm_cbe_4798_count = 0;
  static  unsigned long long aesl_llvm_cbe_4799_count = 0;
  static  unsigned long long aesl_llvm_cbe_4800_count = 0;
  static  unsigned long long aesl_llvm_cbe_4801_count = 0;
  signed long long *llvm_cbe_tmp__406;
  static  unsigned long long aesl_llvm_cbe_4802_count = 0;
  unsigned long long llvm_cbe_tmp__407;
  static  unsigned long long aesl_llvm_cbe_4803_count = 0;
  static  unsigned long long aesl_llvm_cbe_4804_count = 0;
  static  unsigned long long aesl_llvm_cbe_4805_count = 0;
  static  unsigned long long aesl_llvm_cbe_4806_count = 0;
  static  unsigned long long aesl_llvm_cbe_4807_count = 0;
  signed long long *llvm_cbe_tmp__408;
  static  unsigned long long aesl_llvm_cbe_4808_count = 0;
  static  unsigned long long aesl_llvm_cbe_4809_count = 0;
  static  unsigned long long aesl_llvm_cbe_4810_count = 0;
  static  unsigned long long aesl_llvm_cbe_4811_count = 0;
  static  unsigned long long aesl_llvm_cbe_4812_count = 0;
  static  unsigned long long aesl_llvm_cbe_4813_count = 0;
  signed long long *llvm_cbe_tmp__409;
  static  unsigned long long aesl_llvm_cbe_4814_count = 0;
  unsigned long long llvm_cbe_tmp__410;
  static  unsigned long long aesl_llvm_cbe_4815_count = 0;
  static  unsigned long long aesl_llvm_cbe_4816_count = 0;
  static  unsigned long long aesl_llvm_cbe_4817_count = 0;
  static  unsigned long long aesl_llvm_cbe_4818_count = 0;
   char *llvm_cbe_tmp__411;
  static  unsigned long long aesl_llvm_cbe_4819_count = 0;
   char *llvm_cbe_tmp__412;
  static  unsigned long long aesl_llvm_cbe_4820_count = 0;
  static  unsigned long long aesl_llvm_cbe_4821_count = 0;
  static  unsigned long long aesl_llvm_cbe_4822_count = 0;
  static  unsigned long long aesl_llvm_cbe_4823_count = 0;
  static  unsigned long long aesl_llvm_cbe_4824_count = 0;
  static  unsigned long long aesl_llvm_cbe_4825_count = 0;
  static  unsigned long long aesl_llvm_cbe_4826_count = 0;
  static  unsigned long long aesl_llvm_cbe_4827_count = 0;
  static  unsigned long long aesl_llvm_cbe_4828_count = 0;
  static  unsigned long long aesl_llvm_cbe_4829_count = 0;
  static  unsigned long long aesl_llvm_cbe_4830_count = 0;
  static  unsigned long long aesl_llvm_cbe_4831_count = 0;
  static  unsigned long long aesl_llvm_cbe_4832_count = 0;
  static  unsigned long long aesl_llvm_cbe_4833_count = 0;
  static  unsigned long long aesl_llvm_cbe_4834_count = 0;
  static  unsigned long long aesl_llvm_cbe_4835_count = 0;
  static  unsigned long long aesl_llvm_cbe_4836_count = 0;
  static  unsigned long long aesl_llvm_cbe_4837_count = 0;
  static  unsigned long long aesl_llvm_cbe_4838_count = 0;
  static  unsigned long long aesl_llvm_cbe_4839_count = 0;
  static  unsigned long long aesl_llvm_cbe_4840_count = 0;
  static  unsigned long long aesl_llvm_cbe_4841_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge5_count = 0;
  unsigned long long llvm_cbe_storemerge5;
  unsigned long long llvm_cbe_storemerge5__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4842_count = 0;
  unsigned long long llvm_cbe_tmp__413;
  unsigned long long llvm_cbe_tmp__413__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4843_count = 0;
  signed long long *llvm_cbe_tmp__414;
  static  unsigned long long aesl_llvm_cbe_4844_count = 0;
  unsigned long long llvm_cbe_tmp__415;
  static  unsigned long long aesl_llvm_cbe_4845_count = 0;
  unsigned long long llvm_cbe_tmp__416;
  static  unsigned long long aesl_llvm_cbe_4846_count = 0;
  static  unsigned long long aesl_llvm_cbe_4847_count = 0;
  static  unsigned long long aesl_llvm_cbe_4848_count = 0;
  static  unsigned long long aesl_llvm_cbe_4849_count = 0;
  static  unsigned long long aesl_llvm_cbe_4850_count = 0;
  unsigned long long llvm_cbe_tmp__417;
  static  unsigned long long aesl_llvm_cbe_4851_count = 0;
  static  unsigned long long aesl_llvm_cbe_4852_count = 0;
  static  unsigned long long aesl_llvm_cbe_4853_count = 0;
  static  unsigned long long aesl_llvm_cbe_4854_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_4855_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  unsigned long long llvm_cbe__2e_lcssa;
  unsigned long long llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4856_count = 0;
  unsigned long long llvm_cbe_tmp__418;
  static  unsigned long long aesl_llvm_cbe_4857_count = 0;
  static  unsigned long long aesl_llvm_cbe_4858_count = 0;
  static  unsigned long long aesl_llvm_cbe_4859_count = 0;
  static  unsigned long long aesl_llvm_cbe_4860_count = 0;
  static  unsigned long long aesl_llvm_cbe_4861_count = 0;
  static  unsigned long long aesl_llvm_cbe_4862_count = 0;
  static  unsigned long long aesl_llvm_cbe_4863_count = 0;
  static  unsigned long long aesl_llvm_cbe_4864_count = 0;
  static  unsigned long long aesl_llvm_cbe_4865_count = 0;
  signed long long *llvm_cbe_tmp__419;
  static  unsigned long long aesl_llvm_cbe_4866_count = 0;
  signed long long *llvm_cbe_tmp__420;
  static  unsigned long long aesl_llvm_cbe_4867_count = 0;
  signed long long *llvm_cbe_tmp__421;
  static  unsigned long long aesl_llvm_cbe_4868_count = 0;
  unsigned long long llvm_cbe_tmp__422;
  static  unsigned long long aesl_llvm_cbe_4869_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge124_count = 0;
  unsigned long long llvm_cbe_storemerge124;
  unsigned long long llvm_cbe_storemerge124__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4870_count = 0;
  static  unsigned long long aesl_llvm_cbe_4871_count = 0;
  unsigned long long llvm_cbe_tmp__423;
  static  unsigned long long aesl_llvm_cbe_4872_count = 0;
  unsigned long long llvm_cbe_tmp__424;
  static  unsigned long long aesl_llvm_cbe_4873_count = 0;
  unsigned long long llvm_cbe_tmp__425;
  static  unsigned long long aesl_llvm_cbe_4874_count = 0;
  unsigned long long llvm_cbe_tmp__426;
  static  unsigned long long aesl_llvm_cbe_4875_count = 0;
  static  unsigned long long aesl_llvm_cbe_4876_count = 0;
  unsigned long long llvm_cbe_tmp__427;
  static  unsigned long long aesl_llvm_cbe_4877_count = 0;
  static  unsigned long long aesl_llvm_cbe_4878_count = 0;
  static  unsigned long long aesl_llvm_cbe_4879_count = 0;
  static  unsigned long long aesl_llvm_cbe_4880_count = 0;
  float *llvm_cbe_tmp__428;
  static  unsigned long long aesl_llvm_cbe_4881_count = 0;
  float llvm_cbe_tmp__429;
  static  unsigned long long aesl_llvm_cbe_4882_count = 0;
  static  unsigned long long aesl_llvm_cbe_4883_count = 0;
  static  unsigned long long aesl_llvm_cbe_4884_count = 0;
  float *llvm_cbe_tmp__430;
  static  unsigned long long aesl_llvm_cbe_4885_count = 0;
  float llvm_cbe_tmp__431;
  static  unsigned long long aesl_llvm_cbe_4886_count = 0;
  static  unsigned long long aesl_llvm_cbe_4887_count = 0;
  static  unsigned long long aesl_llvm_cbe_4888_count = 0;
  unsigned long long llvm_cbe_tmp__432;
  static  unsigned long long aesl_llvm_cbe_4889_count = 0;
  static  unsigned long long aesl_llvm_cbe_4890_count = 0;
  unsigned long long llvm_cbe_tmp__433;
  static  unsigned long long aesl_llvm_cbe_4891_count = 0;
  static  unsigned long long aesl_llvm_cbe_4892_count = 0;
  unsigned long long llvm_cbe_tmp__434;
  static  unsigned long long aesl_llvm_cbe_4893_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_2e_be_count = 0;
  unsigned long long llvm_cbe_storemerge12_2e_be;
  static  unsigned long long aesl_llvm_cbe_4894_count = 0;
  static  unsigned long long aesl_llvm_cbe_4895_count = 0;
  static  unsigned long long aesl_llvm_cbe_4896_count = 0;
  static  unsigned long long aesl_llvm_cbe_4897_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_flip\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor* %%A, i64 0, i32 1, !dbg !12 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4801_count);
  llvm_cbe_tmp__406 = (signed long long *)(&llvm_cbe_A->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4802_count);
  llvm_cbe_tmp__407 = (unsigned long long )*llvm_cbe_tmp__406;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__407);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.k2c_tensor* %%A, i64 0, i32 3, i64 0, !dbg !12 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4807_count);
  llvm_cbe_tmp__408 = (signed long long *)(&llvm_cbe_A->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.k2c_tensor* %%A, i64 0, i32 2, !dbg !12 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4813_count);
  llvm_cbe_tmp__409 = (signed long long *)(&llvm_cbe_A->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i64* %%4, align 8, !dbg !12 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4814_count);
  llvm_cbe_tmp__410 = (unsigned long long )*llvm_cbe_tmp__409;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__410);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = bitcast [5 x i64]* %%sub to i8*, !dbg !14 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4818_count);
  llvm_cbe_tmp__411 = ( char *)(( char *)(&llvm_cbe_sub));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i8* @memset(i8* %%6, i32 0, i64 40 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4819_count);
  ( char *)memset(( char *)llvm_cbe_tmp__411, 0u, 40ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",40ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__412);
}
  if ((((unsigned long long )llvm_cbe_tmp__407&18446744073709551615ULL) > ((unsigned long long )llvm_cbe_axis&18446744073709551615ULL))) {
    llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned long long )llvm_cbe_axis;   /* for PHI node */
    llvm_cbe_tmp__413__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph7;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge8;
  }

  do {     /* Syntactic loop '.lr.ph7' to make GCC happy */
llvm_cbe__2e_lr_2e_ph7:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge5 = phi i64 [ %%13, %%.lr.ph7 ], [ %%axis, %%0  for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_storemerge5_count);
  llvm_cbe_storemerge5 = (unsigned long long )llvm_cbe_storemerge5__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge5 = 0x%I64X",llvm_cbe_storemerge5);
printf("\n = 0x%I64X",llvm_cbe_tmp__417);
printf("\naxis = 0x%I64X",llvm_cbe_axis);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi i64 [ %%12, %%.lr.ph7 ], [ 1, %%0  for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4842_count);
  llvm_cbe_tmp__413 = (unsigned long long )llvm_cbe_tmp__413__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__413);
printf("\n = 0x%I64X",llvm_cbe_tmp__416);
printf("\n = 0x%I64X",1ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.k2c_tensor* %%A, i64 0, i32 3, i64 %%storemerge5, !dbg !14 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4843_count);
  llvm_cbe_tmp__414 = (signed long long *)(&llvm_cbe_A->field3[(((signed long long )llvm_cbe_storemerge5))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge5 = 0x%I64X",((signed long long )llvm_cbe_storemerge5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i64* %%10, align 8, !dbg !14 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4844_count);
  llvm_cbe_tmp__415 = (unsigned long long )*llvm_cbe_tmp__414;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__415);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = mul i64 %%11, %%9, !dbg !14 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4845_count);
  llvm_cbe_tmp__416 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__415&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__413&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__416&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i64 %%storemerge5, 1, !dbg !16 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4850_count);
  llvm_cbe_tmp__417 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge5&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__417&18446744073709551615ull)));
  if (((llvm_cbe_tmp__417&18446744073709551615ULL) == (llvm_cbe_tmp__407&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__416;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge8;
  } else {
    llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__417;   /* for PHI node */
    llvm_cbe_tmp__413__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__416;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph7;
  }

  } while (1); /* end of syntactic loop '.lr.ph7' */
llvm_cbe__2e__crit_edge8:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi i64 [ 1, %%0 ], [ %%12, %%.lr.ph7  for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (unsigned long long )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = 0x%I64X",llvm_cbe__2e_lcssa);
printf("\n = 0x%I64X",1ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__416);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = lshr i64 %%.lcssa, 1, !dbg !16 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4856_count);
  llvm_cbe_tmp__418 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe__2e_lcssa&18446744073709551615ull)) >> ((unsigned long long )(1ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__418&18446744073709551615ull)));
  if (((llvm_cbe_tmp__410&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [5 x i64]* %%sub, i64 0, i64 0, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4865_count);
  llvm_cbe_tmp__419 = (signed long long *)(&llvm_cbe_sub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.k2c_tensor* %%A, i64 0, i32 3, i64 %%axis, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4866_count);
  llvm_cbe_tmp__420 = (signed long long *)(&llvm_cbe_A->field3[(((signed long long )llvm_cbe_axis))]);
if (AESL_DEBUG_TRACE) {
printf("\naxis = 0x%I64X",((signed long long )llvm_cbe_axis));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [5 x i64]* %%sub, i64 0, i64 %%axis, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4867_count);
  llvm_cbe_tmp__421 = (signed long long *)(&llvm_cbe_sub[(((signed long long )llvm_cbe_axis))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\naxis = 0x%I64X",((signed long long )llvm_cbe_axis));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = sub i64 %%.lcssa, %%14, !dbg !15 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4868_count);
  llvm_cbe_tmp__422 = (unsigned long long )((unsigned long long )(llvm_cbe__2e_lcssa&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_tmp__418&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__422&18446744073709551615ull)));
  llvm_cbe_storemerge124__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_backedge;

  do {     /* Syntactic loop '.backedge' to make GCC happy */
llvm_cbe__2e_backedge:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge124 = phi i64 [ 0, %%.lr.ph ], [ %%storemerge12.be, %%.backedge  for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_storemerge124_count);
  llvm_cbe_storemerge124 = (unsigned long long )llvm_cbe_storemerge124__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge124 = 0x%I64X",llvm_cbe_storemerge124);
printf("\n = 0x%I64X",0ull);
printf("\nstoremerge12.be = 0x%I64X",llvm_cbe_storemerge12_2e_be);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_idx2sub(i64 %%storemerge124, i64* %%16, i64* %%3, i64 %%2), !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4870_count);
  k2c_idx2sub(llvm_cbe_storemerge124, (signed long long *)llvm_cbe_tmp__419, (signed long long *)llvm_cbe_tmp__408, llvm_cbe_tmp__407);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge124 = 0x%I64X",llvm_cbe_storemerge124);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__407);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i64* %%17, align 8, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4871_count);
  llvm_cbe_tmp__423 = (unsigned long long )*llvm_cbe_tmp__420;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__423);

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_axis) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'sub' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load i64* %%18, align 8, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4872_count);
  llvm_cbe_tmp__424 = (unsigned long long )*llvm_cbe_tmp__421;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__424);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add i64 %%20, -1, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4873_count);
  llvm_cbe_tmp__425 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__423&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__425&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = sub i64 %%22, %%21, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4874_count);
  llvm_cbe_tmp__426 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__425&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_tmp__424&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__426&18446744073709551615ull)));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_axis) < 5 && "Write access out of array 'sub' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%23, i64* %%18, align 8, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4875_count);
  *llvm_cbe_tmp__421 = llvm_cbe_tmp__426;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__426);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = call i64 @k2c_sub2idx(i64* %%16, i64* %%3, i64 %%2), !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4876_count);
  llvm_cbe_tmp__427 = (unsigned long long )k2c_sub2idx((signed long long *)llvm_cbe_tmp__419, (signed long long *)llvm_cbe_tmp__408, llvm_cbe_tmp__407);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__407);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__427);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds %%struct.k2c_tensor* %%A, i64 0, i32 0, i64 %%storemerge124, !dbg !12 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4880_count);
  llvm_cbe_tmp__428 = (float *)(&llvm_cbe_A->field0[(((signed long long )llvm_cbe_storemerge124))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge124 = 0x%I64X",((signed long long )llvm_cbe_storemerge124));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load float* %%25, align 4, !dbg !12 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4881_count);
  llvm_cbe_tmp__429 = (float )*llvm_cbe_tmp__428;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__429, *(int*)(&llvm_cbe_tmp__429));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds %%struct.k2c_tensor* %%A, i64 0, i32 0, i64 %%24, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4884_count);
  llvm_cbe_tmp__430 = (float *)(&llvm_cbe_A->field0[(((signed long long )llvm_cbe_tmp__427))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__427));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4885_count);
  llvm_cbe_tmp__431 = (float )*llvm_cbe_tmp__430;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__431, *(int*)(&llvm_cbe_tmp__431));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%25, align 4, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4886_count);
  *llvm_cbe_tmp__428 = llvm_cbe_tmp__431;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__431);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%27, align 4, !dbg !13 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4887_count);
  *llvm_cbe_tmp__430 = llvm_cbe_tmp__429;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__429);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i64 %%storemerge124, 1, !dbg !15 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4888_count);
  llvm_cbe_tmp__432 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge124&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__432&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = urem i64 %%29, %%.lcssa, !dbg !15 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4890_count);
  llvm_cbe_tmp__433 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__432&18446744073709551615ull)) % ((unsigned long long )(llvm_cbe__2e_lcssa&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__433&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i64 %%19, %%29, !dbg !15 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_4892_count);
  llvm_cbe_tmp__434 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__422&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__432&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__434&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12.be = select i1 %%31, i64 %%29, i64 %%32, !dbg !15 for 0x%I64xth hint within @k2c_flip  --> \n", ++aesl_llvm_cbe_storemerge12_2e_be_count);
  llvm_cbe_storemerge12_2e_be = (unsigned long long )(((((unsigned long long )llvm_cbe_tmp__433&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__418&18446744073709551615ULL))) ? ((unsigned long long )llvm_cbe_tmp__432) : ((unsigned long long )llvm_cbe_tmp__434));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge12.be = 0x%I64X\n", llvm_cbe_storemerge12_2e_be);
  if ((((unsigned long long )llvm_cbe_storemerge12_2e_be&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__410&18446744073709551615ULL))) {
    llvm_cbe_storemerge124__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge12_2e_be;   /* for PHI node */
    goto llvm_cbe__2e_backedge;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.backedge' */
llvm_cbe__2e__crit_edge:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_flip}\n");
  return;
}


float *k2c_read_array( char *llvm_cbe_filename, signed long long llvm_cbe_array_size) {
  static  unsigned long long aesl_llvm_cbe_4898_count = 0;
  static  unsigned long long aesl_llvm_cbe_4899_count = 0;
  static  unsigned long long aesl_llvm_cbe_4900_count = 0;
  static  unsigned long long aesl_llvm_cbe_4901_count = 0;
  static  unsigned long long aesl_llvm_cbe_4902_count = 0;
  static  unsigned long long aesl_llvm_cbe_4903_count = 0;
  static  unsigned long long aesl_llvm_cbe_4904_count = 0;
  static  unsigned long long aesl_llvm_cbe_4905_count = 0;
  unsigned long long llvm_cbe_tmp__435;
  static  unsigned long long aesl_llvm_cbe_4906_count = 0;
   char *llvm_cbe_tmp__436;
  static  unsigned long long aesl_llvm_cbe_4907_count = 0;
  float *llvm_cbe_tmp__437;
  static  unsigned long long aesl_llvm_cbe_4908_count = 0;
  static  unsigned long long aesl_llvm_cbe_4909_count = 0;
  static  unsigned long long aesl_llvm_cbe_4910_count = 0;
  static  unsigned long long aesl_llvm_cbe_4911_count = 0;
  static  unsigned long long aesl_llvm_cbe_4912_count = 0;
  static  unsigned long long aesl_llvm_cbe_4913_count = 0;
  static  unsigned long long aesl_llvm_cbe_4914_count = 0;
  unsigned int llvm_cbe_tmp__438;
  static  unsigned long long aesl_llvm_cbe_4915_count = 0;
  static  unsigned long long aesl_llvm_cbe_4916_count = 0;
  static  unsigned long long aesl_llvm_cbe_4917_count = 0;
  static  unsigned long long aesl_llvm_cbe_4918_count = 0;
  static  unsigned long long aesl_llvm_cbe_4919_count = 0;
  static  unsigned long long aesl_llvm_cbe_4920_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__439;
  static  unsigned long long aesl_llvm_cbe_4921_count = 0;
  static  unsigned long long aesl_llvm_cbe_4922_count = 0;
  static  unsigned long long aesl_llvm_cbe_4923_count = 0;
  static  unsigned long long aesl_llvm_cbe_4924_count = 0;
  static  unsigned long long aesl_llvm_cbe_4925_count = 0;
  static  unsigned long long aesl_llvm_cbe_4926_count = 0;
  static  unsigned long long aesl_llvm_cbe_4927_count = 0;
  static  unsigned long long aesl_llvm_cbe_4928_count = 0;
  unsigned int llvm_cbe_tmp__440;
  static  unsigned long long aesl_llvm_cbe_4929_count = 0;
  static  unsigned long long aesl_llvm_cbe_4930_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond1_count = 0;
  bool llvm_cbe_or_2e_cond1;
  static  unsigned long long aesl_llvm_cbe_4931_count = 0;
  static  unsigned long long aesl_llvm_cbe_4932_count = 0;
  unsigned int llvm_cbe_tmp__441;
  static  unsigned long long aesl_llvm_cbe_4933_count = 0;
  static  unsigned long long aesl_llvm_cbe_4934_count = 0;
  static  unsigned long long aesl_llvm_cbe_4935_count = 0;
  unsigned long long llvm_cbe_tmp__442;
  unsigned long long llvm_cbe_tmp__442__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_4936_count = 0;
  unsigned long long llvm_cbe_tmp__443;
  static  unsigned long long aesl_llvm_cbe_4937_count = 0;
  static  unsigned long long aesl_llvm_cbe_4938_count = 0;
  static  unsigned long long aesl_llvm_cbe_4939_count = 0;
  static  unsigned long long aesl_llvm_cbe_4940_count = 0;
  float *llvm_cbe_tmp__444;
  static  unsigned long long aesl_llvm_cbe_4941_count = 0;
  unsigned int llvm_cbe_tmp__445;
  static  unsigned long long aesl_llvm_cbe_4942_count = 0;
  static  unsigned long long aesl_llvm_cbe_4943_count = 0;
  unsigned int llvm_cbe_tmp__446;
  static  unsigned long long aesl_llvm_cbe_4944_count = 0;
  static  unsigned long long aesl_llvm_cbe_4945_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_4946_count = 0;
  static  unsigned long long aesl_llvm_cbe_4947_count = 0;
  unsigned int llvm_cbe_tmp__447;
  static  unsigned long long aesl_llvm_cbe_4948_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_read_array\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = shl i64 %%array_size, 2, !dbg !13 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4905_count);
  llvm_cbe_tmp__435 = (unsigned long long )llvm_cbe_array_size << 2ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__435);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = tail call i8* @malloc(i64 %%1), !dbg !13 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4906_count);
  llvm_cbe_tmp__436 = ( char *) /*tail*/ ( char *)malloc(llvm_cbe_tmp__435);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__435);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__436);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = bitcast i8* %%2 to float*, !dbg !13 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4907_count);
  llvm_cbe_tmp__437 = (float *)((float *)llvm_cbe_tmp__436);
  if (((llvm_cbe_tmp__436) == ((( char *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__448;
  } else {
    goto llvm_cbe_tmp__449;
  }

llvm_cbe_tmp__448:
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([28 x i8]* @aesl_internal_.str, i64 0, i64 0), i8* %%filename) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4914_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
])), ( char *)llvm_cbe_filename);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__438);
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @exit(i32 -1) noreturn nounwind, !dbg !13 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4915_count);
   /*tail*/ exit(4294967295u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",4294967295u);
}
  /*UNREACHABLE*/;
llvm_cbe_tmp__449:
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = tail call %%struct._iobuf* @fopen(i8* %%filename, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str1, i64 0, i64 0)) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4920_count);
  llvm_cbe_tmp__439 = (l_struct_OC__iobuf *) /*tail*/ aesl_fopen(( char *)llvm_cbe_filename, ( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__439);
}
  if (((llvm_cbe_tmp__439) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__450;
  } else {
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = tail call i32 @feof(%%struct._iobuf* %%8) nounwind, !dbg !13 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4928_count);
  llvm_cbe_tmp__440 = (unsigned int ) /*tail*/ feof((l_struct_OC__iobuf *)llvm_cbe_tmp__439);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__440);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond1 = and i1 %%11, %%1 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_or_2e_cond1_count);
  llvm_cbe_or_2e_cond1 = (bool )((((llvm_cbe_tmp__440&4294967295U) == (0u&4294967295U)) & ((llvm_cbe_array_size&18446744073709551615ULL) != (0ull&18446744073709551615ULL)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond1 = 0x%X\n", llvm_cbe_or_2e_cond1);
  if (llvm_cbe_or_2e_cond1) {
    llvm_cbe_tmp__442__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e_critedge;
  }

llvm_cbe_tmp__450:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([25 x i8]* @aesl_internal_.str2, i64 0, i64 0), i8* %%filename) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4932_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 25
#endif
])), ( char *)llvm_cbe_filename);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__441);
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @exit(i32 -1) noreturn nounwind, !dbg !16 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4933_count);
   /*tail*/ exit(4294967295u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",4294967295u);
}
  /*UNREACHABLE*/;
  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = phi i64 [ %%16, %%.lr.ph ], [ 0, %%.preheader  for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4935_count);
  llvm_cbe_tmp__442 = (unsigned long long )llvm_cbe_tmp__442__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__442);
printf("\n = 0x%I64X",llvm_cbe_tmp__443);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add i64 %%15, 1, !dbg !13 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4936_count);
  llvm_cbe_tmp__443 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__442&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__443&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds float* %%3, i64 %%15, !dbg !13 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4940_count);
  llvm_cbe_tmp__444 = (float *)(&llvm_cbe_tmp__437[(((signed long long )llvm_cbe_tmp__442))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__442));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = tail call i32 (%%struct._iobuf*, i8*, ...)* @fscanf(%%struct._iobuf* %%8, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_.str3, i64 0, i64 0), float* %%17) nounwind, !dbg !13 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4941_count);
   /*tail*/ fscanf((l_struct_OC__iobuf *)llvm_cbe_tmp__439, ( char *)((&aesl_internal__OC_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), (float *)llvm_cbe_tmp__444);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__445);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = tail call i32 @feof(%%struct._iobuf* %%8) nounwind, !dbg !13 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4943_count);
  llvm_cbe_tmp__446 = (unsigned int ) /*tail*/ feof((l_struct_OC__iobuf *)llvm_cbe_tmp__439);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__446);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = and i1 %%20, %%2 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )((((llvm_cbe_tmp__446&4294967295U) == (0u&4294967295U)) & (((unsigned long long )llvm_cbe_tmp__443&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_array_size&18446744073709551615ULL)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    llvm_cbe_tmp__442__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__443;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e_critedge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e_critedge:
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = tail call i32 @fclose(%%struct._iobuf* %%8) nounwind, !dbg !15 for 0x%I64xth hint within @k2c_read_array  --> \n", ++aesl_llvm_cbe_4947_count);
   /*tail*/ fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__439);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__447);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_read_array}\n");
  return llvm_cbe_tmp__437;
}

