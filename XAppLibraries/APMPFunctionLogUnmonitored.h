//
#ifndef APMPFunctionLogUnmonitored_h
#define APMPFunctionLogUnmonitored_h
@import Foundation;

#include "APMPFunctionValue.h"

@interface APMPFunctionLogUnmonitored : APMPFunctionValue

/* instance methods */
- (id)initWithLogger:(id)logger;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPFunctionLogUnmonitored_h */
