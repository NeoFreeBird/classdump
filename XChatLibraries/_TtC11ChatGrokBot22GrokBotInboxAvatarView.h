//
#ifndef _TtC11ChatGrokBot22GrokBotInboxAvatarView_h
#define _TtC11ChatGrokBot22GrokBotInboxAvatarView_h
@import Foundation;

@class ChatGrokBot.GrokBotHostingView, ChatGrokBot.GrokBotInboxEntry, UIView, _$s12CoreGraphics7CGFloatVMn ?;

@interface ChatGrokBot.GrokBotInboxAvatarView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotInboxEntry entry;
    ChatGrokBot.GrokBotHostingView hostingView;
    nominal type descriptor for CoreGraphics.CGFloat ? renderedSize;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot22GrokBotInboxAvatarView_h */
