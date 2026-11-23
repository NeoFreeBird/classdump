//
#ifndef _TtC14T1TwitterSwift38VideoBottomSegmentPlayerViewController_h
#define _TtC14T1TwitterSwift38VideoBottomSegmentPlayerViewController_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "_TtP14T1TwitterSwift24TabBottomSegmentDockable_-Protocol.h"

@class Swift.Bool, T1TwitterSwift.BroadcastPlaybackCoordinator ?, T1TwitterSwift.NoOpCaptionSink, T1TwitterSwift.PlaybackDwellLingerScriber ?, T1TwitterSwift.VideoBottomSegmentPlayerViewControllerDelegate ?, T1TwitterSwift.VideoDockBarView, TFNViewController, UIColor, _$s14TFSTwitterCore16TwitterBroadcastCMn ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSS, _$sSh -> T1TwitterSwift.VideoBottomSegmentPlayerViewController.AutoPauseReason, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo017TAVOwnedPictureInB7SessionC, _$sSo13TAVPlayerViewC, _$sSo16TFNTwitterStatusCSg, _$sSo17TFNTwitterAccountCSgXw, _$sSo23TFSTwitterScribeContextC, _$sSo24TAVPlayerSessionProducerC, _$sSo7NSTimerCSg, _$sSo9TAVPlayerC, __C.ImmersiveViewSource;

@interface T1TwitterSwift.VideoBottomSegmentPlayerViewController : TFNViewController <T1TwitterSwift.TabBottomSegmentDockable, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    weak __C.TFNTwitterAccount? account;
    __C.TFNTwitterStatus? status;
    nominal type descriptor for TFSTwitterCore.TwitterBroadcast ? broadcast;
    __C.TAVPlayerSessionProducer playerSessionProducer;
    __C.TFSTwitterScribeContext scribeContext;
    __C.ImmersiveViewSource viewSource;
    Swift.Int mediaIndex;
    T1TwitterSwift.VideoBottomSegmentPlayerViewControllerDelegate ? delegate;
    __C.TAVPlayer player;
    __C.TAVPlayerView playerView;
    T1TwitterSwift.VideoDockBarView playerBarView;
    Swift.String authorName;
    T1TwitterSwift.NoOpCaptionSink captionSink;
    T1TwitterSwift.BroadcastPlaybackCoordinator ? playbackCoordinator;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable coordinatorSubscriptions;
    __C.TAVOwnedPictureInPictureSession ownedPipSession;
    T1TwitterSwift.PlaybackDwellLingerScriber ? dwellLingerScriber;
    Swift.Bool isHandingOffPlayerToImmersive;
    Swift.Set -> T1TwitterSwift.VideoBottomSegmentPlayerViewController.AutoPauseReason autoPauseReasons;
    Swift.Bool isPlaybackReclaimEnabled;
    Swift.Bool isPlaybackReclaimArmed;
    Swift.Bool ignoresDockingImmersiveAsCover;
    Swift.Int playbackReclaimAttempts;
    nominal type descriptor for Dispatch.DispatchWorkItem ? playbackReclaimWorkItem;
    nominal type descriptor for Dispatch.DispatchWorkItem ? playbackReclaimAttemptsResetWorkItem;
    Swift.Int restorationSeekAttempts;
    __C.NSTimer? restorationSeekTimer;
    Swift.Bool wasExternalPlaybackActive;
    Swift.Bool wasPictureInPictureActive;
}

@property (nonatomic, readonly) double contentHeight;
@property (nonatomic, readonly) UIColor *bottomSegmentBackgroundColor;

/* instance methods */
- (void)bottomSegmentDidPresent;
- (void)bottomSegmentWillDismiss;
- (void)bottomSegmentDidDismiss;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidAppear:(_Bool)appear;
- (void)dealloc;
- (void)reclaimFromPictureInPicture;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift38VideoBottomSegmentPlayerViewController_h */
