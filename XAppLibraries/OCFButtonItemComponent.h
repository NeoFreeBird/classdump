//
#ifndef OCFButtonItemComponent_h
#define OCFButtonItemComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFButtonItemComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFButtonItemComponent_h */
