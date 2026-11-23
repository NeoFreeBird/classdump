//
#ifndef _TtC14TwitterUISwift30AsymmetricalRoundedCornersView_h
#define _TtC14TwitterUISwift30AsymmetricalRoundedCornersView_h
@import Foundation;

@class TwitterUISwift.AsymmetricalRoundedCornersSpec, TwitterUISwift.AsymmetricalRoundedCornersView.ShapeView, UIView, _$sSo6UIViewC, __C.CGPath ?, __C.CGRect ?;

@interface TwitterUISwift.AsymmetricalRoundedCornersView : UIView { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    TwitterUISwift.AsymmetricalRoundedCornersSpec cornerSpec;
    TwitterUISwift.AsymmetricalRoundedCornersView.ShapeView shapeView;
    __C.CGRect ? maskPathBounds;
    __C.CGPath ? maskPathStorage;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC14TwitterUISwift30AsymmetricalRoundedCornersView_h */
