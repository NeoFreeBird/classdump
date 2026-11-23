//
#ifndef _TtC13XDesignSystem16ButtonTouchPlate_h
#define _TtC13XDesignSystem16ButtonTouchPlate_h
@import Foundation;

@class Swift.Bool, UIControl, XDesignSystem.Button ?;

@interface XDesignSystem.ButtonTouchPlate : UIControl { // (Swift)
    /* instance variables */
    XDesignSystem.Button ? button;
    Swift.Bool isTrackingInside;
    Swift.Bool isCancelling;
}

@property (nonatomic, readonly) _Bool canBecomeFirstResponder;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (_Bool)continueTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem16ButtonTouchPlate_h */
