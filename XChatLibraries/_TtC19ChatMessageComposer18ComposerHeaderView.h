//
#ifndef _TtC19ChatMessageComposer18ComposerHeaderView_h
#define _TtC19ChatMessageComposer18ComposerHeaderView_h
@import Foundation;

@class ChatMessageComposer.ComposerAttachmentsView ?, ChatMessageComposer.ComposerEditView ?, ChatMessageComposer.ComposerHeaderView.Layout, ChatMessageComposer.ComposerQuickActionsView ?, ChatMessageComposer.ComposerQuoteView ?, ChatMessageComposer.ComposerReadOnlyActionButton ?, ChatMessageComposer.MediaImageService, ChatMessageComposer.MessageComposerHeaderViewModel ?, Swift.Bool, UIView, _$sSo7UILabelCSg;

@interface ChatMessageComposer.ComposerHeaderView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerHeaderViewModel ? viewModel;
    Swift.Bool isEnabled;
    ChatMessageComposer.ComposerAttachmentsView ? $__lazy_storage_$_attachmentsView;
    ChatMessageComposer.ComposerEditView ? $__lazy_storage_$_editView;
    ChatMessageComposer.ComposerQuickActionsView ? $__lazy_storage_$_quickActionsView;
    ChatMessageComposer.ComposerQuoteView ? $__lazy_storage_$_quoteView;
    ChatMessageComposer.ComposerReadOnlyActionButton ? $__lazy_storage_$_readOnlyActionButton;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    ChatMessageComposer.MediaImageService mediaImageService;
    ChatMessageComposer.ComposerHeaderView.Layout layout;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer18ComposerHeaderView_h */
