//
#ifndef _TtC14T1TwitterSwift33ImmersiveVideoExtensionPluginView_h
#define _TtC14T1TwitterSwift33ImmersiveVideoExtensionPluginView_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$s13XDesignSystem4BlurCMn, _$sSo13AVPlayerLayerC, _$sSo7CALayerC;

@interface T1TwitterSwift.ImmersiveVideoExtensionPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardState ? state;
    Swift.Bool didSetupMirror;
    __C.AVPlayerLayer mirrorPlayerLayer;
    __C.CALayer mirrorContainerLayer;
    nominal type descriptor for XDesignSystem.Blur variableBlurView;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift33ImmersiveVideoExtensionPluginView_h */
