//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPFunctionValue_h
#define APMPFunctionValue_h
@import Foundation;

#include "APMPPropertyMap.h"
#include "APMPRuntimeValue.h"
#include "APMPScope.h"

@class NSArray, NSString;

@interface APMPFunctionValue : APMPRuntimeValue {
    /* instance variables */
    NSString *_functionName;
    NSArray *_parameters;
    NSArray *_statements;
    APMPScope *_definingScope;
    APMPPropertyMap *_propertyMap;
    _Bool _mark;
}

/* instance methods */
- (id)initWithFunctionName:(id)name parameterNames:(id)names statements:(id)statements definingScope:(id)scope;
- (id)stringValueOrError:(id *)error;
- (double)doubleValueOrError:(id *)error;
- (_Bool)booleanValueOrError:(id *)error;
- (id)functionName;
- (id)applyWithName:(id)name arguments:(id)arguments scope:(id)scope error:(id *)error;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;
- (id)invokeWithEvaluatedArguments:(id)arguments error:(id *)error;
- (_Bool)hasProperty:(id)property;
- (void)setValue:(id)value forProperty:(id)property;
- (id)valueForProperty:(id)property;
- (void)removeValueForProperty:(id)property;
- (id)allPropertyNames;
- (_Bool)isEqualToRuntimeValue:(id)value;
- (void)mark;
- (void)sweep;

@end

#endif /* APMPFunctionValue_h */
