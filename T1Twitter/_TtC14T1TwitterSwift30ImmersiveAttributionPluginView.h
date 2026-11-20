//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift30ImmersiveAttributionPluginView_h
#define _TtC14T1TwitterSwift30ImmersiveAttributionPluginView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersiveFeatureFlags, T1TwitterSwift.ImmersivePluginFirstReveal ??, T1TwitterSwift.ImmersivePluginViewDelegate ?, T1TwitterSwift.MediaAttributionPillView, UIView, _$sSo17TFNTwitterAccountC, _$sSo28UILongPressGestureRecognizerC;

@interface T1TwitterSwift.ImmersiveAttributionPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    T1TwitterSwift.ImmersiveCardState ? lastState;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.ImmersiveFeatureFlags featureFlags;
    T1TwitterSwift.MediaAttributionPillView overlayView;
    T1TwitterSwift.ImmersivePluginFirstReveal ?? $__lazy_storage_$_firstReveal;
    __C.UILongPressGestureRecognizer longPressRecognizer;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)handleTap;
- (void)handleLongPress:(id)press;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift30ImmersiveAttributionPluginView_h */
