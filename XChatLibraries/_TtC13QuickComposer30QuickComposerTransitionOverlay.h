//
#ifndef _TtC13QuickComposer30QuickComposerTransitionOverlay_h
#define _TtC13QuickComposer30QuickComposerTransitionOverlay_h
@import Foundation;

@class QuickComposer.QuickComposerPlatter, _$s12CoreGraphics7CGFloatVMn, _$sSo6UIViewC, _$sSo8UIWindowC, _TtCs12_SwiftObject, __C.CGRect;

@interface QuickComposer.QuickComposerTransitionOverlay : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.UIWindow window;
    QuickComposer.QuickComposerPlatter platter;
    __C.UIView scrim;
    __C.UIView plate;
    __C.UIView dim;
    __C.UIView contentLayer;
    __C.UIView cloneLayer;
    __C.UIView pageLayer;
    __C.UIView cloneMask;
    __C.UIView stagingView;
    __C.CGRect slabFrame;
    nominal type descriptor for CoreGraphics.CGFloat slabRadius;
}

@end

#endif /* _TtC13QuickComposer30QuickComposerTransitionOverlay_h */
