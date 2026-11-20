//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
