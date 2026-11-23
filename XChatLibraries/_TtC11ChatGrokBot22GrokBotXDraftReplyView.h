//
#ifndef _TtC11ChatGrokBot22GrokBotXDraftReplyView_h
#define _TtC11ChatGrokBot22GrokBotXDraftReplyView_h
@import Foundation;

@class ChatGrokBot.GrokBotXAvatarView, ChatGrokBot.GrokBotXDraftCopyButton, ChatGrokBot.GrokBotXLinkTextView, ChatGrokBot.GrokBotXNameView, UIView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotXDraftReplyView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotXDraftCopyButton copyButton;
    ChatGrokBot.GrokBotXAvatarView parentAvatarView;
    __C.UILabel parentMetaLabel;
    ChatGrokBot.GrokBotXNameView parentNameView;
    __C.UILabel parentTextLabel;
    ChatGrokBot.GrokBotXAvatarView replyAvatarView;
    ChatGrokBot.GrokBotXLinkTextView replyingTextView;
    __C.UIView threadLineView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot22GrokBotXDraftReplyView_h */
