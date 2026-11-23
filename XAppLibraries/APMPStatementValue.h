//
#ifndef APMPStatementValue_h
#define APMPStatementValue_h
@import Foundation;

#include "APMPRuntimeValue.h"

@class NSArray, NSString;

@interface APMPStatementValue : APMPRuntimeValue {
    /* instance variables */
    NSString *_functionName;
    NSArray *_arguments;
}

/* instance methods */
- (id)initWithFunctionName:(id)name arguments:(id)arguments;
- (id)functionName;
- (id)arguments;
- (_Bool)isEqualToRuntimeValue:(id)value;

@end

#endif /* APMPStatementValue_h */
