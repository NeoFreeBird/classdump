//
#ifndef _TtC7XSports25SportsLiveViewersPillView_h
#define _TtC7XSports25SportsLiveViewersPillView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s8Dispatch0A8WorkItemCMn ?, _$sSa -> XSports.SportsLiveViewersPillView.TeamViews, _$sSaySo6UIViewCG, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg, __C.CGRect;

@interface XSports.SportsLiveViewersPillView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    (() -> ())? onSharesVisibilityChange;
    (() -> ())? onRequestPick;
    Swift.Bool hidesTeamLogos;
    nominal type descriptor for CoreGraphics.CGFloat collapseProgress;
    __C.UIView contentView;
    __C.UIImageView iconView;
    __C.UILabel countLabel;
    __C.UIView dividerView;
    __C.UIView barTrackView;
    __C.UIView barSlantView;
    Swift.Array -> XSports.SportsLiveViewersPillView.TeamViews teamViews;
    Swift.Bool viewersVisible;
    Swift.Bool showsShares;
    Swift.Bool hasPick;
    [__C.UIView] pendingRevealViews;
    __C.CGRect resultsHitFrame;
    nominal type descriptor for Dispatch.DispatchWorkItem ? collapseSharesWorkItem;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)didTapResults;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports25SportsLiveViewersPillView_h */
