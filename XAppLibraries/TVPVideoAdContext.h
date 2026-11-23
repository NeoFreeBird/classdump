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
