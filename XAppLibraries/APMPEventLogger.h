//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPEventLogger_h
#define APMPEventLogger_h
@import Foundation;

#include "APMPEventContext.h"
#include "APMPFunctionValue.h"

@interface APMPEventLogger : APMPFunctionValue {
    /* instance variables */
    APMPEventContext *_eventContext;
}

/* instance methods */
- (id)initWithEventContext:(id)context;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPEventLogger_h */
