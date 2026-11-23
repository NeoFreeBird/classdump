//
#ifndef APMPStringValue_h
#define APMPStringValue_h
@import Foundation;

#include "APMPRuntimeValue.h"

@class NSString;

@interface APMPStringValue : APMPRuntimeValue {
    /* instance variables */
    NSString *_value;
}

/* instance methods */
- (id)initWithString:(id)string;
- (id)stringValueOrError:(id *)error;
- (double)doubleValueOrError:(id *)error;
- (_Bool)booleanValueOrError:(id *)error;
- (id)applyWithName:(id)name arguments:(id)arguments scope:(id)scope error:(id *)error;
- (_Bool)isEqualToRuntimeValue:(id)value;

@end

#endif /* APMPStringValue_h */
