//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVPVideoContext_h
#define TVPVideoContext_h
@import Foundation;

#include "TAVVideoContext.h"
#include "TVPVideoContextCTAInfo.h"

@interface TVPVideoContext : TAVVideoContext

@property (retain, nonatomic) TVPVideoContextCTAInfo *ctaInfo;

/* instance methods */
- (id)initWithVideoType:(id)type isAd:(_Bool)ad ctaInfo:(id)info;

@end

#endif /* TVPVideoContext_h */
