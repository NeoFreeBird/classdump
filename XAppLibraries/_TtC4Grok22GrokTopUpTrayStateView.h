//
#ifndef _TtC4Grok22GrokTopUpTrayStateView_h
#define _TtC4Grok22GrokTopUpTrayStateView_h
@import Foundation;

@class Grok.GrokTopUpPackGridView, Swift.Bool, UIView, _$s13XDesignSystem6ButtonCMn ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSo23UIActivityIndicatorViewC, _$sSo7UILabelC, _$syycSg;

@interface Grok.GrokTopUpTrayStateView : UIView { // (Swift)
    /* instance variables */
    Grok.GrokTopUpPackGridView grid;
    (() -> ())? onRetry;
    __C.UIActivityIndicatorView spinner;
    __C.UILabel errorLabel;
    nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_retryButton;
    nominal type descriptor for Dispatch.DispatchWorkItem ? spinnerWorkItem;
    Swift.Bool showsError;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC4Grok22GrokTopUpTrayStateView_h */
