//
#ifndef GADNativeAdImageAdLoaderOptions_h
#define GADNativeAdImageAdLoaderOptions_h
@import Foundation;

#include "GADAdLoaderOptions.h"

@interface GADNativeAdImageAdLoaderOptions : GADAdLoaderOptions

@property (nonatomic) _Bool disableImageLoading;
@property (nonatomic) _Bool shouldRequestMultipleImages;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GADNativeAdImageAdLoaderOptions_h */
