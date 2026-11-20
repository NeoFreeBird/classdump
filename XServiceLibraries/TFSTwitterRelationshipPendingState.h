//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRelationshipPendingState_h
#define TFSTwitterRelationshipPendingState_h
@import Foundation;

@class NSObject;

@interface TFSTwitterRelationshipPendingState : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 relationship;
    B24@0:8@"NSString"16 relationshipForProtectedUser;
    B24@0:8@"NSString"16 identifier;
}

/* class methods */
+ (id)disableRetweetsForUserID:(long long)id;
+ (id)enableRetweetsForUserID:(long long)id;
+ (id)muteUserID:(long long)id;
+ (id)unmuteUserID:(long long)id;
+ (id)blockUserID:(long long)id;
+ (id)unblockUserID:(long long)id;
+ (id)followUserID:(long long)id;
+ (id)unfollowUserID:(long long)id;
+ (id)deviceFollowUserID:(long long)id;
+ (id)deviceUnfollowUserID:(long long)id;
+ (id)liveFollowUserID:(long long)id;
+ (id)liveUnfollowUserID:(long long)id;
+ (id)exclusiveTweetFollowUserID:(long long)id;
+ (id)exclusiveTweetUnfollowUserID:(long long)id;
+ (id)replyDeviceFollowUserID:(long long)id;
+ (id)replyDeviceUnfollowUserID:(long long)id;
+ (id)cancelFollowRequestForUserID:(long long)id;
+ (id)acceptFollowRequestFromUserID:(long long)id;
+ (id)enableSuperFollowPrivacyForUserID:(long long)id;
+ (id)disableSuperFollowPrivacyForUserID:(long long)id;

/* instance methods */
- (id)initWithUserID:(long long)id relationship:(id)relationship;
- (id)registerWithModelContext:(id)context;
- (_Bool)willCauseFollowForUser:(id)user;
- (_Bool)willCauseUnfollowForUser:(id)user;
- (id)init;

@end

#endif /* TFSTwitterRelationshipPendingState_h */
