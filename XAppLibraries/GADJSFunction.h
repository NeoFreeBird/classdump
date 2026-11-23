//
#ifndef GADJSFunction_h
#define GADJSFunction_h
@import Foundation;

#include "GADJSContext.h"
#include "GADObserverCollection.h"

@class NSObject, NSString;

@interface GADJSFunction : NSObject {
    /* instance variables */
    NSString *_functionName;
    GADJSContext *_JSContext;
    GADObserverCollection *_observers;
    NSString *_resultIdentifier;
    id /* block */ _completionHandler;
    struct atomic_flag { _Atomic _Bool _Value; } _functionCalled;
}

/* instance methods */
- (id)initWithFunctionName:(id)name context:(id)context messageSource:(id)source;
- (void)completeWithResult:(id)result error:(id)error;
- (void)startTimeoutTimerWithFunctionName:(id)name;
- (void)callFunctionWithName:(id)name argument:(id)argument completionHandler:(id /* block */)handler;
- (void)callWithArguments:(id)arguments completionHandler:(id /* block */)handler;

@end

#endif /* GADJSFunction_h */
