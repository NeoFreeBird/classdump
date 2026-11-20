//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardSpaceViewController_h
#define T1StandardSpaceViewController_h
@import Foundation;

#include "T1PlaybackDwellLingerScriber.h"
#include "T1SpaceDockActions-Protocol.h"
#include "T1VoiceRoomCohostInviteViewControllerDelegate-Protocol.h"
#include "T1VoiceRoomDockableView.h"
#include "T1VoiceRoomDockableViewDelegate-Protocol.h"
#include "T1VoiceRoomEndedViewControllerDelegate-Protocol.h"
#include "T1VoiceRoomHostReconnectViewControllerDelegate-Protocol.h"
#include "T1VoiceRoomPlaySpaceViewController.h"
#include "T1VoiceRoomSharingsViewController.h"
#include "T1VoiceRoomSharingsViewControllerDelegate-Protocol.h"
#include "T1VoiceRoomTutorialViewControllerDelegate-Protocol.h"
#include "T1VoiceRoomView.h"
#include "T1VoiceRoomViewDelegate-Protocol.h"
#include "T1VoiceRoomVoiceTransformerControllerDelegate-Protocol.h"
#include "TASAmbientMusicSettingsViewControllerDelegate-Protocol.h"
#include "TASItemsDataViewControllerDelegate-Protocol.h"
#include "TASSharingDelegate-Protocol.h"
#include "TASSpaceClipNuxDelegate-Protocol.h"
#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"
#include "TASSpaceViewController-Protocol.h"
#include "TASSpacesNavigatable-Protocol.h"
#include "TASSurveyViewControllerDelegate-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TFNModalSheetViewControllerDelegate-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TFNToasterContextDelegate-Protocol.h"
#include "TUIVoiceDockViewControllerContainer-Protocol.h"
#include "TUIVoiceDockableContent-Protocol.h"
#include "VoiceRoomReplaySpeakerConsentViewControllerDelegate-Protocol.h"
#include "XNAVContentScrollViewProviding-Protocol.h"
#include "_TtC14T1TwitterSwift30SuperFollowButtonActionHandler.h"

@class AVAudioEngine, AVAudioPlayerNode, NSCache, NSString, TASLiveCaptionsViewController, TASSharing, TASSpacesAudioAssetWarmer, TASSpacesNavigationSource, TFNViewController, UIBarButtonItem, UIImage, UIScrollView, UIView, UIViewController;

@interface T1StandardSpaceViewController : TFNViewController <XNAVContentScrollViewProviding, T1SpaceDockActions, T1VoiceRoomCohostInviteViewControllerDelegate, T1VoiceRoomDockableViewDelegate, T1VoiceRoomEndedViewControllerDelegate, T1VoiceRoomHostReconnectViewControllerDelegate, VoiceRoomReplaySpeakerConsentViewControllerDelegate, T1VoiceRoomSharingsViewControllerDelegate, T1VoiceRoomTutorialViewControllerDelegate, T1VoiceRoomViewDelegate, T1VoiceRoomVoiceTransformerControllerDelegate, TASItemsDataViewControllerDelegate, TASSharingDelegate, TASSurveyViewControllerDelegate, TASSpaceClipNuxDelegate, TASSpaceModelObserver, TFNModalSheetViewControllerLayoutDelegate, TFNToasterContextDelegate, TAVPlaybackObserver, TASAmbientMusicSettingsViewControllerDelegate, TASSpaceViewController, TFNModalSheetViewControllerDelegate>

