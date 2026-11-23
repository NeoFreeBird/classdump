//
#ifndef T1LiveEventVideoContainerView_h
#define T1LiveEventVideoContainerView_h
@import Foundation;

#include "T1LiveEventControlBar.h"
#include "T1LiveEventControlBarDelegate-Protocol.h"
#include "T1LiveEventVideoContainerViewDelegate-Protocol.h"
#include "T1LiveEventVideoContainerViewLayoutDelegate.h"
#include "T1LiveEventVideoContainerViewModel.h"
#include "T1VideoBackgroundBlurView.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVUIAutoplayable-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, TAVLoopObserver, TAVPlaybackState, TAVPlayer, TAVPlayerView, TAVPlayerViewConfiguration, TFNButton, UIActivityIndicatorView, UIImage, UIImageView, UITapGestureRecognizer, UIView;

@interface T1LiveEventVideoContainerView : UIView <TAVPlaybackObserver, T1LiveEventControlBarDelegate, TUIImageViewFetchHelperDelegate, TAVUIAutoplayable>

@property (retain, nonatomic) T1LiveEventVideoContainerViewLayoutDelegate *layoutDelegate;
@property (retain, nonatomic) T1VideoBackgroundBlurView *playerBlurView;
@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) TAVPlayerView *playerView;
@property (nonatomic) long long playerViewLoopingBehavior;
@property (retain, nonatomic) T1LiveEventControlBar *controlBar;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) TFNButton *playButton;
@property (nonatomic) _Bool isVideoPlaying;
@property (retain, nonatomic) TAVPlaybackState *lastKnownPlaybackState;
@property (retain, nonatomic) TAVLoopObserver *loopingPlaybackObserver;
@property (retain, nonatomic) UIImage *thumbnailImage;
@property (nonatomic) _Bool playbackDesired;
@property (retain, nonatomic) TAVPlayer *player;
@property (nonatomic) _Bool waitingForPlayerAttachment;
@property (nonatomic) long long loopingThresholdDuration;
@property (nonatomic) long long maxLoopCount;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) T1LiveEventVideoContainerViewModel *viewModel;
@property (weak, nonatomic) id <T1LiveEventVideoContainerViewDelegate> delegate;
@property (nonatomic) unsigned long long displayMode;
@property (copy, nonatomic) TAVPlayerViewConfiguration *playerViewConfiguration;
@property (nonatomic) _Bool chromeHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *autoplayableView;
@property (readonly, nonatomic) long long autoplayableType;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame playerViewConfiguration:(id)configuration;
- (void)layoutSubviews;
- (_Bool)isChromeHidden;
- (void)cleanup;
- (void)associatePlayer;
- (void)dissociatePlayer;
- (void)play;
- (void)pause;
- (_Bool)isPlaying;
- (_Bool)isPaused;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewImageFrameInWindow:(id)window;
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (void)_t1_updateForPlayerAttachment;
- (void)_t1_updateSubviews;
- (void)_t1_cleanupSubviews;
- (unsigned long long)_t1_liveEventControlBarDisplayMode;
- (void)_t1_notifyDelegatePlaybackDidCompleteIfNecessary;
- (void)_t1_didTapPlayButton:(id)button;
- (void)_t1_updateLoopingPlaybackObserver;
- (void)_t1_resetLoopingObserver;
- (void)_t1_setPlayerViewLoopingBehavior:(long long)behavior;
- (void)_t1_removePlayerLoopingObserver;
- (void)tui_fetchHelper:(id)helper didUpdateImageFromSource:(long long)source isFinal:(_Bool)final;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)observerDidAttachToPlayer:(id)player;
- (void)_t1_didStartAdPlaybackWithState:(id)state;
- (void)_t1_didEndAdPlaybackWithState:(id)state;
- (void)liveEventControlBarDidTapExpandMedia:(id)media;
- (void)liveEventControlBar:(id)bar didTapToPlay:(_Bool)play;
- (void)liveEventControlBar:(id)bar didTapAttributionForStatus:(id)status;
- (void)liveEventControlBar:(id)bar didUpdateMuteState:(_Bool)state;

@end

#endif /* T1LiveEventVideoContainerView_h */
