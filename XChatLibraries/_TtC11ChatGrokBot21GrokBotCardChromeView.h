//
#ifndef _TtC11ChatGrokBot21GrokBotCardChromeView_h
#define _TtC11ChatGrokBot21GrokBotCardChromeView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardChromeView.GradientView, Swift.Bool, UIView, _$s13XDesignSystem11PressEffectCMn ?, _$sSfSg, _$sSo6UIViewC;

@interface ChatGrokBot.GrokBotCardChromeView : UIView { // (Swift)
    /* instance variables */
    __C.UIView contentHostView;
    Swift.Bool castsShadow;
    Swift.Float? appliedShadowOpacity;
    nominal type descriptor for XDesignSystem.PressEffect ? $__lazy_storage_$_pressEffect;
    __C.UIView pressView;
    ChatGrokBot.GrokBotCardChromeView.GradientView sheenView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot21GrokBotCardChromeView_h */
