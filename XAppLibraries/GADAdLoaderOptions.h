//
#ifndef GADAdLoaderOptions_h
#define GADAdLoaderOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface GADAdLoaderOptions : NSObject <NSCopying>

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)requestParameters;

@end

#endif /* GADAdLoaderOptions_h */
