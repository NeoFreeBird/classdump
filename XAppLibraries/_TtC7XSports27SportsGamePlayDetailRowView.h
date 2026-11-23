//
#ifndef _TtC7XSports27SportsGamePlayDetailRowView_h
#define _TtC7XSports27SportsGamePlayDetailRowView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsGamePlayDetailRow ?, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.SportsGamePlayDetailRowView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UIView badgeView;
    __C.UILabel badgeLabel;
    __C.UILabel textLabel;
    __C.UILabel detailLabel;
    __C.UILabel trailingLabel;
    __C.UIView dividerView;
    XSports.SportsGamePlayDetailRow ? content;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports27SportsGamePlayDetailRowView_h */
