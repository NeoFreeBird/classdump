//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift14BlurToastLabel_h
#define _TtC10TFNUISwift14BlurToastLabel_h
@import Foundation;

@class Swift.Bool, TFNUISwift.BlurToastLabelConfiguration, UIView, XDesignSystem.Blur, _$s8Dispatch0A8WorkItemCMn ?, _$sSo6UIViewC, _$sSo7UILabelC, _$sSu;

@interface TFNUISwift.BlurToastLabel : UIView { // (Swift)
    /* instance variables */
    __C.UILabel label;
    XDesignSystem.Blur blurView;
    __C.UIView overlayView;
    TFNUISwift.BlurToastLabelConfiguration configuration;
    nominal type descriptor for Dispatch.DispatchWorkItem ? dismissWorkItem;
    Swift.UInt animationGeneration;
    Swift.Bool isSuppressed;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10TFNUISwift14BlurToastLabel_h */
