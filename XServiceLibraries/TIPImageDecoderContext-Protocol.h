//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageDecoderContext_Protocol_h
#define TIPImageDecoderContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSData;

@protocol TIPImageDecoderContext <NSObject>

@required

@property (readonly, nonatomic) id tip_config;
@property (readonly, nonatomic) NSData *tip_data;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } tip_dimensions;
@property (readonly, nonatomic) unsigned long long tip_frameCount;

@optional

@property (readonly, nonatomic) _Bool tip_isProgressive;
@property (readonly, nonatomic) _Bool tip_isAnimated;
@property (readonly, nonatomic) _Bool tip_hasAlpha;
@property (readonly, nonatomic) _Bool tip_hasGPSInfo;

@end

#endif /* TIPImageDecoderContext_Protocol_h */
