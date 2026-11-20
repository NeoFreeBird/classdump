//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADNativeAdMediaAdLoaderOptions_h
#define GADNativeAdMediaAdLoaderOptions_h
@import Foundation;

#include "GADAdLoaderOptions.h"

@interface GADNativeAdMediaAdLoaderOptions : GADAdLoaderOptions

@property (nonatomic) long long mediaAspectRatio;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GADNativeAdMediaAdLoaderOptions_h */
