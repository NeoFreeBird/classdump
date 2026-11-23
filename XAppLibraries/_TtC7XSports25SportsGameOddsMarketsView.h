//
#ifndef _TtC7XSports25SportsGameOddsMarketsView_h
#define _TtC7XSports25SportsGameOddsMarketsView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsGameOddsMarketsView.Content ?, XSports.SportsOddsMarketRowView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XSports.SportsImageLoader, _$sSaySo7UILabelCG, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelCSg;

@interface XSports.SportsGameOddsMarketsView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UILabel? titleLabel;
    [__C.UILabel] columnHeaderLabels;
    XSports.SportsOddsMarketRowView awayRow;
    XSports.SportsOddsMarketRowView homeRow;
    XSports.SportsOddsMarketRowView drawRow;
    Swift.Array -> XSports.SportsImageLoader logoLoaders;
    nominal type descriptor for CoreGraphics.CGFloat columnContentWidth;
    XSports.SportsGameOddsMarketsView.Content ? content;
    __C.TIPImagePipeline? imagePipeline;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports25SportsGameOddsMarketsView_h */
