//
#ifndef _TtC7XSports24BaseballAtBatMatchupView_h
#define _TtC7XSports24BaseballAtBatMatchupView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.BaseballAtBatDetail ?, XSports.BaseballAtBatMatchupView.TeamScore, XSports.BaseballCountIndicatorView, XSports.BaseballDiamondView, XSports.BaseballParticipantView, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC;

@interface XSports.BaseballAtBatMatchupView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    XSports.BaseballAtBatMatchupView.TeamScore away;
    XSports.BaseballAtBatMatchupView.TeamScore home;
    XSports.BaseballParticipantView leadingParticipant;
    XSports.BaseballParticipantView trailingParticipant;
    XSports.BaseballDiamondView diamondView;
    XSports.BaseballCountIndicatorView countIndicator;
    __C.UIView topDivider;
    XSports.BaseballAtBatDetail ? detail;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports24BaseballAtBatMatchupView_h */
