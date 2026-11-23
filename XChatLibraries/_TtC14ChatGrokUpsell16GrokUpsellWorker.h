//
#ifndef _TtC14ChatGrokUpsell16GrokUpsellWorker_h
#define _TtC14ChatGrokUpsell16GrokUpsellWorker_h
@import Foundation;

@class ChatGrokUpsell.GrokUpsellShownStore, ChatGrokUpsell.GrokUpsellStream, ChatGrokUpsell.PremiumUpsellNavigation, ChatModels.ComplatPlanNameProviding, _$s11XFoundation13CombineWorkerCN, _$sSo16UIViewControllerCSgyc;

@interface ChatGrokUpsell.GrokUpsellWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.ComplatPlanNameProviding complatPlanNames;
    ChatGrokUpsell.GrokUpsellShownStore grokUpsellShownStore;
    ChatGrokUpsell.GrokUpsellStream grokUpsellStream;
    ChatGrokUpsell.PremiumUpsellNavigation premiumUpsellNavigation;
    () -> __C.UIViewController? presenterProvider;
}

@end

#endif /* _TtC14ChatGrokUpsell16GrokUpsellWorker_h */
