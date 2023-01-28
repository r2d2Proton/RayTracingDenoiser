#if 0
;
; Input signature:
;
; Name                 Index   Mask Register SysValue  Format   Used
; -------------------- ----- ------ -------- -------- ------- ------
; no parameters
;
; Output signature:
;
; Name                 Index   Mask Register SysValue  Format   Used
; -------------------- ----- ------ -------- -------- ------- ------
; no parameters
; shader hash: 80ab49a4b3f883886776467d546ca239
;
; Pipeline Runtime Information: 
;
;
;
; Buffer Definitions:
;
;
; Resource Bindings:
;
; Name                                 Type  Format         Dim      ID      HLSL Bind  Count
; ------------------------------ ---------- ------- ----------- ------- -------------- ------
; gIn_Diff                          texture     f32          2d      T0             t0     1
; gOut_Diff                             UAV     f32          2d      U0             u0     1
;
target datalayout = "e-m:e-p:32:32-i1:32-i8:8-i16:16-i32:32-i64:64-f16:16-f32:32-f64:64-n8:16:32:64"
target triple = "dxil-ms-dx"

%dx.types.Handle = type { i8* }
%dx.types.ResRet.f32 = type { float, float, float, float, i32 }
%"class.Texture2D<vector<float, 4> >" = type { <4 x float>, %"class.Texture2D<vector<float, 4> >::mips_type" }
%"class.Texture2D<vector<float, 4> >::mips_type" = type { i32 }
%"class.RWTexture2D<vector<float, 4> >" = type { <4 x float> }

define void @main() {
  %1 = call %dx.types.Handle @dx.op.createHandle(i32 57, i8 1, i32 0, i32 0, i1 false)  ; CreateHandle(resourceClass,rangeId,index,nonUniformIndex)
  %2 = call %dx.types.Handle @dx.op.createHandle(i32 57, i8 0, i32 0, i32 0, i1 false)  ; CreateHandle(resourceClass,rangeId,index,nonUniformIndex)
  %3 = call i32 @dx.op.threadId.i32(i32 93, i32 0)  ; ThreadId(component)
  %4 = call i32 @dx.op.threadId.i32(i32 93, i32 1)  ; ThreadId(component)
  %5 = call %dx.types.ResRet.f32 @dx.op.textureLoad.f32(i32 66, %dx.types.Handle %2, i32 0, i32 %3, i32 %4, i32 undef, i32 undef, i32 undef, i32 undef)  ; TextureLoad(srv,mipLevelOrSampleCount,coord0,coord1,coord2,offset0,offset1,offset2)
  %6 = extractvalue %dx.types.ResRet.f32 %5, 0
  %7 = extractvalue %dx.types.ResRet.f32 %5, 1
  %8 = extractvalue %dx.types.ResRet.f32 %5, 2
  %9 = extractvalue %dx.types.ResRet.f32 %5, 3
  call void @dx.op.textureStore.f32(i32 67, %dx.types.Handle %1, i32 %3, i32 %4, i32 undef, float %6, float %7, float %8, float %9, i8 15)  ; TextureStore(srv,coord0,coord1,coord2,value0,value1,value2,value3,mask)
  ret void
}

; Function Attrs: nounwind readnone
declare i32 @dx.op.threadId.i32(i32, i32) #0

; Function Attrs: nounwind
declare void @dx.op.textureStore.f32(i32, %dx.types.Handle, i32, i32, i32, float, float, float, float, i8) #1

; Function Attrs: nounwind readonly
declare %dx.types.ResRet.f32 @dx.op.textureLoad.f32(i32, %dx.types.Handle, i32, i32, i32, i32, i32, i32, i32) #2

; Function Attrs: nounwind readonly
declare %dx.types.Handle @dx.op.createHandle(i32, i8, i32, i32, i1) #2

attributes #0 = { nounwind readnone }
attributes #1 = { nounwind }
attributes #2 = { nounwind readonly }

!llvm.ident = !{!0}
!dx.version = !{!1}
!dx.valver = !{!2}
!dx.shaderModel = !{!3}
!dx.resources = !{!4}
!dx.entryPoints = !{!10}

!0 = !{!"clang version 3.7 (tags/RELEASE_370/final)"}
!1 = !{i32 1, i32 3}
!2 = !{i32 1, i32 6}
!3 = !{!"cs", i32 6, i32 3}
!4 = !{!5, !8, null, null}
!5 = !{!6}
!6 = !{i32 0, %"class.Texture2D<vector<float, 4> >"* undef, !"", i32 0, i32 0, i32 1, i32 2, i32 0, !7}
!7 = !{i32 0, i32 9}
!8 = !{!9}
!9 = !{i32 0, %"class.RWTexture2D<vector<float, 4> >"* undef, !"", i32 0, i32 0, i32 1, i32 2, i1 false, i1 false, i1 false, !7}
!10 = !{void ()* @main, !"main", null, !4, !11}
!11 = !{i32 0, i64 8388864, i32 4, !12}
!12 = !{i32 16, i32 16, i32 1}

#endif

