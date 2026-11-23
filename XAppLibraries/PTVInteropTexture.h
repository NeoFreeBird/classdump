//
#ifndef PTVInteropTexture_h
#define PTVInteropTexture_h
@import Foundation;

#include "MTLDevice-Protocol.h"

@class NSObject;
@protocol MTLTexture;

@interface PTVInteropTexture : NSObject {
    /* instance variables */
    struct __CVBuffer * _CVMetalTexture;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct __CVBuffer * CVPixelBuffer;
@property (readonly, nonatomic) id <MTLDevice> metalDevice;
@property (readonly, nonatomic) id <MTLTexture> metalTexture;

/* instance methods */
- (id)initWithSize:(struct CGSize { double x0; double x1; })size CVPixelBufferPool:(struct __CVPixelBufferPool *)pool metalDevice:(id)device CVMetalTextureCache:(struct __CVMetalTextureCache *)cache formatInfo:(struct { int x0; unsigned long long x1; })info;
- (void)dealloc;

@end

#endif /* PTVInteropTexture_h */
