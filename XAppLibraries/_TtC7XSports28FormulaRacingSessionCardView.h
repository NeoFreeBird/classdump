//
#ifndef _TtC7XSports28FormulaRacingSessionCardView_h
#define _TtC7XSports28FormulaRacingSessionCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.Athlete _$scSg ->, XSports.FormulaRacingDriverRowView, XSports.FormulaRacingPodiumView, XSports.FormulaRacingSessionCard ?, _$s13XDesignSystem6ButtonCMn, _$sSa -> XSports.FormulaRacingDriverRowView, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XSports.FormulaRacingSessionCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    __C.UILabel trailingLabel;
    __C.UILabel previewLabel;
    __C.UILabel previousTitleLabel;
    XSports.FormulaRacingDriverRowView previousRow;
    __C.UIView liveDot;
    XSports.FormulaRacingPodiumView podiumView;
    __C.UIImageView chatWave;
    nominal type descriptor for XDesignSystem.Button joinChatButton;
    Swift.Array -> XSports.FormulaRacingDriverRowView driverRows;
    XSports.FormulaRacingSessionCard ? card;
    (() -> ())? onJoinChat;
    XSports.Athlete _$scSg -> onSelectAthlete;
    __C.TIPImagePipeline? imagePipeline;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7XSports28FormulaRacingSessionCardView_h */
