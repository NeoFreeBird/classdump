//
#ifndef _TtC20ChatAttachmentViewer23ZoomableMediaScrollView_h
#define _TtC20ChatAttachmentViewer23ZoomableMediaScrollView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class Swift.Bool, UIScrollView, _$sSo22UITapGestureRecognizerCSg, _$sSo6UIViewC, _$sySbcSg, __C.CGSize ?, __C.UIEdgeInsets;

@interface ChatAttachmentViewer.ZoomableMediaScrollView : UIScrollView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    __C.UIView mediaView;
    __C.CGSize ? mediaContentSize;
    __C.UIEdgeInsets mediaContentInsets;
    Swift.Bool masksMediaToCircle;
    ((Swift.Bool) -> ())? onZoomActiveChanged;
    __C.UITapGestureRecognizer? $__lazy_storage_$_doubleTapRecognizer;
}

/* instance methods */
- (id)viewForZoomingInScrollView:(id)view;
- (void)scrollViewDidZoom:(id)zoom;
- (void)scrollViewWillBeginZooming:(id)zooming withView:(id)view;
- (void)scrollViewDidEndZooming:(id)zooming withView:(id)view atScale:(double)scale;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)handleDoubleTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC20ChatAttachmentViewer23ZoomableMediaScrollView_h */
