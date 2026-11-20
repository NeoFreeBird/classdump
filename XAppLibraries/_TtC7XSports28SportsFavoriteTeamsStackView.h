//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports28SportsFavoriteTeamsStackView_h
#define _TtC7XSports28SportsFavoriteTeamsStackView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsFavoriteTeamsStore.LoadState, _$s10TFNUISwift11ShimmerViewCMn ?, _$s13XDesignSystem6ButtonCMn, _$sSa -> XSports.SportsTeamStackChipView, _$sSo16TIPImagePipelineCSg, _$syycSg;

@interface XSports.SportsFavoriteTeamsStackView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    XSports.SportsFavoriteTeamsStore.LoadState loadState;
    __C.TIPImagePipeline? imagePipeline;
    Swift.Array -> XSports.SportsTeamStackChipView chips;
    nominal type descriptor for TFNUISwift.ShimmerView ? skeletonView;
    nominal type descriptor for XDesignSystem.Button addFavoriteTeamButton;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)handleTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports28SportsFavoriteTeamsStackView_h */
