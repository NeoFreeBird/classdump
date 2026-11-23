//
#ifndef TFSTwitterAPIAccountLoginVerificationRequestCommand_h
#define TFSTwitterAPIAccountLoginVerificationRequestCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIAccountLoginVerificationRequestCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationRequestCommand_h */
