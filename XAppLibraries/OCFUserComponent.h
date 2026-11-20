//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFUserComponent_h
#define OCFUserComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFUserComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFUserComponent_h */
