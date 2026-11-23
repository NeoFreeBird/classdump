//
#ifndef OCFActionComponent_h
#define OCFActionComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFActionComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFActionComponent_h */
