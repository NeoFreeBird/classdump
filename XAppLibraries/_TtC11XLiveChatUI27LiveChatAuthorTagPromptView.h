//
#ifndef _TtC11XLiveChatUI27LiveChatAuthorTagPromptView_h
#define _TtC11XLiveChatUI27LiveChatAuthorTagPromptView_h
@import Foundation;

@class Swift.Bool, UIView, XLiveChatUI.LiveChatAuthorTagView, _$s12CoreGraphics7CGFloatVMn, _$sSo7UILabelC;

@interface XLiveChatUI.LiveChatAuthorTagPromptView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat composerHeight;
    Swift.Bool isExpanded;
    __C.UILabel titleLabel;
    XLiveChatUI.LiveChatAuthorTagView tagView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XLiveChatUI27LiveChatAuthorTagPromptView_h */
