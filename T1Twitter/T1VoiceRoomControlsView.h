//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomControlsView_h
#define T1VoiceRoomControlsView_h
@import Foundation;

#include "T1VoiceRoomControlsViewDelegate-Protocol.h"
#include "T1VoiceRoomIncognitoBannerView.h"
#include "T1VoiceRoomIncognitoBannerViewDelegate-Protocol.h"
#include "T1VoiceRoomJoiningModeView.h"
#include "T1VoiceRoomReplayingControlsView.h"
#include "T1VoiceRoomReplayingControlsViewDelegate-Protocol.h"
#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"
#include "TASUserModel-Protocol.h"
#include "TASUserModelObserver-Protocol.h"
#include "TASVoiceRoomInputControlViewDelegate-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, TASSpaceButton, TASVoiceRoomInputControlView, TFNAttributedTextView, TFNButton, UIStackView, UIView;

@interface T1VoiceRoomControlsView : UIView <T1VoiceRoomIncognitoBannerViewDelegate, T1VoiceRoomReplayingControlsViewDelegate, TASSpaceModelObserver, TASUserModelObserver, TASVoiceRoomInputControlViewDelegate, TFNAttributedTextViewDelegate>

@property (retain, nonatomic) id <TASUserModel> loggedInUserModel;
@property (nonatomic) long long options;
@property (retain, nonatomic) UIView *controlViewsContainerView;
@property (retain, nonatomic) NSArray *controlsViewsContainerViewConstraints;
@property (retain, nonatomic) NSMutableArray *participatingButtonControlViews;
@property (retain, nonatomic) UIView *divider;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (retain, nonatomic) TFNButton *playSpaceButton;
@property (retain, nonatomic) TFNButton *guestsButton;
@property (retain, nonatomic) TFNButton *emojiButton;
@property (retain, nonatomic) TFNButton *clippingButton;
@property (retain, nonatomic) TASSpaceButton *tweetButton;
@property (retain, nonatomic) TASVoiceRoomInputControlView *micControlView;
@property (retain, nonatomic) TASVoiceRoomInputControlView *cameraControlView;
@property (retain, nonatomic) UIView *joiningViewsContainerView;
@property (retain, nonatomic) NSArray *joiningViewsContainerViewConstraints;
@property (retain, nonatomic) TASSpaceButton *joinButton;
@property (retain, nonatomic) TFNAttributedTextView *joinDescriptionTextView;
@property (retain, nonatomic) NSLayoutConstraint *joinDescriptionTextViewTopAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *joinDescriptionTextViewTopAnchorJoinModeConstraint;
@property (retain, nonatomic) T1VoiceRoomJoiningModeView *joiningModeView;
@property (retain, nonatomic) NSLayoutConstraint *joiningModeViewTopAnchorConstraint;
@property (retain, nonatomic) T1VoiceRoomReplayingControlsView *replayingControlsView;
@property (retain, nonatomic) NSArray *replayingControlsViewConstraints;
@property (readonly, nonatomic) long long largeButtonSizeClass;
@property (readonly, nonatomic) long long buttonSizeClass;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } buttonImageSize;
@property (nonatomic) long long replyCountDuringLastUserInteraction;
@property (retain, nonatomic) T1VoiceRoomIncognitoBannerView *incognitoBannerView;
@property (weak, nonatomic) id <T1VoiceRoomControlsViewDelegate> delegate;
@property (retain, nonatomic) id <TASSpaceModel> spaceModel;
@property (copy, nonatomic) NSString *voiceTransformerEffectImageName;
@property (nonatomic) _Bool playSpaceIsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_updateAnimated:(_Bool)animated;
- (void)_t1_updateplaySpaceButton;
- (id)_t1_makeClippingButton;
- (void)_t1_updateClippingButtonEnabled:(_Bool)enabled;
- (void)_t1_updateJoinState;
- (void)_t1_updateTweetButton;
- (void)updateWithDidAppear;
- (void)_t1_scribeReplyEntityImpressionIfNeeded;
- (void)_t1_didTapOnPlaySpaceButton:(id)button;
- (void)_t1_didTapOnGuestsButton:(id)button;
- (void)_t1_didTapOnEmojiButton:(id)button;
- (void)_t1_didTapOnTweetButton:(id)button;
- (void)_t1_didTapOnJoinButton:(id)button;
- (void)_t1_didTapOnClippingButton:(id)button;
- (void)spaceModel:(id)model didUpdateLoggedInUserModel:(id)model;
- (void)spaceModel:(id)model didUpdateAutomaticJoiningAsSpeakerStatus:(long long)status;
- (void)spaceModel:(id)model didUpdateIsIncognito:(_Bool)incognito;
- (void)spaceModelDidChangeConnectionState:(id)state fromState:(long long)state;
- (void)spaceModel:(id)model didUpdateSettings:(id)settings;
- (void)spaceModel:(id)model didUpdateEntityStatus:(id)status;
- (void)spaceModelDidUpdateAmbientBackgroundMusic:(id)music;
- (void)spaceModelDidUpdateLiveVideoView:(id)view;
- (void)userModelDidUpdate:(id)update;
- (void)_t1_updateOptionsForLoggedInUserModel;
- (void)inputControlViewDidTap:(id)tap;
- (void)voiceRoomReplayingControlsView:(id)view didTapOnShareButton:(id)button overridingScribeContext:(id)context;
- (void)voiceRoomReplayingControlsView:(id)view didTapOnClosedCaptionsButton:(id)button;
- (void)voiceRoomReplayingControlsView:(id)view didSetReplayStartTime:(double)time;
- (void)voiceRoomReplayingControlsView:(id)view didTapOnClippingButton:(id)button;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)incognitoBannerViewDidTap:(id)tap;

@end

#endif /* T1VoiceRoomControlsView_h */
