//
#ifndef OCFInfoItemComponent_h
#define OCFInfoItemComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFInfoItemComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFInfoItemComponent_h */
