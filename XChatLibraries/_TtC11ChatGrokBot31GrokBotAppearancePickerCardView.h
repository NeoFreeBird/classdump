//
#ifndef _TtC11ChatGrokBot31GrokBotAppearancePickerCardView_h
#define _TtC11ChatGrokBot31GrokBotAppearancePickerCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotAppearancePickerBodyView, ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardTitleBarView, Swift.Bool, UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotAppearancePickerCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotAppearancePickerBodyView bodyView;
    __C.UILabel failureLabel;
    ChatGrokBot.GrokBotCardButton saveButton;
    ChatGrokBot.GrokBotCardTitleBarView titleBarView;
    __C.UILabel titleLabel;
    Swift.Bool isOpen;
    (() -> ())? onTogglePreview;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot31GrokBotAppearancePickerCardView_h */
