//
#ifndef APMPKeyValueStore_h
#define APMPKeyValueStore_h
@import Foundation;

#include "APMPFunctionValue.h"

@interface APMPKeyValueStore : APMPFunctionValue

/* instance methods */
- (id)initWithFunctionName:(id)name getValueBlock:(id /* block */)block;

@end

#endif /* APMPKeyValueStore_h */
