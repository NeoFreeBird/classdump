//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADVideoPlayer_h
#define GADVideoPlayer_h
@import Foundation;

#include "GADAVPlayerItemLogger.h"
#include "GADAVPlayerItemProvider-Protocol.h"
#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"
#include "GADObserverCollection.h"
#include "GADVideoConfiguration.h"
#include "GADWebAdView.h"

@class AVPlayer, AVPlayerItem, NSMutableArray, NSNumber, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface GADVideoPlayer : NSObject <GADEventContextSource> {
    /* instance variables */
    GADWebAdView *_adView;
    id <GADAVPlayerItemProvider> _playerItemProvider;
    GADVideoConfiguration *_videoConfiguration;
    GADObserverCollection *_observers;
    GADObserverCollection *_didActivateObservers;
    GADObserverCollection *_willDeactivateObservers;
    double _playerActionTimeoutInterval;
    _Bool _appActive;
    _Bool _gcacheHit;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    NSMutableArray *_periodicTimeObservers;
    _Bool _playing;
    _Bool _isVisible;
    _Bool _hasPlaybackStalledAtLeastOnce;
    _Bool _isObservingPlayer;
    _Bool _isObservingPlayerRate;
    _Bool _isObservingPlayerItem;
    _Bool _isObservingPlayerItemLoadedTimeRanges;
    _Bool _loaded;
    _Bool _optimizePlayerResourceAfterPostedCanPlayThroughEnabled;
    long long _numberOfBlocksMomentarilyPausedPlayer;
    GADAVPlayerItemLogger *_playerItemLogger;
    NSMutableArray *_playbackStartObservers;
    NSObject<OS_dispatch_queue> *_actionLockQueue;
    NSOperationQueue *_actionOperationQueue;
    NSNumber *_scheduledPlay;
    NSNumber *_scheduledMute;
    NSNumber *_scheduledVolume;
    _Bool _scheduledActionUserInitiated;
    NSObject<OS_dispatch_semaphore> *_actionSemaphore;
    _Atomic _Bool _canPlayThroughPosted;
    NSMutableArray *_keyValueObserverControllers;
}

@property (readonly) _Bool hasPostedCanPlayThrough;
@property (readonly, nonatomic) NSString *playerID;
@property (readonly) _Bool hasPlaybackEnded;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAdView:(id)view playerItemProvider:(id)provider visibilityMessageSource:(id)source videoConfiguration:(id)configuration parentContext:(id)context;
- (void)dealloc;
- (void)asyncLoadPlayer;
- (id)createPlayerLayer;
- (void)playUserInitiated:(_Bool)initiated;
- (void)pauseUserInitiated:(_Bool)initiated;
- (void)setMuted:(_Bool)muted userInitiated:(_Bool)initiated;
- (void)setVolume:(float)volume userInitiated:(_Bool)initiated;
- (void)flushPlayerAction;
- (void)flushPlayerActionPlaying:(id)playing volume:(float)volume muted:(_Bool)muted userInitiated:(_Bool)initiated semaphore:(id)semaphore;
- (void)seekToTime:(double)time;
- (struct CGSize { double x0; double x1; })videoSize;
- (void)momentarilyPauseAndExecuteBlock:(id /* block */)block;
- (void)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval queue:(id)queue usingBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)removeTimeObserver:(id)observer;
- (void)playerVisibilityDidChange:(_Bool)change;
- (void)optimizePlayerResources;
- (void)reattachPlayersCurrentItem;
- (void)handlePlayerItemDurationLoadUpdate;
- (void)observePlayer;
- (void)observePlayerRate;
- (void)observePlayerStatus;
- (void)observePlayerItemStatus;
- (void)observePlayerItem;
- (void)observePlayerItemLoadedTimeRanges;
- (void)handlePlayerRateChange;
- (void)itemDidPlayToEnd:(id)end;
- (void)notifyPlayerMetadata;
- (void)notifyVideoPlayerWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)notifyMetadata;
- (void)notifyVideoReadyToPlay;
- (id)playerStatusWithName:(id)name status:(long long)status error:(id)error;
- (void)notifyVideoPlayerWithNewStatus:(long long)status;
- (void)notifyVideoPlayerWithNewItemStatus:(long long)status;
- (void)notifyVideoRateChanged;
- (void)evaluateOnVideoEvent:(id)event;

@end

#endif /* GADVideoPlayer_h */
