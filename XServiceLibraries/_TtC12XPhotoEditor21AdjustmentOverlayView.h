//
#ifndef _TtC12XPhotoEditor21AdjustmentOverlayView_h
#define _TtC12XPhotoEditor21AdjustmentOverlayView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo12CAShapeLayerC, __C.CGRect;

@interface XPhotoEditor.AdjustmentOverlayView : UIView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer dimLayer;
    __C.CAShapeLayer borderLayer;
    __C.CAShapeLayer gridLayer;
    __C.UIImageView topLeftCorner;
    __C.UIImageView topRightCorner;
    __C.UIImageView bottomLeftCorner;
    __C.UIImageView bottomRightCorner;
    __C.CGRect _cropBoxFrame;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XPhotoEditor21AdjustmentOverlayView_h */
