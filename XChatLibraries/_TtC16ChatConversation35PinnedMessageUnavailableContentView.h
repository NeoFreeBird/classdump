//
#ifndef _TtC16ChatConversation35PinnedMessageUnavailableContentView_h
#define _TtC16ChatConversation35PinnedMessageUnavailableContentView_h
@import Foundation;

#include "UIContextMenuInteractionDelegate-Protocol.h"

@class ChatConversation.PinnedMessageUnavailableContentViewListener ?, ChatConversation.PinnedMessageUnavailableItem ?, UIView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatConversation.PinnedMessageUnavailableContentView : UIView <UIContextMenuInteractionDelegate> { // (Swift)
    /* instance variables */
    ChatConversation.PinnedMessageUnavailableContentViewListener ? listener;
    __C.UIView bubbleView;
    __C.UILabel previewLabel;
    ChatConversation.PinnedMessageUnavailableItem ? item;
}

/* instance methods */
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)contextMenuInteraction:(id)interaction previewForHighlightingMenuWithConfiguration:(id)configuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation35PinnedMessageUnavailableContentView_h */
