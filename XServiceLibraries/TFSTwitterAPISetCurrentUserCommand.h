//
#ifndef TFSTwitterAPISetCurrentUserCommand_h
#define TFSTwitterAPISetCurrentUserCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPISetCurrentUserCommand : TFSTwitterAPICommand

@property (readonly, nonatomic) NSString *base64PushToken;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id base64PushToken:(id)token completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPISetCurrentUserCommand_h */
