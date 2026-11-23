//
#ifndef OCFMutableTextFieldComponent_h
#define OCFMutableTextFieldComponent_h
@import Foundation;

#include "OCFMutableComponent.h"

@interface OCFMutableTextFieldComponent : OCFMutableComponent

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)stringValue;

@end

#endif /* OCFMutableTextFieldComponent_h */
