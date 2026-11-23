//
#ifndef TFSTwitterAPIFriendshipsFollowCommand_h
#define TFSTwitterAPIFriendshipsFollowCommand_h
@import Foundation;

#include "TFSTwitterAPIFriendshipsFollowBaseCommand.h"

@interface TFSTwitterAPIFriendshipsFollowCommand : TFSTwitterAPIFriendshipsFollowBaseCommand // (Swift)

/* instance methods */
- (id)initWithAccountID:(id)id followRequest:(id)request context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)scribeCommandAttemptResponse:(id)response willRetry:(_Bool)retry to:(id)to;

@end

#endif /* TFSTwitterAPIFriendshipsFollowCommand_h */
