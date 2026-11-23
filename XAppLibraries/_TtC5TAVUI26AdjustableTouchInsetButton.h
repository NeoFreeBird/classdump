//
#ifndef _TtC5TAVUI26AdjustableTouchInsetButton_h
#define _TtC5TAVUI26AdjustableTouchInsetButton_h
@import Foundation;

@class UIButton, __C.UIEdgeInsets ?;

@interface TAVUI.AdjustableTouchInsetButton : UIButton { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets ? touchInset;
}

/* instance methods */
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC5TAVUI26AdjustableTouchInsetButton_h */
