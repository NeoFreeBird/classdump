//
#ifndef OCFCardWrapperComponent_h
#define OCFCardWrapperComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFCardWrapperComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFCardWrapperComponent_h */
