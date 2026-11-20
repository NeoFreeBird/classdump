//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
