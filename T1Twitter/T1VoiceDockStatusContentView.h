//
#ifndef T1VoiceDockStatusContentView_h
#define T1VoiceDockStatusContentView_h
@import Foundation;

#include "T1VoiceDockStatusContentViewDelegate-Protocol.h"
#include "T1VoicePlayableCollectionViewModelObserver-Protocol.h"
#include "T1VoicePlaybackView.h"
#include "T1VoiceTrackViewModel.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TUIVoiceDockContainer-Protocol.h"
#include "TUIVoiceDockableContent-Protocol.h"

@class NSLayoutConstraint, NSString, NSTimer, TAVPlaybackState, TFNBarProgressView, TFNButton, TFNInformationToast, TUIAvatarImageView, UIAccessibilityCustomAction, UIButton, UIImage, UILabel, UIPanGestureRecognizer, UIStackView, UIView;

@interface T1VoiceDockStatusContentView : T1VoicePlaybackView <T1VoicePlayableCollectionViewModelObserver, TFNLayoutMetricsEnvironment, TUIVoiceDockableContent>

@property (nonatomic) double progress;
@property (retain, nonatomic) TFNBarProgressView *progressView;
@property (retain, nonatomic) TAVPlaybackState *lastKnownPlaybackState;
@property (retain, nonatomic) TFNButton *progressThumbView;
@property (retain, nonatomic) NSLayoutConstraint *progressThumbViewCenterXConstraint;
@property (nonatomic) struct CGPoint { double x0; double x1; } progressThumbOriginalPosition;
@property (retain, nonatomic) NSTimer *hideProgressThumbViewTimer;
@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *playPauseButton;
@property (retain, nonatomic) TUIAvatarImageView *imageView;
@property (retain, nonatomic) UIStackView *descriptionStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *topDivider;
@property (retain, nonatomic) UIPanGestureRecognizer *scrubPanGesture;
@property (weak, nonatomic) TFNInformationToast *playbackErrorToast;
@property (retain, nonatomic) UIAccessibilityCustomAction *playPauseAccessibilityAction;
@property (retain, nonatomic) UIAccessibilityCustomAction *expandAccessibilityAction;
@property (weak, nonatomic) id <T1VoiceDockStatusContentViewDelegate> delegate;
@property (readonly, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) T1VoiceTrackViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView<TUIVoiceDockContainer> *dockContainer;
@property (readonly, nonatomic) double minimumHeight;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithImagePipeline:(id)pipeline;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)voicePlayableViewModel:(id)model didUpdatePlaybackState:(id)state;
- (void)voicePlayableViewModel:(id)model didUpdateClip:(id)clip;
- (void)_t1_handleCloseButton;
- (void)_t1_handlePlayPauseButton;
- (void)_t1_handleDockViewTap;
- (void)_t1_reportGenericTap;
- (void)_handlePanEvent:(id)event;
- (void)_t1_setScrubbingVisible:(_Bool)visible animated:(_Bool)animated;
- (void)_t1_hideScrubbingAfterDelay:(double)delay;
- (_Bool)_t1_isScrubbing;
- (void)_t1_showPlaybackError:(id)error;
- (void)_t1_hidePlaybackErrorIfNeeded;
- (void)_t1_initAccessibility;
- (void)_t1_resetAccessibilityCustomActions;
- (void)_t1_updateAccessibilityIsPlaying:(_Bool)playing;
- (void)_t1_updateAccessibilityWithProgress:(double)progress;
- (void)accessibilityElementDidLoseFocus;
- (_Bool)accessibilityActivate;

@end

#endif /* T1VoiceDockStatusContentView_h */
