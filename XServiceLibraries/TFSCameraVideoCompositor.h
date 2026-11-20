//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCameraVideoCompositor_h
#define TFSCameraVideoCompositor_h
@import Foundation;

#include "AVVideoCompositing-Protocol.h"

@class AVVideoCompositionRenderContext, CIContext, CIImage, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TFSCameraVideoCompositor : NSObject <AVVideoCompositing>

@property (retain, nonatomic) CIContext *coreImageContext;
@property (nonatomic) struct CGColorSpace * colorSpace;
@property (nonatomic) _Bool shouldCancelAllRequests;
@property (nonatomic) _Bool renderContextDidChange;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderContextQueue;
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (retain, nonatomic) CIImage *borderMask;
@property (retain, nonatomic) CIImage *borderImage;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) _Bool supportsWideColorSourceFrames;
@property (readonly, nonatomic) _Bool supportsHDRSourceFrames;
@property (readonly, nonatomic) _Bool supportsSourceTaggedBuffers;
@property (readonly, nonatomic) _Bool canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)renderContextChanged:(id)changed;
- (void)startVideoCompositionRequest:(id)request;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)_tfn_resetCachedProperties;
- (struct __CVBuffer *)_tfn_renderedPixelBufferForRequest:(id)request error:(id *)error;
- (void)_tfn_renderPIPLayoutPixelBuffer:(struct __CVBuffer *)buffer usingForegroundSourceBuffer:(struct __CVBuffer *)buffer andBackgroundSourceBuffer:(struct __CVBuffer *)buffer forTweenFactor:(float)factor context:(id)context;

@end

#endif /* TFSCameraVideoCompositor_h */
