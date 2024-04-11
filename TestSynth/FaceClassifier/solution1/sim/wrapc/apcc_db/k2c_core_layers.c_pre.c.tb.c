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


/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void k2c_dense(l_struct_OC_k2c_tensor2 *llvm_cbe_output, l_struct_OC_k2c_tensor2 *llvm_cbe_input, l_struct_OC_k2c_tensor *llvm_cbe_kernel, l_struct_OC_k2c_tensor2 *llvm_cbe_bias, float *llvm_cbe_fwork);
void k2c_linear_func(float *, signed long long );
void k2c_dot(l_struct_OC_k2c_tensor2 *, l_struct_OC_k2c_tensor2 *, l_struct_OC_k2c_tensor *, signed long long *, signed long long *, signed long long , signed int , float *);
void k2c_bias_add(l_struct_OC_k2c_tensor2 *, l_struct_OC_k2c_tensor2 *);
void k2c_dense2(l_struct_OC_k2c_tensor2 *llvm_cbe_output, l_struct_OC_k2c_tensor2 *llvm_cbe_input, l_struct_OC_k2c_tensor2 *llvm_cbe_kernel, l_struct_OC_k2c_tensor2 *llvm_cbe_bias, float *llvm_cbe_fwork);
void k2c_dot2(l_struct_OC_k2c_tensor2 *, l_struct_OC_k2c_tensor2 *, l_struct_OC_k2c_tensor2 *, signed long long *, signed long long *, signed long long , signed int , float *);
void k2c_flatten(l_struct_OC_k2c_tensor *llvm_cbe_output, l_struct_OC_k2c_tensor *llvm_cbe_input);
void k2c_reshape(l_struct_OC_k2c_tensor *llvm_cbe_output, l_struct_OC_k2c_tensor *llvm_cbe_input, signed long long *llvm_cbe_newshp, signed long long llvm_cbe_newndim);
void k2c_permute_dims(l_struct_OC_k2c_tensor *llvm_cbe_output, l_struct_OC_k2c_tensor *llvm_cbe_input, signed long long *llvm_cbe_permute);
void k2c_idx2sub(signed long long , signed long long *, signed long long *, signed long long );
signed long long k2c_sub2idx(signed long long *, signed long long *, signed long long );
void k2c_repeat_vector(l_struct_OC_k2c_tensor *llvm_cbe_output, l_struct_OC_k2c_tensor *llvm_cbe_input, signed long long llvm_cbe_n);


/* Global Variable Definitions and Initialization */
static signed long long aesl_internal_k2c_dense_OC_axesB[1];
static signed long long aesl_internal_k2c_dense2_OC_axesB[1];


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

