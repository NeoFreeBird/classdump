//
#ifndef _TtC7XSports37SportsHubEventBracketRegionPickerView_h
#define _TtC7XSports37SportsHubEventBracketRegionPickerView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsHubEventBracketState.Picker ?, XSports.SportsImageLoader, _$sSa -> XSports.SportsHubEventBracketRegionPickerView.RegionPill, _$sSo11UIImageViewC, _$sSo9UIControlC, _$sySicSg;

@interface XSports.SportsHubEventBracketRegionPickerView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    ((Swift.Int) -> ())? onSelectPage;
    Swift.Array -> XSports.SportsHubEventBracketRegionPickerView.RegionPill pills;
    __C.UIControl finalsControl;
    __C.UIImageView finalsLogoView;
    XSports.SportsImageLoader finalsLogoLoader;
    XSports.SportsHubEventBracketState.Picker ? picker;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)handleSelection:(id)selection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports37SportsHubEventBracketRegionPickerView_h */
