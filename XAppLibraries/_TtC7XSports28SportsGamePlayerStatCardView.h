//
#ifndef _TtC7XSports28SportsGamePlayerStatCardView_h
#define _TtC7XSports28SportsGamePlayerStatCardView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"
#include "_TtC7XSports14MeasurableView.h"

@class XSports.Athlete _$scSg ->, XSports.SportsGameBoxScoreGroup ?, XSports.SportsGamePlayerStatCardView.PlayerColumnLayout, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XSports.SportsGamePlayerStatCardView.Row, _$sSa -> _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG, _$sSaySo7UILabelCG, _$sSo12CAShapeLayerC, _$sSo12UIScrollViewC, _$sSo15CAGradientLayerC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.SportsGamePlayerStatCardView : XSports.MeasurableView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    XSports.Athlete _$scSg -> onSelectAthlete;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIView scrollContainer;
    __C.UIScrollView scrollView;
    __C.UIView rowDividerContainer;
    __C.UIView separatorContainer;
    __C.UIView statsHeaderBackground;
    __C.UIView playerOverlay;
    __C.UIView playerHeaderBackground;
    __C.UILabel titleLabel;
    __C.UILabel slotHeaderLabel;
    __C.CAGradientLayer edgeFadeMask;
    __C.CAShapeLayer connectorLayer;
    [__C.UILabel] columnHeaderLabels;
    Swift.Array -> XSports.SportsGamePlayerStatCardView.Row rows;
    [__C.UIView] playerRowDividers;
    [__C.UIView] statRowDividers;
    XSports.SportsGameBoxScoreGroup ? content;
    XSports.SportsGamePlayerStatCardView.PlayerColumnLayout playerColumnLayout;
    nominal type descriptor for CoreGraphics.CGFloat slotInset;
    nominal type descriptor for CoreGraphics.CGFloat barInset;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat separatorOffsets;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat columnWidths;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat nameWidths;
    nominal type descriptor for CoreGraphics.CGFloat stickyHeaderOffset;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)didTapProfile:(id)profile;

@end

#endif /* _TtC7XSports28SportsGamePlayerStatCardView_h */
