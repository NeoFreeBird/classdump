//
#ifndef APMPFunctionLogSilent_h
#define APMPFunctionLogSilent_h
@import Foundation;

#include "APMPFunctionValue.h"

@interface APMPFunctionLogSilent : APMPFunctionValue

/* instance methods */
- (id)initWithLogger:(id)logger;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPFunctionLogSilent_h */
