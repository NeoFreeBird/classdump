//
#ifndef _TtC12XVideoEditor30VideoEditorGuideDashedLineView_h
#define _TtC12XVideoEditor30VideoEditorGuideDashedLineView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC, _$sSo7UIColorC, __C.CGPoint;

@interface XVideoEditor.VideoEditorGuideDashedLineView : UIView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer _shapeLayer;
    __C.CGPoint _throughPoint;
    nominal type descriptor for CoreGraphics.CGFloat _angle;
    __C.UIColor lineColor;
    nominal type descriptor for CoreGraphics.CGFloat lineWidth;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XVideoEditor30VideoEditorGuideDashedLineView_h */
