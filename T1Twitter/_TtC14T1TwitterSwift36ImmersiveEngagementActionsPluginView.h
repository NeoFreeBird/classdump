//
#ifndef _TtC14T1TwitterSwift36ImmersiveEngagementActionsPluginView_h
#define _TtC14T1TwitterSwift36ImmersiveEngagementActionsPluginView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveActionsStackView, T1TwitterSwift.ImmersiveActionsStackView ?, T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersiveChromeHandOff, T1TwitterSwift.ImmersivePluginFirstReveal ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.ImmersiveEngagementActionsPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    T1TwitterSwift.ImmersiveCardState ? state;
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersivePluginFirstReveal ? firstReveal;
    T1TwitterSwift.ImmersiveChromeHandOff handOff;
    T1TwitterSwift.ImmersiveActionsStackView actionsView;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.ImmersiveActionsStackView ? verticalActionsView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift36ImmersiveEngagementActionsPluginView_h */
