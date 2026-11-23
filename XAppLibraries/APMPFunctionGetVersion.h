//
#ifndef APMPFunctionGetVersion_h
#define APMPFunctionGetVersion_h
@import Foundation;

#include "APMPFunctionValue.h"

@interface APMPFunctionGetVersion : APMPFunctionValue

/* instance methods */
- (id)init;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPFunctionGetVersion_h */
