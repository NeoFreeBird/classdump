//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor20VideoEdgeToEdgeGuide_h
#define _TtC12XVideoEditor20VideoEdgeToEdgeGuide_h
@import Foundation;

@class Swift.Bool, XVideoEditor.VideoEdgeToEdgeGuide.Axis, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$s7Combine18PassthroughSubjectCMn _$sySb _$ss5NeverOMn, _TtCs12_SwiftObject, __C.CGPoint ?, __C.CGRect _$sycSg, __C.CGSize _$sycSg, __C.UIEdgeInsets;

@interface XVideoEditor.VideoEdgeToEdgeGuide : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.CGRect _$sycSg captureRectProvider;
    __C.CGSize _$sycSg viewPortSizeProvider;
    __C.UIEdgeInsets insets;
    nominal type descriptor for CoreGraphics.CGFloat maxActivationVelocity;
    XVideoEditor.VideoEdgeToEdgeGuide.Axis axis;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never _isActiveSubject;
    __C.CGPoint ? _panLocationAtActivation;
    nominal type descriptor for CoreGraphics.CGFloat ? _scaleAtActivation;
    Swift.Bool _isActive;
}

@end

#endif /* _TtC12XVideoEditor20VideoEdgeToEdgeGuide_h */
