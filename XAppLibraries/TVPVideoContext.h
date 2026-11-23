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
