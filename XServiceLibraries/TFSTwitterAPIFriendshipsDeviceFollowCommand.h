//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
