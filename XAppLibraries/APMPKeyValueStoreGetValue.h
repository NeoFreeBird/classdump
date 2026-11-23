//
#ifndef APMPKeyValueStoreGetValue_h
#define APMPKeyValueStoreGetValue_h
@import Foundation;

#include "APMPFunctionValue.h"

@interface APMPKeyValueStoreGetValue : APMPFunctionValue {
    /* instance variables */
    id /* block */ _getValueBlock;
}

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPKeyValueStoreGetValue_h */
