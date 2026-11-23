//
#ifndef _TtC11XNavigation23LiquidGlassMaterializer_h
#define _TtC11XNavigation23LiquidGlassMaterializer_h
@import Foundation;

@class XDesignSystem.Glass ?, _$s12CoreGraphics7CGFloatVMn, _$sSb12materialized_Si5tokentSg, _$sSi, _$sSo22UIViewPropertyAnimatorCSg, _$sSo6UIViewCSgXw, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface XNavigation.LiquidGlassMaterializer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XDesignSystem.Glass ? glass;
    weak __C.UIView? fill;
    __C.UIViewPropertyAnimator? animator;
    __C.NSObject? foregroundObservation;
    (materialized: Swift.Bool, token: Swift.Int)? animatingEndpoint;
    Swift.Int animationToken;
    nominal type descriptor for CoreGraphics.CGFloat progress;
}

@end

#endif /* _TtC11XNavigation23LiquidGlassMaterializer_h */
