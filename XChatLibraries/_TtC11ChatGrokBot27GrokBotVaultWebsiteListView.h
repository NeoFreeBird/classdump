//
#ifndef _TtC11ChatGrokBot27GrokBotVaultWebsiteListView_h
#define _TtC11ChatGrokBot27GrokBotVaultWebsiteListView_h
@import Foundation;

@class UIView, _$s13XDesignSystem6ButtonCMn, _$sSa -> ChatGrokBot.GrokBotVaultFormFieldView, _$sSaySSG, _$sSo11UIStackViewC, _$sySaySSGcSg;

@interface ChatGrokBot.GrokBotVaultWebsiteListView : UIView { // (Swift)
    /* instance variables */
    (([Swift.String]) -> ())? onWebsitesChanged;
    nominal type descriptor for XDesignSystem.Button addButton;
    __C.UIStackView stackView;
    Swift.Array -> ChatGrokBot.GrokBotVaultFormFieldView rowViews;
    [Swift.String] websites;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTapAdd;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot27GrokBotVaultWebsiteListView_h */
