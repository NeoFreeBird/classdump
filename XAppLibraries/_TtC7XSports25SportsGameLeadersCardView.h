//
#ifndef _TtC7XSports25SportsGameLeadersCardView_h
#define _TtC7XSports25SportsGameLeadersCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.Athlete _$scSg ->, XSports.SportsGameLeadersCardView.Content ?, XSports.SportsGameLeadersCardView.Measured ?, XSports.SportsGameLeadersCardView.TeamHeaderControl ?, XSports.SportsTeam _$scSg ->, _$sSa -> XSports.SportsGameLeadersCardView.RowViews, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC;

@interface XSports.SportsGameLeadersCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    XSports.Athlete _$scSg -> onSelectAthlete;
    XSports.SportsTeam _$scSg -> onSelectTeam;
    XSports.SportsGameLeadersCardView.TeamHeaderControl ? $__lazy_storage_$_awayHeader;
    XSports.SportsGameLeadersCardView.TeamHeaderControl ? $__lazy_storage_$_homeHeader;
    __C.UILabel titleLabel;
    Swift.Array -> XSports.SportsGameLeadersCardView.RowViews rows;
    XSports.SportsGameLeadersCardView.Content ? content;
    XSports.SportsGameLeadersCardView.Measured ? measured;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7XSports25SportsGameLeadersCardView_h */
