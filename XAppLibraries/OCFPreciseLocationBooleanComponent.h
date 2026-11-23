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
