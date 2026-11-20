//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFMutableUserComponent_h
#define OCFMutableUserComponent_h
@import Foundation;

#include "OCFMutableComponent.h"

@interface OCFMutableUserComponent : OCFMutableComponent

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFMutableUserComponent_h */
