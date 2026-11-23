//
#ifndef TFSTwitterAPIAccountLoginVerificationTOTPKeyCommand_h
#define TFSTwitterAPIAccountLoginVerificationTOTPKeyCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIAccountLoginVerificationTOTPKeyCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationTOTPKeyCommand_h */
