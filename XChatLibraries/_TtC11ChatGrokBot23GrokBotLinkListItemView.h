//
#ifndef _TtC11ChatGrokBot23GrokBotLinkListItemView_h
#define _TtC11ChatGrokBot23GrokBotLinkListItemView_h
@import Foundation;

#include "_TtC11ChatGrokBot21GrokBotCardChromeView.h"

@class ChatGrokBot.GrokBotLinkList.Item ?, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotLinkListItemView : ChatGrokBot.GrokBotCardChromeView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotLinkList.Item ? item;
    __C.UIImageView globeView;
    __C.UILabel hostLabel;
    __C.UILabel noteLabel;
    __C.UILabel priceLabel;
    __C.UIView thumbnailView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot23GrokBotLinkListItemView_h */
