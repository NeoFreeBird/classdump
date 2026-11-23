//
#ifndef _TtC16ChatConversation23PinnedMessageHeaderView_h
#define _TtC16ChatConversation23PinnedMessageHeaderView_h
@import Foundation;

#include "UIContextMenuInteractionDelegate-Protocol.h"

@class ChatConversation.PinnedMessageHeaderContentCubeView ?, ChatConversation.PinnedMessageHeaderViewDelegate ?, ChatConversation.PinnedMessageHeaderViewModel ?, ChatConversation.PinnedMessageIndexRailing _$s_So6UIViewCXc, ChatUI.ChatImageLoading, ChatUtilities.VideoImageLoader, UIView, _$s4XGif14GifImageLoaderCMn, _$sSo8UIButtonC, _$sSo9UIControlC;

@interface ChatConversation.PinnedMessageHeaderView : UIView <UIContextMenuInteractionDelegate> { // (Swift)
    /* instance variables */
    ChatConversation.PinnedMessageHeaderViewDelegate ? delegate;
    ChatConversation.PinnedMessageHeaderViewModel ? viewModel;
    __C.UIControl containerView;
    ChatConversation.PinnedMessageHeaderContentCubeView ? $__lazy_storage_$_contentCubeView;
    __C.UIButton trailingButton;
    nominal type descriptor for XGif.GifImageLoader gifImageLoader;
    ChatUI.ChatImageLoading imageLoader;
    ChatConversation.PinnedMessageIndexRailing _$s_So6UIViewCXc indexRailView;
    ChatUtilities.VideoImageLoader videoImageLoader;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)contextMenuInteraction:(id)interaction previewForHighlightingMenuWithConfiguration:(id)configuration;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)handleHeaderTap;
- (void)handleSwipeUp;
- (void)handleSwipeDown;
- (void)handleTrailingButtonTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation23PinnedMessageHeaderView_h */
