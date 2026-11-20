//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADVideoOptions_h
#define GADVideoOptions_h
@import Foundation;

#include "GADAdLoaderOptions.h"

@interface GADVideoOptions : GADAdLoaderOptions

@property (nonatomic) _Bool startMuted;
@property (nonatomic) _Bool customControlsRequested;
@property (nonatomic) _Bool clickToExpandRequested;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GADVideoOptions_h */
