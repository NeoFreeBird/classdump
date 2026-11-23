//
#ifndef PTVChatRoomAccess_Protocol_h
#define PTVChatRoomAccess_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVChatRoomPerms.h"

@class NSString;

@protocol PTVChatRoomAccess <NSObject>

@required

@property (readonly) _Bool shouldLog;
@property (readonly) _Bool readOnly;
@property (readonly) PTVChatRoomPerms *chatRoomPerms;
@property (readonly) long long participant_index;
@property (readonly) NSString *roomID;
@property (readonly, nonatomic) _Bool isModerator;
@property (readonly) NSString *endpoint;
@property (readonly) NSString *accessToken;
@property (readonly) _Bool sendStats;
@property (readonly) NSString *replayEndpoint;
@property (readonly) NSString *replayAccessToken;

/* required instance methods */
- (id)bestReplayEndpoint;
- (id)bestReplayAccessToken;

@optional

@end

#endif /* PTVChatRoomAccess_Protocol_h */
