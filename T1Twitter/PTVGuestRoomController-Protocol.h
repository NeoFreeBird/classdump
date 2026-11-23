//
#ifndef PTVGuestRoomController_Protocol_h
#define PTVGuestRoomController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAVPlayback-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol PTVGuestRoomController <NSObject>

@required

@property (nonatomic, copy) NSString *title;
@property (nonatomic) _Bool locked;
@property (nonatomic) _Bool locked;
@property (nonatomic) long long narrowCastType;
@property (nonatomic) long long conversationControlType;
@property (nonatomic) long long contentType;
@property (nonatomic) _Bool muted;
@property (nonatomic) _Bool muted;
@property (nonatomic, copy) NSArray *mentionedTwitterUserIDs;
@property (nonatomic, copy) NSArray *topicIDs;
@property (nonatomic) long long initialPinnedTweetID;
@property (nonatomic) _Bool availableForReplay;
@property (nonatomic) _Bool availableForReplay;
@property (nonatomic) _Bool availableForClipping;
@property (nonatomic) _Bool availableForClipping;
@property (nonatomic) double replayStartTime;
@property (nonatomic, copy) NSDictionary *sourceParameters;
@property (nonatomic) _Bool playAudio;
@property (nonatomic, readonly) double currentPlaybackTime;
@property (nonatomic, copy) NSString *communityID;
@property (nonatomic) _Bool noIncognito;
@property (nonatomic, readonly) _Bool isPreviewing;
@property (nonatomic, readonly) unsigned long long totalUsersCount;
@property (nonatomic, readonly) NSArray *users;
@property (nonatomic, readonly) id <TAVPlayback> playback;

