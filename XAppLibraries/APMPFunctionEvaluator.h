//
#ifndef APMPFunctionEvaluator_h
#define APMPFunctionEvaluator_h
@import Foundation;

#include "APMPCommandEvaluator.h"

@interface APMPFunctionEvaluator : APMPCommandEvaluator

/* instance methods */
- (id)evaluateCommand:(id)command arguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPFunctionEvaluator_h */
