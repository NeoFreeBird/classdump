//
#ifndef PTVVideoProcessorPipeline_h
#define PTVVideoProcessorPipeline_h
@import Foundation;

#include "PTVAudioVisualizerVideoRenderer.h"
#include "PTVSketchEngine.h"
#include "PTVSketchPointReceivable-Protocol.h"
#include "PTVSwitchboardDisplayable-Protocol.h"
#include "PTVSwitchboardEntity.h"
#include "PTVVideoProcessorContext.h"

@class NSArray, NSObject, NSString;

@interface PTVVideoProcessorPipeline : NSObject <PTVSketchPointReceivable, PTVSwitchboardDisplayable> {
    /* instance variables */
    PTVVideoProcessorPipeline *_weakSelf;
}

@property (readonly, nonatomic) PTVVideoProcessorContext *context;
@property (readonly, nonatomic) NSArray *entities;
@property (readonly, nonatomic) PTVSwitchboardEntity *switchboardEntity;
@property (readonly, nonatomic) PTVSketchEngine *sketchEngine;
@property (readonly, nonatomic) PTVAudioVisualizerVideoRenderer *audioVisualizerVideoRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context audioVisualizerModel:(id)model;
- (void)tickWithPassageOfTime:(double)time;
- (void)renderPassDidComplete;
- (_Bool)shouldDrawEntitiesOmittingVideo:(_Bool)video;
- (void)enqueueSketchPoints:(id)points;
- (void)clearCanvasAnimated:(_Bool)animated;
- (void)displaySwitchboardAsset:(id)asset withAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)removeSwitchboardAsset;
- (void)didCreateSwitchboardImage:(id)image withAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;

@end

#endif /* PTVVideoProcessorPipeline_h */
