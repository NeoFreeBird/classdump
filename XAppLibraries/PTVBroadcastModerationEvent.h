//
#ifndef PTVBroadcastModerationEvent_h
#define PTVBroadcastModerationEvent_h
@import Foundation;

#include "PTVMergeParticipantUser.h"

@class NSArray, NSObject, NSString;

@interface PTVBroadcastModerationEvent : NSObject

@property (readonly, nonatomic) NSArray *mutingModeratorIds;
@property (readonly, nonatomic) NSArray *unmutingModeratorIds;
@property (readonly, nonatomic) NSString *messageUserId;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSArray *mutingModerators;
@property (retain, nonatomic) NSArray *unmutingModerators;
@property (retain, nonatomic) PTVMergeParticipantUser *messageUser;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (void)hydrateWithUser:(id)user;
- (id)mutingModeratorsString;
- (id)unmutingModeratorsString;

@end

#endif /* PTVBroadcastModerationEvent_h */
