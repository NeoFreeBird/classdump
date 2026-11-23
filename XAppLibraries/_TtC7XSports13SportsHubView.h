//
#ifndef _TtC7XSports13SportsHubView_h
#define _TtC7XSports13SportsHubView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.SportsHubBranding ?, XSports.SportsHubView.Header, XSports.SportsHubView.MeasuredSizes ?, XSports.SportsSegmentBarView, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$s13XDesignSystem16SheetSurfaceViewCMn, _$sSo15CAGradientLayerC, _$sSo6UIViewC, _$sSo6UIViewCSg;

@interface XSports.SportsHubView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onChromeHeightChange;
    nominal type descriptor for CoreGraphics.CGFloat chromeHeight;
    __C.UIView backdropView;
    __C.CAGradientLayer backdropLayer;
    XSports.SportsHubBranding ? branding;
    nominal type descriptor for XDesignSystem.SheetSurfaceView sheetSurfaceView;
    __C.UIView contentContainer;
    __C.UIView statusBandView;
    __C.UIView statusBandSheetView;
    XSports.SportsSegmentBarView segmentBarView;
    nominal type descriptor for CoreGraphics.CGFloat sheetTopGap;
    __C.UIView? bannerView;
    Swift.Bool fillsColumn;
    XSports.SportsHubView.Header header;
    nominal type descriptor for CoreGraphics.CGFloat chromeOffset;
    XSports.SportsHubView.MeasuredSizes ? measuredSizes;
    Swift.Bool isApplyingChromeOffset;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)safeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports13SportsHubView_h */
