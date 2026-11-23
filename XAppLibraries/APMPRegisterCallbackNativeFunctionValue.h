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
