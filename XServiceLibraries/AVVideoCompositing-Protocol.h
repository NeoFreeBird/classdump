//
#ifndef AVVideoCompositing_Protocol_h
#define AVVideoCompositing_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary;

@protocol AVVideoCompositing <NSObject>

@required

@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) _Bool supportsWideColorSourceFrames;
@property (nonatomic, readonly) _Bool supportsHDRSourceFrames;
@property (nonatomic, readonly) _Bool supportsSourceTaggedBuffers;
@property (nonatomic, readonly) _Bool canConformColorOfSourceFrames;

/* required instance methods */
- (void)renderContextChanged:(id)changed;
- (void)startVideoCompositionRequest:(id)request;
- (void)startVideoCompositionRequest:(id)request;

@optional

/* optional instance methods */
- (void)cancelAllPendingVideoCompositionRequests;
- (void)anticipateRenderingUsingHint:(id)hint;
- (void)anticipateRenderingUsingHint:(id)hint;
- (void)prerollForRenderingUsingHint:(id)hint;
- (void)prerollForRenderingUsingHint:(id)hint;

@end

#endif /* AVVideoCompositing_Protocol_h */
