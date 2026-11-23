//
#ifndef _TtC14T1TwitterSwift34ImmersivePlayPauseButtonPluginView_h
#define _TtC14T1TwitterSwift34ImmersivePlayPauseButtonPluginView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$s13XDesignSystem6ButtonCMn ?;

@interface T1TwitterSwift.ImmersivePlayPauseButtonPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardState ? state;
    nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_playPauseButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)playOrPauseButtonTapped;

@end

#endif /* _TtC14T1TwitterSwift34ImmersivePlayPauseButtonPluginView_h */