const unsigned char g_REBLUR_Diffuse_CopyStabilizedHistory_cs_dxil[] = {
  0x44, 0x58, 0x42, 0x43, 0x4c, 0x0d, 0xd5, 0x70, 0x89, 0xbc, 0x50, 0x92,
  0xe7, 0x89, 0xe1, 0xf7, 0xd8, 0xa2, 0x51, 0x39, 0x01, 0x00, 0x00, 0x00,
  0x2c, 0x0d, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x4c, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00,
  0xec, 0x00, 0x00, 0x00, 0xf4, 0x06, 0x00, 0x00, 0x10, 0x07, 0x00, 0x00,
  0x53, 0x46, 0x49, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x31, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x4f, 0x53, 0x47, 0x31,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x50, 0x53, 0x56, 0x30, 0x78, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x54, 0x41, 0x54,
  0x00, 0x06, 0x00, 0x00, 0x63, 0x00, 0x05, 0x00, 0x80, 0x01, 0x00, 0x00,
  0x44, 0x58, 0x49, 0x4c, 0x03, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0xe8, 0x05, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde, 0x21, 0x0c, 0x00, 0x00,
  0x77, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x07, 0x81, 0x23, 0x91, 0x41, 0xc8, 0x04, 0x49,
  0x06, 0x10, 0x32, 0x39, 0x92, 0x01, 0x84, 0x0c, 0x25, 0x05, 0x08, 0x19,
  0x1e, 0x04, 0x8b, 0x62, 0x80, 0x14, 0x45, 0x02, 0x42, 0x92, 0x0b, 0x42,
  0xa4, 0x10, 0x32, 0x14, 0x38, 0x08, 0x18, 0x4b, 0x0a, 0x32, 0x52, 0x88,
  0x48, 0x90, 0x14, 0x20, 0x43, 0x46, 0x88, 0xa5, 0x00, 0x19, 0x32, 0x42,
  0xe4, 0x48, 0x0e, 0x90, 0x91, 0x22, 0xc4, 0x50, 0x41, 0x51, 0x81, 0x8c,
  0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x29, 0x46, 0x06, 0x51, 0x18, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x1b, 0x8c, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07,
  0x40, 0x02, 0xa8, 0x0d, 0x84, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x20,
  0x6d, 0x30, 0x86, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x09, 0xa8, 0x00,
  0x49, 0x18, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x13, 0x82, 0x60, 0x42,
  0x20, 0x4c, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x89, 0x20, 0x00, 0x00,
  0x4e, 0x00, 0x00, 0x00, 0x32, 0x22, 0x48, 0x09, 0x20, 0x64, 0x85, 0x04,
  0x93, 0x22, 0xa4, 0x84, 0x04, 0x93, 0x22, 0xe3, 0x84, 0xa1, 0x90, 0x14,
  0x12, 0x4c, 0x8a, 0x8c, 0x0b, 0x84, 0xa4, 0x4c, 0x10, 0x68, 0x23, 0x00,
  0x25, 0x00, 0x14, 0xe6, 0x08, 0xc0, 0xa0, 0x0c, 0x63, 0x0c, 0x22, 0x73,
  0x04, 0x08, 0x99, 0x7b, 0x86, 0xcb, 0x9f, 0xb0, 0x87, 0x90, 0xfc, 0x10,
  0x68, 0x86, 0x85, 0x40, 0xc1, 0x99, 0x01, 0x28, 0x0b, 0x18, 0x68, 0x8c,
  0x91, 0x52, 0x4a, 0x86, 0xd4, 0x4d, 0xc3, 0xe5, 0x4f, 0xd8, 0x43, 0x48,
  0xfe, 0x4a, 0x48, 0x2b, 0x31, 0xf9, 0xc5, 0x6d, 0xa3, 0x22, 0xa5, 0x94,
  0x46, 0x51, 0xd8, 0x40, 0x63, 0x8c, 0x31, 0xc6, 0xa0, 0x36, 0x47, 0x10,
  0x14, 0x03, 0x0d, 0x33, 0xc6, 0x23, 0x38, 0x10, 0x30, 0x8c, 0x40, 0x24,
  0x33, 0xb5, 0xc1, 0x38, 0xb0, 0x43, 0x38, 0xcc, 0xc3, 0x3c, 0xb8, 0x01,
  0x2d, 0x94, 0x03, 0x3e, 0xd0, 0x43, 0x3d, 0xc8, 0x43, 0x39, 0xc8, 0x01,
  0x29, 0xf0, 0x81, 0x3d, 0x94, 0xc3, 0x38, 0xd0, 0xc3, 0x3b, 0xc8, 0x03,
  0x1f, 0x98, 0x03, 0x3b, 0xbc, 0x43, 0x38, 0xd0, 0x03, 0x1b, 0x80, 0x01,
  0x1d, 0xf8, 0x01, 0x18, 0xf8, 0x81, 0x1e, 0xe8, 0x41, 0x3b, 0xa4, 0x03,
  0x3c, 0xcc, 0xc3, 0x2f, 0xd0, 0x43, 0x3e, 0xc0, 0x43, 0x39, 0xa0, 0x60,
  0xcc, 0x24, 0x06, 0xe3, 0xc0, 0x0e, 0xe1, 0x30, 0x0f, 0xf3, 0xe0, 0x06,
  0xb4, 0x50, 0x0e, 0xf8, 0x40, 0x0f, 0xf5, 0x20, 0x0f, 0xe5, 0x20, 0x07,
  0xa4, 0xc0, 0x07, 0xf6, 0x50, 0x0e, 0xe3, 0x40, 0x0f, 0xef, 0x20, 0x0f,
  0x7c, 0x60, 0x0e, 0xec, 0xf0, 0x0e, 0xe1, 0x40, 0x0f, 0x6c, 0x00, 0x06,
  0x74, 0xe0, 0x07, 0x60, 0xe0, 0x07, 0x48, 0x98, 0x94, 0xea, 0x4c, 0x64,
  0x30, 0x0e, 0xec, 0x10, 0x0e, 0xf3, 0x30, 0x0f, 0x6e, 0x20, 0x0b, 0xb7,
  0x40, 0x0b, 0xe5, 0x80, 0x0f, 0xf4, 0x50, 0x0f, 0xf2, 0x50, 0x0e, 0x72,
  0x40, 0x0a, 0x7c, 0x60, 0x0f, 0xe5, 0x30, 0x0e, 0xf4, 0xf0, 0x0e, 0xf2,
  0xc0, 0x07, 0xe6, 0xc0, 0x0e, 0xef, 0x10, 0x0e, 0xf4, 0xc0, 0x06, 0x60,
  0x40, 0x07, 0x7e, 0x00, 0x06, 0x7e, 0x80, 0x82, 0x49, 0x77, 0x8e, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60, 0x87,
  0x36, 0x68, 0x87, 0x79, 0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xae, 0x50,
  0x0e, 0x6d, 0xd0, 0x0e, 0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a, 0x30,
  0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0xa0,
  0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x78, 0xd0,
  0x06, 0xe9, 0x10, 0x07, 0x76, 0xa0, 0x07, 0x71, 0x60, 0x07, 0x6d, 0x90,
  0x0e, 0x73, 0x20, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe9, 0x60,
  0x07, 0x74, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x6d, 0x60, 0x0e, 0x71, 0x60,
  0x07, 0x7a, 0x10, 0x07, 0x76, 0xd0, 0x06, 0xe6, 0x30, 0x07, 0x72, 0xa0,
  0x07, 0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x76, 0x40, 0x07, 0x7a, 0x60,
  0x07, 0x74, 0xd0, 0x06, 0xee, 0x80, 0x07, 0x7a, 0x10, 0x07, 0x76, 0xa0,
  0x07, 0x73, 0x20, 0x07, 0x7a, 0x60, 0x07, 0x74, 0x30, 0xe4, 0x09, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xc8, 0x43,
  0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x90,
  0x47, 0x01, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x21, 0x4f, 0x03, 0x04, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x43, 0x1e, 0x08, 0x08, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xb2, 0x40, 0x0c, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98, 0x14,
  0x19, 0x11, 0x4c, 0x90, 0x8c, 0x09, 0x26, 0x47, 0xc6, 0x04, 0x43, 0x1a,
  0x25, 0x50, 0x06, 0x23, 0x00, 0xc5, 0x50, 0x04, 0x25, 0x51, 0x08, 0x05,
  0x52, 0x16, 0xf4, 0x46, 0x00, 0x28, 0x17, 0x20, 0x21, 0x20, 0x02, 0xe1,
  0x19, 0x00, 0xb2, 0x33, 0x00, 0x00, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00,
  0x5c, 0x00, 0x00, 0x00, 0x1a, 0x03, 0x4c, 0x90, 0x46, 0x02, 0x13, 0x44,
  0x35, 0x18, 0x63, 0x0b, 0x73, 0x3b, 0x03, 0xb1, 0x2b, 0x93, 0x9b, 0x4b,
  0x7b, 0x73, 0x03, 0x99, 0x71, 0xb9, 0x01, 0x41, 0xa1, 0x0b, 0x3b, 0x9b,
  0x7b, 0x91, 0x2a, 0x62, 0x2a, 0x0a, 0x9a, 0x2a, 0xfa, 0x9a, 0xb9, 0x81,
  0x79, 0x31, 0x4b, 0x73, 0x0b, 0x63, 0x4b, 0xd9, 0x10, 0x04, 0x13, 0x84,
  0xa1, 0x98, 0x20, 0x0c, 0xc6, 0x06, 0x61, 0x20, 0x26, 0x08, 0xc3, 0xb1,
  0x41, 0x30, 0x0c, 0x0a, 0x63, 0x73, 0x13, 0x84, 0x01, 0xd9, 0x30, 0x20,
  0x09, 0x31, 0x41, 0xb0, 0x22, 0x22, 0x67, 0x49, 0x6e, 0x5f, 0x44, 0x69,
  0x66, 0x66, 0x13, 0x84, 0x21, 0x99, 0x20, 0x0c, 0xca, 0x06, 0xc1, 0x70,
  0x36, 0x24, 0xc6, 0xc2, 0x18, 0xc6, 0xd0, 0x18, 0xcf, 0x86, 0x00, 0x9a,
  0x20, 0x60, 0x10, 0x93, 0xb3, 0xa7, 0x3a, 0xba, 0x2f, 0xa2, 0x34, 0x33,
  0xb3, 0x09, 0xc2, 0xe3, 0x6c, 0x58, 0x0c, 0x69, 0x32, 0x8c, 0xa1, 0xa1,
  0x28, 0xea, 0xd9, 0x10, 0x54, 0x1b, 0x88, 0xc8, 0x02, 0x80, 0x09, 0x82,
  0x00, 0x6c, 0x00, 0x36, 0x0c, 0x46, 0x96, 0x6d, 0x08, 0xb4, 0x0d, 0xc3,
  0x80, 0x6d, 0x24, 0xda, 0xc2, 0xd2, 0xdc, 0x26, 0x08, 0xd9, 0x33, 0x41,
  0x18, 0x96, 0x09, 0xc2, 0xc0, 0x6c, 0x18, 0xc0, 0x00, 0x0c, 0x86, 0x0d,
  0x84, 0xe1, 0x7d, 0x61, 0xb0, 0xa1, 0xc0, 0x3a, 0xe0, 0x12, 0x03, 0x16,
  0x69, 0x6e, 0x73, 0x74, 0x73, 0x13, 0x84, 0xa1, 0x21, 0x42, 0x57, 0x86,
  0xf7, 0xc5, 0xf6, 0x16, 0x46, 0xc6, 0x84, 0xae, 0x0c, 0xef, 0x6b, 0x8e,
  0xee, 0x4d, 0xae, 0x6c, 0x83, 0x41, 0x06, 0x65, 0x60, 0x06, 0xc3, 0x19,
  0x0c, 0x55, 0xd8, 0xd8, 0xec, 0xda, 0x5c, 0xd2, 0xc8, 0xca, 0xdc, 0xe8,
  0xa6, 0x04, 0x41, 0x15, 0x32, 0x3c, 0x17, 0xbb, 0x32, 0xb9, 0xb9, 0xb4,
  0x37, 0xb7, 0x29, 0x01, 0xd1, 0x84, 0x0c, 0xcf, 0xc5, 0x2e, 0x8c, 0xcd,
  0xae, 0x4c, 0x6e, 0x4a, 0x60, 0xd4, 0x21, 0xc3, 0x73, 0x99, 0x43, 0x0b,
  0x23, 0x2b, 0x93, 0x6b, 0x7a, 0x23, 0x2b, 0x63, 0x9b, 0x12, 0x24, 0x65,
  0xc8, 0xf0, 0x5c, 0xe4, 0xca, 0xe6, 0xde, 0xea, 0xe4, 0xc6, 0xca, 0xe6,
  0xa6, 0x04, 0x56, 0x25, 0x32, 0x3c, 0x17, 0xba, 0x3c, 0xb8, 0xb2, 0x20,
  0x37, 0xb7, 0x37, 0xba, 0x30, 0xba, 0xb4, 0x37, 0xb7, 0xb9, 0x29, 0xc1,
  0x56, 0x87, 0x0c, 0xcf, 0xa5, 0xcc, 0x8d, 0x4e, 0x2e, 0x0f, 0xea, 0x2d,
  0xcd, 0x8d, 0x6e, 0x6e, 0x4a, 0x20, 0x06, 0x5d, 0xc8, 0xf0, 0x5c, 0xc6,
  0xde, 0xea, 0xdc, 0xe8, 0xca, 0xe4, 0xe6, 0xa6, 0x04, 0x67, 0x00, 0x00,
  0x79, 0x18, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x33, 0x08, 0x80, 0x1c,
  0xc4, 0xe1, 0x1c, 0x66, 0x14, 0x01, 0x3d, 0x88, 0x43, 0x38, 0x84, 0xc3,
  0x8c, 0x42, 0x80, 0x07, 0x79, 0x78, 0x07, 0x73, 0x98, 0x71, 0x0c, 0xe6,
  0x00, 0x0f, 0xed, 0x10, 0x0e, 0xf4, 0x80, 0x0e, 0x33, 0x0c, 0x42, 0x1e,
  0xc2, 0xc1, 0x1d, 0xce, 0xa1, 0x1c, 0x66, 0x30, 0x05, 0x3d, 0x88, 0x43,
  0x38, 0x84, 0x83, 0x1b, 0xcc, 0x03, 0x3d, 0xc8, 0x43, 0x3d, 0x8c, 0x03,
  0x3d, 0xcc, 0x78, 0x8c, 0x74, 0x70, 0x07, 0x7b, 0x08, 0x07, 0x79, 0x48,
  0x87, 0x70, 0x70, 0x07, 0x7a, 0x70, 0x03, 0x76, 0x78, 0x87, 0x70, 0x20,
  0x87, 0x19, 0xcc, 0x11, 0x0e, 0xec, 0x90, 0x0e, 0xe1, 0x30, 0x0f, 0x6e,
  0x30, 0x0f, 0xe3, 0xf0, 0x0e, 0xf0, 0x50, 0x0e, 0x33, 0x10, 0xc4, 0x1d,
  0xde, 0x21, 0x1c, 0xd8, 0x21, 0x1d, 0xc2, 0x61, 0x1e, 0x66, 0x30, 0x89,
  0x3b, 0xbc, 0x83, 0x3b, 0xd0, 0x43, 0x39, 0xb4, 0x03, 0x3c, 0xbc, 0x83,
  0x3c, 0x84, 0x03, 0x3b, 0xcc, 0xf0, 0x14, 0x76, 0x60, 0x07, 0x7b, 0x68,
  0x07, 0x37, 0x68, 0x87, 0x72, 0x68, 0x07, 0x37, 0x80, 0x87, 0x70, 0x90,
  0x87, 0x70, 0x60, 0x07, 0x76, 0x28, 0x07, 0x76, 0xf8, 0x05, 0x76, 0x78,
  0x87, 0x77, 0x80, 0x87, 0x5f, 0x08, 0x87, 0x71, 0x18, 0x87, 0x72, 0x98,
  0x87, 0x79, 0x98, 0x81, 0x2c, 0xee, 0xf0, 0x0e, 0xee, 0xe0, 0x0e, 0xf5,
  0xc0, 0x0e, 0xec, 0x30, 0x03, 0x62, 0xc8, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c,
  0xcc, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xdc, 0x61, 0x1c, 0xca, 0x21, 0x1c,
  0xc4, 0x81, 0x1d, 0xca, 0x61, 0x06, 0xd6, 0x90, 0x43, 0x39, 0xc8, 0x43,
  0x39, 0x98, 0x43, 0x39, 0xc8, 0x43, 0x39, 0xb8, 0xc3, 0x38, 0x94, 0x43,
  0x38, 0x88, 0x03, 0x3b, 0x94, 0xc3, 0x2f, 0xbc, 0x83, 0x3c, 0xfc, 0x82,
  0x3b, 0xd4, 0x03, 0x3b, 0xb0, 0xc3, 0x0c, 0xc4, 0x21, 0x07, 0x7c, 0x70,
  0x03, 0x7a, 0x28, 0x87, 0x76, 0x80, 0x87, 0x19, 0xd1, 0x43, 0x0e, 0xf8,
  0xe0, 0x06, 0xe4, 0x20, 0x0e, 0xe7, 0xe0, 0x06, 0xf6, 0x10, 0x0e, 0xf2,
  0xc0, 0x0e, 0xe1, 0x90, 0x0f, 0xef, 0x50, 0x0f, 0xf4, 0x00, 0x00, 0x00,
  0x71, 0x20, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x46, 0x20, 0x0d, 0x97,
  0xef, 0x3c, 0xbe, 0x10, 0x11, 0xc0, 0x44, 0x84, 0x40, 0x33, 0x2c, 0x84,
  0x0d, 0x54, 0xc3, 0xe5, 0x3b, 0x8f, 0x3f, 0x11, 0xd7, 0x44, 0x45, 0x44,
  0xe9, 0x00, 0x83, 0x5f, 0xdc, 0xb6, 0x09, 0x58, 0xc3, 0xe5, 0x3b, 0x8f,
  0x3f, 0x11, 0xd7, 0x44, 0x45, 0x04, 0x3b, 0x39, 0x11, 0xe1, 0x17, 0xb7,
  0x6d, 0x01, 0xd2, 0x70, 0xf9, 0xce, 0xe3, 0x4f, 0x47, 0x44, 0x00, 0x83,
  0x38, 0xf8, 0xc8, 0x6d, 0x1b, 0x00, 0xc1, 0x00, 0x48, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x48, 0x41, 0x53, 0x48, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x80, 0xab, 0x49, 0xa4, 0xb3, 0xf8, 0x83, 0x88,
  0x67, 0x76, 0x46, 0x7d, 0x54, 0x6c, 0xa2, 0x39, 0x44, 0x58, 0x49, 0x4c,
  0x14, 0x06, 0x00, 0x00, 0x63, 0x00, 0x05, 0x00, 0x85, 0x01, 0x00, 0x00,
  0x44, 0x58, 0x49, 0x4c, 0x03, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0xfc, 0x05, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde, 0x21, 0x0c, 0x00, 0x00,
  0x7c, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x07, 0x81, 0x23, 0x91, 0x41, 0xc8, 0x04, 0x49,
  0x06, 0x10, 0x32, 0x39, 0x92, 0x01, 0x84, 0x0c, 0x25, 0x05, 0x08, 0x19,
  0x1e, 0x04, 0x8b, 0x62, 0x80, 0x14, 0x45, 0x02, 0x42, 0x92, 0x0b, 0x42,
  0xa4, 0x10, 0x32, 0x14, 0x38, 0x08, 0x18, 0x4b, 0x0a, 0x32, 0x52, 0x88,
  0x48, 0x90, 0x14, 0x20, 0x43, 0x46, 0x88, 0xa5, 0x00, 0x19, 0x32, 0x42,
  0xe4, 0x48, 0x0e, 0x90, 0x91, 0x22, 0xc4, 0x50, 0x41, 0x51, 0x81, 0x8c,
  0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x29, 0x46, 0x06, 0x51, 0x18, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x1b, 0x8c, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07,
  0x40, 0x02, 0xa8, 0x0d, 0x84, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x20,
  0x6d, 0x30, 0x86, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x09, 0xa8, 0x00,
  0x49, 0x18, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x13, 0x82, 0x60, 0x42,
  0x20, 0x4c, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x89, 0x20, 0x00, 0x00,
  0x4e, 0x00, 0x00, 0x00, 0x32, 0x22, 0x48, 0x09, 0x20, 0x64, 0x85, 0x04,
  0x93, 0x22, 0xa4, 0x84, 0x04, 0x93, 0x22, 0xe3, 0x84, 0xa1, 0x90, 0x14,
  0x12, 0x4c, 0x8a, 0x8c, 0x0b, 0x84, 0xa4, 0x4c, 0x10, 0x68, 0x23, 0x00,
  0x25, 0x00, 0x14, 0xe6, 0x08, 0xc0, 0xa0, 0x0c, 0x63, 0x0c, 0x22, 0x73,
  0x04, 0x08, 0x99, 0x7b, 0x86, 0xcb, 0x9f, 0xb0, 0x87, 0x90, 0xfc, 0x10,
  0x68, 0x86, 0x85, 0x40, 0xc1, 0x99, 0x01, 0x28, 0x0b, 0x18, 0x68, 0x8c,
  0x91, 0x52, 0x4a, 0x86, 0xd4, 0x4d, 0xc3, 0xe5, 0x4f, 0xd8, 0x43, 0x48,
  0xfe, 0x4a, 0x48, 0x2b, 0x31, 0xf9, 0xc5, 0x6d, 0xa3, 0x22, 0xa5, 0x94,
  0x46, 0x51, 0xd8, 0x40, 0x63, 0x8c, 0x31, 0xc6, 0xa0, 0x36, 0x47, 0x10,
  0x14, 0x03, 0x0d, 0x33, 0xc6, 0x23, 0x38, 0x10, 0x30, 0x8c, 0x40, 0x24,
  0x33, 0xb5, 0xc1, 0x38, 0xb0, 0x43, 0x38, 0xcc, 0xc3, 0x3c, 0xb8, 0x01,
  0x2d, 0x94, 0x03, 0x3e, 0xd0, 0x43, 0x3d, 0xc8, 0x43, 0x39, 0xc8, 0x01,
  0x29, 0xf0, 0x81, 0x3d, 0x94, 0xc3, 0x38, 0xd0, 0xc3, 0x3b, 0xc8, 0x03,
  0x1f, 0x98, 0x03, 0x3b, 0xbc, 0x43, 0x38, 0xd0, 0x03, 0x1b, 0x80, 0x01,
  0x1d, 0xf8, 0x01, 0x18, 0xf8, 0x81, 0x1e, 0xe8, 0x41, 0x3b, 0xa4, 0x03,
  0x3c, 0xcc, 0xc3, 0x2f, 0xd0, 0x43, 0x3e, 0xc0, 0x43, 0x39, 0xa0, 0x60,
  0xcc, 0x24, 0x06, 0xe3, 0xc0, 0x0e, 0xe1, 0x30, 0x0f, 0xf3, 0xe0, 0x06,
  0xb4, 0x50, 0x0e, 0xf8, 0x40, 0x0f, 0xf5, 0x20, 0x0f, 0xe5, 0x20, 0x07,
  0xa4, 0xc0, 0x07, 0xf6, 0x50, 0x0e, 0xe3, 0x40, 0x0f, 0xef, 0x20, 0x0f,
  0x7c, 0x60, 0x0e, 0xec, 0xf0, 0x0e, 0xe1, 0x40, 0x0f, 0x6c, 0x00, 0x06,
  0x74, 0xe0, 0x07, 0x60, 0xe0, 0x07, 0x48, 0x98, 0x94, 0xea, 0x4c, 0x64,
  0x30, 0x0e, 0xec, 0x10, 0x0e, 0xf3, 0x30, 0x0f, 0x6e, 0x20, 0x0b, 0xb7,
  0x40, 0x0b, 0xe5, 0x80, 0x0f, 0xf4, 0x50, 0x0f, 0xf2, 0x50, 0x0e, 0x72,
  0x40, 0x0a, 0x7c, 0x60, 0x0f, 0xe5, 0x30, 0x0e, 0xf4, 0xf0, 0x0e, 0xf2,
  0xc0, 0x07, 0xe6, 0xc0, 0x0e, 0xef, 0x10, 0x0e, 0xf4, 0xc0, 0x06, 0x60,
  0x40, 0x07, 0x7e, 0x00, 0x06, 0x7e, 0x80, 0x82, 0x49, 0x77, 0x8e, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60, 0x87,
  0x36, 0x68, 0x87, 0x79, 0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xae, 0x50,
  0x0e, 0x6d, 0xd0, 0x0e, 0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a, 0x30,
  0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0xa0,
  0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x78, 0xd0,
  0x06, 0xe9, 0x10, 0x07, 0x76, 0xa0, 0x07, 0x71, 0x60, 0x07, 0x6d, 0x90,
  0x0e, 0x73, 0x20, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe9, 0x60,
  0x07, 0x74, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x6d, 0x60, 0x0e, 0x71, 0x60,
  0x07, 0x7a, 0x10, 0x07, 0x76, 0xd0, 0x06, 0xe6, 0x30, 0x07, 0x72, 0xa0,
  0x07, 0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x76, 0x40, 0x07, 0x7a, 0x60,
  0x07, 0x74, 0xd0, 0x06, 0xee, 0x80, 0x07, 0x7a, 0x10, 0x07, 0x76, 0xa0,
  0x07, 0x73, 0x20, 0x07, 0x7a, 0x60, 0x07, 0x74, 0x30, 0xe4, 0x09, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xc8, 0x43,
  0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x90,
  0x47, 0x01, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x21, 0x4f, 0x03, 0x04, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x43, 0x1e, 0x08, 0x08, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xb2, 0x40, 0x0b, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98, 0x14,
  0x19, 0x11, 0x4c, 0x90, 0x8c, 0x09, 0x26, 0x47, 0xc6, 0x04, 0x43, 0x1a,
  0x25, 0x50, 0x06, 0xc5, 0x30, 0x02, 0x50, 0x04, 0x25, 0x51, 0x08, 0x05,
  0x42, 0x6f, 0x04, 0x80, 0x72, 0x01, 0x12, 0x02, 0x22, 0x10, 0x9e, 0x01,
  0x20, 0x3b, 0x03, 0x00, 0x79, 0x18, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00,
  0x1a, 0x03, 0x4c, 0x90, 0x46, 0x02, 0x13, 0x44, 0x35, 0x18, 0x63, 0x0b,
  0x73, 0x3b, 0x03, 0xb1, 0x2b, 0x93, 0x9b, 0x4b, 0x7b, 0x73, 0x03, 0x99,
  0x71, 0xb9, 0x01, 0x41, 0xa1, 0x0b, 0x3b, 0x9b, 0x7b, 0x91, 0x2a, 0x62,
  0x2a, 0x0a, 0x9a, 0x2a, 0xfa, 0x9a, 0xb9, 0x81, 0x79, 0x31, 0x4b, 0x73,
  0x0b, 0x63, 0x4b, 0xd9, 0x10, 0x04, 0x13, 0x84, 0xa1, 0x98, 0x20, 0x0c,
  0xc6, 0x06, 0x61, 0x20, 0x26, 0x08, 0xc3, 0xb1, 0x41, 0x18, 0x0c, 0x0a,
  0x63, 0x73, 0x1b, 0x06, 0xc4, 0x20, 0x26, 0x08, 0x03, 0x32, 0x41, 0xb0,
  0x20, 0x02, 0x13, 0x84, 0x21, 0x99, 0x20, 0x0c, 0xca, 0x06, 0x41, 0x71,
  0x36, 0x24, 0xca, 0xc2, 0x28, 0xca, 0xd0, 0x28, 0xcf, 0x86, 0x00, 0x9a,
  0x20, 0x60, 0xcf, 0x04, 0xe1, 0x69, 0x36, 0x2c, 0x8a, 0xc4, 0x28, 0xca,
  0xd0, 0x4c, 0xd3, 0xf4, 0x6c, 0x08, 0xa8, 0x0d, 0x44, 0x54, 0x01, 0xc0,
  0x04, 0x41, 0x00, 0x48, 0xb4, 0x85, 0xa5, 0xb9, 0x4d, 0x10, 0x32, 0x67,
  0x82, 0x30, 0x2c, 0x13, 0x84, 0x81, 0xd9, 0x30, 0x6c, 0xdb, 0xb0, 0x81,
  0x50, 0x32, 0x8d, 0xdb, 0x50, 0x5c, 0x18, 0x60, 0x75, 0x55, 0xd8, 0xd8,
  0xec, 0xda, 0x5c, 0xd2, 0xc8, 0xca, 0xdc, 0xe8, 0xa6, 0x04, 0x41, 0x15,
  0x32, 0x3c, 0x17, 0xbb, 0x32, 0xb9, 0xb9, 0xb4, 0x37, 0xb7, 0x29, 0x01,
  0xd1, 0x84, 0x0c, 0xcf, 0xc5, 0x2e, 0x8c, 0xcd, 0xae, 0x4c, 0x6e, 0x4a,
  0x60, 0xd4, 0x21, 0xc3, 0x73, 0x99, 0x43, 0x0b, 0x23, 0x2b, 0x93, 0x6b,
  0x7a, 0x23, 0x2b, 0x63, 0x9b, 0x12, 0x20, 0x65, 0xc8, 0xf0, 0x5c, 0xe4,
  0xca, 0xe6, 0xde, 0xea, 0xe4, 0xc6, 0xca, 0xe6, 0xa6, 0x04, 0x55, 0x1d,
  0x32, 0x3c, 0x97, 0x32, 0x37, 0x3a, 0xb9, 0x3c, 0xa8, 0xb7, 0x34, 0x37,
  0xba, 0xb9, 0x29, 0x41, 0x07, 0x00, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00,
  0x4c, 0x00, 0x00, 0x00, 0x33, 0x08, 0x80, 0x1c, 0xc4, 0xe1, 0x1c, 0x66,
  0x14, 0x01, 0x3d, 0x88, 0x43, 0x38, 0x84, 0xc3, 0x8c, 0x42, 0x80, 0x07,
  0x79, 0x78, 0x07, 0x73, 0x98, 0x71, 0x0c, 0xe6, 0x00, 0x0f, 0xed, 0x10,
  0x0e, 0xf4, 0x80, 0x0e, 0x33, 0x0c, 0x42, 0x1e, 0xc2, 0xc1, 0x1d, 0xce,
  0xa1, 0x1c, 0x66, 0x30, 0x05, 0x3d, 0x88, 0x43, 0x38, 0x84, 0x83, 0x1b,
  0xcc, 0x03, 0x3d, 0xc8, 0x43, 0x3d, 0x8c, 0x03, 0x3d, 0xcc, 0x78, 0x8c,
  0x74, 0x70, 0x07, 0x7b, 0x08, 0x07, 0x79, 0x48, 0x87, 0x70, 0x70, 0x07,
  0x7a, 0x70, 0x03, 0x76, 0x78, 0x87, 0x70, 0x20, 0x87, 0x19, 0xcc, 0x11,
  0x0e, 0xec, 0x90, 0x0e, 0xe1, 0x30, 0x0f, 0x6e, 0x30, 0x0f, 0xe3, 0xf0,
  0x0e, 0xf0, 0x50, 0x0e, 0x33, 0x10, 0xc4, 0x1d, 0xde, 0x21, 0x1c, 0xd8,
  0x21, 0x1d, 0xc2, 0x61, 0x1e, 0x66, 0x30, 0x89, 0x3b, 0xbc, 0x83, 0x3b,
  0xd0, 0x43, 0x39, 0xb4, 0x03, 0x3c, 0xbc, 0x83, 0x3c, 0x84, 0x03, 0x3b,
  0xcc, 0xf0, 0x14, 0x76, 0x60, 0x07, 0x7b, 0x68, 0x07, 0x37, 0x68, 0x87,
  0x72, 0x68, 0x07, 0x37, 0x80, 0x87, 0x70, 0x90, 0x87, 0x70, 0x60, 0x07,
  0x76, 0x28, 0x07, 0x76, 0xf8, 0x05, 0x76, 0x78, 0x87, 0x77, 0x80, 0x87,
  0x5f, 0x08, 0x87, 0x71, 0x18, 0x87, 0x72, 0x98, 0x87, 0x79, 0x98, 0x81,
  0x2c, 0xee, 0xf0, 0x0e, 0xee, 0xe0, 0x0e, 0xf5, 0xc0, 0x0e, 0xec, 0x30,
  0x03, 0x62, 0xc8, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xcc, 0xa1, 0x1c, 0xe4,
  0xa1, 0x1c, 0xdc, 0x61, 0x1c, 0xca, 0x21, 0x1c, 0xc4, 0x81, 0x1d, 0xca,
  0x61, 0x06, 0xd6, 0x90, 0x43, 0x39, 0xc8, 0x43, 0x39, 0x98, 0x43, 0x39,
  0xc8, 0x43, 0x39, 0xb8, 0xc3, 0x38, 0x94, 0x43, 0x38, 0x88, 0x03, 0x3b,
  0x94, 0xc3, 0x2f, 0xbc, 0x83, 0x3c, 0xfc, 0x82, 0x3b, 0xd4, 0x03, 0x3b,
  0xb0, 0xc3, 0x0c, 0xc4, 0x21, 0x07, 0x7c, 0x70, 0x03, 0x7a, 0x28, 0x87,
  0x76, 0x80, 0x87, 0x19, 0xd1, 0x43, 0x0e, 0xf8, 0xe0, 0x06, 0xe4, 0x20,
  0x0e, 0xe7, 0xe0, 0x06, 0xf6, 0x10, 0x0e, 0xf2, 0xc0, 0x0e, 0xe1, 0x90,
  0x0f, 0xef, 0x50, 0x0f, 0xf4, 0x00, 0x00, 0x00, 0x71, 0x20, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x46, 0x20, 0x0d, 0x97, 0xef, 0x3c, 0xbe, 0x10,
  0x11, 0xc0, 0x44, 0x84, 0x40, 0x33, 0x2c, 0x84, 0x0d, 0x54, 0xc3, 0xe5,
  0x3b, 0x8f, 0x3f, 0x11, 0xd7, 0x44, 0x45, 0x44, 0xe9, 0x00, 0x83, 0x5f,
  0xdc, 0xb6, 0x09, 0x58, 0xc3, 0xe5, 0x3b, 0x8f, 0x3f, 0x11, 0xd7, 0x44,
  0x45, 0x04, 0x3b, 0x39, 0x11, 0xe1, 0x17, 0xb7, 0x6d, 0x01, 0xd2, 0x70,
  0xf9, 0xce, 0xe3, 0x4f, 0x47, 0x44, 0x00, 0x83, 0x38, 0xf8, 0xc8, 0x6d,
  0x1b, 0x00, 0xc1, 0x00, 0x48, 0x03, 0x00, 0x00, 0x61, 0x20, 0x00, 0x00,
  0x1f, 0x00, 0x00, 0x00, 0x13, 0x04, 0x41, 0x2c, 0x10, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x34, 0x66, 0x00, 0x4a, 0xae, 0x74, 0x03, 0x8a,
  0x30, 0xa0, 0x0c, 0x03, 0xc8, 0x94, 0xc0, 0x08, 0x40, 0x79, 0x00, 0x00,
  0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x00, 0x55, 0xc7, 0x10, 0x45, 0xcc,
  0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x40, 0x16, 0x32, 0x48, 0x52, 0x33,
  0x62, 0x60, 0x00, 0x20, 0x08, 0x06, 0x84, 0x86, 0x4c, 0x23, 0x06, 0x06,
  0x00, 0x82, 0x60, 0x40, 0x6c, 0xc9, 0x35, 0x62, 0xd0, 0x00, 0x20, 0x08,
  0x06, 0x8d, 0x96, 0x0c, 0x95, 0x10, 0x30, 0x0c, 0xc3, 0x8c, 0x26, 0x04,
  0xc0, 0x68, 0x82, 0x10, 0x8c, 0x26, 0x0c, 0xc2, 0x68, 0x02, 0x31, 0x8c,
  0x18, 0x38, 0x00, 0x08, 0x82, 0x81, 0x02, 0x06, 0x4d, 0x72, 0x18, 0x11,
  0x31, 0x08, 0x81, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
