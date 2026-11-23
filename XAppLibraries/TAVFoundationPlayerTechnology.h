//
#ifndef TAVFoundationPlayerTechnology_h
#define TAVFoundationPlayerTechnology_h
@import Foundation;

#include "AVPictureInPictureControllerDelegate-Protocol.h"
#include "AVPlayerItemMetadataOutputPushDelegate-Protocol.h"
#include "NSObject-Protocol.h"
#include "TAVCaptionsConfiguration.h"
#include "TAVFoundationAVPlayerObserver.h"
#include "TAVFoundationAVPlayerObserverDelegate-Protocol.h"
#include "TAVFoundationCaptionSource.h"
#include "TAVFoundationItem.h"
#include "TAVFoundationPixelBufferSource.h"
#include "TAVFoundationPlayerEndpointsManager.h"
#include "TAVFoundationPlayerTechnologyInternalState.h"
#include "TAVPixelBufferSource-Protocol.h"
#include "TAVPlayerOutputView-Protocol.h"
#include "TAVPlayerTechnology-Protocol.h"
#include "TAVPlayerTechnologyControlState.h"
#include "TAVPlayerTechnologyObserver-Protocol.h"

@class AVPictureInPictureController, AVPlayer, AVPlayerItemMetadataOutput, NSObject, NSString, NSUUID, UIView;
@protocol OS_dispatch_queue;

@interface TAVFoundationPlayerTechnology : NSObject <TAVFoundationAVPlayerObserverDelegate, AVPlayerItemMetadataOutputPushDelegate, AVPictureInPictureControllerDelegate, TAVPlayerTechnology> {
    /* instance variables */
    AVPictureInPictureController *_retainedPiPController;
}

@property (readonly, nonatomic) TAVFoundationCaptionSource *foundationCaptionSource;
@property (readonly, nonatomic) TAVFoundationPixelBufferSource *foundationPixelBufferSource;
@property (readonly, nonatomic) AVPlayerItemMetadataOutput *avPlayerItemMetadataOutput;
@property (readonly, nonatomic) TAVFoundationItem *foundationItem;
@property (readonly, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) TAVFoundationAVPlayerObserver *avPlayerObserver;
@property (readonly, nonatomic) id <NSObject> audioSessionDeactivationObserver;
@property (readonly, nonatomic) id <NSObject> audioRouteChangeObserver;
@property (readonly, nonatomic) id <NSObject> applicationWillEnterForegroundObserver;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalStateQueue;
@property (readonly, nonatomic) TAVFoundationPlayerTechnologyInternalState *internalState;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) double playbackStartForwardBufferDuration;
@property (copy, nonatomic) TAVPlayerTechnologyControlState *appliedControlState;
@property (readonly, nonatomic) _Bool disableVideoRendering;
@property (readonly, nonatomic) _Bool isPlaybackPollingReduced;
@property (readonly, copy, nonatomic) TAVCaptionsConfiguration *captionsConfiguration;
@property (readonly, nonatomic) TAVFoundationPlayerEndpointsManager *qualityEndpoints;
@property (retain, nonatomic) AVPictureInPictureController *avPictureInPictureController;
@property (nonatomic) _Bool isNativePIPRestoring;
@property (nonatomic) _Bool useSeekableRangeForDurationIfNeeded;
@property (nonatomic) _Bool retainsPiPController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id <TAVPlayerTechnologyObserver> observer;
@property (readonly, nonatomic) id <TAVPixelBufferSource> pixelBufferSource;
@property (readonly, nonatomic) UIView<TAVPlayerOutputView> *outputView;

/* class methods */
+ (id)blockingAccessLogReadingQueue;

/* instance methods */
- (id)initWithFoundationItem:(id)item initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time observer:(id)observer captionsConfiguration:(id)configuration outputViewFactory:(id)factory qualityEndpoints:(id)endpoints playbackStartForwardBufferDuration:(double)duration disableVideoRendering:(_Bool)rendering;
- (void)sync_prepareIfNeeded;
- (id)sync_accessLogEventsForState:(id)state;
- (void)sync_broadcastState;
- (void)sync_playIfBufferedWithDuration:(double)duration withSnapshot:(id)snapshot;
- (_Bool)sync_videoQualityState:(id)state mutationReason:(id)reason;
- (void)sync_applyCurrentControlState;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)picture;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)picture;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)picture;
- (void)pictureInPictureController:(id)controller restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)handler;
- (void)handleDidPlayToEnd;
- (void)handlePlayerSnapshot:(id)snapshot;
- (void)metadataOutput:(id)output didOutputTimedMetadataGroups:(id)groups fromPlayerItemTrack:(id)track;
- (void)applyControlState:(id)state;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completionHandler:(id /* block */)handler;
- (void)playerTechnologyPrepareForDestruction;
- (_Bool)shouldAutomaticallyStartNativePictureInPicture;
- (_Bool)shouldAllowNativePictureInPictureForControlState:(id)state;
- (void)clearAVPictureInPictureController;
- (_Bool)isNativePictureInPicturePossible;
- (void)startNativePictureInPicture;
- (void)stopNativePictureInPicture;
- (void)updateQualityEndpointsIfNeeded;
- (void)setupAVPictureInPictureController;
- (_Bool)isNativePictureInPictureActive;
- (_Bool)isExternalPlaybackActive;
- (void)generateDebugReportWithParentReport:(id)report completionBlock:(id /* block */)block;
- (id)init;
- (void)dealloc;

@end

#endif /* TAVFoundationPlayerTechnology_h */
