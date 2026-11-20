//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
