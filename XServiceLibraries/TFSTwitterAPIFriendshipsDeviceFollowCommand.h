//
#ifndef TFSTwitterAPIFriendshipsDeviceFollowCommand_h
#define TFSTwitterAPIFriendshipsDeviceFollowCommand_h
@import Foundation;

#include "TFSTwitterAPIFriendshipsFollowBaseCommand.h"

@interface TFSTwitterAPIFriendshipsDeviceFollowCommand : TFSTwitterAPIFriendshipsFollowBaseCommand // (Swift)

/* instance methods */
- (id)initWithAccountID:(id)id followRequest:(id)request context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)processResponse:(id)response;

@end

#endif /* TFSTwitterAPIFriendshipsDeviceFollowCommand_h */
