//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
