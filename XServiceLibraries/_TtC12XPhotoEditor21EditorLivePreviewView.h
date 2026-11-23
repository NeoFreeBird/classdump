//
#ifndef _TtC12XPhotoEditor21EditorLivePreviewView_h
#define _TtC12XPhotoEditor21EditorLivePreviewView_h
@import Foundation;

#include "MTKViewDelegate-Protocol.h"

@class MTKView, _$sSo15MTLCommandQueue_pSg, _$sSo7CIImageCSg, _$sSo9CIContextCSg, __C.CGColorSpace ?;

@interface XPhotoEditor.EditorLivePreviewView : MTKView <MTKViewDelegate> { // (Swift)
    /* instance variables */
    __C.MTLCommandQueue? commandQueue;
    __C.CIContext? ciContext;
    __C.CGColorSpace ? colorSpace;
    __C.CIImage? image;
}

/* instance methods */
- (void)mtkView:(id)view drawableSizeWillChange:(struct CGSize { double x0; double x1; })change;
- (void)drawInMTKView:(id)mtkview;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame device:(id)device;

@end

#endif /* _TtC12XPhotoEditor21EditorLivePreviewView_h */
