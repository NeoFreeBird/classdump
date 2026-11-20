//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
