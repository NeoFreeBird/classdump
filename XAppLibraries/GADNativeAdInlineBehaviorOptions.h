//
#ifndef GADNativeAdInlineBehaviorOptions_h
#define GADNativeAdInlineBehaviorOptions_h
@import Foundation;

#include "GADAdLoaderOptions.h"

@interface GADNativeAdInlineBehaviorOptions : GADAdLoaderOptions

@property (nonatomic) long long inlineBehavior;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GADNativeAdInlineBehaviorOptions_h */
