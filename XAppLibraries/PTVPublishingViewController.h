//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPublishingViewController_h
#define PTVPublishingViewController_h
@import Foundation;

#include "PTVBatteryStats.h"
#include "PTVBitrateController.h"
#include "PTVEncodedOutputDelegate-Protocol.h"
#include "PTVLocalPipelineOwner-Protocol.h"
#include "PTVPipelineOwner-Protocol.h"
#include "PTVPublishLadder.h"
#include "PTVPublishingPipeline.h"
#include "PTVPublishingViewControllerDelegate-Protocol.h"
#include "PTVRTPStatusDelegate-Protocol.h"
#include "PTVReachabilityObserver-Protocol.h"
#include "PTVSwitchboardDisplayable-Protocol.h"
#include "PTVVideoTransmitter-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSObject, NSString, NSTimer, UIViewController;
@protocol PTVModelSSLPinningDelegate, PTVPublishingViewControllerAudioDelegate, PTVPublishingViewControllerDebugDelegate;

@interface PTVPublishingViewController : UIViewController <PTVReachabilityObserver, PTVEncodedOutputDelegate, PTVLocalPipelineOwner, PTVRTPStatusDelegate, PTVSwitchboardDisplayable> {
    /* instance variables */
    id _weakSelf;
    _Bool _publishingPipelineRunning;
    int _videoInput;
    int _audioInput;
    NSDictionary *_rtspConnect;
    long long _lastQueueLen;
    NSDate *_lastQueueCheck;
    NSDate *_zeroSentSince;
    NSTimer *_msgTimer;
    _Bool _publishing;
    long long _reachStatus;
    long long _availableReachStatus;
    PTVBitrateController *_bitrateControl;
    PTVBatteryStats *_batteryStats;
    NSDictionary *_appMetadata;
    _Bool _wasProxyError;
    double _imageRotation;
    NSDate *_publishStart;
    double _publishDuration;
    int _idrCount;
    long long _interfaceOrientation;
    long long _shutdownState;
    id /* block */ _onShutdown;
    id /* block */ _stillImageBlock;
    id /* block */ _pixelBufferCallback;
    _Bool _capturingImage;
    NSData *_videoConfigData;
    NSData *_audioConfigData;
    double _IDRBytes;
    double _totalBytes;
}

@property (retain, nonatomic) NSObject<PTVVideoTransmitter> *transmitter;
@property (readonly, nonatomic) PTVPublishingPipeline *sourcePipeline;
@property _Bool isInBackground;
@property _Bool connectionActive;
@property _Bool connectionFailed;
@property (retain) NSDate *connectStart;
@property (retain) NSDate *lastFrame;
@property (nonatomic) int videoBitrateIndex;
@property (nonatomic) _Bool inInternalReconnect;
@property (retain, nonatomic) NSDate *reconnectStart;
@property double lastVideoFramePTS;
@property _Bool timerPending;
@property double lastAngle;
@property (retain) NSArray *pspVersion;
@property (retain, nonatomic) NSTimer *shutdownTimeout;
@property (nonatomic) double initialBandwidth;
@property (nonatomic) int inputsReceived;
@property (nonatomic) _Bool enableStabilisation;
@property _Bool isRecording;
@property (nonatomic) _Bool broadcastIsOnline;
@property (retain, nonatomic) PTVPublishLadder *publishLadder;
@property _Bool saveAsHQEnabled;
@property int bytesPerSecond;
@property (readonly) unsigned long long nTimesReconnected;
@property (weak, nonatomic) id <PTVModelSSLPinningDelegate> sslPinningDelegate;
@property (weak) id <PTVPublishingViewControllerDelegate> delegate;
@property (weak) id <PTVPublishingViewControllerAudioDelegate> audioDelegate;
@property (nonatomic) _Bool isAudioScopeEnabled;
@property (weak) id <PTVPublishingViewControllerDebugDelegate> debugDelegate;
@property (readonly) _Bool transmitOK;
@property (retain) NSDictionary *metadata;
@property (readonly) double viewOrientation;
@property (readonly) struct CGSize { double x0; double x1; } viewSize;
@property (retain, nonatomic) NSString *videoGravity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) PTVPublishingPipeline *localPipeline;
@property (retain) NSObject<PTVPipelineOwner> *pipelineOwner;

