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
