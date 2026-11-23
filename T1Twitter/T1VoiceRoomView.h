//
#ifndef T1VoiceRoomView_h
#define T1VoiceRoomView_h
@import Foundation;

#include "T1SoftInterventionPivotViewDelegate-Protocol.h"
#include "T1StandardSpaceSoftInterventionPivotViewModel.h"
#include "T1VoiceRoomAdminToolsView.h"
#include "T1VoiceRoomAdminToolsViewDelegate-Protocol.h"
#include "T1VoiceRoomCollectionViewFlowLayout.h"
#include "T1VoiceRoomControlsView.h"
#include "T1VoiceRoomControlsViewDelegate-Protocol.h"
#include "T1VoiceRoomDimmingView.h"
#include "T1VoiceRoomDimmingViewDelegate-Protocol.h"
#include "T1VoiceRoomPrivateNotificationView.h"
#include "T1VoiceRoomViewDelegate-Protocol.h"
#include "TASCommunitySpaceBadgeDelegate-Protocol.h"
#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"
#include "TASTitleEditViewDelegate-Protocol.h"
#include "TASVoiceRoomPromptViewDelegate-Protocol.h"
#include "TASVoiceRoomRetractableBarContainerViewDelegate-Protocol.h"
#include "TSFExclusiveSpaceDisclaimerView.h"
#include "TSFExclusiveSpaceDisclaimerViewDelegate-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "VoiceRoomParticipantsFooterViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, TASCommunitySpaceBadge, TASTitleEditView, TASVoiceRoomMetaDetailsView, TASVoiceRoomRecordingView, TASVoiceRoomRetractableBarContainerView, TCMJoinCommunityInteraction, TFNButton, TFSTimer, TIPImagePipeline, TUIUserBadger, UICollectionView, UICollectionViewDiffableDataSource, UIGestureRecognizer, UILabel, UIView;

@interface T1VoiceRoomView : UIView <T1SoftInterventionPivotViewDelegate, T1VoiceRoomAdminToolsViewDelegate, T1VoiceRoomControlsViewDelegate, VoiceRoomParticipantsFooterViewDelegate, TASVoiceRoomRetractableBarContainerViewDelegate, TASSpaceModelObserver, TASTitleEditViewDelegate, UICollectionViewDelegate, TSFExclusiveSpaceDisclaimerViewDelegate, T1VoiceRoomDimmingViewDelegate, TASVoiceRoomPromptViewDelegate, TASCommunitySpaceBadgeDelegate>

