//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
