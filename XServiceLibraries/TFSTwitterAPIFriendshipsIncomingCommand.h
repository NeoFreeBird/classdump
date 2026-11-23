//
#ifndef TFSTwitterAPIFriendshipsIncomingCommand_h
#define TFSTwitterAPIFriendshipsIncomingCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPIFriendshipsIncomingCommand : TFSTwitterAPICommand { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 cursor;
}

/* instance methods */
- (id)initWithAccountID:(id)id cursor:(id)cursor context:(id)context source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;

@end

#endif /* TFSTwitterAPIFriendshipsIncomingCommand_h */
