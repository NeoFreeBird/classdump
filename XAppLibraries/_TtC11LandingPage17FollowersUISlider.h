//
#ifndef _TtC11LandingPage17FollowersUISlider_h
#define _TtC11LandingPage17FollowersUISlider_h
@import Foundation;

@class NSString, UISlider, _$sSS, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface LandingPage.FollowersUISlider : UISlider { // (Swift)
    /* instance variables */
    __C.NSLayoutConstraint? offsetConstraint;
    __C.NSLayoutConstraint? arrowOffsetConstraint;
    Swift.String accessibilityAmount;
    __C.UIView? $__lazy_storage_$_arrowBubble;
    __C.UIView? $__lazy_storage_$_hintBubble;
    __C.UILabel? $__lazy_storage_$_hintLabel;
}

@property (nonatomic, copy) NSString *accessibilityValue;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect value:(float)value;
- (void)updateBubbleHint;

@end

#endif /* _TtC11LandingPage17FollowersUISlider_h */
