//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
