//
#ifndef _TtC14T1TwitterSwift27ImmersiveReplyBarPluginView_h
#define _TtC14T1TwitterSwift27ImmersiveReplyBarPluginView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$s13XDesignSystem6ButtonCMn, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.ImmersiveReplyBarPluginView : UIView { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.ImmersivePluginViewDelegate ? pluginDelegate;
    T1TwitterSwift.ImmersiveCardState ? state;
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    nominal type descriptor for XDesignSystem.Button replyButton;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)replyTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift27ImmersiveReplyBarPluginView_h */
