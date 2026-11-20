//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASToaster_h
#define TASToaster_h
@import Foundation;

@class NSObject;

@interface TASToaster : NSObject // (Swift)

/* class methods */
+ (id)defaultToaster;

/* instance methods */
- (void)notifyError:(id)error tapHandler:(id /* block */)handler;
- (void)notifyError:(id)error actionTitle:(id)title actionHandler:(id /* block */)handler;
- (void)notifyAddedToDenylistForUser:(id)user;
- (void)notifyReportForRoomWithLeaveHandler:(id /* block */)handler;
- (void)notifyReportForUser:(id)user addedToDenylist:(_Bool)denylist leaveHandler:(id /* block */)handler;
- (void)notifySharedViaDMToUsers:(id)users;
- (void)notifySharedTweetWithSpaceTitle:(id)title;
- (void)notifySharedTweetDeleted;
- (void)notifyBlockForUser:(id)user addedToDenylist:(_Bool)denylist unblockHandler:(id /* block */)handler leaveHandler:(id /* block */)handler;
- (void)notifyRemovedByAdmin;
- (void)notifyAddedAsSpeakerForUser:(id)user;
- (void)notifyRemovedFromSpeakersForUser:(id)user;
- (void)notifySpeakerAdminMutedForUser:(id)user;
- (void)notifySpeakerAdminMutedYou;
- (void)notifyAdminMutedRoom:(_Bool)room;
- (void)notifyBlockedUserJoinedAsSpeakerWithLeaveHandler:(id /* block */)handler;
- (void)notifyInvitedAsSpeakerByAdminUser:(id)user isRecordingEnabled:(_Bool)enabled requestHandler:(id /* block */)handler;
- (void)notifySpeakerInvitesSentForUsers:(id)users;
- (void)notifyAdminInviteSentForUsers:(id)users imagePipeline:(id)pipeline;
- (void)notifyInvitedAsAdminByUser:(id)user imagePipeline:(id)pipeline requestHandler:(id /* block */)handler;
- (void)notifyAcceptedAsAdmin;
- (void)notifyAcceptedAsSpeaker;
- (void)notifyRequestedSpeakerRoleToAdmin:(id)admin;
- (void)notifyAdminInviteCancelled;
- (void)notifyAdminInviteDeclinedByUser:(id)user;
- (void)notifyAddedAsAdminForUser:(id)user;
- (void)notifyAdminRemovedForUser:(id)user;
- (void)notifyAdminRemovedByUser:(id)user;
- (void)notifyAdminInviteLimitReached:(unsigned long long)reached;
- (void)notifyAdminInviteLimitReachedForUser:(id)user;
- (void)notifyFinishedConferenceWithLeaveHandler:(id /* block */)handler;
- (void)notifyFinishedSpaceWithLeaveHandler:(id /* block */)handler;
- (void)notifyFollowing:(id)following imagePipeline:(id)pipeline unfollowHandler:(id /* block */)handler;
- (void)notifyFollowing:(id)following imagePipeline:(id)pipeline seeProfileHandler:(id /* block */)handler;
- (void)notifyReplayStartTimeUpdated:(id)updated;
- (void)notifyReconnectError;
- (void)notifyPotentialHostTimeout;
- (void)notifyHostTimedOut;
- (void)notifyRecordingSavedWithActionHandler:(id /* block */)handler;
- (void)notifyConferenceJoinRequest:(id)request approveHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* TASToaster_h */
