//
#ifndef _TtC12XVideoEditor14TextRasterizer_h
#define _TtC12XVideoEditor14TextRasterizer_h
@import Foundation;

@class DispatchQueue, Swift.Bool, XVideoEditor.PixelBufferPool, XVideoEditor.PreparationGate ?, XVideoEditor.RenderObserver ?, XVideoEditor.TextRasterizer.SetUp ?, _$syyYbcSg, _TtCs12_SwiftObject, __C.CGSize;

@interface XVideoEditor.TextRasterizer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.CGSize _renderSize;
    XVideoEditor.PixelBufferPool _pool;
    XVideoEditor.RenderObserver ? _observer;
    DispatchQueue _queue;
    XVideoEditor.PreparationGate ? _gate;
    XVideoEditor.TextRasterizer.SetUp ? _setUp;
    Swift.Bool _isRasterizing;
    (@Sendable () -> ())? queueHalfWillRun;
}

@end

#endif /* _TtC12XVideoEditor14TextRasterizer_h */
