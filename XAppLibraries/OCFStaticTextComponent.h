//
#ifndef OCFStaticTextComponent_h
#define OCFStaticTextComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFStaticTextComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFStaticTextComponent_h */
