//
#ifndef APMPObjectProvider_h
#define APMPObjectProvider_h
@import Foundation;

#include "APMPFunctionValue.h"

@interface APMPObjectProvider : APMPFunctionValue {
    /* instance variables */
    id /* block */ _objectProviderBlock;
}

/* instance methods */
- (id)initWithName:(id)name block:(id /* block */)block;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPObjectProvider_h */
