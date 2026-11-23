//
#ifndef OCFCondition_Protocol_h
#define OCFCondition_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFCondition <NSObject>

@required

/* class methods */
+ (id)alloc;
+ (id)conditionTypeKey;
+ (id)conditionDataKey;

/* required instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary identifier:(id)identifier error:(id *)error;
- (_Bool)evaluateWithComponents:(id)components;

@optional

@end

#endif /* OCFCondition_Protocol_h */
