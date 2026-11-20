//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift24SpaceBarMarqueeLabelView_h
#define _TtC14T1TwitterSwift24SpaceBarMarqueeLabelView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSd, _$sSo15CAGradientLayerC, _$sSo18NSAttributedStringCSg, _$sSo22UIViewPropertyAnimatorCSg, _$sSo6UIViewC, _$sSo6UIViewCSg, _$sSo7UIColorC, _$sSo7UIColorCSg, _$sSo7UILabelC;

@interface T1TwitterSwift.SpaceBarMarqueeLabelView : UIView { // (Swift)
    /* instance variables */
    Swift.Double minDuration;
    Swift.Double maxDuration;
    Swift.Double textAnimationSpeed;
    nominal type descriptor for CoreGraphics.CGFloat spacing;
    __C.UILabel labelLeft;
    __C.UILabel labelRight;
    __C.UIView tickerView;
    __C.CAGradientLayer gradientMaskLayer;
    __C.UIView? accentDotContainer;
    __C.NSAttributedString? deferredInfoAttributedText;
    __C.UIViewPropertyAnimator? scrollAnimator;
    Swift.Bool avatarsAreCollapsed;
    __C.NSAttributedString? infoAttributedText;
    __C.UIColor? accentDotColor;
    Swift.String? title;
    __C.UIColor labelColor;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)applicationDidBecomeActive;

@end

#endif /* _TtC14T1TwitterSwift24SpaceBarMarqueeLabelView_h */
