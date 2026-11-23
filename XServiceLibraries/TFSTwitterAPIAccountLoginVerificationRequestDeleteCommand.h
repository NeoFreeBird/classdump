//
#ifndef TFSTwitterAPIAccountLoginVerificationRequestDeleteCommand_h
#define TFSTwitterAPIAccountLoginVerificationRequestDeleteCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIAccountLoginVerificationRequestDeleteCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *loginVerificationID;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id loginVerificationID:(id)id completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationRequestDeleteCommand_h */
