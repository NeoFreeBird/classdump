//
#ifndef APMPMessageLogger_h
#define APMPMessageLogger_h
@import Foundation;

#include "APMPFunctionValue.h"

@interface APMPMessageLogger : APMPFunctionValue

/* instance methods */
- (id)initWithLogger:(id)logger;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPMessageLogger_h */
