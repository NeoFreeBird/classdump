//
#ifndef _TtC7XSports27BaseballGamePitcherCardView_h
#define _TtC7XSports27BaseballGamePitcherCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.Athlete _$scSg ->, XSports.BaseballGamePitcherCardView.Content ?, _$sSa -> XSports.BaseballGamePitcherCardView.RowControl, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC;

@interface XSports.BaseballGamePitcherCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    XSports.Athlete _$scSg -> onSelectAthlete;
    __C.UILabel titleLabel;
    Swift.Array -> XSports.BaseballGamePitcherCardView.RowControl rows;
    XSports.BaseballGamePitcherCardView.Content ? content;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)didTapRow:(id)row;

@end

#endif /* _TtC7XSports27BaseballGamePitcherCardView_h */
