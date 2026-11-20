//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSpaceModel_Protocol_h
#define TASSpaceModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TASSettings.h"
#include "TASSpacesContext-Protocol.h"
#include "TASTitleValue.h"
#include "TASTooltipper.h"
#include "TASUserModel-Protocol.h"
#include "TASVoiceAccountPerspective-Protocol.h"
#include "TAVPlayback-Protocol.h"
#include "TCMCommunityModel.h"
#include "TFNTwitterMediaImagePipeline.h"
#include "_TtP18TwitterAudiospaces19TASTweetPerspective_-Protocol.h"

@class NSArray, NSDate, NSString, NSURL, TFSTwitterForwardPivot, UIView;

@protocol TASSpaceModel <NSObject>

@required

@property (nonatomic, readonly) id <TASSpacesContext> context;
@property (nonatomic, readonly) id <TASVoiceAccountPerspective> account;
@property (nonatomic, readonly) NSString *spaceID;
@property (nonatomic, readonly) NSString *conferenceKey;
@property (nonatomic, readonly) TFNTwitterMediaImagePipeline *imagePipeline;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, readonly) unsigned long long maximumNumberOfSpeakers;
@property (nonatomic, readonly) unsigned long long maximumNumberOfAdmins;
@property (nonatomic, readonly) unsigned long long maximumNumberOfJoinGuestSounds;
@property (nonatomic, readonly) NSArray *usersModels;
@property (nonatomic, readonly) id <TASUserModel> loggedInUserModel;
@property (nonatomic, readonly) id <TASUserModel> creatorUserModel;
@property (nonatomic, readonly) unsigned long long totalPeopleCount;
@property (nonatomic, readonly) unsigned long long additionalPeopleCount;
@property (nonatomic, readonly) unsigned long long blockedSpeakersCount;
@property (nonatomic, readonly) unsigned long long totalLiveParticipatedCount;
@property (nonatomic, readonly) unsigned long long totalReplayWatchedCount;
@property (nonatomic, readonly) unsigned long long totalParticipatedLiveAndReplayCount;
@property (nonatomic, readonly) TASTitleValue *titleValue;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *shareLink;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *cancellationDate;
@property (nonatomic, readonly) NSDate *scheduledStartDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) _Bool isSubscribed;
@property (nonatomic, readonly) unsigned long long subscriberCount;
@property (nonatomic, readonly) _Bool isPlaybackAvailable;
@property (nonatomic, readonly) NSString *authErrorMessage;
@property (nonatomic, readonly) NSURL *authErrorRectifyURL;
@property (nonatomic, readonly) NSDate *expectedTimeout;
@property (nonatomic, readonly) id <TwitterAudiospaces.TASTweetPerspective> entityStatus;
@property (nonatomic) _Bool isCaptionsVisible;
@property (nonatomic, readonly) _Bool isCaptionsViewHidden;
@property (nonatomic, readonly) _Bool isCaptionsAvailable;
@property (nonatomic) _Bool isEditingTitle;
@property (nonatomic, readonly) TASSettings *settings;
@property (nonatomic) long long automaticJoiningAsSpeakerStatus;
@property (nonatomic) _Bool isIncognito;
@property (nonatomic) _Bool isGroupCall;
@property (nonatomic, readonly) id <TAVPlayback> playback;
@property (nonatomic, readonly) TASTooltipper *tooltipper;
@property (nonatomic, readonly) TFSTwitterForwardPivot *forwardPivot;
@property (nonatomic, readonly) NSString *trackMetadata;
@property (nonatomic) _Bool isTransitioningToAdmin;
@property (nonatomic, readonly) _Bool shouldPresentSurvey;
@property (nonatomic, readonly) _Bool isSharingEnabled;
@property (nonatomic, readonly) _Bool shouldUseEntityStatus;
@property (nonatomic, readonly) _Bool isEntityTweetSharingEnabled;
@property (nonatomic, readonly) _Bool isRecordingEnabled;
@property (nonatomic, readonly) _Bool canReplaySpace;
@property (nonatomic, readonly) _Bool isHostTimedOut;
@property (nonatomic, readonly) _Bool isTrending;
@property (nonatomic, readonly) _Bool disallowJoin;
@property (nonatomic, readonly) _Bool isSpaceEligibleToEnableClipping;
@property (nonatomic, readonly) _Bool isClippingSettingsEnabled;
@property (nonatomic) _Bool isClippingEnabled;
@property (nonatomic, readonly) _Bool isAmbientBackgroundMusicAvailable;
@property (nonatomic, readonly) _Bool playAudio;
@property (nonatomic, readonly) _Bool canRaiseHand;
@property (nonatomic, copy) NSString *raisedHandEmoji;
@property (nonatomic, readonly) NSString *participantsCountString;
@property (nonatomic, readonly) UIView *liveVideoView;
@property (nonatomic, readonly) double liveVideoAspect;
@property (nonatomic, readonly) UIView *localCameraView;
@property (nonatomic, readonly) _Bool canSelectNextPhoneCamera;
@property (nonatomic, readonly) _Bool isPhoneCameraInFrontPosition;
@property (nonatomic, readonly) _Bool canUseLocalCamera;
@property (nonatomic) long long localCameraState;
@property (nonatomic) long long videoPresentationMode;
@property (nonatomic, readonly) NSString *communityID;
@property (nonatomic, readonly) TCMCommunityModel *communityModel;

