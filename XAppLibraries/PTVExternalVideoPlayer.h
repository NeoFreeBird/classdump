//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVExternalVideoPlayer_h
#define PTVExternalVideoPlayer_h
@import Foundation;

#include "PTVWeakSet.h"

@class UILayoutGuide, UIViewController;

@interface PTVExternalVideoPlayer : UIViewController {
    /* instance variables */
    PTVWeakSet *_externalVideoPlayerObservers;
}

@property (nonatomic) unsigned long long playbackState;
@property (readonly, nonatomic) _Bool isReadyForDisplay;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentVideoPlayerSize;
@property (retain, nonatomic) UILayoutGuide *contentAreaGuide;

/* instance methods */
- (void)loadView;
- (void)addExternalVideoPlayerObserver:(id)observer;
- (void)removeExternalVideoPlayerObserver:(id)observer;
- (void)notifyExternalVideoPlayerObservers:(id /* block */)observers;
- (void)playVideo;
- (void)pauseVideo;
- (void)broadcastEndPending;
- (void)disconnectVideo;
- (void)didReachEndOfVideo;
- (_Bool)shouldAutoPlayVideo;
- (void)didReceiveVideoMetadata;
- (_Bool)hasNTPData;
- (_Bool)canProvideTimingDataForSyncingComments;
- (double)lastReceivedNTPTimestamp;
- (id)dateWhenLastReceivedNTPTimestamp;
- (id)programDateTime;
- (id)dateWhenVideoWasLastPaused;
- (double)currentPlaybackTime;
- (void)didReceiveVideoDuration;
- (double)videoDuration;
- (void)didReceiveTimedMedataWithDescription:(id)description value:(id)value;
- (void)seekToTime:(double)time completion:(id /* block */)completion;
- (_Bool)canSeekToTime;
- (unsigned long long)ntpToSeekTo;
- (_Bool)isSeekingToNTPTime;
- (_Bool)shouldCaptureStillImageOfVideoPlayer;
- (void)captureStillImageOfVideoPlayer:(id /* block */)player;
- (id)videoPlayerStatistics;
- (void)setDisplayedAsGuestView:(_Bool)view;

@end

#endif /* PTVExternalVideoPlayer_h */
