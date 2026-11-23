//
#ifndef TAVMutablePlayerViewConfiguration_h
#define TAVMutablePlayerViewConfiguration_h
@import Foundation;

#include "TAVAnalyticsPresentationScribeParameters.h"
#include "TAVPlayerViewConfiguration.h"
#include "TAVScribeContext.h"
#include "TAVVideoQualityEndpoint.h"

@interface TAVMutablePlayerViewConfiguration : TAVPlayerViewConfiguration

@property (nonatomic) _Bool isMuted;
@property (nonatomic) float playbackRate;
@property (retain, nonatomic) TAVVideoQualityEndpoint *videoQualityEndpoint;
@property (nonatomic) _Bool staticQualityEndpointsEnabled;
@property (nonatomic) long long outputViewVideoGravity;
@property (nonatomic) _Bool allowsExternalPlayback;
@property (nonatomic) _Bool shouldFirePlayFromTapBillableEvent;
@property (nonatomic) _Bool isPreview;
@property (nonatomic) _Bool isFullscreen;
@property (nonatomic) double preferredPeakBitrate;
@property (copy, nonatomic) TAVScribeContext *scribeContext;
@property (copy, nonatomic) TAVAnalyticsPresentationScribeParameters *presentationScribeParameters;
@property (nonatomic) struct { _Bool x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; _Bool x3; _Bool x4; } captionRenderingOptions;
@property (nonatomic) _Bool shouldAutoAdvance;
@property (nonatomic) long long loopingBehavior;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } forwardPlaybackEndTime;
@property (nonatomic) long long attachmentPriority;
@property (nonatomic) _Bool audioInterruptsOtherApps;
@property (nonatomic) long long nativePictureInPictureBehavior;
@property (nonatomic) _Bool allowsBackgroundAudioPlayback;
@property (nonatomic) long long zoomBehavior;
@property (nonatomic) _Bool allowsRaisedMaximumResolution;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TAVMutablePlayerViewConfiguration_h */
