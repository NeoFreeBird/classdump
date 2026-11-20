//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMultipleAdsAdLoaderOptions_h
#define GADMultipleAdsAdLoaderOptions_h
@import Foundation;

#include "GADAdLoaderOptions.h"

@interface GADMultipleAdsAdLoaderOptions : GADAdLoaderOptions

@property (nonatomic) long long numberOfAds;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GADMultipleAdsAdLoaderOptions_h */
