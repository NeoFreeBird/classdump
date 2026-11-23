//
#ifndef PTVVideoProcessorRenderContext_h
#define PTVVideoProcessorRenderContext_h
@import Foundation;

#include "PTVVideoProcessorContext.h"
#include "PTVVideoProcessorPipeline.h"

@class CIImage, NSObject;

@interface PTVVideoProcessorRenderContext : NSObject

@property (readonly, nonatomic) PTVVideoProcessorContext *videoProcessorContext;
@property (readonly, nonatomic) PTVVideoProcessorPipeline *pipeline;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer * sampleBuffer;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sampleBufferSize;
@property (readonly, nonatomic) CIImage *sampleBufferImage;
@property (readonly, nonatomic) _Bool isAudioScopeSelected;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (readonly, nonatomic) double viewOrientation;
@property (readonly, nonatomic) long long viewOrientationInDegreesClampedToRightAngles;
@property (readonly, nonatomic) _Bool viewOrientationIsLandscape;
@property (readonly, nonatomic) double viewScale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewSize;
@property (readonly, nonatomic) double encodedRotation;
@property (readonly, nonatomic) _Bool mirrorVideoPreview;
@property (readonly, nonatomic) _Bool mirrorRecordedVideo;
@property (readonly, nonatomic) double videoZoom;
@property (readonly, nonatomic) long long currentDrawBufferIndex;

/* instance methods */
- (id)initWithPipeline:(id)pipeline sampleBuffer:(struct opaqueCMSampleBuffer *)buffer targetSize:(struct CGSize { double x0; double x1; })size viewOrientation:(double)orientation viewSize:(struct CGSize { double x0; double x1; })size viewScale:(double)scale mirrorVideoPreview:(_Bool)preview mirrorRecordedVideo:(_Bool)video videoZoom:(double)zoom;
- (void)beginDrawCall;

@end

#endif /* PTVVideoProcessorRenderContext_h */
