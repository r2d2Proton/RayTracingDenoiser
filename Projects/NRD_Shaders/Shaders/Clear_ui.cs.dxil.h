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
; shader hash: bbe2e8d1ffb50d845a396cd737ae392d
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
; gOut                                  UAV     u32          2d      U0             u0     1
;
target datalayout = "e-m:e-p:32:32-i1:32-i8:8-i16:16-i32:32-i64:64-f16:16-f32:32-f64:64-n8:16:32:64"
target triple = "dxil-ms-dx"

%dx.types.Handle = type { i8* }
%"class.RWTexture2D<vector<unsigned int, 4> >" = type { <4 x i32> }

define void @main() {
  %1 = call %dx.types.Handle @dx.op.createHandle(i32 57, i8 1, i32 0, i32 0, i1 false)  ; CreateHandle(resourceClass,rangeId,index,nonUniformIndex)
  %2 = call i32 @dx.op.threadId.i32(i32 93, i32 0)  ; ThreadId(component)
  %3 = call i32 @dx.op.threadId.i32(i32 93, i32 1)  ; ThreadId(component)
  call void @dx.op.textureStore.i32(i32 67, %dx.types.Handle %1, i32 %2, i32 %3, i32 undef, i32 0, i32 0, i32 0, i32 0, i8 15)  ; TextureStore(srv,coord0,coord1,coord2,value0,value1,value2,value3,mask)
  ret void
}

; Function Attrs: nounwind readnone
declare i32 @dx.op.threadId.i32(i32, i32) #0

; Function Attrs: nounwind
declare void @dx.op.textureStore.i32(i32, %dx.types.Handle, i32, i32, i32, i32, i32, i32, i32, i8) #1

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
!dx.entryPoints = !{!8}

!0 = !{!"clang version 3.7 (tags/RELEASE_370/final)"}
!1 = !{i32 1, i32 3}
!2 = !{i32 1, i32 6}
!3 = !{!"cs", i32 6, i32 3}
!4 = !{null, !5, null, null}
!5 = !{!6}
!6 = !{i32 0, %"class.RWTexture2D<vector<unsigned int, 4> >"* undef, !"", i32 0, i32 0, i32 1, i32 2, i1 false, i1 false, i1 false, !7}
!7 = !{i32 0, i32 5}
!8 = !{void ()* @main, !"main", null, !4, !9}
!9 = !{i32 0, i64 8388864, i32 4, !10}
!10 = !{i32 16, i32 16, i32 1}

#endif

