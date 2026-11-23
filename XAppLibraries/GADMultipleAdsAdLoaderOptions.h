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
