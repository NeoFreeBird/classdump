//
#ifndef APMPRequire_h
#define APMPRequire_h
@import Foundation;

#include "APMPDynamicProvider.h"
#include "APMPFunctionValue.h"

@class NSMutableDictionary;

@interface APMPRequire : APMPFunctionValue {
    /* instance variables */
    APMPDynamicProvider *_provider;
    NSMutableDictionary *_modules;
}

/* instance methods */
- (id)initWithProvider:(id)provider;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPRequire_h */
