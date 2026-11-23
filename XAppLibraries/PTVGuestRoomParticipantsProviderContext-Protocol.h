//
#ifndef PTVGuestRoomParticipantsProviderContext_Protocol_h
#define PTVGuestRoomParticipantsProviderContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSArray, NSString;

@protocol PTVGuestRoomParticipantsProviderContext <NSObject>

@required

@property (readonly, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser;
@property (readonly, nonatomic) NSString *broadcastID;
@property (readonly, nonatomic) _Bool isReplaying;
@property (readonly, nonatomic) _Bool isIncognito;
@property (readonly, nonatomic) NSArray *currentSpeakerIDs;
@property (readonly, nonatomic) NSArray *currentGuestCallers;

/* required instance methods */
- (id)guestRoomUserByID:(id)id;

@optional

@end

#endif /* PTVGuestRoomParticipantsProviderContext_Protocol_h */
