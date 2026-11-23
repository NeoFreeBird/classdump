//
#ifndef PTVVideoProcessor_h
#define PTVVideoProcessor_h
@import Foundation;

#include "PTVAudioVisualizerModel.h"
#include "PTVSketchPointReceivable-Protocol.h"
#include "PTVSwitchboardDisplayable-Protocol.h"
#include "PTVVideoProcessorContext.h"
#include "PTVVideoProcessorDelegate-Protocol.h"
#include "PTVVideoProcessorDisplayLayer.h"
#include "PTVVideoProcessorFramebuffer.h"
#include "PTVVideoProcessorPipeline.h"

@class NSObject, NSString;

@interface PTVVideoProcessor : NSObject <PTVSketchPointReceivable, PTVSwitchboardDisplayable> {
    /* instance variables */
    PTVVideoProcessor *_weakSelf;
    _Bool _bypassVideoProcessing;
}

@property (readonly, nonatomic) PTVVideoProcessorPipeline *pipeline;
@property (retain, nonatomic) PTVVideoProcessorFramebuffer *framebuffer;
@property (retain, nonatomic) PTVVideoProcessorFramebuffer *framebufferHQ;
@property (nonatomic) double encodedRotation;
@property (weak, nonatomic) id <PTVVideoProcessorDelegate> delegate;
@property (readonly, nonatomic) PTVVideoProcessorContext *context;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (nonatomic) _Bool omitVideoDuringFramebufferDisplay;
@property (nonatomic) _Bool mirrorVideoPreview;
@property (nonatomic) _Bool mirrorRecordedVideo;
@property double videoZoom;
@property (readonly, nonatomic) PTVAudioVisualizerModel *audioVisualizerModel;
@property double viewOrientation;
@property (retain, nonatomic) PTVVideoProcessorDisplayLayer *displayLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate targetSize:(struct CGSize { double x0; double x1; })size audioVisualizerModel:(id)model isHighQualityEnabled:(_Bool)enabled bypassVideoProcessing:(_Bool)processing;
- (void)enqueueSketchPoints:(id)points;
- (void)clearCanvasAnimated:(_Bool)animated;
- (void)displaySwitchboardAsset:(id)asset withAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)removeSwitchboardAsset;
- (void)shutdown;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)processiPhoneCameraSampleBuffer:(struct opaqueCMSampleBuffer *)buffer captureContext:(struct { long long x0; })context;
- (void)processiPhoneCameraMetadataObjects:(id)objects;
- (void)backgroundProcessSampleBuffer:(struct opaqueCMSampleBuffer *)buffer captureContext:(struct { long long x0; })context;

@end

#endif /* PTVVideoProcessor_h */
