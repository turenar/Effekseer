#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tps_2_0 /EPS /Fh
//    Shader/EffekseerRenderer.Standard_Distortion_PS.h
//    Shader/standard_renderer_distortion_PS.fx
//
//
// Parameters:
//
//   sampler2D g_backSampler;
//   sampler2D g_sampler;
//
//
// Registers:
//
//   Name          Reg   Size
//   ------------- ----- ----
//   g_sampler     s0       1
//   g_backSampler s1       1
//

    ps_2_0
    def c0, -1, -0, 2, 0
    def c1, 0.5, -0.5, 0, 0
    dcl v0
    dcl t0.xy
    dcl t1
    dcl t2
    dcl t3
    dcl_2d s0
    dcl_2d s1
    texld r0, t0, s0
    mul r0.xy, r0, v0
    mul r0.z, r0.w, v0.w
    mul r0.w, r0.z, r0.z
    cmp r1, -r0.w, c0.x, c0.y
    texkill r1
    mad r0.x, r0.x, c0.z, c0.x
    mad r0.y, r0.y, c0.z, c0.x
    rcp r0.w, t2.w
    rcp r1.x, t1.w
    mul r1.xy, r1.x, t1
    mad r1.zw, t2.wzyx, r0.w, -r1.wzyx
    rcp r0.w, t3.w
    mad r2.xy, t3, r0.w, -r1
    mad r1.xy, r2, r0.x, r1
    mad r0.xy, r1.wzyx, r0.y, r1
    mad r0.xy, r0, c1, c1.x
    texld r1, r0, s1
    mov r1.w, r0.z
    mov oC0, r1

// approximately 20 instruction slots used (2 texture, 18 arithmetic)
#endif

const BYTE g_ps20_PS[] =
{
      0,   2, 255, 255, 254, 255, 
     47,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 135,   0, 
      0,   0,   0,   2, 255, 255, 
      2,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
    128,   0,   0,   0,  68,   0, 
      0,   0,   3,   0,   1,   0, 
      1,   0,   6,   0,  84,   0, 
      0,   0,   0,   0,   0,   0, 
    100,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   2,   0, 
    112,   0,   0,   0,   0,   0, 
      0,   0, 103,  95,  98,  97, 
     99, 107,  83,  97, 109, 112, 
    108, 101, 114,   0, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 103,  95, 
    115,  97, 109, 112, 108, 101, 
    114,   0, 171, 171,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 112, 115,  95,  50, 
     95,  48,   0,  77, 105,  99, 
    114, 111, 115, 111, 102, 116, 
     32,  40,  82,  41,  32,  72, 
     76,  83,  76,  32,  83, 104, 
     97, 100, 101, 114,  32,  67, 
    111, 109, 112, 105, 108, 101, 
    114,  32,  57,  46,  50,  57, 
     46,  57,  53,  50,  46,  51, 
     49,  49,  49,   0,  81,   0, 
      0,   5,   0,   0,  15, 160, 
      0,   0, 128, 191,   0,   0, 
      0, 128,   0,   0,   0,  64, 
      0,   0,   0,   0,  81,   0, 
      0,   5,   1,   0,  15, 160, 
      0,   0,   0,  63,   0,   0, 
      0, 191,   0,   0,   0,   0, 
      0,   0,   0,   0,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 144,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,   3, 176,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      1,   0,  15, 176,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      2,   0,  15, 176,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      3,   0,  15, 176,  31,   0, 
      0,   2,   0,   0,   0, 144, 
      0,   8,  15, 160,  31,   0, 
      0,   2,   0,   0,   0, 144, 
      1,   8,  15, 160,  66,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0, 228, 176,   0,   8, 
    228, 160,   5,   0,   0,   3, 
      0,   0,   3, 128,   0,   0, 
    228, 128,   0,   0, 228, 144, 
      5,   0,   0,   3,   0,   0, 
      4, 128,   0,   0, 255, 128, 
      0,   0, 255, 144,   5,   0, 
      0,   3,   0,   0,   8, 128, 
      0,   0, 170, 128,   0,   0, 
    170, 128,  88,   0,   0,   4, 
      1,   0,  15, 128,   0,   0, 
    255, 129,   0,   0,   0, 160, 
      0,   0,  85, 160,  65,   0, 
      0,   1,   1,   0,  15, 128, 
      4,   0,   0,   4,   0,   0, 
      1, 128,   0,   0,   0, 128, 
      0,   0, 170, 160,   0,   0, 
      0, 160,   4,   0,   0,   4, 
      0,   0,   2, 128,   0,   0, 
     85, 128,   0,   0, 170, 160, 
      0,   0,   0, 160,   6,   0, 
      0,   2,   0,   0,   8, 128, 
      2,   0, 255, 176,   6,   0, 
      0,   2,   1,   0,   1, 128, 
      1,   0, 255, 176,   5,   0, 
      0,   3,   1,   0,   3, 128, 
      1,   0,   0, 128,   1,   0, 
    228, 176,   4,   0,   0,   4, 
      1,   0,  12, 128,   2,   0, 
     27, 176,   0,   0, 255, 128, 
      1,   0,  27, 129,   6,   0, 
      0,   2,   0,   0,   8, 128, 
      3,   0, 255, 176,   4,   0, 
      0,   4,   2,   0,   3, 128, 
      3,   0, 228, 176,   0,   0, 
    255, 128,   1,   0, 228, 129, 
      4,   0,   0,   4,   1,   0, 
      3, 128,   2,   0, 228, 128, 
      0,   0,   0, 128,   1,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,   3, 128,   1,   0, 
     27, 128,   0,   0,  85, 128, 
      1,   0, 228, 128,   4,   0, 
      0,   4,   0,   0,   3, 128, 
      0,   0, 228, 128,   1,   0, 
    228, 160,   1,   0,   0, 160, 
     66,   0,   0,   3,   1,   0, 
     15, 128,   0,   0, 228, 128, 
      1,   8, 228, 160,   1,   0, 
      0,   2,   1,   0,   8, 128, 
      0,   0, 170, 128,   1,   0, 
      0,   2,   0,   8,  15, 128, 
      1,   0, 228, 128, 255, 255, 
      0,   0
};
