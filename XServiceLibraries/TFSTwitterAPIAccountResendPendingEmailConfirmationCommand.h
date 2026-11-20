//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIAccountResendPendingEmailConfirmationCommand_h
#define TFSTwitterAPIAccountResendPendingEmailConfirmationCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPIAccountResendPendingEmailConfirmationCommand : TFSTwitterAPICommand

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id context:(id)context source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountResendPendingEmailConfirmationCommand_h */
