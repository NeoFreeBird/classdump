//
#ifndef _TtC11ChatGrokBot23GrokBotCardTitleBarView_h
#define _TtC11ChatGrokBot23GrokBotCardTitleBarView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardTitleBarView.CloseButton, ChatGrokBot.GrokBotConnectorIconTileView, UIView, _$sSo11UIImageViewC, _$sSo22UIAccessibilityElementCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotCardTitleBarView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardTitleBarView.CloseButton closeButton;
    __C.UIImageView disclosureView;
    __C.UIImageView glyphView;
    __C.UIAccessibilityElement? $__lazy_storage_$_headerAccessibilityElement;
    ChatGrokBot.GrokBotConnectorIconTileView logoTileView;
    (() -> ())? onClose;
    __C.UILabel sourceLabel;
    __C.UILabel statusLabel;
    __C.UIView tileView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot23GrokBotCardTitleBarView_h */
