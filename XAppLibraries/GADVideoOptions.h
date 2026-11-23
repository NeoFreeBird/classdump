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
