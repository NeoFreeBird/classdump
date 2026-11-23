//
#ifndef _TtC14CallScheduleUI24ScheduledCallColorButton_h
#define _TtC14CallScheduleUI24ScheduledCallColorButton_h
@import Foundation;

@class CallScheduleUI.ScheduledCallColorSquareView, UIControl;

@interface CallScheduleUI.ScheduledCallColorButton : UIControl { // (Swift)
    /* instance variables */
    CallScheduleUI.ScheduledCallColorSquareView squareView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14CallScheduleUI24ScheduledCallColorButton_h */
