//
#ifndef _TtC7XSports27SportsHubScheduleColumnView_h
#define _TtC7XSports27SportsHubScheduleColumnView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.SportsHubScheduleColumnView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UIImageView logoView;
    __C.UILabel titleLabel;
    __C.UIView dividerView;
    __C.UIView columnDividerView;
    __C.UIView contentContainer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)safeAreaInsetsDidChange;

@end

#endif /* _TtC7XSports27SportsHubScheduleColumnView_h */
