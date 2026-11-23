//
#ifndef PTVInteropTexturePool_h
#define PTVInteropTexturePool_h
@import Foundation;

#include "MTLDevice-Protocol.h"

@class NSObject;

@interface PTVInteropTexturePool : NSObject {
    /* instance variables */
    struct { int cvPixelFormat; unsigned long long mtlFormat; } _formatInfo;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct __CVPixelBufferPool * pixelBufferPool;
@property (readonly, nonatomic) id <MTLDevice> metalDevice;
@property (readonly, nonatomic) struct __CVMetalTextureCache * CVMetalTextureCache;

/* instance methods */
- (id)initWithSize:(struct CGSize { double x0; double x1; })size metalDevice:(id)device metalPixelFormat:(unsigned long long)format;
- (void)dealloc;
- (void)flush;
- (id)dequeueInteropTexture;

@end

#endif /* PTVInteropTexturePool_h */
