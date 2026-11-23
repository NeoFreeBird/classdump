//
#ifndef _TtC11ChatGrokBot23GrokBotLinkListMoreView_h
#define _TtC11ChatGrokBot23GrokBotLinkListMoreView_h
@import Foundation;

#include "_TtC11ChatGrokBot21GrokBotCardChromeView.h"

@class _$sSaySo11UIImageViewCG, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotLinkListMoreView : ChatGrokBot.GrokBotCardChromeView { // (Swift)
    /* instance variables */
    __C.UIImageView chevronView;
    __C.UILabel label;
    [__C.UIImageView] markViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot23GrokBotLinkListMoreView_h */
