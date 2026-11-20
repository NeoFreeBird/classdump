//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift40ImmersivePlaybackRateIndicatorPluginView_h
#define _TtC14T1TwitterSwift40ImmersivePlaybackRateIndicatorPluginView_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveLongPressFastForwardState, T1TwitterSwift.ImmersivePlaybackRateIndicatorPluginView.VisualMode, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$s8Dispatch0A8WorkItemCMn ?, _$sSo11UIImageViewCSg, _$sSo12CAShapeLayerCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg, __C.CGRect;

@interface T1TwitterSwift.ImmersivePlaybackRateIndicatorPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardState ? state;
    T1TwitterSwift.ImmersiveLongPressFastForwardState longPressFastForwardState;
    T1TwitterSwift.ImmersivePlaybackRateIndicatorPluginView.VisualMode currentVisualMode;
    Swift.Bool didPlayLockBounce;
    Swift.Bool pendingLockAnimation;
    __C.CGRect preLockLabelFrame;
    Swift.Bool pendingUnlockAnimation;
    __C.CGRect preUnlockLabelFrame;
    __C.CGRect preUnlockContainerBounds;
    Swift.Bool retainExpandedSizeForFadeOut;
    Swift.Bool showLockedIndicator;
    nominal type descriptor for Dispatch.DispatchWorkItem ? lockedAutoDismissWorkItem;
    __C.UIImageView? $__lazy_storage_$_iconImageView;
    __C.UILabel? $__lazy_storage_$_label;
    __C.CAShapeLayer? $__lazy_storage_$_borderLayer;
    __C.UIView? $__lazy_storage_$_containerView;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift40ImmersivePlaybackRateIndicatorPluginView_h */
