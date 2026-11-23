//
#ifndef OCFMutableBooleanComponent_h
#define OCFMutableBooleanComponent_h
@import Foundation;

#include "OCFMutableComponent.h"

@interface OCFMutableBooleanComponent : OCFMutableComponent

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)numberValue;

@end

#endif /* OCFMutableBooleanComponent_h */
