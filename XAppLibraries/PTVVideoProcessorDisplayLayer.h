//
#ifndef PTVVideoProcessorDisplayLayer_h
#define PTVVideoProcessorDisplayLayer_h
@import Foundation;

#include "PTVDisplayView-Protocol.h"
#include "PTVVideoProcessorContext.h"
#include "PTVVideoProcessorRenderer.h"
#include "PTVVideoSourcePreviewLayer-Protocol.h"

@class CALayer, CAMetalLayer;

@interface PTVVideoProcessorDisplayLayer : CALayer <PTVDisplayView>

@property (readonly, nonatomic) PTVVideoProcessorRenderer *renderer;
@property (nonatomic) long long videoPreviewOrientation;
@property struct _PTVVideoProcessorDisplayLayerMetrics { struct CGSize { double x0; double x1; } x0; double x1; } metrics;
@property (retain, nonatomic) PTVVideoProcessorContext *videoProcessorContext;
@property (retain, nonatomic) CALayer<PTVVideoSourcePreviewLayer> *videoPreviewLayer;
@property (nonatomic) _Bool isDimmingVideo;
@property (readonly, nonatomic) CAMetalLayer *metalLayer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sourceSize;
@property (nonatomic) _Bool enabled;
@property (nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoRect;

/* instance methods */
- (id)init;
- (void)layoutSublayers;
- (void)updateVideoPreviewOrientation;
- (_Bool)isEnabled;
- (id)graphicsLayer;
- (void)updateGraphicsLayer;
- (void)createGraphicsLayer;
- (void)removeGraphicsLayer;
- (void)renderWithContext:(id)context omitVideo:(_Bool)video completion:(id /* block */)completion;

@end

#endif /* PTVVideoProcessorDisplayLayer_h */
