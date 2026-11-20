//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot23GrokBotShipmentCardView_h
#define _TtC11ChatGrokBot23GrokBotShipmentCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardTitleBarView, ChatGrokBot.GrokBotConnectHeaderView, ChatGrokBot.GrokBotShipmentProgressView, Swift.Bool, UIView, _$sSo22UITapGestureRecognizerCSg, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotShipmentCardView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel arrivalLabel;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    __C.UILabel headlineLabel;
    __C.UILabel itemsLabel;
    ChatGrokBot.GrokBotShipmentProgressView progressView;
    ChatGrokBot.GrokBotCardTitleBarView titleBarView;
    ChatGrokBot.GrokBotCardButton trackButton;
    __C.UITapGestureRecognizer? $__lazy_storage_$_titleBarTapRecognizer;
    (() -> ())? foldToggleAction;
    Swift.Bool isFolded;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)accessibilityActivate;
- (void)didTapTitleBar;

@end

#endif /* _TtC11ChatGrokBot23GrokBotShipmentCardView_h */
