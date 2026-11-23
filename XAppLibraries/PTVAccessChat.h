//
#ifndef PTVAccessChat_h
#define PTVAccessChat_h
@import Foundation;

#include "PTVChatRoomAccess-Protocol.h"
#include "PTVChatRoomPerms.h"

@class NSObject, NSString;

@interface PTVAccessChat : NSObject <PTVChatRoomAccess>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)bestReplayEndpoint;
- (id)bestReplayAccessToken;
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* PTVAccessChat_h */
