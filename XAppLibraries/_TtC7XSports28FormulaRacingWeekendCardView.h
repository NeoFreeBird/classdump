//
#ifndef _TtC7XSports28FormulaRacingWeekendCardView_h
#define _TtC7XSports28FormulaRacingWeekendCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.SportsImageLoader ?, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XSports.FormulaRacingDriverRowView, _$sSaySo7UILabelC5value_AB5labeltG, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.FormulaRacingWeekendCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat focus;
    nominal type descriptor for CoreGraphics.CGFloat collapse;
    __C.TIPImagePipeline? imagePipeline;
    Swift.Bool isChipSelected;
    __C.UIImageView flagView;
    __C.UIView liveDot;
    __C.UILabel roundLabel;
    __C.UILabel chipTitleLabel;
    __C.UILabel badgeLabel;
    __C.UIView badgeBackground;
    __C.UILabel nameLabel;
    __C.UILabel chipCityLabel;
    __C.UILabel locationLabel;
    __C.UILabel cityLabel;
    __C.UILabel liveLabel;
    __C.UIView divider;
    [(value: __C.UILabel, label: __C.UILabel)] factLabels;
    Swift.Array -> XSports.FormulaRacingDriverRowView driverRows;
    __C.UIImageView trackView;
    XSports.SportsImageLoader ? $__lazy_storage_$_trackLoader;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC7XSports28FormulaRacingWeekendCardView_h */
