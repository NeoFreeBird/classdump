//
#ifndef TFSCameraVideoCompositionInstruction_h
#define TFSCameraVideoCompositionInstruction_h
@import Foundation;

#include "AVVideoCompositionInstruction-Protocol.h"
#include "TFSCameraVideoCompositorContext.h"

@class NSArray, NSObject, NSString;

@interface TFSCameraVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>

@property (retain, nonatomic) TFSCameraVideoCompositorContext *context;
@property (nonatomic) int foregroundTrackID;
@property (nonatomic) int backgroundTrackID;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) _Bool enablePostProcessing;
@property (readonly, nonatomic) _Bool containsTweening;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initPassWithThroughTrackID:(int)id forTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (id)initTransitionWithSourceTrackIDs:(id)ids forTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range context:(id)context;

@end

#endif /* TFSCameraVideoCompositionInstruction_h */
