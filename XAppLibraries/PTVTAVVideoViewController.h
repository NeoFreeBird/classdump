//
#ifndef PTVTAVVideoViewController_h
#define PTVTAVVideoViewController_h
@import Foundation;

#include "LHLSNetworkSession-Protocol.h"
#include "PTVGuestWatchingMainPlayer-Protocol.h"
#include "PTVVideoPlayer-Protocol.h"
#include "PTVVideoViewController.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlaybackState.h"
#include "TAVPlayer.h"
#include "TAVScribe-Protocol.h"

@class NSString, NSURL;

@interface PTVTAVVideoViewController : PTVVideoViewController <TAVPlaybackObserver, PTVGuestWatchingMainPlayer, PTVVideoPlayer> {
    /* instance variables */
    id /* block */ _seekFinishedBlock;
    _Bool _sentReadyForDisplay;
    NSString *_scribePage;
    id <TAVScribe> _scribe;
    id <LHLSNetworkSession> _networkSession;
}

@property (retain, nonatomic) TAVPlayer *tavPlayer;
@property (retain, nonatomic) TAVPlaybackState *lastKnownPlaybackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) unsigned long long videoStatus;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentVideoPlayerSize;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) unsigned long long ntpForCurrentFrame;
@property (readonly, nonatomic) _Bool supportsInitialPlaybackTime;
@property (readonly, nonatomic) _Bool canProvideTimingDataForSyncingComments;
@property (nonatomic) _Bool isPlayingLiveVideo;
@property (nonatomic) _Bool playAudio;
@property (nonatomic) _Bool shouldAutoPlay;
@property (nonatomic) _Bool supportsBackgroundAudio;
@property (readonly, nonatomic) _Bool currentlySeekingToNTPTime;
@property (readonly, nonatomic) unsigned long long ntpToSeekTo;
@property (readonly, nonatomic) _Bool canSeekToTime;

/* instance methods */
- (id)initWithScribePage:(id)page scribe:(id)scribe networkSession:(id)session;
- (void)loadView;
- (id)tavVideoView;
- (id)tavVideoViewIfLoaded;
- (id)videoPlayerDelegate;
- (void)_checkSendReadyForDisplay;
- (id)tavPlaybackState;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)player:(id)player didOutputTXXXFrameWithDescription:(id)description value:(id)value;
- (void)connectWithContentURL:(id)url isLHLS:(_Bool)lhls loggedInUser:(id)user;
- (void)connectWithContentURL:(id)url isLHLS:(_Bool)lhls initialPlaybackTime:(double)time loggedInUser:(id)user;
- (id)renderTimeForNTP:(unsigned long long)ntp;
- (void)seekToTimeInterval:(double)interval completion:(id /* block */)completion;
- (void)seekToNTPTime:(unsigned long long)ntptime completion:(id /* block */)completion;
- (_Bool)play;
- (void)pause;
- (void)destroyVideoStack;
- (void)broadcastEndPending;
- (void)didReachEndOfVideo;
- (_Bool)shouldCaptureStillImageOfVideoPlayer;
- (void)captureStillImageOfVideoPlayer:(id /* block */)player;
- (id)getStatistics;
- (void)setTargetRelativePresentationOffset:(id)offset;
- (id)relativePresentationOffset;
- (id)minimumSafeRPO;

@end

#endif /* PTVTAVVideoViewController_h */
