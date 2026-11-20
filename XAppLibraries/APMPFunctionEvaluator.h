//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
