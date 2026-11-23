//
#ifndef _TtC13QuickComposer26QuickComposerCollapseMorph_h
#define _TtC13QuickComposer26QuickComposerCollapseMorph_h
@import Foundation;

@class QuickComposer.QuickComposerMorphScene ?, QuickComposer.QuickComposerMorphScene.Style, QuickComposer.QuickComposerPageLoan ?, QuickComposer.QuickComposerTransitionOverlay, QuickComposer.QuickComposerView ?, QuickComposer.QuickComposerView _$scSg ->, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sSD -> QuickComposer.QuickComposerItemID QuickComposer.QuickComposerTransitionElement.Scaling, _$sSa -> QuickComposer.QuickComposerFlying, _$sSo11UIImageViewCSg, _$sSo6UIViewCSg, _$syycSg, _TtCs12_SwiftObject, __C.CGRect;

@interface QuickComposer.QuickComposerCollapseMorph : Swift._SwiftObject { // (Swift)
    /* instance variables */
    (() -> ())? onEnded;
    QuickComposer.QuickComposerView _$scSg -> onBarReturned;
    QuickComposer.QuickComposerView ? bar;
    QuickComposer.QuickComposerTransitionOverlay overlay;
    QuickComposer.QuickComposerMorphScene.Style style;
    Swift.Array -> QuickComposer.QuickComposerFlying clones;
    Swift.Array -> QuickComposer.QuickComposerFlying pageClones;
    Swift.Dictionary -> QuickComposer.QuickComposerItemID QuickComposer.QuickComposerTransitionElement.Scaling pageScaling;
    QuickComposer.QuickComposerPageLoan ? pageLoan;
    __C.UIView? underGlassBacking;
    QuickComposer.QuickComposerMorphScene ? scene;
    __C.UIImageView? backdrop;
    __C.CGRect fullFrame;
    nominal type descriptor for CoreGraphics.CGFloat fullRadius;
    Swift.Bool reducesMotion;
    (() -> ())? pendingDismiss;
    Swift.Bool isTornDown;
}

@end

#endif /* _TtC13QuickComposer26QuickComposerCollapseMorph_h */
