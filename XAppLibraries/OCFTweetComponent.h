//
#ifndef OCFTweetComponent_h
#define OCFTweetComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFTweetComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFTweetComponent_h */
