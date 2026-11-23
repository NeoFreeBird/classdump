//
#ifndef _TtC14T1TwitterSwift25ImmersiveActionsStackView_h
#define _TtC14T1TwitterSwift25ImmersiveActionsStackView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveActionViewVariant, T1TwitterSwift.ImmersiveActionsViewDelegate ?, UIView, _$sSa -> T1TwitterSwift.ImmersiveActionView;

@interface T1TwitterSwift.ImmersiveActionsStackView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveActionsViewDelegate ? delegate;
    Swift.Array -> T1TwitterSwift.ImmersiveActionView actionViews;
    T1TwitterSwift.ImmersiveActionViewVariant variant;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift25ImmersiveActionsStackView_h */
