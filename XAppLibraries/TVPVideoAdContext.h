//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVPVideoAdContext_h
#define TVPVideoAdContext_h
@import Foundation;

#include "TVPVideoAdContextSkipParameters.h"
#include "TVPVideoContext.h"

@class NSString, NSURL, TFSTwitterDynamicVideoAd;

@interface TVPVideoAdContext : TVPVideoContext

@property (readonly, copy, nonatomic) NSString *advertiserName;
@property (readonly, copy, nonatomic) NSURL *advertiserProfileImageUrl;
@property (readonly, nonatomic) _Bool shouldRenderAdByAdvertiserName;
@property (readonly, nonatomic) TVPVideoAdContextSkipParameters *adSkipParameters;
@property (readonly, nonatomic) TFSTwitterDynamicVideoAd *videoAd;

/* instance methods */
- (id)initWithVideoType:(id)type adSkipParameters:(id)parameters ctaInfo:(id)info videoAd:(id)ad;

@end

#endif /* TVPVideoAdContext_h */
