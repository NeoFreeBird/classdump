//
#ifndef _TtC12XPhotoEditor17CollageCanvasView_h
#define _TtC12XPhotoEditor17CollageCanvasView_h
@import Foundation;

@class UIView, XPhotoEditor.CollageLayout, _$sSa -> XPhotoEditor.CollageSlotView, _$sSo7UIColorC, _$sySicSg;

@interface XPhotoEditor.CollageCanvasView : UIView { // (Swift)
    /* instance variables */
    ((Swift.Int) -> ())? onEmptySlotTapped;
    ((Swift.Int) -> ())? onSlotRemoveTapped;
    __C.UIColor dividerColor;
    XPhotoEditor.CollageLayout layout;
    Swift.Array -> XPhotoEditor.CollageSlotView slotViews;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor17CollageCanvasView_h */
