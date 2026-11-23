//
#ifndef _TtC14ChatGrokUpsell35GrokUpsellTrayContentViewController_h
#define _TtC14ChatGrokUpsell35GrokUpsellTrayContentViewController_h
@import Foundation;

@class ChatGrokUpsell.GrokUpsellHeroView, ChatGrokUpsell.GrokUpsellVariant, ChatModels.ComplatPlanNameProviding, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSo7UILabelC, _$syyc;

@interface ChatGrokUpsell.GrokUpsellTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ChatModels.ComplatPlanNameProviding complatPlanNames;
    ChatGrokUpsell.GrokUpsellVariant variant;
    () -> () onPremiumUpgrade;
    ChatGrokUpsell.GrokUpsellHeroView heroView;
    __C.UILabel titleLabel;
    __C.UILabel bodyLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14ChatGrokUpsell35GrokUpsellTrayContentViewController_h */
