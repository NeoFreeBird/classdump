//
#ifndef APMPCommandRegistrar_h
#define APMPCommandRegistrar_h
@import Foundation;

#include "APMPFunctionEvaluator.h"

@class NSMutableDictionary, NSObject;

@interface APMPCommandRegistrar : NSObject {
    /* instance variables */
    NSMutableDictionary *_commandEvaluators;
    APMPFunctionEvaluator *_functionEvaluator;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)registerEvaluator:(id)evaluator;
- (id)evaluateStatement:(id)statement scope:(id)scope error:(id *)error;

@end

#endif /* APMPCommandRegistrar_h */
