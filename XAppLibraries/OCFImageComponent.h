//
#ifndef OCFImageComponent_h
#define OCFImageComponent_h
@import Foundation;

#include "OCFComponent.h"

@interface OCFImageComponent : OCFComponent

/* class methods */
+ (id)componentTypeKey;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFImageComponent_h */
