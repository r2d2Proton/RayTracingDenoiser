#if 0
; SPIR-V
; Version: 1.0
; Generator: Google spiregg; 0
; Bound: 30
; Schema: 0
               OpCapability Shader
          %1 = OpExtInstImport "GLSL.std.450"
               OpMemoryModel Logical GLSL450
               OpEntryPoint GLCompute %main "main" %gl_GlobalInvocationID
               OpExecutionMode %main LocalSize 16 16 1
               OpSource HLSL 630
               OpName %type_2d_image "type.2d.image"
               OpName %gIn_Diff "gIn_Diff"
               OpName %gIn_DiffSh "gIn_DiffSh"
               OpName %type_2d_image_0 "type.2d.image"
               OpName %gOut_Diff "gOut_Diff"
               OpName %gOut_DiffSh "gOut_DiffSh"
               OpName %main "main"
               OpDecorate %gl_GlobalInvocationID BuiltIn GlobalInvocationId
               OpDecorate %gIn_Diff DescriptorSet 0
               OpDecorate %gIn_Diff Binding 200
               OpDecorate %gIn_DiffSh DescriptorSet 0
               OpDecorate %gIn_DiffSh Binding 201
               OpDecorate %gOut_Diff DescriptorSet 0
               OpDecorate %gOut_Diff Binding 400
               OpDecorate %gOut_DiffSh DescriptorSet 0
               OpDecorate %gOut_DiffSh Binding 401
       %uint = OpTypeInt 32 0
     %v2uint = OpTypeVector %uint 2
      %float = OpTypeFloat 32
     %uint_0 = OpConstant %uint 0
%type_2d_image = OpTypeImage %float 2D 2 0 0 1 Unknown
%_ptr_UniformConstant_type_2d_image = OpTypePointer UniformConstant %type_2d_image
%type_2d_image_0 = OpTypeImage %float 2D 2 0 0 2 Rgba32f
%_ptr_UniformConstant_type_2d_image_0 = OpTypePointer UniformConstant %type_2d_image_0
     %v3uint = OpTypeVector %uint 3
%_ptr_Input_v3uint = OpTypePointer Input %v3uint
       %void = OpTypeVoid
         %19 = OpTypeFunction %void
    %v4float = OpTypeVector %float 4
   %gIn_Diff = OpVariable %_ptr_UniformConstant_type_2d_image UniformConstant
 %gIn_DiffSh = OpVariable %_ptr_UniformConstant_type_2d_image UniformConstant
  %gOut_Diff = OpVariable %_ptr_UniformConstant_type_2d_image_0 UniformConstant
%gOut_DiffSh = OpVariable %_ptr_UniformConstant_type_2d_image_0 UniformConstant
%gl_GlobalInvocationID = OpVariable %_ptr_Input_v3uint Input
       %main = OpFunction %void None %19
         %21 = OpLabel
         %22 = OpLoad %v3uint %gl_GlobalInvocationID
         %23 = OpVectorShuffle %v2uint %22 %22 0 1
         %24 = OpLoad %type_2d_image %gIn_Diff
         %25 = OpImageFetch %v4float %24 %23 Lod %uint_0
         %26 = OpLoad %type_2d_image_0 %gOut_Diff
               OpImageWrite %26 %23 %25 None
         %27 = OpLoad %type_2d_image %gIn_DiffSh
         %28 = OpImageFetch %v4float %27 %23 Lod %uint_0
         %29 = OpLoad %type_2d_image_0 %gOut_DiffSh
               OpImageWrite %29 %23 %28 None
               OpReturn
               OpFunctionEnd

#endif

const unsigned char g_REBLUR_DiffuseSh_CopyStabilizedHistory_cs_spirv[] = {
  0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30,
  0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x06, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x10, 0x00, 0x06, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x76, 0x02, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x74, 0x79, 0x70, 0x65, 0x2e, 0x32, 0x64, 0x2e, 0x69, 0x6d, 0x61, 0x67,
  0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x67, 0x49, 0x6e, 0x5f, 0x44, 0x69, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x67, 0x49, 0x6e, 0x5f,
  0x44, 0x69, 0x66, 0x66, 0x53, 0x68, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x74, 0x79, 0x70, 0x65, 0x2e, 0x32, 0x64, 0x2e,
  0x69, 0x6d, 0x61, 0x67, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x67, 0x4f, 0x75, 0x74, 0x5f, 0x44, 0x69, 0x66,
  0x66, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x67, 0x4f, 0x75, 0x74, 0x5f, 0x44, 0x69, 0x66, 0x66, 0x53, 0x68, 0x00,
  0x05, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x05, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0xc8, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x91, 0x01, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x16, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x2b, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x17, 0x00, 0x04, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x12, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0xf8, 0x00, 0x02, 0x00, 0x15, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00,
  0x16, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x07, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x17, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x63, 0x00, 0x05, 0x00, 0x1a, 0x00, 0x00, 0x00,
  0x17, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x07, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x63, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00,
  0x38, 0x00, 0x01, 0x00
};
