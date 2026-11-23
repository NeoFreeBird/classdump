//
#ifndef GAMBannerViewOptions_h
#define GAMBannerViewOptions_h
@import Foundation;

#include "GADAdLoaderOptions.h"

@interface GAMBannerViewOptions : GADAdLoaderOptions

@property (nonatomic) _Bool enableManualImpressions;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GAMBannerViewOptions_h */
