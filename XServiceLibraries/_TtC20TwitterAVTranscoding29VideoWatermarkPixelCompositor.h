//
#ifndef _TtC20TwitterAVTranscoding29VideoWatermarkPixelCompositor_h
#define _TtC20TwitterAVTranscoding29VideoWatermarkPixelCompositor_h
@import Foundation;

#include "AVVideoCompositing-Protocol.h"

@class DispatchQueue, NSDictionary, NSObject, Swift.Bool, _$sSo31AVVideoCompositionRenderContextCSg, _$sSo9CIContextC;

@interface TwitterAVTranscoding.VideoWatermarkPixelCompositor : NSObject <AVVideoCompositing> { // (Swift)
    /* instance variables */
    DispatchQueue stateQueue;
    DispatchQueue renderingQueue;
    __C.AVVideoCompositionRenderContext? renderContext;
    Swift.Bool shouldCancelAllRequests;
    __C.CIContext ciContext;
}

@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;

/* instance methods */
- (void)renderContextChanged:(id)changed;
- (void)startVideoCompositionRequest:(id)request;
- (void)cancelAllPendingVideoCompositionRequests;
- (id)init;

@end

#endif /* _TtC20TwitterAVTranscoding29VideoWatermarkPixelCompositor_h */
