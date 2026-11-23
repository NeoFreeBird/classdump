//
#ifndef _TtC19ChatMessageComposer16ComposerEditView_h
#define _TtC19ChatMessageComposer16ComposerEditView_h
@import Foundation;

@class ChatMessageComposer.ComposerCloseButton, ChatMessageComposer.ComposerHeaderView.Layout, ChatMessageComposer.MessageComposerEditViewModel ?, NSArray, UIView, _$sSo11UIImageViewCSg, _$sSo22UIAccessibilityElementCSg, _$sSo7UILabelCSg;

@interface ChatMessageComposer.ComposerEditView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerEditViewModel ? viewModel;
    __C.UIAccessibilityElement? $__lazy_storage_$_contentAccessibilityElement;
    __C.UIImageView? $__lazy_storage_$_imageView;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    ChatMessageComposer.ComposerCloseButton closeButton;
    ChatMessageComposer.ComposerHeaderView.Layout layout;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer16ComposerEditView_h */
