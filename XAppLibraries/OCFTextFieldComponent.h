//
#ifndef OCFTextFieldComponent_h
#define OCFTextFieldComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFTextFieldComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFTextFieldComponent_h */
