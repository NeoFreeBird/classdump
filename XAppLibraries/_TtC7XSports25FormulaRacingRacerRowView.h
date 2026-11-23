//
#ifndef _TtC7XSports25FormulaRacingRacerRowView_h
#define _TtC7XSports25FormulaRacingRacerRowView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsAvatarView, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.FormulaRacingRacerRowView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.UILabel positionLabel;
    XSports.SportsAvatarView avatarView;
    __C.UILabel nameLabel;
    __C.UILabel detailLabel;
    __C.UILabel timeLabel;
    __C.UILabel secondaryLabel;
    __C.UIView divider;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7XSports25FormulaRacingRacerRowView_h */
