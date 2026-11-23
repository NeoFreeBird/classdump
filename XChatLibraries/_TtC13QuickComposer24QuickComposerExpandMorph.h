//
#ifndef _TtC13QuickComposer24QuickComposerExpandMorph_h
#define _TtC13QuickComposer24QuickComposerExpandMorph_h
@import Foundation;

@class QuickComposer.QuickComposerChevronView ?, QuickComposer.QuickComposerExpandMorph.Caret ?, QuickComposer.QuickComposerExpandMorph.Preparation, QuickComposer.QuickComposerMorphScene, QuickComposer.QuickComposerPageLoan, QuickComposer.QuickComposerTransitionDestination ?, QuickComposer.QuickComposerTransitionOverlay, QuickComposer.QuickComposerView ?, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSa -> QuickComposer.QuickComposerFlying, _$sSaySo10UITextViewC04textB0_So7UIColorCSg4tinttG, _$sSaySo6UIViewC4view_ _$s12CoreGraphics7CGFloatVMn alphat, _$sSbycSg, _$sSdSg, _$sSo22UIViewPropertyAnimatorCSg, _$sSo6UIViewC, _$sSo6UIViewCSg, _$sSo6UIViewCSgXw, _$sSo7UIColorCSg, _$syycSg, _TtCs12_SwiftObject;

@interface QuickComposer.QuickComposerExpandMorph : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool hasBegunGrowth;
    Swift.Bool hasDestination;
    Swift.Bool isEnded;
    Swift.Bool isWarm;
    (() -> Swift.Bool)? isReadyToReveal;
    (() -> ())? onWarm;
    (() -> ())? onReveal;
    (() -> ())? onLanded;
    (() -> ())? onEnded;
    QuickComposer.QuickComposerTransitionOverlay overlay;
    QuickComposer.QuickComposerView ? bar;
    QuickComposer.QuickComposerMorphScene scene;
    Swift.Array -> QuickComposer.QuickComposerFlying clones;
    QuickComposer.QuickComposerPageLoan pageLoan;
    Swift.Array -> QuickComposer.QuickComposerFlying pageClones;
    __C.UIView? underGlassBacking;
    QuickComposer.QuickComposerExpandMorph.Caret ? caret;
    __C.UIColor? hiddenBarCaretTint;
    QuickComposer.QuickComposerChevronView ? chevron;
    nominal type descriptor for CoreGraphics.CGFloat triggerDistance;
    QuickComposer.QuickComposerExpandMorph.Preparation preparation;
    QuickComposer.QuickComposerTransitionDestination ? destination;
    weak __C.UIView? destinationRoot;
    __C.UIView destinationMask;
    __C.UIView? crossFadeSurface;
    [(textView: __C.UITextView, tint: __C.UIColor?)] hiddenCarets;
    Swift.Array empty-list __C.UIViewview first-element-marker  nominal type descriptor for CoreGraphics.CGFloat alphat hiddenTargets;
    Swift.Bool hidesDestinationSharedElements;
    Swift.Bool reducesMotion;
    __C.UIViewPropertyAnimator? animator;
    nominal type descriptor for CoreGraphics.CGFloat commitVelocity;
    Swift.Double? growthStartedAt;
    Swift.Bool growthDidSettle;
    Swift.Bool flightsDidLand;
    Swift.Bool destinationArrived;
    Swift.Bool didReveal;
    Swift.Bool isTornDown;
    nominal type descriptor for CoreGraphics.CGFloat ? pendingRise;
}

@end

#endif /* _TtC13QuickComposer24QuickComposerExpandMorph_h */
