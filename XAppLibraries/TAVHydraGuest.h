//
#ifndef TAVHydraGuest_h
#define TAVHydraGuest_h
@import Foundation;

#include "TAVHydraParticipant-Protocol.h"

@class NSMutableDictionary, NSNumber, NSObject, NSString, NSURL;

@interface TAVHydraGuest : NSObject <TAVHydraParticipant>

@property (copy, nonatomic) NSNumber *audioLevel;
@property (nonatomic) _Bool isActive;
@property (readonly, copy, nonatomic) NSNumber *participantIndex;
@property (readonly, copy, nonatomic) NSURL *profileURL;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *streamName;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

/* instance methods */
- (id)initWithParticipantIndex:(id)index profileURL:(id)url sessionID:(id)id streamName:(id)name userID:(id)id userName:(id)name;
- (id)initWithJSONObject:(id)jsonobject;
- (id)description;

@end

#endif /* TAVHydraGuest_h */
