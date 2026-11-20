//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift39ImmersivePlaybackRateLockHintPluginView_h
#define _TtC14T1TwitterSwift39ImmersivePlaybackRateLockHintPluginView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveLongPressFastForwardState, UIView, _$s8Dispatch0A8WorkItemCMn ?, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface T1TwitterSwift.ImmersivePlaybackRateLockHintPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardState ? state;
    T1TwitterSwift.ImmersiveLongPressFastForwardState longPressFastForwardState;
    nominal type descriptor for Dispatch.DispatchWorkItem ? autoDismissWorkItem;
    __C.UILabel? $__lazy_storage_$_label;
    __C.UIView? $__lazy_storage_$_containerView;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift39ImmersivePlaybackRateLockHintPluginView_h */
