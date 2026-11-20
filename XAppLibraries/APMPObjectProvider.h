//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
