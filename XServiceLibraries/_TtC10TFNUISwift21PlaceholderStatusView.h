//
#ifndef _TtC10TFNUISwift21PlaceholderStatusView_h
#define _TtC10TFNUISwift21PlaceholderStatusView_h
@import Foundation;

@class UIView, _$sSaySo18NSLayoutConstraintCG, _$sSo11UIStackViewC, _$sSo6UIViewC;

@interface TFNUISwift.PlaceholderStatusView : UIView { // (Swift)
    /* instance variables */
    __C.UIView avatarView;
    __C.UIView usernameView;
    __C.UIView userHandleView;
    __C.UIStackView textContainerView;
    __C.UIView imageView;
    __C.UIStackView actionContainerView;
    [__C.NSLayoutConstraint] activeConstraints;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)updateConstraints;

@end

#endif /* _TtC10TFNUISwift21PlaceholderStatusView_h */
