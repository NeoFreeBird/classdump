//
#ifndef TFSTwitterAPIFriendshipsReadAllCommand_h
#define TFSTwitterAPIFriendshipsReadAllCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPIFriendshipsReadAllCommand : TFSTwitterAPICommand

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id context:(id)context completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIFriendshipsReadAllCommand_h */
