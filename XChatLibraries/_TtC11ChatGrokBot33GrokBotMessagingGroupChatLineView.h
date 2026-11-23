//
#ifndef _TtC11ChatGrokBot33GrokBotMessagingGroupChatLineView_h
#define _TtC11ChatGrokBot33GrokBotMessagingGroupChatLineView_h
@import Foundation;

@class ChatGrokBot.GrokBotBubbleView, Swift.Bool, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotMessagingGroupChatLineView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel attachmentsLabel;
    ChatGrokBot.GrokBotBubbleView bubbleView;
    __C.UILabel omittedLabel;
    __C.UILabel speakerLabel;
    Swift.Bool isFromHost;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot33GrokBotMessagingGroupChatLineView_h */
