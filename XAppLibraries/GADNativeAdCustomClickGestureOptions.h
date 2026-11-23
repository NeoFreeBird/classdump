//
#ifndef GADNativeAdCustomClickGestureOptions_h
#define GADNativeAdCustomClickGestureOptions_h
@import Foundation;

#include "GADAdLoaderOptions.h"

@interface GADNativeAdCustomClickGestureOptions : GADAdLoaderOptions

@property (nonatomic) unsigned long long swipeGestureDirection;
@property (nonatomic) _Bool tapsAllowed;

/* instance methods */
- (id)initWithSwipeGestureDirection:(unsigned long long)direction tapsAllowed:(_Bool)allowed;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GADNativeAdCustomClickGestureOptions_h */