@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) TUIUserBadger *userBadger;
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (readonly, nonatomic) TASVoiceRoomRetractableBarContainerView *retractableBarContainerView;
@property (readonly, nonatomic) UIView *contentsHeaderViewBorder;
@property (readonly, nonatomic) NSLayoutConstraint *contentsHeaderViewHeightConstraint;
@property (readonly, nonatomic) T1VoiceRoomCollectionViewFlowLayout *collectionViewLayout;
@property (readonly, nonatomic) UIView *collectionViewContainerView;
@property (readonly, nonatomic) UIGestureRecognizer *collectionViewContainerViewTapGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *collectionViewLongPressGestureRecognizer;
@property (readonly, nonatomic) T1VoiceRoomDimmingView *dimmingView;
@property (readonly, nonatomic) TASVoiceRoomRecordingView *recordingView;
@property (readonly, nonatomic) TASVoiceRoomMetaDetailsView *metaDetailsView;
@property (readonly, nonatomic) TASTitleEditView *titleEditView;
@property (readonly, nonatomic) UILabel *detailsLabel;
@property (readonly, nonatomic) UIView *pivotView;
@property (readonly, nonatomic) T1StandardSpaceSoftInterventionPivotViewModel *softInterventionPivotViewModel;
@property (readonly, nonatomic) UIView *controlsBackgroundView;
@property (readonly, nonatomic) T1VoiceRoomControlsView *controlsView;
@property (readonly, nonatomic) T1VoiceRoomAdminToolsView *adminToolsView;
@property (readonly, nonatomic) T1VoiceRoomPrivateNotificationView *privateNotificationView;
@property (readonly, nonatomic) TFNButton *blockedSpeakersButton;
@property (readonly, nonatomic) TSFExclusiveSpaceDisclaimerView *exclusiveSpaceDisclaimerView;
@property (readonly, nonatomic) TASCommunitySpaceBadge *communitySpaceBadge;
@property (retain, nonatomic) TFSTimer *followPromptTimer;
@property (nonatomic) _Bool didInitializeFollowPrompt;
@property (retain, nonatomic) TFSTimer *communityPromptTimer;
@property (nonatomic) _Bool didInitializeCommunityPrompt;
@property (retain, nonatomic) TCMJoinCommunityInteraction *interaction;
@property (weak, nonatomic) id <T1VoiceRoomViewDelegate> delegate;
@property (retain, nonatomic) id <TASSpaceModel> spaceModel;
@property (nonatomic) double panCurrentHeight;
@property (readonly, nonatomic) UIView *liveCaptionsView;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *contentsHeaderView;
@property (readonly, nonatomic) double contentsHeaderViewPushedHeight;
@property (readonly, nonatomic) double contentsHeaderViewPulledHeight;
@property (retain, nonatomic) UIView *playSpaceView;
@property (copy, nonatomic) NSString *voiceTransformerEffectImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame imagePipeline:(id)pipeline userBadger:(id)badger;
- (void)_t1_initializeCollectionView;
- (void)dealloc;
- (void)setContentsHeaderViewPushedHeight:(double)height pulledHeight:(double)height;
- (void)_t1_updateContentsHeaderViewHeightConstraint;
- (void)pullContentsHeaderViewAnimated:(_Bool)animated;
- (void)_t1_updateTitleEditView;
- (void)_t1_updateTitleEditViewNarrowCastType;
- (void)_t1_updateCommunityViewWithCommunityModel:(id)model;
- (void)_updateExclusiveSpaceView;
- (void)layoutSubviews;
- (void)updateWithDidAppear;
- (void)_t1_updateLayout;
- (void)_t1_accessibilityVoiceOverStatusDidChange:(id)change;
- (void)_t1_updateCollectionViewContainerView;
- (void)_t1_updateGestureRecognizers;
- (void)_t1_recordingViewDidRecognizeTapGesture:(id)gesture;
- (void)_t1_collectionViewContainerViewDidRecognizeTapGesture:(id)gesture;
- (void)_t1_collectionViewDidRecognizeLongPressGesture:(id)gesture;
- (void)voiceRoomParticipantsFooterViewDidTap:(id)tap;
- (void)softInterventionPivotViewDidTap:(id)tap;
- (void)spaceModel:(id)model didUpdateUsersModels:(id)models;
- (void)spaceModel:(id)model didUpdateCommunityModel:(id)model;
- (void)_t1_updateParticipantsFooterView;
- (void)_t1_updateCollectionViewDataSourceAnimated:(_Bool)animated;
- (void)_t1_hideBlockedSpeakersIfNeeded;
- (void)_t1_registerTooltips;
- (void)_t1_initiateShowCommunityPromptIfNeededForCommunityModel:(id)model;
- (void)spaceModelDidChangeConnectionState:(id)state fromState:(long long)state;
- (void)spaceModel:(id)model didUpdateSettings:(id)settings;
- (void)spaceModelDidUpdateLiveVideoView:(id)view;
- (void)spaceModel:(id)model didUpdateIsCaptionsVisible:(_Bool)visible;
- (void)spaceModel:(id)model didUpdateIsEditingTitle:(_Bool)title;
- (id)_t1_timeElapsedLabelText;
- (void)spaceModelDidUpdateProperties:(id)properties;
- (void)_t1_updateDetailsComponents;
- (void)_t1_updateStandardDetailsComponents;
- (void)_t1_updateTrendingDetailsComponents;
- (void)_t1_updateRecordingAndMetaDetailsViews;
- (void)_t1_updatePivotView;
- (void)spaceModel:(id)model didReceiveEmoji:(id)emoji privately:(_Bool)privately fromUser:(id)user;
- (void)spaceModel:(id)model didChangeTitleValue:(id)value;
- (void)_tfn_createAndStartTimerForFollowPrompt;
- (void)_tfn_createAndStartTimerForCommunitiesPrompt;
- (void)voiceRoomPromptView:(id)view didFollowUser:(id)user;
- (void)voiceRoomPromptView:(id)view didInitiateJoinCommunityFromButton:(id)button;
- (void)scrollViewDidScroll:(id)scroll;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)retractableBarContainerView:(id)view updateScrollViewContentInsetsTop:(double)top;
- (void)_t1_updateCollectionViewContentInsets;
- (void)retractableBarContainerView:(id)view didChangeRetractableBarHeightPercentage:(double)percentage;
- (void)_t1_updateContentsHeaderViewBorder;
- (double)_t1_contentsHeaderViewPullPercentage;
- (void)voiceRoomAdminToolsView:(id)view didTapOnRequestsButton:(id)button;
- (void)voiceRoomAdminToolsView:(id)view didTapOnMuteEveryoneButton:(id)button;
- (void)voiceRoomAdminToolsView:(id)view didTapOnAdminInvitedButton:(id)button;
- (void)voiceRoomAdminToolsView:(id)view didTapOnMusicPlayPause:(id)pause;
- (void)titleEditViewDidBeginEditing:(id)editing;
- (void)titleEditViewDidChange:(id)change;
- (void)titleEditViewDidEndEditing:(id)editing;
- (void)titleEditView:(id)view didTapActiveTextRange:(id)range;
- (void)voiceRoomControlsViewDidTapMuteButton:(id)button;
- (void)voiceRoomControlsViewDidTapSpeakButton:(id)button;
- (void)voiceRoomControlsViewDidTapCameraButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnPlaySpaceButton:(id)button;
- (void)voiceRoomControlsView:(id)view dismissPlayspaceIfNeeded:(id)needed;
- (void)voiceRoomControlsView:(id)view didTapOnGuestsButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnEmojiButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnShareButton:(id)button overridingScribeContext:(id)context;
- (void)voiceRoomControlsView:(id)view didTapOnTweetButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnClosedCaptionsButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnJoinButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnClippingButton:(id)button;
- (void)voiceRoomControlsView:(id)view didSetReplayStartTime:(double)time;
- (void)voiceRoomControlsView:(id)view didTapLearnMoreWithPageURL:(id)url;
- (void)voiceRoomControlsViewDidChangePreferredHeight:(id)height;
- (void)voiceRoomControlsViewDidTapIncognitoBanner:(id)banner;
- (void)exclusiveSpaceDisclaimerView:(id)view didTapButtonWithProposedModal:(id)modal;
- (void)exclusiveSpaceDisclaimerView:(id)view didTapLearnMoreWithPageURL:(id)url;
- (void)voiceRoomDimmingView:(id)view didTapSuperFollowButton:(id)button;
- (void)onCommunitySpaceBadgeTapWithSpaceBadge:(id)badge;

@end

#endif /* T1VoiceRoomView_h */
