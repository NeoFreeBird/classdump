//
#ifndef _TtC19ChatMessageComposer26ComposerAttachmentCardView_h
#define _TtC19ChatMessageComposer26ComposerAttachmentCardView_h
@import Foundation;

#include "UIContextMenuInteractionDelegate-Protocol.h"

@class ChatMessageComposer.ComposerAttachmentCardAccessoryView, ChatMessageComposer.MediaImageService ?, ChatMessageComposer.MessageComposerCardAttachmentViewModel ?, ChatMessageComposer.ShimmerTitleSubtitleAccessoryView, ChatUI.AffiliateBadgeView, NSString, UIView;

@interface ChatMessageComposer.ComposerAttachmentCardView : UIView <UIContextMenuInteractionDelegate> { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerCardAttachmentViewModel ? viewModel;
    ChatMessageComposer.MediaImageService ? mediaImageService;
    ChatMessageComposer.ComposerAttachmentCardAccessoryView accessoryView;
    ChatUI.AffiliateBadgeView badgeView;
    ChatMessageComposer.ShimmerTitleSubtitleAccessoryView contentView;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC19ChatMessageComposer26ComposerAttachmentCardView_h */