/* required instance methods */
- (void)loadSpaceWithCompletion:(id /* block */)completion;
- (void)previewSpaceWithPlayback:(_Bool)playback;
- (void)resetOnLeaveSpace;
- (void)prepareReconnectHostWithCompletion:(id /* block */)completion;
- (void)reconnectHostWithCompletion:(id /* block */)completion;
- (void)reconnectToShutdown;
- (id)generateClipDataWithClipDuration:(double)duration;
- (void)joinOrCreateSpaceWithSourceParameters:(id)parameters;
- (void)setupReplay;
- (void)toggleReplaySpace:(_Bool)space completion:(id /* block */)completion;
- (void)shutdown;
- (void)updateAudioHeartbeatTimer;
- (void)subscribeScheduledAudiospaceFromSender:(id)sender automaticToast:(_Bool)toast;
- (void)unsubscribeScheduledAudiospaceFromSender:(id)sender;
- (void)startScheduledSpace;
- (void)approveConferenceJoinRequestWithIds:(id)ids;
- (void)addSpaceModelObserver:(id)observer;
- (void)removeSpaceModelObserver:(id)observer;
- (_Bool)canAddUserToDenyList:(id)list;
- (void)addUserToDenylist:(id)denylist;
- (void)removeUserFromDenylist:(id)denylist;
- (void)denylistWithCompletion:(id /* block */)completion;
- (void)addUsersToAllowlist:(id)allowlist;
- (void)removeUserFromAllowlist:(id)allowlist;
- (void)allowlistWithCompletion:(id /* block */)completion;
- (void)blockUser:(id)user addToDenylist:(_Bool)denylist;
- (void)unblockUser:(id)user;
- (id)reportMenuActionItemsForUser:(id)user addToDenylist:(_Bool)denylist;
- (id)reportMenuActionItemsForSpaceFromFeed:(_Bool)feed completion:(id /* block */)completion;
- (void)locallyHideSpace;
- (_Bool)canAddUserAsSpeaker:(id)speaker;
- (void)addUserAsSpeaker:(id)speaker;
- (_Bool)canRejectUserAsSpeaker:(id)speaker;
- (void)rejectUserAsSpeaker:(id)speaker;
- (void)inviteSpeakers:(id)speakers;
- (_Bool)canRemoveUserFromSpeakers:(id)speakers;
- (void)removeUserFromSpeakers:(id)speakers;
- (_Bool)canInviteUserAsSpeaker:(id)speaker;
- (void)inviteUserAsSpeaker:(id)speaker;
- (void)cancelInvitationAsSpeakerForUser:(id)user;
- (_Bool)canInviteUserAsAdmin:(id)admin;
- (_Bool)hasAdminInvitesRemaining;
- (_Bool)isBelowAdminInviteLimitForUser:(id)user;
- (void)inviteUsersAsAdmins:(id)admins;
- (_Bool)canCancelInviteUserAsAdmin:(id)admin;
- (void)cancelInvitationAsAdminForUser:(id)user;
- (_Bool)isUserPendingAdmin:(id)admin;
- (void)switchAsAdmin;
- (_Bool)canRemoveUserFromAdmins:(id)admins;
- (void)removeUserFromAdmins:(id)admins;
- (_Bool)canMuteSpeaker:(id)speaker;
- (void)toggleMute;
- (void)toggleMuteUser:(id)user;
- (void)toggleMuteEveryone;
- (void)didUpdateAmbientBackgroundMusic;
- (void)togglePlayAudio;
- (void)updatePlayAudio:(_Bool)audio;
- (void)updateSettingsTitle:(id)title;
- (void)updateReplayStartTime:(double)time;
- (void)switchAsSpeaker;
- (void)cancelSwitchAsSpeaker;
- (_Bool)canSwitchToListening:(id)listening;
- (void)switchAsListener;
- (void)resignAsSpeakerOrAdmin;
- (void)updateSettings:(id)settings;
- (void)sendEmoji:(id)emoji;
- (void)sendPrivateEmoji:(id)emoji toUser:(id)user;
- (id)userModelWithUser:(id)user;
- (void)userWithUserReference:(id)reference completion:(id /* block */)completion;
- (void)usersWithUserReferences:(id)references completion:(id /* block */)completion;
- (id)scribeItem;
- (id)scribeParameters;
- (id)userActionItemsForUser:(id)user withStyle:(long long)style handler:(id)handler;
- (id)userDenylistActionItemsForUser:(id)user withStyle:(long long)style handler:(id)handler;
- (void)sendSharingEvent:(id)event;
- (void)updateWithUsers:(id)users totalUsersCount:(unsigned long long)count;
- (void)selectNextPhoneCamera;
- (void)updateInterfaceOrientation;
- (id)debugViewController;
- (id)ownedViewControllers;

@optional

@end

#endif /* TASSpaceModel_Protocol_h */
