//
#ifndef TCRComposerInlineUpsellBannerView_h
#define TCRComposerInlineUpsellBannerView_h
@import Foundation;

@class UIView;

@interface TCRComposerInlineUpsellBannerView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 message;
    @40@0:8:16@24@32 buttonTitle;
    @40@0:8:16@24@32 onUpgrade;
    @40@0:8:16@24@32 iconView;
    @40@0:8:16@24@32 messageLabel;
    @40@0:8:16@24@32 upgradeButton;
    @40@0:8:16@24@32 contentStack;
    @40@0:8:16@24@32 textAndButtonStack;
    @40@0:8:16@24@32 currentLayout;
}

@property (nonatomic) long long semanticContentAttribute;
@property (nonatomic, readonly) long long layoutStyle;

/* instance methods */
- (id)initWithMessage:(id)message buttonTitle:(id)title cardAccessibilityIdentifier:(id)identifier buttonAccessibilityIdentifier:(id)identifier onUpgrade:(id /* block */)upgrade;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)applyLayout:(long long)layout;
- (void)didTapUpgrade;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TCRComposerInlineUpsellBannerView_h */
