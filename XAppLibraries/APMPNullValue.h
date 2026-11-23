//
#ifndef APMPNullValue_h
#define APMPNullValue_h
@import Foundation;

#include "APMPRuntimeValue.h"

@interface APMPNullValue : APMPRuntimeValue

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)stringValueOrError:(id *)error;
- (double)doubleValueOrError:(id *)error;
- (_Bool)booleanValueOrError:(id *)error;
- (id)applyWithName:(id)name arguments:(id)arguments scope:(id)scope error:(id *)error;
- (_Bool)isEqualToRuntimeValue:(id)value;

@end

#endif /* APMPNullValue_h */
