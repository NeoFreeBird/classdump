//
#ifndef _TtC11ChatGrokBot24GrokBotConnectHeaderView_h
#define _TtC11ChatGrokBot24GrokBotConnectHeaderView_h
@import Foundation;

@class ChatGrokBot.GrokBotConnectorIconTileView, UIView, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotConnectHeaderView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotConnectorIconTileView iconTileView;
    __C.UILabel subtitleLabel;
    __C.UILabel titleLabel;
    __C.UIImageView verifiedBadgeView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot24GrokBotConnectHeaderView_h */
