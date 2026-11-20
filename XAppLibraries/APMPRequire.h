//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
