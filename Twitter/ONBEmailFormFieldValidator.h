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
