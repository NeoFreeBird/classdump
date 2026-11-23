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
