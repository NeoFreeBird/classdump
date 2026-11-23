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
