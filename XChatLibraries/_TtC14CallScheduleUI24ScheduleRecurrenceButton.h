//
#ifndef _TtC14CallScheduleUI24ScheduleRecurrenceButton_h
#define _TtC14CallScheduleUI24ScheduleRecurrenceButton_h
@import Foundation;

@class UIControl, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface CallScheduleUI.ScheduleRecurrenceButton : UIControl { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    __C.UIImageView chevronView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14CallScheduleUI24ScheduleRecurrenceButton_h */
