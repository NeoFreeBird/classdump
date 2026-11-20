//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK6JetEnv_h
#define _TtC10JetfuelSDK6JetEnv_h
@import Foundation;

@class JetfuelSDK.Mods.Category, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s7Combine9PublishedVMn JetfuelSDK.JFEdgeInsets, _$s7Combine9PublishedVMn JetfuelSDK.JfContentSizeStepModifier, _$s7Combine9PublishedVMn _$sySa -> JetfuelSDK.Mods.Category, _$sSd, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject, __C.AnimationCurve;

@interface JetfuelSDK.JetEnv : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.Mods.Category theme;
    nominal type descriptor for CoreGraphics.CGFloat width;
    Swift.Bool isGlassEnabled;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> JetfuelSDK.Mods.Category _activeMods;
    nominal type descriptor for Combine.Published JetfuelSDK.JfContentSizeStepModifier _contentSizeStepModifier;
    nominal type descriptor for Combine.Published JetfuelSDK.JFEdgeInsets _safeAreaInsets;
    Swift.Bool keyboardShown;
    Swift.Double keyboardAnimationDuration;
    __C.AnimationCurve keyboardAnimationCurve;
    weak __C.UIViewController? hostingController;
}

@end

#endif /* _TtC10JetfuelSDK6JetEnv_h */
