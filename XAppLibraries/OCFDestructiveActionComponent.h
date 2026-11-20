//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFDestructiveActionComponent_h
#define OCFDestructiveActionComponent_h
@import Foundation;

#include "OCFActionComponent.h"

@interface OCFDestructiveActionComponent : OCFActionComponent

/* class methods */
+ (id)componentTypeKey;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFDestructiveActionComponent_h */
