//
#ifndef TFSTwitterAPIOAuthLogoutCommand_h
#define TFSTwitterAPIOAuthLogoutCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPIOAuthLogoutCommand : TFSTwitterAPICommand

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIOAuthLogoutCommand_h */
