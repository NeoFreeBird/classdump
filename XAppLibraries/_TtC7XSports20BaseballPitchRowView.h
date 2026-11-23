//
#ifndef _TtC7XSports20BaseballPitchRowView_h
#define _TtC7XSports20BaseballPitchRowView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.BaseballDiamondView, XSports.BaseballPitchLocationView, XSports.BaseballPitchRow ?, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.BaseballPitchRowView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UIView badgeView;
    __C.UILabel badgeLabel;
    __C.UILabel resultLabel;
    __C.UILabel detailLabel;
    XSports.BaseballPitchLocationView zoneView;
    XSports.BaseballDiamondView basesView;
    __C.UIView dividerView;
    XSports.BaseballPitchRow ? content;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports20BaseballPitchRowView_h */
