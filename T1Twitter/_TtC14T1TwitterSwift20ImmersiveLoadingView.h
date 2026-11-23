//
#ifndef _TtC14T1TwitterSwift20ImmersiveLoadingView_h
#define _TtC14T1TwitterSwift20ImmersiveLoadingView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG, _$sSo6UIViewC;

@interface T1TwitterSwift.ImmersiveLoadingView : UIView { // (Swift)
    /* instance variables */
    __C.UIView circleView;
    [__C.UIView] bodyLines;
    __C.UIView fullNameLine;
    __C.UIView usernameLine;
    nominal type descriptor for CoreGraphics.CGFloat bottomMargin;
    Swift.Bool isAnimating;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift20ImmersiveLoadingView_h */
