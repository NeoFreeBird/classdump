//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADNativeAdViewAdOptions_h
#define GADNativeAdViewAdOptions_h
@import Foundation;

#include "GADAdLoaderOptions.h"

@interface GADNativeAdViewAdOptions : GADAdLoaderOptions

@property (nonatomic) long long preferredAdChoicesPosition;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GADNativeAdViewAdOptions_h */
