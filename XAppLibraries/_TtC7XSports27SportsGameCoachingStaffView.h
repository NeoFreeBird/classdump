//
#ifndef _TtC7XSports27SportsGameCoachingStaffView_h
#define _TtC7XSports27SportsGameCoachingStaffView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsGameCoachingStaffView.Content, _$sSa -> XSports.SportsGameCoachingStaffView.Row;

@interface XSports.SportsGameCoachingStaffView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    Swift.Array -> XSports.SportsGameCoachingStaffView.Row rows;
    XSports.SportsGameCoachingStaffView.Content content;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports27SportsGameCoachingStaffView_h */
