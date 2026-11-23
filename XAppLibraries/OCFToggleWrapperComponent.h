//
#ifndef OCFToggleWrapperComponent_h
#define OCFToggleWrapperComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFToggleWrapperComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFToggleWrapperComponent_h */
