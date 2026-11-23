//
#ifndef TweetBackgroundGaussianBlur_h
#define TweetBackgroundGaussianBlur_h
@import Foundation;

#include "MTLDevice-Protocol.h"
#include "MTLRenderPipelineState-Protocol.h"

@class NSBundle, NSObject;
@protocol MTLTexture;

@interface TweetBackgroundGaussianBlur : NSObject {
    /* instance variables */
    id <MTLDevice> _device;
    NSBundle *_bundle;
    id <MTLRenderPipelineState> _downsamplePipelineState;
    id <MTLRenderPipelineState> _blurPipelineState;
    id <MTLTexture> _downsampledTexture;
    id <MTLTexture> _horizontalTexture;
    id <MTLTexture> _blurredTexture;
    struct TweetBackgroundBlurUniforms { id texelStep; float centerWeight; float dimming; unsigned int vertexOffsetCount; unsigned int offsetCount; float offsets[16]; float weights[16]; } _kernel;
    float _kernelSigma;
}

@property (readonly, nonatomic) _Bool didFailSetup;

/* instance methods */
- (id)initWithDevice:(id)device bundle:(id)bundle;
- (id)encodeBlurOfTexture:(id)texture sigma:(float)sigma dimming:(float)dimming commandBuffer:(id)buffer;
- (_Bool)_setupPipelineStates;
- (_Bool)_setupTexturesWithWidth:(unsigned long long)width height:(unsigned long long)height;
- (unsigned long long)_downsampleFactorForSigma:(float)sigma;
- (void)_updateKernelForSigma:(float)sigma;
- (void)_encodePassWithPipelineState:(id)state source:(id)source destination:(id)destination uniforms:(struct TweetBackgroundBlurUniforms { float x0; float x1; unsigned int x2; unsigned int x3; float x4[16]; float x5[16]; })uniforms commandBuffer:(id)buffer;

@end

#endif /* TweetBackgroundGaussianBlur_h */
