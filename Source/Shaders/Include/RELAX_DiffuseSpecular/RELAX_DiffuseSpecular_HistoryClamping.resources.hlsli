/*
Copyright (c) 2022, NVIDIA CORPORATION. All rights reserved.

NVIDIA CORPORATION and its licensors retain all intellectual property
and proprietary rights in and to this software, related documentation
and any modifications thereto. Any use, reproduction, disclosure or
distribution of this software and related documentation without an express
license agreement from NVIDIA CORPORATION is strictly prohibited.
*/

#include "RELAX_Config.hlsli"

#if( defined RELAX_DIFFUSE && defined RELAX_SPECULAR )

    #define NRD_DECLARE_INPUT_TEXTURES \
        NRD_INPUT_TEXTURE( Texture2D<float4>, gSpecularIllumination, t, 0 ) \
        NRD_INPUT_TEXTURE( Texture2D<float4>, gDiffuseIllumination, t, 1 ) \
        NRD_INPUT_TEXTURE( Texture2D<float4>, gSpecularIlluminationResponsive, t, 2 ) \
        NRD_INPUT_TEXTURE( Texture2D<float4>, gDiffuseIlluminationResponsive, t, 3 ) \
        NRD_INPUT_TEXTURE( Texture2D<float2>, gSpecularAndDiffuseHistoryLength, t, 4 )

    #define NRD_DECLARE_OUTPUT_TEXTURES \
        NRD_OUTPUT_TEXTURE( RWTexture2D<float4>, gOutSpecularIllumination, u, 0 ) \
        NRD_OUTPUT_TEXTURE( RWTexture2D<float4>, gOutDiffuseIllumination, u, 1 ) \
        NRD_OUTPUT_TEXTURE( RWTexture2D<float2>, gOutSpecularAndDiffuseHistoryLength, u, 2 )

#elif( defined RELAX_DIFFUSE )

    #define NRD_DECLARE_INPUT_TEXTURES \
        NRD_INPUT_TEXTURE( Texture2D<float4>, gDiffuseIllumination, t, 0 ) \
        NRD_INPUT_TEXTURE( Texture2D<float4>, gDiffuseIlluminationResponsive, t, 1 ) \
        NRD_INPUT_TEXTURE( Texture2D<float>, gDiffuseHistoryLength, t, 2 )

    #define NRD_DECLARE_OUTPUT_TEXTURES \
        NRD_OUTPUT_TEXTURE( RWTexture2D<float4>, gOutDiffuseIllumination, u, 0 ) \
        NRD_OUTPUT_TEXTURE( RWTexture2D<float>, gOutDiffuseHistoryLength, u, 1 )

#elif( defined RELAX_SPECULAR )

    #define NRD_DECLARE_INPUT_TEXTURES \
        NRD_INPUT_TEXTURE( Texture2D<float4>, gSpecularIllumination, t, 0 ) \
        NRD_INPUT_TEXTURE( Texture2D<float4>, gSpecularIlluminationResponsive, t, 1 ) \
        NRD_INPUT_TEXTURE( Texture2D<float>, gSpecularHistoryLength, t, 2 )

    #define NRD_DECLARE_OUTPUT_TEXTURES \
        NRD_OUTPUT_TEXTURE( RWTexture2D<float4>, gOutSpecularIllumination, u, 0 ) \
        NRD_OUTPUT_TEXTURE( RWTexture2D<float>, gOutSpecularHistoryLength, u, 1 )

#endif

#define NRD_DECLARE_CONSTANTS \
    NRD_CONSTANTS_START \
        RELAX_SHARED_CB_DATA \
        NRD_CONSTANT( float, gColorBoxSigmaScale ) \
    NRD_CONSTANTS_END

#define NRD_DECLARE_SAMPLERS \
    NRD_COMMON_SAMPLERS
