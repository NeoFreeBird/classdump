//
#ifndef VideoClipTrimmerViewController_h
#define VideoClipTrimmerViewController_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class TFNViewController;

@interface VideoClipTrimmerViewController : TFNViewController <UIGestureRecognizerDelegate, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 status;
    @40@0:8:16@24@32 account;
    @40@0:8:16@24@32 scribeContext;
    @40@0:8:16@24@32 initialRange;
    @40@0:8:16@24@32 sourcePlaybackSeconds;
    @40@0:8:16@24@32 resultTiming;
    @40@0:8:16@24@32 seamProviders;
    @40@0:8:16@24@32 liveReplayLoader;
    @40@0:8:16@24@32 liveReplayLoadingIndicator;
    @40@0:8:16@24@32 onBack;
    @40@0:8:16@24@32 onNextWillDismiss;
    @40@0:8:16@24@32 onNext;
    @40@0:8:16@24@32 topBar;
    @40@0:8:16@24@32 nextTitle;
    @40@0:8:16@24@32 showsNavigationBar;
    @40@0:8:16@24@32 slider;
    @40@0:8:16@24@32 durationLabel;
    @40@0:8:16@24@32 maximumDurationLabel;
    @40@0:8:16@24@32 minimumClipDurationSeconds;
    @40@0:8:16@24@32 isTrimmerFixesEnabled;
    @40@0:8:16@24@32 maximumClipDurationSeconds;
    @40@0:8:16@24@32 hasAppliedInitialBounds;
    @40@0:8:16@24@32 $__lazy_storage_$_playheadScrubGesture;
    @40@0:8:16@24@32 playPauseButton;
    @40@0:8:16@24@32 progressBar;
    @40@0:8:16@24@32 lengthLimitHapticGenerator;
    @40@0:8:16@24@32 audioSessionToken;
    @40@0:8:16@24@32 playerView;
    @40@0:8:16@24@32 player;
    @40@0:8:16@24@32 $__lazy_storage_$_thumbnailAsset;
    @40@0:8:16@24@32 imageGenerator;
    @40@0:8:16@24@32 imageGeneratorPixelSize;
    @40@0:8:16@24@32 backdropCancellable;
    @40@0:8:16@24@32 lifecycleCancellables;
    @40@0:8:16@24@32 isPausedForBackground;
    @40@0:8:16@24@32 hasLoadedDuration;
    @40@0:8:16@24@32 videoDuration;
    @40@0:8:16@24@32 oldLowerBound;
    @40@0:8:16@24@32 oldUpperBound;
    @40@0:8:16@24@32 touchDownBounds;
    @40@0:8:16@24@32 hasSelectionMovedSinceTouchDown;
    @40@0:8:16@24@32 playheadScrubStartLocationX;
    @40@0:8:16@24@32 playheadScrubStartValue;
    @40@0:8:16@24@32 isUserPaused;
    @40@0:8:16@24@32 playPauseButtonFollowsPlayer;
    @40@0:8:16@24@32 maximumDurationMessageHideTask;
}

@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewIsAppearing:(_Bool)appearing;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)didTapBack;
- (void)didTapNext;
- (void)didTapPlayPause;
- (void)sliderValueDidChange;
- (void)sliderTouchDone;
- (void)handlePlayheadScrub:(id)scrub;
- (void)sliderTouchDown;
- (void)progressBarValueDidChange;
- (void)progressBarTouchDone;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* VideoClipTrimmerViewController_h */
