//
#ifndef OCFBooleanComponent_h
#define OCFBooleanComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFBooleanComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFBooleanComponent_h */
