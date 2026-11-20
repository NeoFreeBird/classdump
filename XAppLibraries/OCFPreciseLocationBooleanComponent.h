//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFPreciseLocationBooleanComponent_h
#define OCFPreciseLocationBooleanComponent_h
@import Foundation;

#include "OCFBooleanComponent.h"

@interface OCFPreciseLocationBooleanComponent : OCFBooleanComponent

/* class methods */
+ (id)componentTypeKey;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFPreciseLocationBooleanComponent_h */
