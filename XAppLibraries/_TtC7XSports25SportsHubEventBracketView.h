//
#ifndef _TtC7XSports25SportsHubEventBracketView_h
#define _TtC7XSports25SportsHubEventBracketView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.MLBBracketView, XSports.SportsHubEventBracketFinalsCardView, XSports.SportsHubEventBracketRegionPickerView, XSports.SportsHubEventBracketState ?, _$sSo12UIScrollViewC, _$sySScSg, __C.UIEdgeInsets;

@interface XSports.SportsHubEventBracketView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets contentInsets;
    ((Swift.String) -> ())? onSelectMatchup;
    __C.UIScrollView scrollView;
    XSports.MLBBracketView bracketView;
    XSports.SportsHubEventBracketFinalsCardView finalsCardView;
    XSports.SportsHubEventBracketRegionPickerView pickerView;
    XSports.SportsHubEventBracketState ? state;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports25SportsHubEventBracketView_h */
