//
#ifndef OCFAlertExampleComponent_h
#define OCFAlertExampleComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFAlertExampleComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFAlertExampleComponent_h */
