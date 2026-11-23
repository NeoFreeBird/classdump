//
#ifndef TFSTwitterAPIFriendshipsLiveFollowCommand_h
#define TFSTwitterAPIFriendshipsLiveFollowCommand_h
@import Foundation;

#include "TFSTwitterAPIFriendshipsFollowBaseCommand.h"

@interface TFSTwitterAPIFriendshipsLiveFollowCommand : TFSTwitterAPIFriendshipsFollowBaseCommand // (Swift)

/* instance methods */
- (id)initWithAccountID:(id)id followRequest:(id)request context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)processResponse:(id)response;

@end

#endif /* TFSTwitterAPIFriendshipsLiveFollowCommand_h */
