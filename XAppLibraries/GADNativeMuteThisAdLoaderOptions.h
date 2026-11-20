//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADNativeMuteThisAdLoaderOptions_h
#define GADNativeMuteThisAdLoaderOptions_h
@import Foundation;

#include "GADAdLoaderOptions.h"

@interface GADNativeMuteThisAdLoaderOptions : GADAdLoaderOptions

@property (nonatomic) _Bool customMuteThisAdRequested;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GADNativeMuteThisAdLoaderOptions_h */
