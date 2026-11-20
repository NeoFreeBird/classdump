//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
