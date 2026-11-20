//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6ChatUI18ChatEmptyStateView_h
#define _TtC6ChatUI18ChatEmptyStateView_h
@import Foundation;

@class UIView, _$sSo10UITextViewC, _$sSo11UIImageViewC, _$sSo6UIFontC, _$sSo7UILabelC, _$sSo8UIButtonC, _$syycSg;

@interface ChatUI.ChatEmptyStateView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView iconImageView;
    __C.UILabel titleLabel;
    __C.UITextView messageTextView;
    __C.UIButton actionButton;
    (() -> ())? actionHandler;
    __C.UIFont headlineFont;
    __C.UIFont messageFont;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6ChatUI18ChatEmptyStateView_h */
