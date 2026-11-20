//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPassthroughComponentConfiguration_h
#define TFNPassthroughComponentConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFNPassthroughComponentConfiguration : NSObject <NSCopying>

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)copyToObject:(id)object;
- (void)copyFromComponent:(id)component;

@end

#endif /* TFNPassthroughComponentConfiguration_h */
