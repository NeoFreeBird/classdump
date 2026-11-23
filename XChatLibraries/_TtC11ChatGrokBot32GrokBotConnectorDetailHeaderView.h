//
#ifndef _TtC11ChatGrokBot32GrokBotConnectorDetailHeaderView_h
#define _TtC11ChatGrokBot32GrokBotConnectorDetailHeaderView_h
@import Foundation;

@class ChatGrokBot.GrokBotConnectorIconTileView, UIView, _$sSS, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotConnectorDetailHeaderView : UIView { // (Swift)
    /* instance variables */
    Swift.String title;
    __C.UILabel listingFailureLabel;
    __C.UILabel statusLabel;
    __C.UILabel teamLabel;
    ChatGrokBot.GrokBotConnectorIconTileView tileView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot32GrokBotConnectorDetailHeaderView_h */
