//
#ifndef OCFListComponent_h
#define OCFListComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFListComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFListComponent_h */