const unsigned char g_Clear_ui_cs_dxil[] = {
  0x44, 0x58, 0x42, 0x43, 0x39, 0x02, 0xf6, 0x3d, 0xa7, 0x42, 0xe0, 0x47,
  0x2e, 0x55, 0xac, 0xa1, 0xa2, 0x1e, 0x05, 0xcd, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x0b, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x4c, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00,
  0xd4, 0x00, 0x00, 0x00, 0xf0, 0x05, 0x00, 0x00, 0x0c, 0x06, 0x00, 0x00,
  0x53, 0x46, 0x49, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x31, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x4f, 0x53, 0x47, 0x31,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x50, 0x53, 0x56, 0x30, 0x60, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x54, 0x41, 0x54,
  0x14, 0x05, 0x00, 0x00, 0x63, 0x00, 0x05, 0x00, 0x45, 0x01, 0x00, 0x00,
  0x44, 0x58, 0x49, 0x4c, 0x03, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0xfc, 0x04, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde, 0x21, 0x0c, 0x00, 0x00,
  0x3c, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00,
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
  0x28, 0x00, 0x00, 0x00, 0x32, 0x22, 0x48, 0x09, 0x20, 0x64, 0x85, 0x04,
  0x93, 0x22, 0xa4, 0x84, 0x04, 0x93, 0x22, 0xe3, 0x84, 0xa1, 0x90, 0x14,
  0x12, 0x4c, 0x8a, 0x8c, 0x0b, 0x84, 0xa4, 0x4c, 0x10, 0x4c, 0x23, 0x00,
  0x25, 0x00, 0x14, 0xe6, 0x08, 0xc0, 0xa0, 0x0c, 0x63, 0x0c, 0x22, 0x73,
  0x04, 0x08, 0x99, 0x7b, 0x86, 0xcb, 0x9f, 0xb0, 0x87, 0x90, 0xfc, 0x10,
  0x68, 0x86, 0x85, 0x40, 0xc1, 0x29, 0x0b, 0x18, 0x68, 0x8c, 0x31, 0xc6,
  0x18, 0x86, 0xd2, 0x1c, 0x41, 0x50, 0x0c, 0x34, 0xcc, 0x18, 0x8b, 0xd8,
  0x40, 0xc0, 0x30, 0x02, 0x31, 0xcc, 0xb4, 0x06, 0xe3, 0xc0, 0x0e, 0xe1,
  0x30, 0x0f, 0xf3, 0xe0, 0x06, 0xb2, 0x70, 0x0b, 0xb4, 0x50, 0x0e, 0xf8,
  0x40, 0x0f, 0xf5, 0x20, 0x0f, 0xe5, 0x20, 0x07, 0xa4, 0xc0, 0x07, 0xf6,
  0x50, 0x0e, 0xe3, 0x40, 0x0f, 0xef, 0x20, 0x0f, 0x7c, 0x50, 0x0f, 0xee,
  0x30, 0x0f, 0xe9, 0x70, 0x0e, 0xee, 0x50, 0x0e, 0xe4, 0x00, 0x06, 0xe9,
  0xe0, 0x0e, 0xf4, 0xc0, 0x06, 0x60, 0x40, 0x07, 0x7e, 0x00, 0x06, 0x7e,
  0x80, 0x82, 0x47, 0x70, 0x8e, 0x00, 0x14, 0x00, 0x13, 0x14, 0x72, 0xc0,
  0x87, 0x74, 0x60, 0x87, 0x36, 0x68, 0x87, 0x79, 0x68, 0x03, 0x72, 0xc0,
  0x87, 0x0d, 0xae, 0x50, 0x0e, 0x6d, 0xd0, 0x0e, 0x7a, 0x50, 0x0e, 0x6d,
  0x00, 0x0f, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d,
  0x90, 0x0e, 0x71, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x78,
  0xa0, 0x07, 0x78, 0xd0, 0x06, 0xe9, 0x10, 0x07, 0x76, 0xa0, 0x07, 0x71,
  0x60, 0x07, 0x6d, 0x90, 0x0e, 0x73, 0x20, 0x07, 0x7a, 0x30, 0x07, 0x72,
  0xd0, 0x06, 0xe9, 0x60, 0x07, 0x74, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x6d,
  0x60, 0x0e, 0x71, 0x60, 0x07, 0x7a, 0x10, 0x07, 0x76, 0xd0, 0x06, 0xe6,
  0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x76,
  0x40, 0x07, 0x7a, 0x60, 0x07, 0x74, 0xd0, 0x06, 0xee, 0x80, 0x07, 0x7a,
  0x10, 0x07, 0x76, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x7a, 0x60, 0x07, 0x74,
  0x30, 0xe4, 0x09, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x60, 0xc8, 0x43, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xc0, 0x90, 0x27, 0x01, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x80, 0x21, 0x0f, 0x03, 0x04, 0xc0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0x20, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x32, 0x1e, 0x98, 0x10, 0x19, 0x11, 0x4c, 0x90, 0x8c, 0x09, 0x26, 0x47,
  0xc6, 0x04, 0x43, 0x1a, 0x25, 0x50, 0x06, 0x23, 0x00, 0xc5, 0x50, 0x04,
  0xa5, 0x50, 0x08, 0x05, 0x42, 0x6b, 0x04, 0x80, 0x64, 0x01, 0x12, 0x02,
  0x22, 0x50, 0x9c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x1a, 0x03, 0x4c, 0x90, 0x46, 0x02, 0x13, 0x44,
  0x35, 0x18, 0x63, 0x0b, 0x73, 0x3b, 0x03, 0xb1, 0x2b, 0x93, 0x9b, 0x4b,
  0x7b, 0x73, 0x03, 0x99, 0x71, 0xb9, 0x01, 0x41, 0xa1, 0x0b, 0x3b, 0x9b,
  0x7b, 0x91, 0x2a, 0x62, 0x2a, 0x0a, 0x9a, 0x2a, 0xfa, 0x9a, 0xb9, 0x81,
  0x79, 0x31, 0x4b, 0x73, 0x0b, 0x63, 0x4b, 0xd9, 0x10, 0x04, 0x13, 0x84,
  0x81, 0x98, 0x20, 0x0c, 0xc5, 0x06, 0x61, 0x20, 0x26, 0x08, 0x83, 0xb1,
  0x41, 0x30, 0x0c, 0x0a, 0x63, 0x73, 0x13, 0x84, 0xe1, 0xd8, 0x30, 0x20,
  0x09, 0x31, 0x41, 0x88, 0x1c, 0x12, 0x67, 0x4f, 0x75, 0x74, 0x13, 0x84,
  0x01, 0x99, 0x20, 0x2c, 0xcc, 0x04, 0x61, 0x48, 0x36, 0x08, 0xc6, 0xb3,
  0x61, 0x31, 0x16, 0xc6, 0x30, 0x86, 0xc6, 0x71, 0x1c, 0x68, 0x43, 0x10,
  0x6d, 0x20, 0x00, 0x09, 0x00, 0x26, 0x08, 0x02, 0xb0, 0x01, 0xd8, 0x30,
  0x18, 0x55, 0xb5, 0x21, 0xb0, 0x36, 0x0c, 0x03, 0x75, 0x91, 0x68, 0x0b,
  0x4b, 0x73, 0x9b, 0x20, 0x48, 0xcd, 0x04, 0x61, 0x50, 0x26, 0x08, 0xc3,
  0xb2, 0x61, 0xe0, 0xb8, 0x61, 0x03, 0x61, 0x68, 0x5b, 0xb7, 0xa1, 0xa0,
  0x32, 0x60, 0xf2, 0x58, 0xa4, 0xb9, 0xcd, 0xd1, 0xcd, 0x31, 0xa1, 0x2b,
  0xc3, 0xfb, 0x9a, 0xa3, 0x7b, 0x93, 0x2b, 0xdb, 0x40, 0x80, 0xc1, 0x13,
  0x06, 0x43, 0x15, 0x36, 0x36, 0xbb, 0x36, 0x97, 0x34, 0xb2, 0x32, 0x37,
  0xba, 0x29, 0x41, 0x50, 0x85, 0x0c, 0xcf, 0xc5, 0xae, 0x4c, 0x6e, 0x2e,
  0xed, 0xcd, 0x6d, 0x4a, 0x40, 0x34, 0x21, 0xc3, 0x73, 0xb1, 0x0b, 0x63,
  0xb3, 0x2b, 0x93, 0x9b, 0x12, 0x18, 0x75, 0xc8, 0xf0, 0x5c, 0xe6, 0xd0,
  0xc2, 0xc8, 0xca, 0xe4, 0x9a, 0xde, 0xc8, 0xca, 0xd8, 0xa6, 0x04, 0x49,
  0x19, 0x32, 0x3c, 0x17, 0xb9, 0xb2, 0xb9, 0xb7, 0x3a, 0xb9, 0xb1, 0xb2,
  0xb9, 0x29, 0x81, 0x54, 0x89, 0x0c, 0xcf, 0x85, 0x2e, 0x0f, 0xae, 0x2c,
  0xc8, 0xcd, 0xed, 0x8d, 0x2e, 0x8c, 0x2e, 0xed, 0xcd, 0x6d, 0x6e, 0x4a,
  0x70, 0xd5, 0x21, 0xc3, 0x73, 0x29, 0x73, 0xa3, 0x93, 0xcb, 0x83, 0x7a,
  0x4b, 0x73, 0xa3, 0x9b, 0x9b, 0x12, 0x78, 0x5d, 0xc8, 0xf0, 0x5c, 0xc6,
  0xde, 0xea, 0xdc, 0xe8, 0xca, 0xe4, 0xe6, 0xa6, 0x04, 0x61, 0x00, 0x00,
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
  0x71, 0x20, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x36, 0x20, 0x0d, 0x97,
  0xef, 0x3c, 0xbe, 0x10, 0x11, 0xc0, 0x44, 0x84, 0x40, 0x33, 0x2c, 0x84,
  0x09, 0x58, 0xc3, 0xe5, 0x3b, 0x8f, 0x3f, 0x11, 0xd7, 0x44, 0x45, 0x04,
  0x3b, 0x39, 0x11, 0xe1, 0x23, 0xb7, 0x6d, 0x01, 0xd2, 0x70, 0xf9, 0xce,
  0xe3, 0x4f, 0x47, 0x44, 0x00, 0x83, 0x38, 0xf8, 0xc8, 0x6d, 0x1b, 0x00,
  0xc1, 0x00, 0x48, 0x03, 0x00, 0x00, 0x00, 0x00, 0x48, 0x41, 0x53, 0x48,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xe2, 0xe8, 0xd1,
  0xff, 0xb5, 0x0d, 0x84, 0x5a, 0x39, 0x6c, 0xd7, 0x37, 0xae, 0x39, 0x2d,
  0x44, 0x58, 0x49, 0x4c, 0x1c, 0x05, 0x00, 0x00, 0x63, 0x00, 0x05, 0x00,
  0x47, 0x01, 0x00, 0x00, 0x44, 0x58, 0x49, 0x4c, 0x03, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x05, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde,
  0x21, 0x0c, 0x00, 0x00, 0x3e, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x07, 0x81, 0x23, 0x91,
  0x41, 0xc8, 0x04, 0x49, 0x06, 0x10, 0x32, 0x39, 0x92, 0x01, 0x84, 0x0c,
  0x25, 0x05, 0x08, 0x19, 0x1e, 0x04, 0x8b, 0x62, 0x80, 0x14, 0x45, 0x02,
  0x42, 0x92, 0x0b, 0x42, 0xa4, 0x10, 0x32, 0x14, 0x38, 0x08, 0x18, 0x4b,
  0x0a, 0x32, 0x52, 0x88, 0x48, 0x90, 0x14, 0x20, 0x43, 0x46, 0x88, 0xa5,
  0x00, 0x19, 0x32, 0x42, 0xe4, 0x48, 0x0e, 0x90, 0x91, 0x22, 0xc4, 0x50,
  0x41, 0x51, 0x81, 0x8c, 0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x29, 0x46, 0x06,
  0x51, 0x18, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1b, 0x8c, 0xe0, 0xff,
  0xff, 0xff, 0xff, 0x07, 0x40, 0x02, 0xa8, 0x0d, 0x84, 0xf0, 0xff, 0xff,
  0xff, 0xff, 0x03, 0x20, 0x6d, 0x30, 0x86, 0xff, 0xff, 0xff, 0xff, 0x1f,
  0x00, 0x09, 0xa8, 0x00, 0x49, 0x18, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x13, 0x82, 0x60, 0x42, 0x20, 0x4c, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00,
  0x89, 0x20, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x32, 0x22, 0x48, 0x09,
  0x20, 0x64, 0x85, 0x04, 0x93, 0x22, 0xa4, 0x84, 0x04, 0x93, 0x22, 0xe3,
  0x84, 0xa1, 0x90, 0x14, 0x12, 0x4c, 0x8a, 0x8c, 0x0b, 0x84, 0xa4, 0x4c,
  0x10, 0x4c, 0x23, 0x00, 0x25, 0x00, 0x14, 0xe6, 0x08, 0xc0, 0xa0, 0x0c,
  0x63, 0x0c, 0x22, 0x73, 0x04, 0x08, 0x99, 0x7b, 0x86, 0xcb, 0x9f, 0xb0,
  0x87, 0x90, 0xfc, 0x10, 0x68, 0x86, 0x85, 0x40, 0xc1, 0x29, 0x0b, 0x18,
  0x68, 0x8c, 0x31, 0xc6, 0x18, 0x86, 0xd2, 0x1c, 0x41, 0x50, 0x0c, 0x34,
  0xcc, 0x18, 0x8b, 0xd8, 0x40, 0xc0, 0x30, 0x02, 0x31, 0xcc, 0xb4, 0x06,
  0xe3, 0xc0, 0x0e, 0xe1, 0x30, 0x0f, 0xf3, 0xe0, 0x06, 0xb2, 0x70, 0x0b,
  0xb4, 0x50, 0x0e, 0xf8, 0x40, 0x0f, 0xf5, 0x20, 0x0f, 0xe5, 0x20, 0x07,
  0xa4, 0xc0, 0x07, 0xf6, 0x50, 0x0e, 0xe3, 0x40, 0x0f, 0xef, 0x20, 0x0f,
  0x7c, 0x50, 0x0f, 0xee, 0x30, 0x0f, 0xe9, 0x70, 0x0e, 0xee, 0x50, 0x0e,
  0xe4, 0x00, 0x06, 0xe9, 0xe0, 0x0e, 0xf4, 0xc0, 0x06, 0x60, 0x40, 0x07,
  0x7e, 0x00, 0x06, 0x7e, 0x80, 0x82, 0x47, 0x70, 0x8e, 0x00, 0x14, 0x00,
  0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60, 0x87, 0x36, 0x68, 0x87, 0x79,
  0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xae, 0x50, 0x0e, 0x6d, 0xd0, 0x0e,
  0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07,
  0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0xa0, 0x07, 0x73, 0x20, 0x07,
  0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x78, 0xd0, 0x06, 0xe9, 0x10, 0x07,
  0x76, 0xa0, 0x07, 0x71, 0x60, 0x07, 0x6d, 0x90, 0x0e, 0x73, 0x20, 0x07,
  0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe9, 0x60, 0x07, 0x74, 0xa0, 0x07,
  0x76, 0x40, 0x07, 0x6d, 0x60, 0x0e, 0x71, 0x60, 0x07, 0x7a, 0x10, 0x07,
  0x76, 0xd0, 0x06, 0xe6, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07,
  0x6d, 0x60, 0x0e, 0x76, 0x40, 0x07, 0x7a, 0x60, 0x07, 0x74, 0xd0, 0x06,
  0xee, 0x80, 0x07, 0x7a, 0x10, 0x07, 0x76, 0xa0, 0x07, 0x73, 0x20, 0x07,
  0x7a, 0x60, 0x07, 0x74, 0x30, 0xe4, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xc8, 0x43, 0x00, 0x01, 0x10, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x90, 0x27, 0x01, 0x02, 0x40,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x21, 0x0f, 0x03, 0x04,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0x20, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98, 0x10, 0x19, 0x11, 0x4c, 0x90,
  0x8c, 0x09, 0x26, 0x47, 0xc6, 0x04, 0x43, 0x1a, 0x25, 0x50, 0x06, 0xc5,
  0x30, 0x02, 0x50, 0x04, 0xa5, 0x50, 0x08, 0x05, 0x42, 0x6b, 0x04, 0x80,
  0x64, 0x01, 0x12, 0x02, 0x22, 0x50, 0x9c, 0x01, 0x00, 0x00, 0x00, 0x00,
  0x79, 0x18, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x1a, 0x03, 0x4c, 0x90,
  0x46, 0x02, 0x13, 0x44, 0x35, 0x18, 0x63, 0x0b, 0x73, 0x3b, 0x03, 0xb1,
  0x2b, 0x93, 0x9b, 0x4b, 0x7b, 0x73, 0x03, 0x99, 0x71, 0xb9, 0x01, 0x41,
  0xa1, 0x0b, 0x3b, 0x9b, 0x7b, 0x91, 0x2a, 0x62, 0x2a, 0x0a, 0x9a, 0x2a,
  0xfa, 0x9a, 0xb9, 0x81, 0x79, 0x31, 0x4b, 0x73, 0x0b, 0x63, 0x4b, 0xd9,
  0x10, 0x04, 0x13, 0x84, 0x81, 0x98, 0x20, 0x0c, 0xc5, 0x06, 0x61, 0x20,
  0x26, 0x08, 0x83, 0xb1, 0x41, 0x18, 0x0c, 0x0a, 0x63, 0x73, 0x1b, 0x06,
  0xc4, 0x20, 0x26, 0x08, 0xc3, 0x31, 0x41, 0x88, 0x1c, 0x02, 0x13, 0x84,
  0x01, 0x99, 0x20, 0x2c, 0xcc, 0x04, 0x61, 0x48, 0x36, 0x08, 0xca, 0xb3,
  0x61, 0x51, 0x16, 0x46, 0x51, 0x86, 0xc6, 0x71, 0x1c, 0x68, 0x43, 0x10,
  0x6d, 0x20, 0x00, 0x09, 0x00, 0x26, 0x08, 0x02, 0x40, 0xa2, 0x2d, 0x2c,
  0xcd, 0x6d, 0x82, 0x20, 0x35, 0x13, 0x84, 0x41, 0x99, 0x20, 0x0c, 0xcb,
  0x86, 0x01, 0xc3, 0x86, 0x0d, 0x84, 0x62, 0x5d, 0xd9, 0x86, 0x82, 0xaa,
  0x80, 0x49, 0xab, 0xc2, 0xc6, 0x66, 0xd7, 0xe6, 0x92, 0x46, 0x56, 0xe6,
  0x46, 0x37, 0x25, 0x08, 0xaa, 0x90, 0xe1, 0xb9, 0xd8, 0x95, 0xc9, 0xcd,
  0xa5, 0xbd, 0xb9, 0x4d, 0x09, 0x88, 0x26, 0x64, 0x78, 0x2e, 0x76, 0x61,
  0x6c, 0x76, 0x65, 0x72, 0x53, 0x02, 0xa3, 0x0e, 0x19, 0x9e, 0xcb, 0x1c,
  0x5a, 0x18, 0x59, 0x99, 0x5c, 0xd3, 0x1b, 0x59, 0x19, 0xdb, 0x94, 0x00,
  0x29, 0x43, 0x86, 0xe7, 0x22, 0x57, 0x36, 0xf7, 0x56, 0x27, 0x37, 0x56,
  0x36, 0x37, 0x25, 0x90, 0xea, 0x90, 0xe1, 0xb9, 0x94, 0xb9, 0xd1, 0xc9,
  0xe5, 0x41, 0xbd, 0xa5, 0xb9, 0xd1, 0xcd, 0x4d, 0x09, 0x34, 0x00, 0x00,
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
  0x71, 0x20, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x36, 0x20, 0x0d, 0x97,
  0xef, 0x3c, 0xbe, 0x10, 0x11, 0xc0, 0x44, 0x84, 0x40, 0x33, 0x2c, 0x84,
  0x09, 0x58, 0xc3, 0xe5, 0x3b, 0x8f, 0x3f, 0x11, 0xd7, 0x44, 0x45, 0x04,
  0x3b, 0x39, 0x11, 0xe1, 0x23, 0xb7, 0x6d, 0x01, 0xd2, 0x70, 0xf9, 0xce,
  0xe3, 0x4f, 0x47, 0x44, 0x00, 0x83, 0x38, 0xf8, 0xc8, 0x6d, 0x1b, 0x00,
  0xc1, 0x00, 0x48, 0x03, 0x61, 0x20, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x13, 0x04, 0x41, 0x2c, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x34, 0x4a, 0x37, 0xa0, 0xe4, 0xca, 0x30, 0x60, 0x06, 0x80, 0x4c, 0x09,
  0x94, 0x07, 0x00, 0x00, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0xc0, 0x48,
  0x85, 0xe0, 0x38, 0xc9, 0x88, 0x81, 0x01, 0x80, 0x20, 0x18, 0x10, 0xd5,
  0xf1, 0x8c, 0x18, 0x18, 0x00, 0x08, 0x82, 0x01, 0x61, 0x21, 0xd3, 0x88,
  0x81, 0x03, 0x80, 0x20, 0x18, 0x24, 0xd6, 0x31, 0x08, 0x81, 0x11, 0x45,
  0x51, 0x44, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00
};
