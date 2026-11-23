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
