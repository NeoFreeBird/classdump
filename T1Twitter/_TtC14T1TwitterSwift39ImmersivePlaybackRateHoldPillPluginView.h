//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift39ImmersivePlaybackRateHoldPillPluginView_h
#define _TtC14T1TwitterSwift39ImmersivePlaybackRateHoldPillPluginView_h
@import Foundation;

@class T1TwitterSwift.ImmersivePlaybackRateHoldPillPluginView.Content ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, T1TwitterSwift.PillTextView, UIView, _$s13XDesignSystem5GlassCMn, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo9UIControlC;

@interface T1TwitterSwift.ImmersivePlaybackRateHoldPillPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePlaybackRateHoldPillPluginView.Content ? content;
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    __C.UIView dragView;
    __C.UIControl containerView;
    nominal type descriptor for XDesignSystem.Glass glass;
    T1TwitterSwift.PillTextView titleTextView;
    __C.UIImageView iconView;
    T1TwitterSwift.PillTextView detailTextView;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)tfn_fontSizeChanged;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)handleContainerTap;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift39ImmersivePlaybackRateHoldPillPluginView_h */