/* required instance methods */
- (_Bool)isLocked;
- (_Bool)isLocked;
- (_Bool)isMuted;
- (_Bool)isMuted;
- (_Bool)isAvailableForReplay;
- (_Bool)isAvailableForReplay;
- (_Bool)isAvailableForClipping;
- (_Bool)isAvailableForClipping;
- (void)updateTitle:(id)title;
- (void)updateLocked:(_Bool)locked;
- (void)updateConversationControlType:(long long)type;
- (void)updateConversationControlType:(long long)type;
- (void)updateMentionedTwitterUserIDs:(id)ids;
- (void)updateTopicIDs:(id)ids;
- (void)updateAvailableForReplay:(_Bool)replay;
- (void)updateAvailableForReplay:(_Bool)replay;
- (void)updateAvailableForClipping:(_Bool)clipping;
- (void)updateAvailableForClipping:(_Bool)clipping;
- (void)updateReplayStartTime:(double)time;
- (void)updateSettingsWithTitle:(id)title availableForReplay:(_Bool)replay availableForClipping:(_Bool)clipping replayStartTime:(double)time completion:(id /* block */)completion;
- (void)updateSettingsWithTitle:(id)title availableForReplay:(_Bool)replay availableForClipping:(_Bool)clipping replayStartTime:(double)time completion:(id /* block */)completion;
- (void)addGuestRoomControllerObserver:(id)observer;
- (void)addGuestRoomControllerObserver:(id)observer;
- (void)removeGuestRoomControllerObserver:(id)observer;
- (void)removeGuestRoomControllerObserver:(id)observer;
- (void)createNewRoomWithChannelID:(id)id;
- (void)createNewRoomWithChannelID:(id)id;
- (void)previewRoomWithGuestRoom:(id)room videoAccessManager:(id)manager;
- (void)previewRoomWithGuestRoom:(id)room videoAccessManager:(id)manager;
- (void)joinExistingRoomWithGuestRoom:(id)room joinMode:(unsigned long long)mode videoAccessManager:(id)manager sourceParameters:(id)parameters;
- (void)joinExistingRoomWithGuestRoom:(id)room joinMode:(unsigned long long)mode videoAccessManager:(id)manager sourceParameters:(id)parameters;
- (void)publishScheduledRoomWithRoomID:(id)id;
- (void)publishScheduledRoomWithRoomID:(id)id;
- (void)startPublishLifecycleWithVideoAccessManager:(id)manager;
- (void)startPublishLifecycleWithVideoAccessManager:(id)manager;
- (void)playClipWithGuestRoom:(id)room videoAccessManager:(id)manager sourceParameters:(id)parameters;
- (void)playClipWithGuestRoom:(id)room videoAccessManager:(id)manager sourceParameters:(id)parameters;
- (void)getClipWithID:(id)id completion:(id /* block */)completion;
- (void)createClipWithBroadcastID:(id)id startTime:(double)time endTime:(double)time completion:(id /* block */)completion;
- (void)createClipWithBroadcastID:(id)id startTime:(double)time endTime:(double)time completion:(id /* block */)completion;
- (void)prepareReconnectHostWithBroadcastID:(id)id completion:(id /* block */)completion;
- (void)prepareReconnectHostWithBroadcastID:(id)id completion:(id /* block */)completion;
- (void)reconnectHostWithBroadcastID:(id)id completion:(id /* block */)completion;
- (void)reconnectHostWithBroadcastID:(id)id completion:(id /* block */)completion;
- (void)shutdown;
- (void)switchAsSpeaker;
- (void)cancelSwitchAsSpeaker;
- (void)switchAsListener;
- (_Bool)canAcceptMoreSpeakers;
- (void)acceptUserAsSpeaker:(id)speaker;
- (void)acceptUserAsSpeaker:(id)speaker;
- (void)rejectUserAsSpeaker:(id)speaker;
- (void)rejectUserAsSpeaker:(id)speaker;
- (void)removeUserAsSpeaker:(id)speaker;
- (void)removeUserAsSpeaker:(id)speaker;
- (void)inviteUserAsSpeaker:(id)speaker;
- (void)inviteUserAsSpeaker:(id)speaker;
- (void)inviteUserAsAdmin:(id)admin;
- (void)inviteUserAsAdmin:(id)admin;
- (void)switchAsAdmin;
- (void)removeUserAsAdmin:(id)admin isPending:(_Bool)pending completion:(id /* block */)completion;
- (void)removeUserAsAdmin:(id)admin isPending:(_Bool)pending completion:(id /* block */)completion;
- (void)sendEmoji:(id)emoji;
- (void)sendPrivateEmoji:(id)emoji toUser:(id)user;
- (void)sendPrivateEmoji:(id)emoji toUser:(id)user;
- (void)sendText:(id)text language:(id)language;
- (void)sendSharingEventString:(id)string;
- (void)ingestLiveChatMessage:(id)message;
- (id)guestRoomUserByTwitterID:(id)id;
- (id)guestRoomUserByTwitterID:(id)id;
- (void)resetChatToCurrentTime;
- (void)requestGuestRoomMuted:(_Bool)muted;
- (void)setUserMuted:(_Bool)muted user:(id)user;
- (void)setRaisedHandEmoji:(id)emoji forUser:(id)user;
- (void)setRaisedHandEmoji:(id)emoji forUser:(id)user;
- (void)addUserToDenylist:(id)denylist;
- (void)addUserToDenylist:(id)denylist;
- (void)removeUserFromDenylist:(id)denylist;
- (void)removeUserFromDenylist:(id)denylist;
- (void)denylistWithCompletion:(id /* block */)completion;
- (void)denylistWithCompletion:(id /* block */)completion;
- (void)addUsersToAllowlist:(id)allowlist;
- (void)addUsersToAllowlist:(id)allowlist;
- (void)removeUserFromAllowlist:(id)allowlist;
- (void)removeUserFromAllowlist:(id)allowlist;
- (void)allowlistWithCompletion:(id /* block */)completion;
- (void)allowlistWithCompletion:(id /* block */)completion;
- (id)reportTypesForUser:(id)user;
- (id)reportTypesForUser:(id)user;
- (id)reportTypesForGuestRoom;
- (void)reportUser:(id)user withType:(id)type roomID:(id)id;
- (void)reportUser:(id)user withType:(id)type roomID:(id)id;
- (void)reportGuestRoomWithType:(id)type roomID:(id)id fromFeed:(_Bool)feed;
- (void)reportGuestRoomWithType:(id)type roomID:(id)id fromFeed:(_Bool)feed;
- (void)locallyHideGuestRoomWithID:(id)id;
- (void)locallyHideGuestRoomWithID:(id)id;
- (id)liveVideoView;
- (id)localCameraView;
- (void)selectNextPhoneCamera;
- (_Bool)isPhoneCameraInFrontPosition;
- (_Bool)isCameraDisabledForUser:(id)user;
- (_Bool)isCameraDisabledForUser:(id)user;
- (void)setUserCameraDisabled:(_Bool)disabled user:(id)user;
- (void)shutdownCamera;
- (void)updateInterfaceOrientation;
- (void)fetchParticipantsWithProviderContext:(id)context completion:(id /* block */)completion;
- (void)fetchParticipantsWithProviderContext:(id)context completion:(id /* block */)completion;
- (void)logVoiceRoomEvent:(id)event;
- (id)debugViewController;
- (id)ownedViewControllers;
- (id)janusURL;

@optional

@end

#endif /* PTVGuestRoomController_Protocol_h */
