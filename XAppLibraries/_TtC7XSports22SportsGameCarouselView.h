//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports22SportsGameCarouselView_h
#define _TtC7XSports22SportsGameCarouselView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSa -> XSports.SportsGameCarouselView.Item, _$sSa -> XSports.SportsGameCarouselView.PillView, _$sShySSG, _$sSi, _$sSo12UIScrollViewC, _$sSo15CAGradientLayerC, _$sSo16TIPImagePipelineCSg, _$sySScSg;

@interface XSports.SportsGameCarouselView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSelectGame;
    ((Swift.String) -> ())? onDisplayGame;
    nominal type descriptor for CoreGraphics.CGFloat edgeClearance;
    nominal type descriptor for CoreGraphics.CGFloat trailingEdgeClearance;
    Swift.Bool isInNavigationBar;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIScrollView scrollView;
    __C.CAGradientLayer fadeMask;
    Swift.Array -> XSports.SportsGameCarouselView.PillView pillViews;
    Swift.Array -> XSports.SportsGameCarouselView.Item pills;
    Swift.String? selectedRestID;
    Swift.Bool hidesTeamLogos;
    Swift.Bool hasCenteredInitially;
    nominal type descriptor for CoreGraphics.CGFloat centeredWidth;
    Swift.Bool isAnimatingSelection;
    Swift.Int selectionAnimationGeneration;
    Swift.Bool needsLayoutAfterSelectionAnimation;
    Swift.Set<Swift.String> displayedGameIDs;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)didTapPill:(id)pill;

@end

#endif /* _TtC7XSports22SportsGameCarouselView_h */
