//
#ifndef _TtC16FaceLivenessCore13FreshnessView_h
#define _TtC16FaceLivenessCore13FreshnessView_h
@import Foundation;

@class UIView, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC;

@interface FaceLivenessCore.FreshnessView : UIView { // (Swift)
    /* instance variables */
    __C.UIView oldRectangle;
    __C.UIView fractionalRectangle;
    __C.NSLayoutConstraint? fractionalRectangleBottom;
    __C.NSLayoutConstraint? oldRectangleTop;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16FaceLivenessCore13FreshnessView_h */
