//
#ifndef TFSTwitterAPIAccountLoginVerificationRequestPostCommand_h
#define TFSTwitterAPIAccountLoginVerificationRequestPostCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIAccountLoginVerificationRequestPostCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *loginVerificationID;
@property (retain, nonatomic) NSString *challengeResponse;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id loginVerificationID:(id)id challengeResponse:(id)response completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationRequestPostCommand_h */
