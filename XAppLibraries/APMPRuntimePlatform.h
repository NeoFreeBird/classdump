//
#ifndef APMPRuntimePlatform_h
#define APMPRuntimePlatform_h
@import Foundation;

#include "APMPFunctionValue.h"

@interface APMPRuntimePlatform : APMPFunctionValue

/* instance methods */
- (id)init;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPRuntimePlatform_h */