/* instance methods */
- (void)setupPipelineForCurrentBitrate:(id)bitrate;
- (id)sourcePipelineIfLoaded;
- (id)initWithDebugDelegate:(id)delegate sslPinningDelegate:(id)delegate;
- (void)dealloc;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (_Bool)isVidman;
- (void)connect:(id)connect port:(unsigned short)port application:(id)application stream:(id)stream user:(id)user password:(id)password credential:(id)credential protocol:(id)protocol;
- (void)connect:(id)connect port:(unsigned short)port application:(id)application stream:(id)stream user:(id)user password:(id)password credential:(id)credential protocol:(id)protocol version:(id)version;
- (void)loadView;
- (void)becomeActive;
- (void)resignActive;
- (void)onEnterBackgroundOrIncomingPhoneCall;
- (void)imageRotation:(double)rotation immediate:(_Bool)immediate;
- (long long)captureOrientation;
- (void)startCamera;
- (void)startLocalCamera;
- (void)onPipelineQueue_startLocalCamera;
- (void)resumeLocalCamera;
- (void)connect;
- (void)ptv_startCamera;
- (void)attemptReconnect;
- (void)cameraStartComplete;
- (_Bool)captureSessionIsRunning;
- (void)cameraStartFailed;
- (void)didChangeLocalAudioSource:(_Bool)source isUsingHeadphones:(_Bool)headphones;
- (void)publishingPipeline:(id)pipeline willProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (_Bool)publishing;
- (void)setPublishing:(_Bool)publishing;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)reachabilityMonitorStateDidChange:(id)change;
- (void)ptv_connect;
- (void)pushMetadata:(id)metadata pts:(double)pts;
- (void)pipeline:(id)pipeline videoParams:(id)params;
- (void)pipeline:(id)pipeline audioParams:(id)params;
- (void)pipeline:(id)pipeline audioData:(id)data pts:(double)pts;
- (_Bool)pipeline:(id)pipeline shouldEncodeVideo:(double)video;
- (void)pipeline:(id)pipeline pushMetadata:(id)metadata pts:(double)pts;
- (void)pipeline:(id)pipeline videoData:(id)data pts:(double)pts dts:(double)dts;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (long long)cameraState;
- (void)noteCameraChange;
- (void)updateVideoOrientation;
- (void)handleInterfaceOrientation:(long long)orientation;
- (void)onCameraTypeChange:(long long)change;
- (long long)rotation;
- (long long)videoBitRateKilobitsPSec;
- (void)onSocketClosed;
- (void)onProxyError;
- (void)updateVideoAndAudioBitrate;
- (void)updateDebugLabel:(id)label;
- (id)publishingView;
- (void)addInput:(_Bool)input config:(id)config;
- (void)timer;
- (void)onBitrateCheck;
- (void)onData:(id)data time:(double)time input:(int)input decodeAt:(double)at;
- (void)cleanEndOfBroadcast:(id /* block */)broadcast;
- (void)onShutdownTimeout:(id)timeout;
- (void)onDrainComplete;
- (void)shutdown;
- (void)shutdownWithCompletion:(id /* block */)completion;
- (void)internalShutdownSync:(_Bool)sync completion:(id /* block */)completion;
- (void)disconnectWithCompletion:(id /* block */)completion;
- (void)ptv_shutdown:(id /* block */)ptv_shutdown;
- (void)ptv_shutdownTransmitter;
- (void)hideVideo;
- (void)ptv_reconnect:(_Bool)ptv_reconnect;
- (void)internalReconnect:(_Bool)reconnect;
- (void)reconnect:(_Bool)reconnect;
- (void)startWatchdogTimer;
- (void)onMsgTimeout;
- (void)broadcastingStarted;
- (double)videoDuration;
- (_Bool)audioPresent;
- (id)getStatistics;
- (void)sendMetadataImmediate:(_Bool)immediate;
- (double)makeNTPfor:(double)ntpfor;
- (unsigned long long)ntpForCurrentFrame;
- (void)signalEndOfBroadcast;
- (void)displaySwitchboardAsset:(id)asset withAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)removeSwitchboardAsset;

@end

#endif /* PTVPublishingViewController_h */
