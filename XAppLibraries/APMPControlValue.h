//
#ifndef APMPControlValue_h
#define APMPControlValue_h
@import Foundation;

#include "APMPRuntimeValue.h"

@class NSString;

@interface APMPControlValue : APMPRuntimeValue {
    /* instance variables */
    NSString *_type;
    APMPRuntimeValue *_data;
}

/* class methods */
+ (id)breakValue;
+ (id)continueValue;
+ (id)returnValueWithData:(id)data;

/* instance methods */
- (id)initWithType:(id)type data:(id)data;
- (id)type;
- (id)data;
- (_Bool)isEqualToRuntimeValue:(id)value;

@end

#endif /* APMPControlValue_h */
