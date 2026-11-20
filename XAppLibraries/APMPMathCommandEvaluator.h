//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPMathCommandEvaluator_h
#define APMPMathCommandEvaluator_h
@import Foundation;

#include "APMPCommandEvaluator.h"

@class NSDictionary;

@interface APMPMathCommandEvaluator : APMPCommandEvaluator {
    /* instance variables */
    NSDictionary *_handlers;
}

/* instance methods */
- (id)init;
- (id)evaluateCommand:(id)command arguments:(id)arguments scope:(id)scope error:(id *)error;
- (id)allSupportedCommands;

@end

#endif /* APMPMathCommandEvaluator_h */
