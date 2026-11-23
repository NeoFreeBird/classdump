//
#ifndef _TtC11ChatGrokBot25GrokBotCalendarPersonView_h
#define _TtC11ChatGrokBot25GrokBotCalendarPersonView_h
@import Foundation;

@class ChatGrokBot.GrokBotRoundedContainerView, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotCalendarPersonView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotRoundedContainerView avatarView;
    __C.UILabel emailLabel;
    __C.UILabel initialsLabel;
    __C.UILabel nameLabel;
    __C.UILabel tagsLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotCalendarPersonView_h */
