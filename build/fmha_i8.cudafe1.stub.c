#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_CUBIN_HANDLE_STORAGE__ static
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "fmha_i8.fatbin.c"
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi64ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi128ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi256ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi384ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi512ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi128ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi256ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi384ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi512ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi1024ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi2048ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8&);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi64ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T139;
 const int8_t *__T140;
 const int8_t *__T141;
 int8_t *__T142;
__cudaLaunchPrologue(6);__T139 = __par0;__cudaSetupArgSimple(__T139, 0UL);__T140 = __par1;__cudaSetupArgSimple(__T140, 8UL);__T141 = __par2;__cudaSetupArgSimple(__T141, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T142 = __par4;__cudaSetupArgSimple(__T142, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)64, (int)4, (bool)0> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<64,64,64,4,false>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi64ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi128ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T143;
 const int8_t *__T144;
 const int8_t *__T145;
 int8_t *__T146;
__cudaLaunchPrologue(6);__T143 = __par0;__cudaSetupArgSimple(__T143, 0UL);__T144 = __par1;__cudaSetupArgSimple(__T144, 8UL);__T145 = __par2;__cudaSetupArgSimple(__T145, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T146 = __par4;__cudaSetupArgSimple(__T146, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)128, (int)4, (bool)0> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<64,64,128,4,false>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi128ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi256ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T147;
 const int8_t *__T148;
 const int8_t *__T149;
 int8_t *__T150;
__cudaLaunchPrologue(6);__T147 = __par0;__cudaSetupArgSimple(__T147, 0UL);__T148 = __par1;__cudaSetupArgSimple(__T148, 8UL);__T149 = __par2;__cudaSetupArgSimple(__T149, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T150 = __par4;__cudaSetupArgSimple(__T150, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)256, (int)4, (bool)0> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<64,64,256,4,false>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi256ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi384ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T151;
 const int8_t *__T152;
 const int8_t *__T153;
 int8_t *__T154;
__cudaLaunchPrologue(6);__T151 = __par0;__cudaSetupArgSimple(__T151, 0UL);__T152 = __par1;__cudaSetupArgSimple(__T152, 8UL);__T153 = __par2;__cudaSetupArgSimple(__T153, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T154 = __par4;__cudaSetupArgSimple(__T154, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)384, (int)4, (bool)0> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<64,64,384,4,false>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi384ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi512ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T155;
 const int8_t *__T156;
 const int8_t *__T157;
 int8_t *__T158;
__cudaLaunchPrologue(6);__T155 = __par0;__cudaSetupArgSimple(__T155, 0UL);__T156 = __par1;__cudaSetupArgSimple(__T156, 8UL);__T157 = __par2;__cudaSetupArgSimple(__T157, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T158 = __par4;__cudaSetupArgSimple(__T158, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)512, (int)4, (bool)0> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<64,64,512,4,false>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi512ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi128ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T159;
 const int8_t *__T160;
 const int8_t *__T161;
 int8_t *__T162;
__cudaLaunchPrologue(6);__T159 = __par0;__cudaSetupArgSimple(__T159, 0UL);__T160 = __par1;__cudaSetupArgSimple(__T160, 8UL);__T161 = __par2;__cudaSetupArgSimple(__T161, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T162 = __par4;__cudaSetupArgSimple(__T162, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)128, (int)8, (bool)1> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<128,128,128,8,true>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi128ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi256ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T163;
 const int8_t *__T164;
 const int8_t *__T165;
 int8_t *__T166;
__cudaLaunchPrologue(6);__T163 = __par0;__cudaSetupArgSimple(__T163, 0UL);__T164 = __par1;__cudaSetupArgSimple(__T164, 8UL);__T165 = __par2;__cudaSetupArgSimple(__T165, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T166 = __par4;__cudaSetupArgSimple(__T166, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)256, (int)8, (bool)1> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<128,128,256,8,true>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi256ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi384ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T167;
 const int8_t *__T168;
 const int8_t *__T169;
 int8_t *__T170;
__cudaLaunchPrologue(6);__T167 = __par0;__cudaSetupArgSimple(__T167, 0UL);__T168 = __par1;__cudaSetupArgSimple(__T168, 8UL);__T169 = __par2;__cudaSetupArgSimple(__T169, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T170 = __par4;__cudaSetupArgSimple(__T170, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)384, (int)8, (bool)1> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<128,128,384,8,true>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi384ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi512ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T171;
 const int8_t *__T172;
 const int8_t *__T173;
 int8_t *__T174;
__cudaLaunchPrologue(6);__T171 = __par0;__cudaSetupArgSimple(__T171, 0UL);__T172 = __par1;__cudaSetupArgSimple(__T172, 8UL);__T173 = __par2;__cudaSetupArgSimple(__T173, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T174 = __par4;__cudaSetupArgSimple(__T174, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)512, (int)8, (bool)1> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<128,128,512,8,true>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi512ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi1024ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T175;
 const int8_t *__T176;
 const int8_t *__T177;
 int8_t *__T178;
__cudaLaunchPrologue(6);__T175 = __par0;__cudaSetupArgSimple(__T175, 0UL);__T176 = __par1;__cudaSetupArgSimple(__T176, 8UL);__T177 = __par2;__cudaSetupArgSimple(__T177, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T178 = __par4;__cudaSetupArgSimple(__T178, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)1024, (int)8, (bool)1> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<128,128,1024,8,true>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi1024ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi2048ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8(const int8_t *__restrict__ __par0, const int8_t *__restrict__ __par1, const int8_t *__restrict__ __par2, const int8_t *__par3, int8_t *__restrict__ __par4, struct FMHAParamI8&__par5){ const int8_t *__T179;
 const int8_t *__T180;
 const int8_t *__T181;
 int8_t *__T182;
__cudaLaunchPrologue(6);__T179 = __par0;__cudaSetupArgSimple(__T179, 0UL);__T180 = __par1;__cudaSetupArgSimple(__T180, 8UL);__T181 = __par2;__cudaSetupArgSimple(__T181, 16UL);__cudaSetupArgSimple(__par3, 24UL);__T182 = __par4;__cudaSetupArgSimple(__T182, 32UL);__cudaSetupArg(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)2048, (int)8, (bool)1> )));}namespace gpuImpl{
namespace kernel{

template<> __specialization_static void __wrapper__device_stub_FMHAInferKernel<128,128,2048,8,true>( const ::int8_t *__restrict__ &__cuda_0,const ::int8_t *__restrict__ &__cuda_1,const ::int8_t *__restrict__ &__cuda_2,const ::int8_t *&__cuda_3,::int8_t *__restrict__ &__cuda_4,struct ::FMHAParamI8 &__cuda_5){__device_stub__ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi2048ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8( (const ::int8_t *&)__cuda_0,(const ::int8_t *&)__cuda_1,(const ::int8_t *&)__cuda_2,(const ::int8_t *&)__cuda_3,(::int8_t *&)__cuda_4,(struct ::FMHAParamI8 &)__cuda_5);}}}
static void __nv_cudaEntityRegisterCallback(void **__T183){__nv_dummy_param_ref(__T183);__nv_save_fatbinhandle_for_managed_rt(__T183);__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)2048, (int)8, (bool)1> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi2048ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)1024, (int)8, (bool)1> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi1024ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)512, (int)8, (bool)1> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi512ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)384, (int)8, (bool)1> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi384ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)256, (int)8, (bool)1> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi256ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)128, (int)128, (int)128, (int)8, (bool)1> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi128ELi128ELi128ELi8ELb1EEENSt9enable_ifIXeqT3_Lb1EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)512, (int)4, (bool)0> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi512ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)384, (int)4, (bool)0> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi384ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)256, (int)4, (bool)0> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi256ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)128, (int)4, (bool)0> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi128ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));__cudaRegisterEntry(__T183, ((void ( *)(const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *__restrict__, const int8_t *, int8_t *__restrict__, struct FMHAParamI8))gpuImpl::kernel::FMHAInferKernel<(int)64, (int)64, (int)64, (int)4, (bool)0> ), _ZN7gpuImpl6kernel15FMHAInferKernelILi64ELi64ELi64ELi4ELb0EEENSt9enable_ifIXeqT3_Lb0EEvE4typeEPKaS6_S6_S6_Pa11FMHAParamI8, (-1));}
static void __sti____cudaRegisterAll(void){__cudaRegisterBinary(__nv_cudaEntityRegisterCallback);}

#pragma GCC diagnostic pop
