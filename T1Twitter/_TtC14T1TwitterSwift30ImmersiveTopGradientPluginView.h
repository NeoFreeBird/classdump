//
#ifndef _TtC14T1TwitterSwift30ImmersiveTopGradientPluginView_h
#define _TtC14T1TwitterSwift30ImmersiveTopGradientPluginView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$sSo15CAGradientLayerCSg, _$sSo6UIViewCSg;

@interface T1TwitterSwift.ImmersiveTopGradientPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardState ? state;
    __C.CAGradientLayer? $__lazy_storage_$_gradientLayer;
    __C.UIView? $__lazy_storage_$_gradientView;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift30ImmersiveTopGradientPluginView_h */
