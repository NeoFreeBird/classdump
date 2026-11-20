//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift23PullToDismissController_h
#define _TtC14T1TwitterSwift23PullToDismissController_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.PullToDismissIndicatorView, _$s12CoreGraphics7CGFloatVMn _$sycSg, _$sSbycSg, _$sSo12UIScrollViewCSgXw, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewCSgXw, _$syycSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.PullToDismissController : Swift._SwiftObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.PullToDismissIndicatorView indicatorView;
    (() -> ())? onDismiss;
    (() -> Swift.Bool)? isEnabled;
    nominal type descriptor for CoreGraphics.CGFloat _$sycSg bottomInset;
    (() -> Swift.Bool)? canLoadMoreContent;
    weak __C.UIView? containerView;
    weak __C.UIScrollView? scrollView;
    Swift.Bool didTriggerHaptic;
    Swift.Bool isDismissing;
    __C.UIImpactFeedbackGenerator hapticGenerator;
}

@end

#endif /* _TtC14T1TwitterSwift23PullToDismissController_h */
