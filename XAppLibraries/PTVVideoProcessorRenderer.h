//
#ifndef PTVVideoProcessorRenderer_h
#define PTVVideoProcessorRenderer_h
@import Foundation;

#include "PTVInteropTexturePool.h"
#include "PTVVideoProcessorContext.h"

@class NSObject;

@interface PTVVideoProcessorRenderer : NSObject

@property (readonly, nonatomic) PTVVideoProcessorContext *videoProcessorContext;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) PTVInteropTexturePool *texturePool;

/* class methods */
+ (void)renderCIImage:(id)ciimage withContext:(id)context toMTLTexture:(id)mtltexture commandBuffer:(id)buffer;

/* instance methods */
- (id)initWithVideoProcessorContext:(id)context size:(struct CGSize { double x0; double x1; })size pixelFormat:(unsigned long long)format;
- (void)renderUsingMetalToDisplayLayer:(id)layer withContext:(id)context omitVideo:(_Bool)video completion:(id /* block */)completion;
- (void)renderUsingMetalToFramebufferWithContext:(id)context completion:(id /* block */)completion;
- (id)drawUsingMetalToTexture:(id)texture withContext:(id)context forDisplay:(_Bool)display omitVideo:(_Bool)video;
- (void)drawUsingMetalToTexture:(id)texture commandBuffer:(id)buffer withContext:(id)context forDisplay:(_Bool)display omitVideo:(_Bool)video;

@end

#endif /* PTVVideoProcessorRenderer_h */
