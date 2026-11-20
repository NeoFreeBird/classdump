//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFBooleanAllTrueCondition_h
#define OCFBooleanAllTrueCondition_h
@import Foundation;

#include "OCFCondition.h"

@class NSArray, NSSet;

@interface OCFBooleanAllTrueCondition : OCFCondition {
    /* instance variables */
    NSSet *_componentIdentifiersSet;
}

@property (readonly, nonatomic) NSArray *componentIdentifiers;

/* class methods */
+ (id)conditionTypeKey;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary identifier:(id)identifier error:(id *)error;
- (_Bool)evaluateWithComponents:(id)components;

@end

#endif /* OCFBooleanAllTrueCondition_h */
