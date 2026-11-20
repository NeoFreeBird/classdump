//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerViewConfiguration_h
#define TAVPlayerViewConfiguration_h
@import Foundation;

#include "TAVAnalyticsPresentationScribeParameters.h"
#include "TAVScribeContext.h"
#include "TAVVideoQualityEndpoint.h"

@class NSObject;

@interface TAVPlayerViewConfiguration : NSObject

@property (nonatomic) _Bool isMuted;
@property (nonatomic) float playbackRate;
@property (copy, nonatomic) TAVVideoQualityEndpoint *videoQualityEndpoint;
@property (nonatomic) _Bool staticQualityEndpointsEnabled;
@property (nonatomic) long long outputViewVideoGravity;
@property (nonatomic) _Bool allowsExternalPlayback;
@property (nonatomic) _Bool shouldFirePlayFromTapBillableEvent;
@property (nonatomic) _Bool isPreview;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } forwardPlaybackEndTime;
@property (nonatomic) _Bool isFullscreen;
@property (nonatomic) double preferredPeakBitrate;
@property (copy, nonatomic) TAVScribeContext *scribeContext;
@property (copy, nonatomic) TAVAnalyticsPresentationScribeParameters *presentationScribeParameters;
@property (nonatomic) struct { _Bool x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; _Bool x3; _Bool x4; } captionRenderingOptions;
@property (nonatomic) _Bool shouldAutoAdvance;
@property (nonatomic) long long loopingBehavior;
@property (nonatomic) long long attachmentPriority;
@property (nonatomic) _Bool audioInterruptsOtherApps;
@property (nonatomic) long long nativePictureInPictureBehavior;
@property (nonatomic) _Bool allowsBackgroundAudioPlayback;
@property (nonatomic) long long zoomBehavior;
@property (nonatomic) _Bool allowsRaisedMaximumResolution;

/* instance methods */
- (id)init;
- (id)initWithIsMuted:(_Bool)muted playbackRate:(float)rate videoQualityEndpoint:(id)endpoint staticQualityEndpointsEnabled:(_Bool)enabled outputViewVideoGravity:(long long)gravity allowsExternalPlayback:(_Bool)playback isPreview:(_Bool)preview forwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time isFullscreen:(_Bool)fullscreen preferredPeakBitrate:(double)bitrate shouldFirePlayFromTapBillableEvent:(_Bool)event scribeContext:(id)context presentationScribeParameters:(id)parameters captionRenderingOptions:(struct { _Bool x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; _Bool x3; _Bool x4; })options shouldAutoAdvance:(_Bool)advance loopingBehavior:(long long)behavior attachmentPriority:(long long)priority audioInterruptsOtherApps:(_Bool)apps nativePictureInPictureBehavior:(long long)behavior allowsBackgroundAudioPlayback:(_Bool)playback zoomBehavior:(long long)behavior allowsRaisedMaximumResolution:(_Bool)resolution;
- (id)initWithIsMuted:(_Bool)muted outputViewVideoGravity:(long long)gravity allowsExternalPlayback:(_Bool)playback isPreview:(_Bool)preview forwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time isFullscreen:(_Bool)fullscreen preferredPeakBitrate:(double)bitrate shouldFirePlayFromTapBillableEvent:(_Bool)event scribeContext:(id)context presentationScribeParameters:(id)parameters captionRenderingOptions:(struct { _Bool x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; _Bool x3; _Bool x4; })options shouldAutoAdvance:(_Bool)advance loopingBehavior:(long long)behavior attachmentPriority:(long long)priority audioInterruptsOtherApps:(_Bool)apps nativePictureInPictureBehavior:(long long)behavior zoomBehavior:(long long)behavior;
- (id)initWithIsMuted:(_Bool)muted playbackRate:(float)rate outputViewVideoGravity:(long long)gravity allowsExternalPlayback:(_Bool)playback isPreview:(_Bool)preview forwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time isFullscreen:(_Bool)fullscreen preferredPeakBitrate:(double)bitrate shouldFirePlayFromTapBillableEvent:(_Bool)event scribeContext:(id)context presentationScribeParameters:(id)parameters captionRenderingOptions:(struct { _Bool x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; _Bool x3; _Bool x4; })options shouldAutoAdvance:(_Bool)advance loopingBehavior:(long long)behavior attachmentPriority:(long long)priority audioInterruptsOtherApps:(_Bool)apps nativePictureInPictureBehavior:(long long)behavior zoomBehavior:(long long)behavior;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;

@end

#endif /* TAVPlayerViewConfiguration_h */
