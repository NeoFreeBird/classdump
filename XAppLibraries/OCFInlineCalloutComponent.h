//
#ifndef OCFInlineCalloutComponent_h
#define OCFInlineCalloutComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFInlineCalloutComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFInlineCalloutComponent_h */
