//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBEmailFormFieldValidator_h
#define ONBEmailFormFieldValidator_h
@import Foundation;

#include "ONBAPIFormFieldValidator.h"

@interface ONBEmailFormFieldValidator : ONBAPIFormFieldValidator

/* instance methods */
- (id)localValidityWithInput:(id)input;
- (id)remoteValidityWithResponseSuccess:(_Bool)success object:(id)object error:(id)error;
- (id)remoteValidityCommandWithInput:(id)input completionBlock:(id /* block */)block;

@end

#endif /* ONBEmailFormFieldValidator_h */
