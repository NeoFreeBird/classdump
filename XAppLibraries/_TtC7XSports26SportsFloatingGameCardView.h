//
#ifndef _TtC7XSports26SportsFloatingGameCardView_h
#define _TtC7XSports26SportsFloatingGameCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsFloatingGameCardState ?, XSports.SportsFloatingGameCardView.Side, XSports.SportsFloatingGameCardView.TuckEdge ?, XSports.SportsLiveViewersPillView, XSports.SportsScoreboardGeometry ?, _$s13XDesignSystem6ButtonCMn, _$sSo11UIImageViewC, _$sSo15CAGradientLayerC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewCSg, _$sSo7UILabelC, _$syycSg;

@interface XSports.SportsFloatingGameCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    (() -> ())? onClose;
    (() -> ())? onExpand;
    __C.TIPImagePipeline? imagePipeline;
    __C.CAGradientLayer gradientLayer;
    XSports.SportsFloatingGameCardView.Side awaySide;
    XSports.SportsFloatingGameCardView.Side homeSide;
    __C.UILabel clockLabel;
    __C.UILabel situationLabel;
    XSports.SportsLiveViewersPillView viewersPill;
    __C.UIView? accessoryView;
    nominal type descriptor for XDesignSystem.Button closeButton;
    nominal type descriptor for XDesignSystem.Button expandButton;
    __C.UIImageView tuckChevronView;
    XSports.SportsFloatingGameCardView.TuckEdge ? tuckEdge;
    XSports.SportsFloatingGameCardState ? state;
    XSports.SportsScoreboardGeometry ? morphSource;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports26SportsFloatingGameCardView_h */