void k2c_dense(l_struct_OC_k2c_tensor2 *llvm_cbe_output, l_struct_OC_k2c_tensor2 *llvm_cbe_input, l_struct_OC_k2c_tensor *llvm_cbe_kernel, l_struct_OC_k2c_tensor2 *llvm_cbe_bias, float *llvm_cbe_fwork) {
  static  unsigned long long aesl_llvm_cbe_axesA_count = 0;
  signed long long llvm_cbe_axesA[1];    /* Address-exposed local */
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
  signed long long *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  signed long long *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  signed long long *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  unsigned long long llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  signed long long *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  unsigned long long llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  signed long long *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  signed long long *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  unsigned long long llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  unsigned long long llvm_cbe_tmp__14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  unsigned long long llvm_cbe_tmp__15;
  unsigned long long llvm_cbe_tmp__15__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned long long llvm_cbe_tmp__16;
  unsigned long long llvm_cbe_tmp__16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge23_count = 0;
  unsigned long long llvm_cbe_storemerge23;
  unsigned long long llvm_cbe_storemerge23__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  unsigned long long llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond21_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_2e_us13_count = 0;
  unsigned long long llvm_cbe_storemerge25_2e_us13;
  unsigned long long llvm_cbe_storemerge25_2e_us13__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  float *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  float llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  unsigned long long llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  float *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond20_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_2e_us_count = 0;
  unsigned long long llvm_cbe_storemerge19_2e_us;
  unsigned long long llvm_cbe_storemerge19_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  unsigned long long llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond19_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_2e_us_2e_us_count = 0;
  unsigned long long llvm_cbe_storemerge25_2e_us_2e_us;
  unsigned long long llvm_cbe_storemerge25_2e_us_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  float *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  float llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  unsigned long long llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  float *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  float llvm_cbe_tmp__30;
  float llvm_cbe_tmp__30__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge34_2e_us_2e_us_count = 0;
  unsigned long long llvm_cbe_storemerge34_2e_us_2e_us;
  unsigned long long llvm_cbe_storemerge34_2e_us_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  unsigned long long llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  float *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  float llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  unsigned long long llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  float *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  float llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  float llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  float llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  unsigned long long llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  unsigned long long llvm_cbe_tmp__41;
  unsigned long long llvm_cbe_tmp__41__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  float *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  signed long long *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  unsigned long long llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  float *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  signed long long *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  unsigned long long llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_dense\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor2* %%input, i64 0, i32 1, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__1 = (signed long long *)(&llvm_cbe_input->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__2 = (unsigned long long )*llvm_cbe_tmp__1;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
  if ((((unsigned long long )llvm_cbe_tmp__2&18446744073709551615ULL) < ((unsigned long long )3ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__48;
  } else {
    goto llvm_cbe_tmp__49;
  }

llvm_cbe_tmp__48:
  if ((((unsigned long long )llvm_cbe_tmp__2&18446744073709551615ULL) > ((unsigned long long )1ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__50;
  } else {
    goto llvm_cbe__2e_thread;
  }

llvm_cbe__2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.k2c_tensor* %%kernel, i64 0, i32 3, i64 1, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__3 = (signed long long *)(&llvm_cbe_kernel->field3[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i64* %%6, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__4 = (unsigned long long )*llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.k2c_tensor* %%kernel, i64 0, i32 3, i64 0, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__5 = (signed long long *)(&llvm_cbe_kernel->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i64* %%8, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__6 = (unsigned long long )*llvm_cbe_tmp__5;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__6);
  llvm_cbe_tmp__14__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__4;   /* for PHI node */
  llvm_cbe_tmp__15__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__6;   /* for PHI node */
  llvm_cbe_tmp__16__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__4;   /* for PHI node */
  llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
  goto llvm_cbe__2e_lr_2e_ph11;

llvm_cbe_tmp__50:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.k2c_tensor2* %%input, i64 0, i32 3, i64 0, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__7 = (signed long long *)(&llvm_cbe_input->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i64* %%11, align 8, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__8 = (unsigned long long )*llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds %%struct.k2c_tensor* %%kernel, i64 0, i32 3, i64 1, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__9 = (signed long long *)(&llvm_cbe_kernel->field3[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%13, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__10 = (unsigned long long )*llvm_cbe_tmp__9;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.k2c_tensor* %%kernel, i64 0, i32 3, i64 0, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__11 = (signed long long *)(&llvm_cbe_kernel->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i64* %%15, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__12 = (unsigned long long )*llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = mul i64 %%14, %%12, !dbg !14 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_48_count);
  llvm_cbe_tmp__13 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__10&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__8&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__13&18446744073709551615ull)));
  if (((llvm_cbe_tmp__8&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe_tmp__41__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__13;   /* for PHI node */
    goto llvm_cbe_tmp__51;
  } else {
    llvm_cbe_tmp__14__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__13;   /* for PHI node */
    llvm_cbe_tmp__15__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__12;   /* for PHI node */
    llvm_cbe_tmp__16__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__10;   /* for PHI node */
    llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__8;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph11;
  }

llvm_cbe__2e_lr_2e_ph11:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = phi i64 [ %%7, %%.thread ], [ %%17, %%10  for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__14 = (unsigned long long )llvm_cbe_tmp__14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__14);
printf("\n = 0x%I64X",llvm_cbe_tmp__4);
printf("\n = 0x%I64X",llvm_cbe_tmp__13);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = phi i64 [ %%9, %%.thread ], [ %%16, %%10  for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__15 = (unsigned long long )llvm_cbe_tmp__15__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__15);
printf("\n = 0x%I64X",llvm_cbe_tmp__6);
printf("\n = 0x%I64X",llvm_cbe_tmp__12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = phi i64 [ %%7, %%.thread ], [ %%14, %%10  for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__16 = (unsigned long long )llvm_cbe_tmp__16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__16);
printf("\n = 0x%I64X",llvm_cbe_tmp__4);
printf("\n = 0x%I64X",llvm_cbe_tmp__10);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23 = phi i64 [ 1, %%.thread ], [ %%12, %%10  for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_storemerge23_count);
  llvm_cbe_storemerge23 = (unsigned long long )llvm_cbe_storemerge23__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23 = 0x%I64X",llvm_cbe_storemerge23);
printf("\n = 0x%I64X",1ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__8);
}
  if (((llvm_cbe_tmp__16&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge12;
  } else {
    llvm_cbe_storemerge19_2e_us__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph7_2e_us;
  }

  do {     /* Syntactic loop '.lr.ph7.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph7_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19.us = phi i64 [ %%24, %%._crit_edge8.us-lcssa.us18 ], [ 0, %%.lr.ph11  for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_storemerge19_2e_us_count);
  llvm_cbe_storemerge19_2e_us = (unsigned long long )llvm_cbe_storemerge19_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19.us = 0x%I64X",llvm_cbe_storemerge19_2e_us);
printf("\n = 0x%I64X",llvm_cbe_tmp__17);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = mul i64 %%storemerge19.us, %%21, !dbg !14 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__23 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge19_2e_us&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__16&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__23&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = mul i64 %%storemerge19.us, %%20, !dbg !14 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__24 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge19_2e_us&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__15&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__24&18446744073709551615ull)));
  if (((llvm_cbe_tmp__15&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe_storemerge25_2e_us13__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe_tmp__52;
  } else {
    llvm_cbe_storemerge25_2e_us_2e_us__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us_2e_us;
  }

llvm_cbe__2e__crit_edge8_2e_us_2d_lcssa_2e_us18:
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add i64 %%storemerge19.us, 1, !dbg !14 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__17 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge19_2e_us&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__17&18446744073709551615ull)));
  if (((llvm_cbe_tmp__17&18446744073709551615ULL) == (llvm_cbe_storemerge23&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge12;
  } else {
    llvm_cbe_storemerge19_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__17;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph7_2e_us;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__52:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25.us13 = phi i64 [ %%30, %%25 ], [ 0, %%.lr.ph7.us  for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_storemerge25_2e_us13_count);
  llvm_cbe_storemerge25_2e_us13 = (unsigned long long )llvm_cbe_storemerge25_2e_us13__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25.us13 = 0x%I64X",llvm_cbe_storemerge25_2e_us13);
printf("\n = 0x%I64X",llvm_cbe_tmp__22);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds %%struct.k2c_tensor2* %%bias, i64 0, i32 0, i64 %%storemerge25.us13, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__18 = (float *)(&llvm_cbe_bias->field0[(((signed long long )llvm_cbe_storemerge25_2e_us13))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25.us13 = 0x%I64X",((signed long long )llvm_cbe_storemerge25_2e_us13));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load float* %%26, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__19 = (float )*llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__19, *(int*)(&llvm_cbe_tmp__19));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = add i64 %%storemerge25.us13, %%31, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__20 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge25_2e_us13&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__23&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__20&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds %%struct.k2c_tensor2* %%output, i64 0, i32 0, i64 %%28, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__21 = (float *)(&llvm_cbe_output->field0[(((signed long long )llvm_cbe_tmp__20))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__20));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%27, float* %%29, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_73_count);
  *llvm_cbe_tmp__21 = llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add i64 %%storemerge25.us13, 1, !dbg !15 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__22 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge25_2e_us13&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__22&18446744073709551615ull)));
  if (((llvm_cbe_tmp__22&18446744073709551615ULL) == (llvm_cbe_tmp__16&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge8_2e_us_2d_lcssa_2e_us18;
  } else {
    llvm_cbe_storemerge25_2e_us13__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__22;   /* for PHI node */
    goto llvm_cbe_tmp__52;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.lr.ph.us.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph_2e_us_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25.us.us = phi i64 [ %%34, %%33 ], [ 0, %%.lr.ph7.us  for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_storemerge25_2e_us_2e_us_count);
  llvm_cbe_storemerge25_2e_us_2e_us = (unsigned long long )llvm_cbe_storemerge25_2e_us_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25.us.us = 0x%I64X",llvm_cbe_storemerge25_2e_us_2e_us);
printf("\n = 0x%I64X",llvm_cbe_tmp__25);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds %%struct.k2c_tensor2* %%bias, i64 0, i32 0, i64 %%storemerge25.us.us, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__26 = (float *)(&llvm_cbe_bias->field0[(((signed long long )llvm_cbe_storemerge25_2e_us_2e_us))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25.us.us = 0x%I64X",((signed long long )llvm_cbe_storemerge25_2e_us_2e_us));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__27 = (float )*llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__27, *(int*)(&llvm_cbe_tmp__27));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = add i64 %%storemerge25.us.us, %%31, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__28 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge25_2e_us_2e_us&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__23&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__28&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds %%struct.k2c_tensor2* %%output, i64 0, i32 0, i64 %%37, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__29 = (float *)(&llvm_cbe_output->field0[(((signed long long )llvm_cbe_tmp__28))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__28));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%36, float* %%38, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_116_count);
  *llvm_cbe_tmp__29 = llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__27);
  llvm_cbe_tmp__30__PHI_TEMPORARY = (float )llvm_cbe_tmp__27;   /* for PHI node */
  llvm_cbe_storemerge34_2e_us_2e_us__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__53;

llvm_cbe_tmp__54:
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = add i64 %%storemerge25.us.us, 1, !dbg !15 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__25 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge25_2e_us_2e_us&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__25&18446744073709551615ull)));
  if (((llvm_cbe_tmp__25&18446744073709551615ULL) == (llvm_cbe_tmp__16&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge8_2e_us_2d_lcssa_2e_us18;
  } else {
    llvm_cbe_storemerge25_2e_us_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__25;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us_2e_us;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__53:
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = phi float [ %%36, %%.lr.ph.us.us ], [ %%49, %%39 ], !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__30 = (float )llvm_cbe_tmp__30__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__30);
printf("\n = %f",llvm_cbe_tmp__27);
printf("\n = %f",llvm_cbe_tmp__39);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge34.us.us = phi i64 [ 0, %%.lr.ph.us.us ], [ %%50, %%39  for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_storemerge34_2e_us_2e_us_count);
  llvm_cbe_storemerge34_2e_us_2e_us = (unsigned long long )llvm_cbe_storemerge34_2e_us_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34.us.us = 0x%I64X",llvm_cbe_storemerge34_2e_us_2e_us);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__40);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = add i64 %%storemerge34.us.us, %%32, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__31 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge34_2e_us_2e_us&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__24&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__31&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds %%struct.k2c_tensor2* %%input, i64 0, i32 0, i64 %%41, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__32 = (float *)(&llvm_cbe_input->field0[(((signed long long )llvm_cbe_tmp__31))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__31));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* %%42, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_126_count);
  llvm_cbe_tmp__33 = (float )*llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__33, *(int*)(&llvm_cbe_tmp__33));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = mul i64 %%storemerge34.us.us, %%21, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_127_count);
  llvm_cbe_tmp__34 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge34_2e_us_2e_us&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__16&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__34&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = add i64 %%44, %%storemerge25.us.us, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_128_count);
  llvm_cbe_tmp__35 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__34&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_storemerge25_2e_us_2e_us&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__35&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds %%struct.k2c_tensor* %%kernel, i64 0, i32 0, i64 %%45, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_129_count);
  llvm_cbe_tmp__36 = (float *)(&llvm_cbe_kernel->field0[(((signed long long )llvm_cbe_tmp__35))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__35));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load float* %%46, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_130_count);
  llvm_cbe_tmp__37 = (float )*llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__37, *(int*)(&llvm_cbe_tmp__37));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = fmul float %%43, %%47, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__38 = (float )((float )(llvm_cbe_tmp__33 * llvm_cbe_tmp__37));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__38, *(int*)(&llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = fadd float %%40, %%48, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__39 = (float )((float )(llvm_cbe_tmp__30 + llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__39, *(int*)(&llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%49, float* %%38, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_133_count);
  *llvm_cbe_tmp__29 = llvm_cbe_tmp__39;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = add i64 %%storemerge34.us.us, 1, !dbg !15 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__40 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge34_2e_us_2e_us&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__40&18446744073709551615ull)));
  if (((llvm_cbe_tmp__40&18446744073709551615ULL) == (llvm_cbe_tmp__15&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__54;
  } else {
    llvm_cbe_tmp__30__PHI_TEMPORARY = (float )llvm_cbe_tmp__39;   /* for PHI node */
    llvm_cbe_storemerge34_2e_us_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__40;   /* for PHI node */
    goto llvm_cbe_tmp__53;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.lr.ph.us.us' */
  } while (1); /* end of syntactic loop '.lr.ph7.us' */
llvm_cbe__2e__crit_edge12:
  llvm_cbe_tmp__41__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__14;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__51:
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = phi i64 [ %%17, %%10 ], [ %%19, %%._crit_edge12  for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__41 = (unsigned long long )llvm_cbe_tmp__41__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__41);
printf("\n = 0x%I64X",llvm_cbe_tmp__13);
printf("\n = 0x%I64X",llvm_cbe_tmp__14);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds %%struct.k2c_tensor2* %%output, i64 0, i32 0, i64 0, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__42 = (float *)(&llvm_cbe_output->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_linear_func(float* %%53, i64 %%52) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_144_count);
  k2c_linear_func((float *)llvm_cbe_tmp__42, llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__41);
}
  goto llvm_cbe_tmp__55;

llvm_cbe_tmp__49:
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [1 x i64]* %%axesA, i64 0, i64 0, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__43 = (signed long long *)(&llvm_cbe_axesA[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = add i64 %%2, -1, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__44 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__2&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__44&18446744073709551615ull)));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 1 && "Write access out of array 'axesA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%56, i64* %%55, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_149_count);
  *llvm_cbe_tmp__43 = llvm_cbe_tmp__44;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_dot(%%struct.k2c_tensor2* %%output, %%struct.k2c_tensor2* %%input, %%struct.k2c_tensor* %%kernel, i64* %%55, i64* getelementptr inbounds ([1 x i64]* @aesl_internal_k2c_dense.axesB, i64 0, i64 0), i64 1, i32 0, float* %%fwork) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_152_count);
  k2c_dot((l_struct_OC_k2c_tensor2 *)llvm_cbe_output, (l_struct_OC_k2c_tensor2 *)llvm_cbe_input, (l_struct_OC_k2c_tensor *)llvm_cbe_kernel, (signed long long *)llvm_cbe_tmp__43, (signed long long *)((&aesl_internal_k2c_dense_OC_axesB[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
])), 1ull, 0u, (float *)llvm_cbe_fwork);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1ull);
printf("\nArgument  = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_bias_add(%%struct.k2c_tensor2* %%output, %%struct.k2c_tensor2* %%bias) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_153_count);
  k2c_bias_add((l_struct_OC_k2c_tensor2 *)llvm_cbe_output, (l_struct_OC_k2c_tensor2 *)llvm_cbe_bias);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = getelementptr inbounds %%struct.k2c_tensor2* %%output, i64 0, i32 0, i64 0, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__45 = (float *)(&llvm_cbe_output->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds %%struct.k2c_tensor2* %%output, i64 0, i32 2, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__46 = (signed long long *)(&llvm_cbe_output->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load i64* %%58, align 8, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__47 = (unsigned long long )*llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_linear_func(float* %%57, i64 %%59) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_dense  --> \n", ++aesl_llvm_cbe_157_count);
  k2c_linear_func((float *)llvm_cbe_tmp__45, llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__47);
}
  goto llvm_cbe_tmp__55;

llvm_cbe_tmp__55:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_dense}\n");
  return;
}


void k2c_dense2(l_struct_OC_k2c_tensor2 *llvm_cbe_output, l_struct_OC_k2c_tensor2 *llvm_cbe_input, l_struct_OC_k2c_tensor2 *llvm_cbe_kernel, l_struct_OC_k2c_tensor2 *llvm_cbe_bias, float *llvm_cbe_fwork) {
  static  unsigned long long aesl_llvm_cbe_axesA_count = 0;
  signed long long llvm_cbe_axesA[1];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  signed long long *llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  unsigned long long llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  signed long long *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  unsigned long long llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  signed long long *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned long long llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  signed long long *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  unsigned long long llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  signed long long *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  unsigned long long llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  signed long long *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned long long llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  unsigned long long llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  unsigned long long llvm_cbe_tmp__69;
  unsigned long long llvm_cbe_tmp__69__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  unsigned long long llvm_cbe_tmp__70;
  unsigned long long llvm_cbe_tmp__70__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  unsigned long long llvm_cbe_tmp__71;
  unsigned long long llvm_cbe_tmp__71__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge15_count = 0;
  unsigned long long llvm_cbe_storemerge15;
  unsigned long long llvm_cbe_storemerge15__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned long long llvm_cbe_storemerge19;
  unsigned long long llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  unsigned long long llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  unsigned long long llvm_cbe_tmp__73;
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
  static  unsigned long long aesl_llvm_cbe_storemerge25_count = 0;
  unsigned long long llvm_cbe_storemerge25;
  unsigned long long llvm_cbe_storemerge25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  float *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  float llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  unsigned long long llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  float *llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  float llvm_cbe_tmp__78;
  float llvm_cbe_tmp__78__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge34_count = 0;
  unsigned long long llvm_cbe_storemerge34;
  unsigned long long llvm_cbe_storemerge34__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  unsigned long long llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  float *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  float llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  unsigned long long llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  unsigned long long llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  float *llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  float llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  float llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  float llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  unsigned long long llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  unsigned long long llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond13_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  unsigned long long llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond14_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  unsigned long long llvm_cbe_tmp__91;
  unsigned long long llvm_cbe_tmp__91__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  float *llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  signed long long *llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  unsigned long long llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  float *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  signed long long *llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  unsigned long long llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_dense2\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor2* %%input, i64 0, i32 1, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__56 = (signed long long *)(&llvm_cbe_input->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__57 = (unsigned long long )*llvm_cbe_tmp__56;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__57);
  if ((((unsigned long long )llvm_cbe_tmp__57&18446744073709551615ULL) < ((unsigned long long )3ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__98;
  } else {
    goto llvm_cbe_tmp__99;
  }

llvm_cbe_tmp__98:
  if ((((unsigned long long )llvm_cbe_tmp__57&18446744073709551615ULL) > ((unsigned long long )1ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__100;
  } else {
    goto llvm_cbe__2e_thread;
  }

llvm_cbe__2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.k2c_tensor2* %%kernel, i64 0, i32 3, i64 1, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_191_count);
  llvm_cbe_tmp__58 = (signed long long *)(&llvm_cbe_kernel->field3[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i64* %%6, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__59 = (unsigned long long )*llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.k2c_tensor2* %%kernel, i64 0, i32 3, i64 0, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__60 = (signed long long *)(&llvm_cbe_kernel->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i64* %%8, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__61 = (unsigned long long )*llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__61);
  llvm_cbe_tmp__69__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__59;   /* for PHI node */
  llvm_cbe_tmp__70__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__61;   /* for PHI node */
  llvm_cbe_tmp__71__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__59;   /* for PHI node */
  llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
  goto llvm_cbe__2e_lr_2e_ph11;

llvm_cbe_tmp__100:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.k2c_tensor2* %%input, i64 0, i32 3, i64 0, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__62 = (signed long long *)(&llvm_cbe_input->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i64* %%11, align 8, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__63 = (unsigned long long )*llvm_cbe_tmp__62;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds %%struct.k2c_tensor2* %%kernel, i64 0, i32 3, i64 1, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_203_count);
  llvm_cbe_tmp__64 = (signed long long *)(&llvm_cbe_kernel->field3[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%13, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__65 = (unsigned long long )*llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.k2c_tensor2* %%kernel, i64 0, i32 3, i64 0, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__66 = (signed long long *)(&llvm_cbe_kernel->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i64* %%15, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__67 = (unsigned long long )*llvm_cbe_tmp__66;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = mul i64 %%14, %%12, !dbg !14 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__68 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__65&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__63&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__68&18446744073709551615ull)));
  if (((llvm_cbe_tmp__63&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe_tmp__91__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__68;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge12;
  } else {
    llvm_cbe_tmp__69__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__68;   /* for PHI node */
    llvm_cbe_tmp__70__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__67;   /* for PHI node */
    llvm_cbe_tmp__71__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__65;   /* for PHI node */
    llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__63;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph11;
  }

llvm_cbe__2e_lr_2e_ph11:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = phi i64 [ %%7, %%.thread ], [ %%17, %%10  for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_215_count);
  llvm_cbe_tmp__69 = (unsigned long long )llvm_cbe_tmp__69__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__69);
printf("\n = 0x%I64X",llvm_cbe_tmp__59);
printf("\n = 0x%I64X",llvm_cbe_tmp__68);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = phi i64 [ %%9, %%.thread ], [ %%16, %%10  for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_216_count);
  llvm_cbe_tmp__70 = (unsigned long long )llvm_cbe_tmp__70__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__70);
printf("\n = 0x%I64X",llvm_cbe_tmp__61);
printf("\n = 0x%I64X",llvm_cbe_tmp__67);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = phi i64 [ %%7, %%.thread ], [ %%14, %%10  for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__71 = (unsigned long long )llvm_cbe_tmp__71__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__71);
printf("\n = 0x%I64X",llvm_cbe_tmp__59);
printf("\n = 0x%I64X",llvm_cbe_tmp__65);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge15 = phi i64 [ 1, %%.thread ], [ %%12, %%10  for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_storemerge15_count);
  llvm_cbe_storemerge15 = (unsigned long long )llvm_cbe_storemerge15__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge15 = 0x%I64X",llvm_cbe_storemerge15);
printf("\n = 0x%I64X",1ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__63);
}
  llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__101;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__101:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i64 [ 0, %%.lr.ph11 ], [ %%43, %%._crit_edge8  for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned long long )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%I64X",llvm_cbe_storemerge19);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__90);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = mul i64 %%storemerge19, %%21, !dbg !14 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__72 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge19&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__71&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__72&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = mul i64 %%storemerge19, %%20, !dbg !14 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_225_count);
  llvm_cbe_tmp__73 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge19&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__70&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__73&18446744073709551615ull)));
  if (((llvm_cbe_tmp__71&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge8;
  } else {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph7;
  }

llvm_cbe__2e__crit_edge8:
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = add i64 %%storemerge19, 1, !dbg !14 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_274_count);
  llvm_cbe_tmp__90 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge19&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__90&18446744073709551615ull)));
  if (((llvm_cbe_tmp__90&18446744073709551615ULL) == (llvm_cbe_storemerge15&18446744073709551615ULL))) {
    llvm_cbe_tmp__91__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__69;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge12;
  } else {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__90;   /* for PHI node */
    goto llvm_cbe_tmp__101;
  }

  do {     /* Syntactic loop '.lr.ph7' to make GCC happy */
llvm_cbe__2e_lr_2e_ph7:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25 = phi i64 [ %%42, %%._crit_edge ], [ 0, %%24  for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_storemerge25_count);
  llvm_cbe_storemerge25 = (unsigned long long )llvm_cbe_storemerge25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%I64X",llvm_cbe_storemerge25);
printf("\n = 0x%I64X",llvm_cbe_tmp__89);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds %%struct.k2c_tensor2* %%bias, i64 0, i32 0, i64 %%storemerge25, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__74 = (float *)(&llvm_cbe_bias->field0[(((signed long long )llvm_cbe_storemerge25))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%I64X",((signed long long )llvm_cbe_storemerge25));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_237_count);
  llvm_cbe_tmp__75 = (float )*llvm_cbe_tmp__74;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__75, *(int*)(&llvm_cbe_tmp__75));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i64 %%storemerge25, %%25, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_238_count);
  llvm_cbe_tmp__76 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge25&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__72&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__76&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds %%struct.k2c_tensor2* %%output, i64 0, i32 0, i64 %%29, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_239_count);
  llvm_cbe_tmp__77 = (float *)(&llvm_cbe_output->field0[(((signed long long )llvm_cbe_tmp__76))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__76));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%30, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_240_count);
  *llvm_cbe_tmp__77 = llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__75);
  if (((llvm_cbe_tmp__70&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_tmp__78__PHI_TEMPORARY = (float )llvm_cbe_tmp__75;   /* for PHI node */
    llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = add i64 %%storemerge25, 1, !dbg !15 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__89 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge25&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__89&18446744073709551615ull)));
  if (((llvm_cbe_tmp__89&18446744073709551615ULL) == (llvm_cbe_tmp__71&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge8;
  } else {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__89;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph7;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = phi float [ %%40, %%.lr.ph ], [ %%28, %%.lr.ph7 ], !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_247_count);
  llvm_cbe_tmp__78 = (float )llvm_cbe_tmp__78__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__78);
printf("\n = %f",llvm_cbe_tmp__87);
printf("\n = %f",llvm_cbe_tmp__75);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge34 = phi i64 [ %%41, %%.lr.ph ], [ 0, %%.lr.ph7  for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_storemerge34_count);
  llvm_cbe_storemerge34 = (unsigned long long )llvm_cbe_storemerge34__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34 = 0x%I64X",llvm_cbe_storemerge34);
printf("\n = 0x%I64X",llvm_cbe_tmp__88);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i64 %%storemerge34, %%26, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_248_count);
  llvm_cbe_tmp__79 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge34&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__73&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__79&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds %%struct.k2c_tensor2* %%input, i64 0, i32 0, i64 %%32, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_249_count);
  llvm_cbe_tmp__80 = (float *)(&llvm_cbe_input->field0[(((signed long long )llvm_cbe_tmp__79))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load float* %%33, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_250_count);
  llvm_cbe_tmp__81 = (float )*llvm_cbe_tmp__80;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__81, *(int*)(&llvm_cbe_tmp__81));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = mul i64 %%storemerge34, %%21, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_251_count);
  llvm_cbe_tmp__82 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge34&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__71&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__82&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = add i64 %%35, %%storemerge25, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__83 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__82&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_storemerge25&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__83&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds %%struct.k2c_tensor2* %%kernel, i64 0, i32 0, i64 %%36, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_253_count);
  llvm_cbe_tmp__84 = (float *)(&llvm_cbe_kernel->field0[(((signed long long )llvm_cbe_tmp__83))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__83));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__85 = (float )*llvm_cbe_tmp__84;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__85, *(int*)(&llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = fmul float %%34, %%38, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__86 = (float )((float )(llvm_cbe_tmp__81 * llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__86, *(int*)(&llvm_cbe_tmp__86));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = fadd float %%31, %%39, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__87 = (float )((float )(llvm_cbe_tmp__78 + llvm_cbe_tmp__86));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__87, *(int*)(&llvm_cbe_tmp__87));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%40, float* %%30, align 4, !dbg !11 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_257_count);
  *llvm_cbe_tmp__77 = llvm_cbe_tmp__87;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = add i64 %%storemerge34, 1, !dbg !15 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_258_count);
  llvm_cbe_tmp__88 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge34&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__88&18446744073709551615ull)));
  if (((llvm_cbe_tmp__88&18446744073709551615ULL) == (llvm_cbe_tmp__70&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_tmp__78__PHI_TEMPORARY = (float )llvm_cbe_tmp__87;   /* for PHI node */
    llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__88;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
  } while (1); /* end of syntactic loop '.lr.ph7' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge12:
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = phi i64 [ %%17, %%10 ], [ %%19, %%._crit_edge8  for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_281_count);
  llvm_cbe_tmp__91 = (unsigned long long )llvm_cbe_tmp__91__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__91);
printf("\n = 0x%I64X",llvm_cbe_tmp__68);
printf("\n = 0x%I64X",llvm_cbe_tmp__69);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds %%struct.k2c_tensor2* %%output, i64 0, i32 0, i64 0, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_282_count);
  llvm_cbe_tmp__92 = (float *)(&llvm_cbe_output->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_linear_func(float* %%45, i64 %%44) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_283_count);
  k2c_linear_func((float *)llvm_cbe_tmp__92, llvm_cbe_tmp__91);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__91);
}
  goto llvm_cbe_tmp__102;

llvm_cbe_tmp__99:
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [1 x i64]* %%axesA, i64 0, i64 0, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__93 = (signed long long *)(&llvm_cbe_axesA[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = add i64 %%2, -1, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__94 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__57&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__94&18446744073709551615ull)));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 1 && "Write access out of array 'axesA' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%48, i64* %%47, align 8, !dbg !13 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_288_count);
  *llvm_cbe_tmp__93 = llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_dot2(%%struct.k2c_tensor2* %%output, %%struct.k2c_tensor2* %%input, %%struct.k2c_tensor2* %%kernel, i64* %%47, i64* getelementptr inbounds ([1 x i64]* @aesl_internal_k2c_dense2.axesB, i64 0, i64 0), i64 1, i32 0, float* %%fwork) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_291_count);
  k2c_dot2((l_struct_OC_k2c_tensor2 *)llvm_cbe_output, (l_struct_OC_k2c_tensor2 *)llvm_cbe_input, (l_struct_OC_k2c_tensor2 *)llvm_cbe_kernel, (signed long long *)llvm_cbe_tmp__93, (signed long long *)((&aesl_internal_k2c_dense2_OC_axesB[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
])), 1ull, 0u, (float *)llvm_cbe_fwork);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1ull);
printf("\nArgument  = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_bias_add(%%struct.k2c_tensor2* %%output, %%struct.k2c_tensor2* %%bias) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_292_count);
  k2c_bias_add((l_struct_OC_k2c_tensor2 *)llvm_cbe_output, (l_struct_OC_k2c_tensor2 *)llvm_cbe_bias);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds %%struct.k2c_tensor2* %%output, i64 0, i32 0, i64 0, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_293_count);
  llvm_cbe_tmp__95 = (float *)(&llvm_cbe_output->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds %%struct.k2c_tensor2* %%output, i64 0, i32 2, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_294_count);
  llvm_cbe_tmp__96 = (signed long long *)(&llvm_cbe_output->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load i64* %%50, align 8, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_295_count);
  llvm_cbe_tmp__97 = (unsigned long long )*llvm_cbe_tmp__96;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_linear_func(float* %%49, i64 %%51) nounwind, !dbg !12 for 0x%I64xth hint within @k2c_dense2  --> \n", ++aesl_llvm_cbe_296_count);
  k2c_linear_func((float *)llvm_cbe_tmp__95, llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__97);
}
  goto llvm_cbe_tmp__102;

llvm_cbe_tmp__102:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_dense2}\n");
  return;
}


void k2c_flatten(l_struct_OC_k2c_tensor *llvm_cbe_output, l_struct_OC_k2c_tensor *llvm_cbe_input) {
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
   char *llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
   char *llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  signed long long *llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  unsigned long long llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  unsigned long long llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
   char *llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  signed long long *llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  unsigned long long llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  signed long long *llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  unsigned long long llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  unsigned long long llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  unsigned long long llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  signed long long *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  unsigned long long llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  signed long long *llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  signed long long *llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_flatten\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = bitcast %%struct.k2c_tensor* %%output to i8*, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_311_count);
  llvm_cbe_tmp__103 = ( char *)(( char *)llvm_cbe_output);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = bitcast %%struct.k2c_tensor* %%input to i8*, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_312_count);
  llvm_cbe_tmp__104 = ( char *)(( char *)llvm_cbe_input);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.k2c_tensor* %%input, i64 0, i32 2, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_313_count);
  llvm_cbe_tmp__105 = (signed long long *)(&llvm_cbe_input->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i64* %%3, align 8, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_314_count);
  llvm_cbe_tmp__106 = (unsigned long long )*llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = shl i64 %%4, 2, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__107 = (unsigned long long )llvm_cbe_tmp__106 << 2ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = call i8* @memcpy(i8* %%1, i8* %%2, i64 %%5 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_316_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__103, ( char *)llvm_cbe_tmp__104, llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__107);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__108);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.k2c_tensor* %%input, i64 0, i32 1, !dbg !12 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_321_count);
  llvm_cbe_tmp__109 = (signed long long *)(&llvm_cbe_input->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i64* %%7, align 8, !dbg !12 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_322_count);
  llvm_cbe_tmp__110 = (unsigned long long )*llvm_cbe_tmp__109;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__110);
  if (((llvm_cbe_tmp__110&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ %%11, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",llvm_cbe_tmp__112);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.k2c_tensor* %%output, i64 0, i32 3, i64 %%storemerge1, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_325_count);
  llvm_cbe_tmp__111 = (signed long long *)(&llvm_cbe_output->field3[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* %%10, align 8, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_326_count);
  *llvm_cbe_tmp__111 = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i64 %%storemerge1, 1, !dbg !12 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_327_count);
  llvm_cbe_tmp__112 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__112&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i64* %%7, align 8, !dbg !12 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_332_count);
  llvm_cbe_tmp__113 = (unsigned long long )*llvm_cbe_tmp__109;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__113);
  if ((((unsigned long long )llvm_cbe_tmp__112&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__113&18446744073709551615ULL))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__112;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%3, align 8, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_335_count);
  llvm_cbe_tmp__114 = (unsigned long long )*llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.k2c_tensor* %%output, i64 0, i32 3, i64 0, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_336_count);
  llvm_cbe_tmp__115 = (signed long long *)(&llvm_cbe_output->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%14, i64* %%15, align 8, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_337_count);
  *llvm_cbe_tmp__115 = llvm_cbe_tmp__114;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i64* %%3, align 8, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_338_count);
  llvm_cbe_tmp__116 = (unsigned long long )*llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.k2c_tensor* %%output, i64 0, i32 2, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_339_count);
  llvm_cbe_tmp__117 = (signed long long *)(&llvm_cbe_output->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%16, i64* %%17, align 8, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_340_count);
  *llvm_cbe_tmp__117 = llvm_cbe_tmp__116;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds %%struct.k2c_tensor* %%output, i64 0, i32 1, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__118 = (signed long long *)(&llvm_cbe_output->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* %%18, align 8, !dbg !11 for 0x%I64xth hint within @k2c_flatten  --> \n", ++aesl_llvm_cbe_342_count);
  *llvm_cbe_tmp__118 = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_flatten}\n");
  return;
}


void k2c_reshape(l_struct_OC_k2c_tensor *llvm_cbe_output, l_struct_OC_k2c_tensor *llvm_cbe_input, signed long long *llvm_cbe_newshp, signed long long llvm_cbe_newndim) {
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
   char *llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
   char *llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  signed long long *llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  unsigned long long llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  unsigned long long llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
   char *llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  signed long long *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  unsigned long long llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  signed long long *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  unsigned long long llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  signed long long *llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  unsigned long long llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  signed long long *llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_reshape\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = bitcast %%struct.k2c_tensor* %%output to i8*, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_358_count);
  llvm_cbe_tmp__119 = ( char *)(( char *)llvm_cbe_output);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = bitcast %%struct.k2c_tensor* %%input to i8*, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_359_count);
  llvm_cbe_tmp__120 = ( char *)(( char *)llvm_cbe_input);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.k2c_tensor* %%input, i64 0, i32 2, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_360_count);
  llvm_cbe_tmp__121 = (signed long long *)(&llvm_cbe_input->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i64* %%3, align 8, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_361_count);
  llvm_cbe_tmp__122 = (unsigned long long )*llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = shl i64 %%4, 2, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__123 = (unsigned long long )llvm_cbe_tmp__122 << 2ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = call i8* @memcpy(i8* %%1, i8* %%2, i64 %%5 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_363_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__119, ( char *)llvm_cbe_tmp__120, llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__123);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__124);
}
  if (((llvm_cbe_newndim&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ %%11, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",llvm_cbe_tmp__128);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i64* %%newshp, i64 %%storemerge1, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_371_count);
  llvm_cbe_tmp__125 = (signed long long *)(&llvm_cbe_newshp[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i64* %%8, align 8, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_372_count);
  llvm_cbe_tmp__126 = (unsigned long long )*llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.k2c_tensor* %%output, i64 0, i32 3, i64 %%storemerge1, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_373_count);
  llvm_cbe_tmp__127 = (signed long long *)(&llvm_cbe_output->field3[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%9, i64* %%10, align 8, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_374_count);
  *llvm_cbe_tmp__127 = llvm_cbe_tmp__126;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i64 %%storemerge1, 1, !dbg !12 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_375_count);
  llvm_cbe_tmp__128 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__128&18446744073709551615ull)));
  if (((llvm_cbe_tmp__128&18446744073709551615ULL) == (llvm_cbe_newndim&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__128;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.k2c_tensor* %%output, i64 0, i32 1, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_382_count);
  llvm_cbe_tmp__129 = (signed long long *)(&llvm_cbe_output->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%newndim, i64* %%12, align 8, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_383_count);
  *llvm_cbe_tmp__129 = llvm_cbe_newndim;
if (AESL_DEBUG_TRACE)
printf("\nnewndim = 0x%I64X\n", llvm_cbe_newndim);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i64* %%3, align 8, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_384_count);
  llvm_cbe_tmp__130 = (unsigned long long )*llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.k2c_tensor* %%output, i64 0, i32 2, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_385_count);
  llvm_cbe_tmp__131 = (signed long long *)(&llvm_cbe_output->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%13, i64* %%14, align 8, !dbg !11 for 0x%I64xth hint within @k2c_reshape  --> \n", ++aesl_llvm_cbe_386_count);
  *llvm_cbe_tmp__131 = llvm_cbe_tmp__130;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__130);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_reshape}\n");
  return;
}


void k2c_permute_dims(l_struct_OC_k2c_tensor *llvm_cbe_output, l_struct_OC_k2c_tensor *llvm_cbe_input, signed long long *llvm_cbe_permute) {
  static  unsigned long long aesl_llvm_cbe_Asub_count = 0;
  signed long long llvm_cbe_Asub[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_Bsub_count = 0;
  signed long long llvm_cbe_Bsub[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_newshp_count = 0;
  signed long long llvm_cbe_newshp[5];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_oldshp_count = 0;
  signed long long llvm_cbe_oldshp[5];    /* Address-exposed local */
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
  signed long long *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  unsigned long long llvm_cbe_tmp__133;
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
  static  unsigned long long aesl_llvm_cbe_storemerge11_count = 0;
  unsigned long long llvm_cbe_storemerge11;
  unsigned long long llvm_cbe_storemerge11__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  signed long long *llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  unsigned long long llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  signed long long *llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  unsigned long long llvm_cbe_tmp__137;
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
  static  unsigned long long aesl_llvm_cbe_exitcond15_count = 0;
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
  signed long long *llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  unsigned long long llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  signed long long *llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  signed long long *llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  signed long long *llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  signed long long *llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned long long llvm_cbe_storemerge19;
  unsigned long long llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  signed long long *llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  unsigned long long llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  signed long long *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  unsigned long long llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  signed long long *llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  unsigned long long llvm_cbe_tmp__149;
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
  static  unsigned long long aesl_llvm_cbe_exitcond14_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_count = 0;
  unsigned long long llvm_cbe_storemerge25;
  unsigned long long llvm_cbe_storemerge25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge34_count = 0;
  unsigned long long llvm_cbe_storemerge34;
  unsigned long long llvm_cbe_storemerge34__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  signed long long *llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  unsigned long long llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  signed long long *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  unsigned long long llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  signed long long *llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  unsigned long long llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  unsigned long long llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  float *llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  float llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  float *llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  unsigned long long llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  unsigned long long llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_permute_dims\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor* %%input, i64 0, i32 1, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_402_count);
  llvm_cbe_tmp__132 = (signed long long *)(&llvm_cbe_input->field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_403_count);
  llvm_cbe_tmp__133 = (unsigned long long )*llvm_cbe_tmp__132;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__133);
  if (((llvm_cbe_tmp__133&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge11__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph13;
  }

llvm_cbe__2e_preheader8:
  if (((llvm_cbe_tmp__133&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph10;
  }

  do {     /* Syntactic loop '.lr.ph13' to make GCC happy */
llvm_cbe__2e_lr_2e_ph13:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge11 = phi i64 [ %%7, %%.lr.ph13 ], [ 0, %%0  for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_storemerge11_count);
  llvm_cbe_storemerge11 = (unsigned long long )llvm_cbe_storemerge11__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge11 = 0x%I64X",llvm_cbe_storemerge11);
printf("\n = 0x%I64X",llvm_cbe_tmp__137);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.k2c_tensor* %%input, i64 0, i32 3, i64 %%storemerge11, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_439_count);
  llvm_cbe_tmp__134 = (signed long long *)(&llvm_cbe_input->field3[(((signed long long )llvm_cbe_storemerge11))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge11 = 0x%I64X",((signed long long )llvm_cbe_storemerge11));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i64* %%4, align 8, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_440_count);
  llvm_cbe_tmp__135 = (unsigned long long )*llvm_cbe_tmp__134;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [5 x i64]* %%oldshp, i64 0, i64 %%storemerge11, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_441_count);
  llvm_cbe_tmp__136 = (signed long long *)(&llvm_cbe_oldshp[(((signed long long )llvm_cbe_storemerge11))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge11 = 0x%I64X",((signed long long )llvm_cbe_storemerge11));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge11) < 5 && "Write access out of array 'oldshp' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%5, i64* %%6, align 8, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_442_count);
  *llvm_cbe_tmp__136 = llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = add i64 %%storemerge11, 1, !dbg !14 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_443_count);
  llvm_cbe_tmp__137 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge11&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__137&18446744073709551615ull)));
  if (((llvm_cbe_tmp__137&18446744073709551615ULL) == (llvm_cbe_tmp__133&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader8;
  } else {
    llvm_cbe_storemerge11__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__137;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph13;
  }

  } while (1); /* end of syntactic loop '.lr.ph13' */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.k2c_tensor* %%input, i64 0, i32 2, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_470_count);
  llvm_cbe_tmp__138 = (signed long long *)(&llvm_cbe_input->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i64* %%8, align 8, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_471_count);
  llvm_cbe_tmp__139 = (unsigned long long )*llvm_cbe_tmp__138;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__139);
  if (((llvm_cbe_tmp__139&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge7;
  } else {
    goto llvm_cbe__2e_lr_2e_ph6;
  }

llvm_cbe__2e_lr_2e_ph6:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_474_count);
  llvm_cbe_tmp__140 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [5 x i64]* %%oldshp, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_475_count);
  llvm_cbe_tmp__141 = (signed long long *)(&llvm_cbe_oldshp[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_476_count);
  llvm_cbe_tmp__142 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [5 x i64]* %%newshp, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_477_count);
  llvm_cbe_tmp__143 = (signed long long *)(&llvm_cbe_newshp[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__162;

  do {     /* Syntactic loop '.lr.ph10' to make GCC happy */
llvm_cbe__2e_lr_2e_ph10:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i64 [ %%20, %%.lr.ph10 ], [ 0, %%.preheader8  for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned long long )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%I64X",llvm_cbe_storemerge19);
printf("\n = 0x%I64X",llvm_cbe_tmp__149);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds i64* %%permute, i64 %%storemerge19, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_479_count);
  llvm_cbe_tmp__144 = (signed long long *)(&llvm_cbe_permute[(((signed long long )llvm_cbe_storemerge19))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%I64X",((signed long long )llvm_cbe_storemerge19));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i64* %%15, align 8, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_480_count);
  llvm_cbe_tmp__145 = (unsigned long long )*llvm_cbe_tmp__144;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [5 x i64]* %%oldshp, i64 0, i64 %%16, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_481_count);
  llvm_cbe_tmp__146 = (signed long long *)(&llvm_cbe_oldshp[(((signed long long )llvm_cbe_tmp__145))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__145));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__145) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'oldshp' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i64* %%17, align 8, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_482_count);
  llvm_cbe_tmp__147 = (unsigned long long )*llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [5 x i64]* %%newshp, i64 0, i64 %%storemerge19, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_483_count);
  llvm_cbe_tmp__148 = (signed long long *)(&llvm_cbe_newshp[(((signed long long )llvm_cbe_storemerge19))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%I64X",((signed long long )llvm_cbe_storemerge19));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge19) < 5 && "Write access out of array 'newshp' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%18, i64* %%19, align 8, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_484_count);
  *llvm_cbe_tmp__148 = llvm_cbe_tmp__147;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add i64 %%storemerge19, 1, !dbg !14 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_485_count);
  llvm_cbe_tmp__149 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge19&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__149&18446744073709551615ull)));
  if (((llvm_cbe_tmp__149&18446744073709551615ULL) == (llvm_cbe_tmp__133&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__149;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph10;
  }

  } while (1); /* end of syntactic loop '.lr.ph10' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__162:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25 = phi i64 [ 0, %%.lr.ph6 ], [ %%32, %%._crit_edge  for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_storemerge25_count);
  llvm_cbe_storemerge25 = (unsigned long long )llvm_cbe_storemerge25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%I64X",llvm_cbe_storemerge25);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__160);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @k2c_idx2sub(i64 %%storemerge25, i64* %%11, i64* %%12, i64 %%2) nounwind, !dbg !14 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_500_count);
  k2c_idx2sub(llvm_cbe_storemerge25, (signed long long *)llvm_cbe_tmp__140, (signed long long *)llvm_cbe_tmp__141, llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge25 = 0x%I64X",llvm_cbe_storemerge25);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__133);
}
  if (((llvm_cbe_tmp__133&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = call i64 @k2c_sub2idx(i64* %%13, i64* %%14, i64 %%2) nounwind, !dbg !14 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_520_count);
  llvm_cbe_tmp__156 = (unsigned long long )k2c_sub2idx((signed long long *)llvm_cbe_tmp__142, (signed long long *)llvm_cbe_tmp__143, llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__133);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__156);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds %%struct.k2c_tensor* %%input, i64 0, i32 0, i64 %%storemerge25, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_522_count);
  llvm_cbe_tmp__157 = (float *)(&llvm_cbe_input->field0[(((signed long long )llvm_cbe_storemerge25))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%I64X",((signed long long )llvm_cbe_storemerge25));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* %%29, align 4, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_523_count);
  llvm_cbe_tmp__158 = (float )*llvm_cbe_tmp__157;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__158, *(int*)(&llvm_cbe_tmp__158));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds %%struct.k2c_tensor* %%output, i64 0, i32 0, i64 %%28, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_525_count);
  llvm_cbe_tmp__159 = (float *)(&llvm_cbe_output->field0[(((signed long long )llvm_cbe_tmp__156))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__156));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%30, float* %%31, align 4, !dbg !11 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_526_count);
  *llvm_cbe_tmp__159 = llvm_cbe_tmp__158;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__158);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i64 %%storemerge25, 1, !dbg !14 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_527_count);
  llvm_cbe_tmp__160 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge25&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__160&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = load i64* %%8, align 8, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_541_count);
  llvm_cbe_tmp__161 = (unsigned long long )*llvm_cbe_tmp__138;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__161);
  if ((((unsigned long long )llvm_cbe_tmp__160&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__161&18446744073709551615ULL))) {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__160;   /* for PHI node */
    goto llvm_cbe_tmp__162;
  } else {
    goto llvm_cbe__2e__crit_edge7;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge34 = phi i64 [ %%27, %%.lr.ph ], [ 0, %%21  for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_storemerge34_count);
  llvm_cbe_storemerge34 = (unsigned long long )llvm_cbe_storemerge34__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34 = 0x%I64X",llvm_cbe_storemerge34);
printf("\n = 0x%I64X",llvm_cbe_tmp__155);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds i64* %%permute, i64 %%storemerge34, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_507_count);
  llvm_cbe_tmp__150 = (signed long long *)(&llvm_cbe_permute[(((signed long long )llvm_cbe_storemerge34))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34 = 0x%I64X",((signed long long )llvm_cbe_storemerge34));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load i64* %%22, align 8, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_508_count);
  llvm_cbe_tmp__151 = (unsigned long long )*llvm_cbe_tmp__150;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds [5 x i64]* %%Asub, i64 0, i64 %%23, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_509_count);
  llvm_cbe_tmp__152 = (signed long long *)(&llvm_cbe_Asub[(((signed long long )llvm_cbe_tmp__151))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__151));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__151) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'Asub' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i64* %%24, align 8, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_510_count);
  llvm_cbe_tmp__153 = (unsigned long long )*llvm_cbe_tmp__152;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds [5 x i64]* %%Bsub, i64 0, i64 %%storemerge34, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_511_count);
  llvm_cbe_tmp__154 = (signed long long *)(&llvm_cbe_Bsub[(((signed long long )llvm_cbe_storemerge34))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34 = 0x%I64X",((signed long long )llvm_cbe_storemerge34));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_storemerge34) < 5 && "Write access out of array 'Bsub' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%25, i64* %%26, align 8, !dbg !12 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_512_count);
  *llvm_cbe_tmp__154 = llvm_cbe_tmp__153;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = add i64 %%storemerge34, 1, !dbg !15 for 0x%I64xth hint within @k2c_permute_dims  --> \n", ++aesl_llvm_cbe_513_count);
  llvm_cbe_tmp__155 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge34&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__155&18446744073709551615ull)));
  if (((llvm_cbe_tmp__155&18446744073709551615ULL) == (llvm_cbe_tmp__133&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__155;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge7:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_permute_dims}\n");
  return;
}


void k2c_repeat_vector(l_struct_OC_k2c_tensor *llvm_cbe_output, l_struct_OC_k2c_tensor *llvm_cbe_input, signed long long llvm_cbe_n) {
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  signed long long *llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  unsigned long long llvm_cbe_tmp__164;
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
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned long long llvm_cbe_storemerge3;
  unsigned long long llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  unsigned long long llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned long long llvm_cbe_storemerge12;
  unsigned long long llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  float *llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  float llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  unsigned long long llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  float *llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  unsigned long long llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  unsigned long long llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond5_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @k2c_repeat_vector\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor* %%input, i64 0, i32 3, i64 0, !dbg !11 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_552_count);
  llvm_cbe_tmp__163 = (signed long long *)(&llvm_cbe_input->field3[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !11 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_553_count);
  llvm_cbe_tmp__164 = (unsigned long long )*llvm_cbe_tmp__163;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__164);
  if (((llvm_cbe_n&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge4;
  } else {
    goto llvm_cbe__2e_preheader_2e_lr_2e_ph;
  }

llvm_cbe__2e_preheader_2e_lr_2e_ph:
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i64 [ 0, %%.preheader.lr.ph ], [ %%12, %%._crit_edge  for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned long long )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%I64X",llvm_cbe_storemerge3);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__171);
}
  if (((llvm_cbe_tmp__164&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add i64 %%storemerge3, 1, !dbg !12 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_584_count);
  llvm_cbe_tmp__171 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge3&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__171&18446744073709551615ull)));
  if (((llvm_cbe_tmp__171&18446744073709551615ULL) == (llvm_cbe_n&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge4;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__171;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__172:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i64 [ 0, %%.lr.ph ], [ %%11, %%6  for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned long long )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%I64X",llvm_cbe_storemerge12);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__170);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.k2c_tensor* %%input, i64 0, i32 0, i64 %%storemerge12, !dbg !11 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_572_count);
  llvm_cbe_tmp__166 = (float *)(&llvm_cbe_input->field0[(((signed long long )llvm_cbe_storemerge12))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%I64X",((signed long long )llvm_cbe_storemerge12));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !11 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_573_count);
  llvm_cbe_tmp__167 = (float )*llvm_cbe_tmp__166;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__167, *(int*)(&llvm_cbe_tmp__167));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i64 %%storemerge12, %%5, !dbg !11 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_574_count);
  llvm_cbe_tmp__168 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge12&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__165&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__168&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.k2c_tensor* %%output, i64 0, i32 0, i64 %%9, !dbg !11 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_575_count);
  llvm_cbe_tmp__169 = (float *)(&llvm_cbe_output->field0[(((signed long long )llvm_cbe_tmp__168))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__168));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%8, float* %%10, align 4, !dbg !11 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_576_count);
  *llvm_cbe_tmp__169 = llvm_cbe_tmp__167;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__167);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i64 %%storemerge12, 1, !dbg !12 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_577_count);
  llvm_cbe_tmp__170 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge12&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__170&18446744073709551615ull)));
  if (((llvm_cbe_tmp__170&18446744073709551615ULL) == (llvm_cbe_tmp__164&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__170;   /* for PHI node */
    goto llvm_cbe_tmp__172;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = mul i64 %%storemerge3, %%2, !dbg !11 for 0x%I64xth hint within @k2c_repeat_vector  --> \n", ++aesl_llvm_cbe_570_count);
  llvm_cbe_tmp__165 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge3&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__164&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__165&18446744073709551615ull)));
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__172;

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe__2e__crit_edge4:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @k2c_repeat_vector}\n");
  return;
}

