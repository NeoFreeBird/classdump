//
#ifndef _TtC11ChatGrokBot20GrokBotXPostCardView_h
#define _TtC11ChatGrokBot20GrokBotXPostCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotPostViewing, ChatGrokBot.GrokBotXPostTap _$scSg ->, ChatModels.PostAttachment ?, UIView;

@interface ChatGrokBot.GrokBotXPostCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPostViewing postView;
    ChatGrokBot.GrokBotXPostTap _$scSg -> onOpen;
    ChatModels.PostAttachment ? post;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot20GrokBotXPostCardView_h */
