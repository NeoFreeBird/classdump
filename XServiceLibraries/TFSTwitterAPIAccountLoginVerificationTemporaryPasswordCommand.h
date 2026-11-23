//
#ifndef TFSTwitterAPIAccountLoginVerificationTemporaryPasswordCommand_h
#define TFSTwitterAPIAccountLoginVerificationTemporaryPasswordCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIAccountLoginVerificationTemporaryPasswordCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationTemporaryPasswordCommand_h */
