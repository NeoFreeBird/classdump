//
#ifndef OCFInlineTooltipComponent_h
#define OCFInlineTooltipComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFInlineTooltipComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFInlineTooltipComponent_h */
