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
