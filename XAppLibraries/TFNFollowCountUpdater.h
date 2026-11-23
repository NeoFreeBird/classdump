//
#ifndef TFNFollowCountUpdater_h
#define TFNFollowCountUpdater_h
@import Foundation;

@class NSArray, NSObject, TFSModelContext, TFSPendingStateToken;

@interface TFNFollowCountUpdater : NSObject

@property (nonatomic) long long numberOfRequests;
@property (nonatomic) long long deltaCount;
@property (nonatomic) long long userFollowingID;
@property (retain, nonatomic) NSArray *usersToFollow;
@property (retain, nonatomic) TFSPendingStateToken *userFollowingPendingState;
@property (retain, nonatomic) TFSPendingStateToken *userToFollowPendingState;
@property (retain, nonatomic) TFSModelContext *modelContext;

/* class methods */
+ (id)updaterForRequestFromUserWithID:(long long)id toUserWithID:(long long)id forFollowing:(_Bool)following modelContext:(id)context;
+ (id)updaterForBulkRequestFromUserWithID:(long long)id toUsersWithIDs:(id)ids forFollowing:(_Bool)following modelContext:(id)context;

/* instance methods */
- (_Bool)isInUse;
- (void)handleRequestStart;
- (void)handleRequestCompletionWithSuccess:(_Bool)success;

@end

#endif /* TFNFollowCountUpdater_h */