@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIBarButtonItem *shareBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *optionsBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *leaveBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *closeTextBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *closeImageBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *dockBarButtonItem;
@property (retain, nonatomic) T1VoiceRoomView *voiceRoomView;
@property (retain, nonatomic) T1VoiceRoomDockableView *dockableView;
@property (retain, nonatomic) T1VoiceRoomSharingsViewController *sharingsViewController;
@property (retain, nonatomic) TASLiveCaptionsViewController *liveCaptionsViewController;
@property (retain, nonatomic) T1VoiceRoomPlaySpaceViewController *voiceRoomPlaySpaceViewController;
@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioPlayerNode *audioFilePlayer;
@property (retain, nonatomic) NSCache *audioFileBuffers;
@property (retain, nonatomic) id lockScreenManager;
@property (retain, nonatomic) TASSpacesAudioAssetWarmer *audioAssetWarmer;
@property (nonatomic) unsigned long long soundsMenuJoinGuestSoundIndex;
@property (nonatomic) _Bool presentingRectifyViewController;
@property (nonatomic) _Bool shouldDisableApplicationIdleTimer;
@property (retain, nonatomic) id disablingApplicationIdleTimerToken;
@property (nonatomic) _Bool alreadyLoggedFirstSpeakerJoined;
@property (nonatomic) _Bool hasSeekedToReplayStartTime;
@property (nonatomic) _Bool isEditingTitle;
@property (nonatomic) _Bool isCreating;
@property (nonatomic) _Bool hasBeenAdmin;
@property (nonatomic) _Bool hasBeenSpeaker;
@property (retain, nonatomic) TASSpacesNavigationSource *navigationSource;
@property (retain, nonatomic) T1PlaybackDwellLingerScriber *dwellLingerScriber;
@property (retain, nonatomic) UIViewController *overlayViewController;
@property (nonatomic) _Bool shareNudgePreviouslyDismissed;
@property (nonatomic) _Bool hasPresentedHostTimeout;
@property (nonatomic) _Bool isPresentingEmojiMenu;
@property (nonatomic) _Bool leaveShouldContinueToEndedSpace;
@property (retain, nonatomic) id <TASSpacesNavigatable> spacesNavigation;
@property (retain, nonatomic) T1TwitterSwift.SuperFollowButtonActionHandler *superFollowButtonActionHandler;
@property (readonly, nonatomic) UIImage *thumbsUpAndDownImage;
@property (nonatomic) long long ambientMusicEventState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <TASSpaceModel> spaceModel;
@property (readonly, nonatomic) TASSharing *sharing;
@property (weak, nonatomic) id <TUIVoiceDockViewControllerContainer> dockContainer;
@property (readonly, nonatomic) UIView<TUIVoiceDockableContent> *dockContentView;
@property (nonatomic) _Bool hasAudioFocus;
@property (readonly, nonatomic) _Bool isPaused;
@property (readonly, nonatomic) _Bool isPlaying;
@property (readonly, nonatomic) NSString *playerIdentifier;
@property (readonly, nonatomic) _Bool allowAutoplay;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithSpaceModel:(id)model isPreview:(_Bool)preview isReplay:(_Bool)replay isCreating:(_Bool)creating navigationSource:(id)source;
- (void)updateSpaceModel:(id)model isPreview:(_Bool)preview isReplay:(_Bool)replay;
- (void)dealloc;
- (void)viewDidLoad;
- (void)refreshSpaceView;
- (void)viewControllerWillPresentAnimated:(_Bool)animated;
- (void)viewControllerDidDismissAnimated:(_Bool)animated;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)controller;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)_t1_updateViewHeaderViewHeight;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)_t1_updateOverlay;
- (void)_t1_installOverlayView;
- (void)_t1_updateHeightForOverlay;
- (void)_t1_accountWasRemoved:(id)removed;
- (void)_t1_accountDidBecomeInactive:(id)inactive;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)tfn_contentScrollView;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)modalSheetViewController:(id)controller didPanToCurrentHeight:(double)height preferredHeight:(double)height maximumHeight:(double)height mode:(long long)mode;
- (void)modalSheetViewControllerWillDismiss:(id)dismiss fromGesture:(_Bool)gesture;
- (void)modalSheetViewControllerDidDismiss:(id)dismiss fromGesture:(_Bool)gesture;
- (void)pause;
- (void)play;
- (void)spaceModel:(id)model didUpdateSpaceID:(id)id;
- (void)spaceModelSharingNeedsUpdate:(id)update;
- (void)spaceModel:(id)model didReceiveSharingEvent:(id)event;
- (void)spaceModel:(id)model didChangeTitleValue:(id)value;
- (void)spaceModel:(id)model didUpdateUsersModels:(id)models;
- (void)spaceModel:(id)model didPostNotificationModel:(id)model;
- (void)spaceModel:(id)model didUpdateLoggedInUserModel:(id)model;
- (void)spaceModelDidChangeConnectionState:(id)state fromState:(long long)state;
- (void)_t1_leaveFinishedSpace:(id)space;
- (void)spaceModel:(id)model didReceiveAuthErrorWithRectifyURL:(id)url;
- (void)spaceModel:(id)model didReceiveInvitationToJoinAsSpeakerFromUser:(id)user;
- (void)spaceModel:(id)model didReceiveInvitationToBecomeAdminFromUser:(id)user;
- (void)spaceModel:(id)model didReceiveAcceptanceToBecomeAdminFromUser:(id)user;
- (void)spaceModel:(id)model didReceiveDeclinationToBecomeAdminFromUser:(id)user;
- (void)spaceModel:(id)model didReceiveAdminCancellationFromUser:(id)user;
- (id)_t1_cohostInviteViewControllerInViewController:(id)controller;
- (void)spaceModel:(id)model didReceiveAdminRemovalFromUser:(id)user;
- (void)spaceModel:(id)model didReceiveConferenceJoinRequestFromUser:(id)user;
- (void)spaceModel:(id)model didFailToStartScheduledSpaceWithError:(id)error;
- (void)spaceModelDidUpdateProperties:(id)properties;
- (void)spaceModel:(id)model didUpdateIsCaptionsVisible:(_Bool)visible;
- (void)spaceModel:(id)model didUpdateEntityStatus:(id)status;
- (void)spaceModel:(id)model didUpdatePlayback:(id)playback;
- (void)spaceModelDidShutdown:(id)shutdown;
- (void)sharing:(id)sharing sendSharingEvent:(id)event;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)_t1_startReplayingAtStartTimeIfNeeded;
- (void)_t1_setupLiveCaptionsViewController;
- (void)_t1_teardownLiveCaptionsViewController;
- (void)itemsDataViewControllerDidTapLeave:(id)leave;
- (void)ambientMusicSettingsViewControllerDidChangeTrack:(id)track;
- (void)voiceRoomView:(id)view didLongPressUserModel:(id)model sourceView:(id)view;
- (void)voiceRoomView:(id)view didSelectUserModel:(id)model sourceView:(id)view;
- (void)voiceRoomViewDidBeginEditingTitle:(id)title;
- (void)voiceRoomViewDidEndEditingTitle:(id)title;
- (void)voiceRoomView:(id)view didTapTitleActiveTextRange:(id)range;
- (void)voiceRoomViewDidTapMuteButton:(id)button;
- (void)voiceRoomViewDidTapSpeakButton:(id)button;
- (void)voiceRoomViewDidTapCameraButton:(id)button;
- (void)_t1_setupAndEnableCamera;
- (void)voiceRoomViewDidTapRecordingView:(id)view;
- (void)voiceRoomView:(id)view didTapOnJoinButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnClippingButton:(id)button;
- (void)voiceRoomView:(id)view didSetReplayStartTime:(double)time;
- (void)voiceRoomView:(id)view didTapOnClosedCaptionsButton:(id)button;
- (void)_t1_updateAmbientMusicWithSpaceModel:(id)model;
- (void)_t1_ambientMusicIntroMusicStateChangeEventWithSpaceModel:(id)model;
- (void)_t1_startAmbientMusic;
- (id /* block */)_t1_ambientMusicStartCompletion;
- (void)_t1_stopAmbientMusic:(_Bool)music;
- (void)voiceRoomView:(id)view didTapOnRequestsButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnMuteEveryoneButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnAdminInvitedButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnGuestsAccessibilityView:(id)view;
- (void)voiceRoomViewDidTapMusicPlayPauseButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnTweetButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnShareButton:(id)button overridingScribeContext:(id)context;
- (void)voiceRoomView:(id)view didTapOnEmojiButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnGuestsButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnPlaySpaceButton:(id)button;
- (void)voiceRoomView:(id)view dismissPlayspaceIfNeeded:(id)needed;
- (void)_t1_updatePreferredHeightAnimated:(_Bool)animated;
- (void)voiceRoomView:(id)view didChangeContentsHeaderViewPullPercentage:(double)percentage;
- (void)voiceRoomViewDidTapParticipantsFooterView:(id)view;
- (void)voiceRoomViewDidTapPivotView:(id)view;
- (void)voiceRoomView:(id)view didPresentPromptWithType:(long long)type;
- (void)voiceRoomView:(id)view didFollowUser:(id)user;
- (void)voiceRoomView:(id)view didTapExclusiveSpaceDisclaimerWithProposedModal:(id)modal;
- (void)voiceRoomView:(id)view didTapSuperFollowButton:(id)button;
- (void)voiceRoomView:(id)view didTapLearnMoreWithPageURL:(id)url;
- (void)voiceRoomViewDidTapIncognitoBanner:(id)banner;
- (void)voiceRoomDockableViewWasTapped:(id)tapped;
- (void)voiceRoomDockableViewCloseButtonWasTapped:(id)tapped;
- (void)voiceRoomDockableViewMuteButtonWasTapped:(id)tapped;
- (void)voiceRoomDockableViewPauseButtonWasTapped:(id)tapped;
- (void)voiceRoomDockableViewPlayButtonWasTapped:(id)tapped;
- (void)voiceRoomDockableViewSkipAheadButtonWasTapped:(id)tapped;
- (void)dockDidTapOpen;
- (void)dockDidTapClose;
- (void)dockDidTapMute;
- (void)dockDidTapPause;
- (void)dockDidTapPlay;
- (void)dockDidTapSkipAhead;
- (void)voiceRoomSharingsViewController:(id)controller didTapTweet:(id)tweet;
- (void)voiceRoomSharingsViewControllerDidTapSummaryLabel:(id)label;
- (void)voiceRoomHostReconnectViewControllerDidReconnect:(id)reconnect;
- (void)voiceRoomHostReconnectViewControllerDidEnd:(id)end isReplayAvailable:(_Bool)available;
- (void)_t1_leaveWithReconnectToShutdown;
- (void)_t1_showReconnectView;
- (void)_t1_removeReconnectView;
- (_Bool)_t1_isPresentingHostReconnect;
- (id)_t1_optionsMenuActionItemsForBarButtonItem:(id)item;
- (void)_t1_presentShareMenuWithSourceView:(id)view overridingScribeContext:(id)context;
- (void)_t1_presentHangUpMenuFromBarButtonItem:(id)item;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (_Bool)_t1_shouldAccrueDwellLinger;
- (void)_t1_updateDwellLinger;
- (void)_t1_logClickActionOnElement:(id)element inComponent:(id)component;
- (void)_t1_logImpressionActionToComponent:(id)component;
- (void)_t1_logClickFromLockScreenOnElement:(id)element inComponent:(id)component;
- (void)_t1_logFirstSpeakerJoinedIfNeeded;
- (void)scribeViewImpressionWithParameters:(id)parameters;
- (void)_t1_updateCrashlyticsWithSpaceModel:(id)model;
- (id)scribePageForToaster:(id)toaster;
- (void)_t1_didTapDockBarButton:(id)button;
- (void)leave;
- (void)_t1_updateTitle;
- (void)_t1_updateBarButtonItems;
- (id)_t1_bottomSegmentController;
- (_Bool)_t1_isDockRedesignEnabled;
- (id)_t1_voiceDock;
- (void)_t1_addToDock;
- (void)_t1_addToGlassDock:(id)dock;
- (void)_t1_revealGlassDockAnimated:(_Bool)animated;
- (void)_t1_removeFromDock;
- (void)_t1_switchAsSpeakerWithInvitation:(_Bool)invitation shouldJoin:(_Bool)join;
- (void)_t1_switchAsSpeakerWithShouldJoin:(_Bool)join;
- (void)_t1_displayReplyToAdminInviteView:(id)view;
- (void)_t1_join;
- (void)leaveWithReason:(long long)reason scribeSection:(id)section scribeComponent:(id)component;
- (void)_t1_presentDestroyConfirmation;
- (void)_t1_presentSaveRecordingConfirmation;
- (void)_t1_updateReplayAvailable:(_Bool)available withCompletion:(id /* block */)completion;
- (void)_t1_reportSpace;
- (void)_t1_disableReplaySpace;
- (void)_t1_presentEntityStatusConversationControls;
- (void)_t1_presentRectify;
- (void)_t1_presentPlaySpace:(id)space belowView:(id)view;
- (void)_t1_dismissPlaySpace;
- (void)_t1_presentGuests;
- (void)_t1_presentGuestsWithFilters:(unsigned long long)filters;
- (void)_t1_presentSettings;
- (void)_t1_presentAmbientMusicSettings;
- (void)_t1_presentTwitterRules;
- (void)_t1_presentAboutSpacesIfNeededWithCreator:(_Bool)creator alwaysPresent:(_Bool)present;
- (void)_t1_presentWelcomeToSpaces;
- (void)_t1_presentTutorialWithMode:(long long)mode;
- (_Bool)_t1_shouldPresentInitialDMInvites;
- (void)_t1_presentInitialDMInvites;
- (void)_t1_playSoundNamed:(id)named;
- (void)_t1_tavWorkerQueue_playSoundNamed:(id)named volume:(float)volume;
- (void)_t1_notification_audioEngineDidChange:(id)change;
- (void)_t1_tavWorkerQueue_resetAudioEngineComponents;
- (void)_t1_buildSharing;
- (void)_t1_updateSharingViewController;
- (void)_t1_handlePotentialTimeout:(id)timeout;
- (_Bool)_t1_isDocked;
- (_Bool)_t1_isPresentingSurvey;
- (void)_t1_setupSurvey;
- (_Bool)_t1_isPresentingEndedSpace;
- (void)_t1_removeEndedSpaceView;
- (void)_t1_presentEndedSpace;
- (void)surveyViewControllerDidFinish:(id)finish;
- (void)endedViewControllerDidFinish:(id)finish;
- (void)_t1_updateDisableApplicationIdleTimer;
- (void)tutorialViewControllerDidTapDismissButton:(id)button;
- (void)replaySpeakerConsentViewControllerDidConfirm:(id)confirm;
- (void)replaySpeakerConsentViewControllerDidCancel:(id)cancel;
- (void)cohostInviteViewController:(id)controller didConfirmInviteForUsers:(id)users;
- (void)cohostInviteViewController:(id)controller didCancelInviteForUsers:(id)users;
- (void)voiceTransformerController:(id)controller didUpdateEffectImageName:(id)name;
- (void)onSpaceClipNuxSettingsTap;

@end

#endif /* T1StandardSpaceViewController_h */
