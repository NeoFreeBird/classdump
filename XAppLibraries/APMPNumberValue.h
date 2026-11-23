//
#ifndef APMPNumberValue_h
#define APMPNumberValue_h
@import Foundation;

#include "APMPRuntimeValue.h"

@interface APMPNumberValue : APMPRuntimeValue {
    /* instance variables */
    double _value;
}

/* instance methods */
- (id)initWithDouble:(double)_double;
- (id)stringValueOrError:(id *)error;
- (double)doubleValueOrError:(id *)error;
- (_Bool)booleanValueOrError:(id *)error;
- (_Bool)isEqualToRuntimeValue:(id)value;

@end

#endif /* APMPNumberValue_h */
