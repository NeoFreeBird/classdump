//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK25DefaultModStyleApplicator_h
#define _TtC10JetfuelSDK25DefaultModStyleApplicator_h
@import Foundation;

@class JetfuelSDK.AnimationStyleApplier, JetfuelSDK.BackdropBlurStyleApplier, JetfuelSDK.BlurStyleApplier, JetfuelSDK.BorderStyleApplier, JetfuelSDK.CornerRadiusStyleApplier, JetfuelSDK.GlassStyleApplier, JetfuelSDK.GradientStyleApplier, JetfuelSDK.MaskFadeStyleApplier, JetfuelSDK.OpacityStyleApplier, JetfuelSDK.ShadowStyleApplier, JetfuelSDK.TransformStyleApplier, _TtCs12_SwiftObject;

@interface JetfuelSDK.DefaultModStyleApplicator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.GradientStyleApplier gradientApplier;
    JetfuelSDK.BlurStyleApplier blurApplier;
    JetfuelSDK.BackdropBlurStyleApplier backdropBlurApplier;
    JetfuelSDK.GlassStyleApplier glassApplier;
    JetfuelSDK.MaskFadeStyleApplier maskFadeApplier;
    JetfuelSDK.ShadowStyleApplier shadowApplier;
    JetfuelSDK.BorderStyleApplier borderApplier;
    JetfuelSDK.CornerRadiusStyleApplier cornerRadiusApplier;
    JetfuelSDK.TransformStyleApplier transformApplier;
    JetfuelSDK.OpacityStyleApplier opacityApplier;
    JetfuelSDK.AnimationStyleApplier animationApplier;
}

/* instance methods */
- (void)dismissKeyboard;

@end

#endif /* _TtC10JetfuelSDK25DefaultModStyleApplicator_h */
