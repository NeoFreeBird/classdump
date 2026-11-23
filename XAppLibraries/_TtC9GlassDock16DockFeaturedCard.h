//
#ifndef _TtC9GlassDock16DockFeaturedCard_h
#define _TtC9GlassDock16DockFeaturedCard_h
@import Foundation;

@class GlassDock.DockCapsuleInteraction ?, GlassDock.DockFeaturedContentView ?, GlassDock.DockFeaturedStageContainerView, GlassDock.DockGlyphButton, GlassDock.DockPlayerState.Size, Swift.Bool, _$sSbSg, _$syycSg, _TtCs12_SwiftObject;

@interface GlassDock.DockFeaturedCard : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GlassDock.DockFeaturedStageContainerView containerView;
    GlassDock.DockGlyphButton exitButton;
    (() -> ())? onRequest;
    (() -> ())? onEnd;
    (() -> ())? onHeightChange;
    Swift.Bool allowsFeaturing;
    GlassDock.DockPlayerState.Size size;
    GlassDock.DockFeaturedContentView ? contentView;
    Swift.Bool isFeatured;
    Swift.Bool isHeightUpdatePending;
    Swift.Bool? isRowCollapsed;
    GlassDock.DockCapsuleInteraction ? interaction;
}

@end

#endif /* _TtC9GlassDock16DockFeaturedCard_h */
