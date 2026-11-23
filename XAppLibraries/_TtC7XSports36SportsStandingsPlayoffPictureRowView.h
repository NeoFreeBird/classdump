//
#ifndef _TtC7XSports36SportsStandingsPlayoffPictureRowView_h
#define _TtC7XSports36SportsStandingsPlayoffPictureRowView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class _$s12CoreGraphics7CGFloatVMn, _$sSa -> XSports.SportsStandingsPlayoffPictureRowView.TeamCard, _$sSa -> XSports.SportsStandingsState.PlayoffPicture.Team ?, _$sSo16TIPImagePipelineCSg, _$sySScSg;

@interface XSports.SportsStandingsPlayoffPictureRowView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSelectTeam;
    __C.TIPImagePipeline? imagePipeline;
    Swift.Array -> XSports.SportsStandingsPlayoffPictureRowView.TeamCard cards;
    Swift.Array -> XSports.SportsStandingsState.PlayoffPicture.Team ? teams;
    nominal type descriptor for CoreGraphics.CGFloat seedWidth;
}

/* instance methods */
- (void)traitCollectionDidChange:(id)change;
- (void)didTapCard:(id)card;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7XSports36SportsStandingsPlayoffPictureRowView_h */
