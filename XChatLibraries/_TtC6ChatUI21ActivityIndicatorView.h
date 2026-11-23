//
#ifndef _TtC6ChatUI21ActivityIndicatorView_h
#define _TtC6ChatUI21ActivityIndicatorView_h
@import Foundation;

@class ChatUI.ActivityIndicatorView.State, ChatUI.CircleProgressView, ChatUI.CircleSpinnerView, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo7UIColorC;

@interface ChatUI.ActivityIndicatorView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ActivityIndicatorView.State state;
    nominal type descriptor for CoreGraphics.CGFloat strokeWidth;
    __C.UIColor progressBackgroundColor;
    ChatUI.CircleProgressView progressView;
    ChatUI.CircleSpinnerView spinnerView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)layoutSubviews;

@end

#endif /* _TtC6ChatUI21ActivityIndicatorView_h */
