//
#ifndef OCFInlineFeedbackComponent_h
#define OCFInlineFeedbackComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFInlineFeedbackComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFInlineFeedbackComponent_h */
