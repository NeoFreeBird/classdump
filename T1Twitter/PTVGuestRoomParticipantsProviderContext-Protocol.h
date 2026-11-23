//
#ifndef PTVGuestRoomParticipantsProviderContext_Protocol_h
#define PTVGuestRoomParticipantsProviderContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSArray, NSString;

@protocol PTVGuestRoomParticipantsProviderContext <NSObject>

@required

@property (nonatomic, readonly) id <PTVLoggedInUserProtocol> loggedInUser;
@property (nonatomic, readonly) NSString *broadcastID;
@property (nonatomic, readonly) _Bool isReplaying;
@property (nonatomic, readonly) _Bool isIncognito;
@property (nonatomic, readonly) NSArray *currentSpeakerIDs;
@property (nonatomic, readonly) NSArray *currentGuestCallers;

/* required instance methods */
- (id)guestRoomUserByID:(id)id;
- (id)guestRoomUserByID:(id)id;

@optional

@end

#endif /* PTVGuestRoomParticipantsProviderContext_Protocol_h */
