//
#ifndef OCFButtonComponent_h
#define OCFButtonComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFButtonComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFButtonComponent_h */
