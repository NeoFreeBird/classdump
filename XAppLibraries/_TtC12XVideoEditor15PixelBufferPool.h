//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor15PixelBufferPool_h
#define _TtC12XVideoEditor15PixelBufferPool_h
@import Foundation;

@class _$sSD -> XVideoEditor.PixelBufferPool.Size __C.CVPixelBufferPool, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface XVideoEditor.PixelBufferPool : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSLock lock;
    Swift.Dictionary -> XVideoEditor.PixelBufferPool.Size __C.CVPixelBufferPool pools;
}

@end

#endif /* _TtC12XVideoEditor15PixelBufferPool_h */
