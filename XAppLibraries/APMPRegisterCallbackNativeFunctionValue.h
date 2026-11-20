//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPRegisterCallbackNativeFunctionValue_h
#define APMPRegisterCallbackNativeFunctionValue_h
@import Foundation;

#include "APMPEditingCallbackHandler.h"
#include "APMPFunctionValue.h"

@interface APMPRegisterCallbackNativeFunctionValue : APMPFunctionValue {
    /* instance variables */
    APMPEditingCallbackHandler *_callbackHandler;
}

/* instance methods */
- (id)initWithCallbackHandler:(id)handler;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPRegisterCallbackNativeFunctionValue_h */
