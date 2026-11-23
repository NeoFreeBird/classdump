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
