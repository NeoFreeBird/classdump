//
#ifndef _TtC13XDesignSystem13PageIndicator_h
#define _TtC13XDesignSystem13PageIndicator_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo7CALayerCG, _$sSi, _$sSo7CALayerC, _$sSo7NSTimerCSg;

@interface XDesignSystem.PageIndicator : UIView { // (Swift)
    /* instance variables */
    Swift.Bool fadesOutWhenIdle;
    nominal type descriptor for CoreGraphics.CGFloat fractionalPage;
    __C.CALayer dotsLayer;
    Swift.Bool supportsIdleFade;
    Swift.Int pageCount;
    __C.NSTimer? idleFadeTimer;
    Swift.Bool isInteracting;
    [__C.CALayer] dotLayers;
    [__C.CALayer] pendingFadeInLayers;
    Swift.Bool animatesNextLayout;
    nominal type descriptor for CoreGraphics.CGFloat windowStart;
    Swift.Bool hasRenderedDots;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem13PageIndicator_h */
