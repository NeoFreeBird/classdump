//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVLHLSPlayerTechnology_h
#define TAVLHLSPlayerTechnology_h
@import Foundation;

#include "LHLSNetworkSession-Protocol.h"
#include "LHLSPlayerClientConfig.h"
#include "LHLSPlayerClientDelegate-Protocol.h"
#include "LHLSRenderDelegate-Protocol.h"
#include "LHLSiOSCaptionDelegate-Protocol.h"
#include "NSObject-Protocol.h"
#include "TAVLHLSCaptionSource.h"
#include "TAVLHLSPixelBufferSource.h"
#include "TAVLHLSPlayerTechnologyInternalState.h"
#include "TAVPixelBufferSource-Protocol.h"
#include "TAVPlayerOutputView-Protocol.h"
#include "TAVPlayerTechnology-Protocol.h"
#include "TAVPlayerTechnologyObserver-Protocol.h"

@class NSObject, NSString, NSURL, UIView;
@protocol OS_dispatch_queue;

@interface TAVLHLSPlayerTechnology : NSObject <LHLSPlayerClientDelegate, LHLSRenderDelegate, LHLSiOSCaptionDelegate, TAVPlayerTechnology>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) TAVLHLSPlayerTechnologyInternalState *internalState;
@property (readonly, nonatomic) TAVLHLSPixelBufferSource *lhlsPixelBufferSource;
@property (readonly, nonatomic) TAVLHLSCaptionSource *lhlsCaptionSource;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) _Bool isLive;
@property (readonly, nonatomic) id <LHLSNetworkSession> networkSession;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } initialPlaybackTime;
@property (nonatomic) _Bool isAccessibilitySettingsClosedCaptioningEnabled;
@property (readonly, nonatomic) id <NSObject> audioSessionDeactivationObserver;
@property (readonly, nonatomic) long long playerClientVersion;
@property (readonly, nonatomic) LHLSPlayerClientConfig *playerClientConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id <TAVPlayerTechnologyObserver> observer;
@property (readonly, nonatomic) id <TAVPixelBufferSource> pixelBufferSource;
@property (readonly, nonatomic) UIView<TAVPlayerOutputView> *outputView;

/* instance methods */
- (id)initWithURL:(id)url isLive:(_Bool)live networkSession:(id)session initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time observer:(id)observer outputViewFactory:(id)factory playerClientVersion:(long long)version playerClientConfig:(id)config;
- (void)dealloc;
- (void)captionsSettingDidChange;
- (void)sync_applyCurrentControlState;
- (void)sync_forceReconnectIfLiveAndStalledWithNoData;
- (void)sync_broadcastState;
- (id)sync_createPerformanceState;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completionHandler:(id /* block */)handler;
- (void)applyControlState:(id)state;
- (void)playerTechnologyPrepareForDestruction;
- (_Bool)isNativePictureInPicturePossible;
- (void)startNativePictureInPicture;
- (void)stopNativePictureInPicture;
- (_Bool)isNativePictureInPictureActive;
- (_Bool)isExternalPlaybackActive;
- (void)updateQualityEndpointsIfNeeded;
- (void)generateDebugReportWithParentReport:(id)report completionBlock:(id /* block */)block;
- (void)setVideoRotation:(double)rotation;
- (void)onReadyToPlay;
- (void)mediaIsPlaying:(_Bool)playing;
- (void)onEndPending;
- (void)onVideo:(struct __CVBuffer *)video atTime:(double)time;
- (void)onID3TXXXFrameWithDescription:(id)description value:(id)value renderTime:(double)time;
- (void)onAudioSetSampleRate:(unsigned int)rate channelCount:(unsigned int)count;
- (void)onAudioData:(id)data renderTime:(double)time;
- (void)receivedData;
- (void)renderCaption:(id)caption;

@end

#endif /* TAVLHLSPlayerTechnology_h */
