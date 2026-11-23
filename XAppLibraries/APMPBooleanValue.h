//
#ifndef APMPBooleanValue_h
#define APMPBooleanValue_h
@import Foundation;

#include "APMPRuntimeValue.h"

@interface APMPBooleanValue : APMPRuntimeValue {
    /* instance variables */
    _Bool _value;
}

/* class methods */
+ (id)booleanValueWithBool:(_Bool)_bool;

/* instance methods */
- (id)initWithBoolean:(_Bool)boolean;
- (id)stringValueOrError:(id *)error;
- (double)doubleValueOrError:(id *)error;
- (_Bool)booleanValueOrError:(id *)error;
- (_Bool)isEqualToRuntimeValue:(id)value;

@end

#endif /* APMPBooleanValue_h */
