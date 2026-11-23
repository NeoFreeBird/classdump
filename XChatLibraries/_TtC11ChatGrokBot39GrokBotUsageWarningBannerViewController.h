//
#ifndef _TtC11ChatGrokBot39GrokBotUsageWarningBannerViewController_h
#define _TtC11ChatGrokBot39GrokBotUsageWarningBannerViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotUsageLimitCardClosures, ChatGrokBot.GrokBotUsageLimitCardStream, ChatGrokBot.GrokBotUsageWarningBannerListener ?, ChatGrokBot.GrokBotUsageWarningBannerView ?, ChatGrokBot.GrokBotUsageWarningDismissalStore, ChatGrokBot.GrokBotUsageWarningStream, ChatGrokBot.TurnBlockListener, ChatGrokBot.UsageLimitCardListener, ChatGrokBot.UsageWarningListener, UIViewController, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo6UIViewC;

@interface ChatGrokBot.GrokBotUsageWarningBannerViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotUsageWarningBannerListener ? listener;
    Swift.String? blackFridayOfferTitle;
    ChatGrokBot.GrokBotUsageWarningDismissalStore dismissalStore;
    ChatGrokBot.GrokBotUsageLimitCardClosures usageLimitCardClosures;
    ChatGrokBot.GrokBotUsageLimitCardStream usageLimitCardStream;
    ChatGrokBot.GrokBotUsageWarningStream usageWarningStream;
    __C.UIView containerView;
    ChatGrokBot.TurnBlockListener turnBlockListener;
    ChatGrokBot.UsageLimitCardListener usageLimitCardListener;
    ChatGrokBot.UsageWarningListener usageWarningListener;
    ChatGrokBot.GrokBotUsageWarningBannerView ? $__lazy_storage_$_bannerView;
    ChatGrokBot.GrokBotUsageWarningBannerView ? $__lazy_storage_$_turnBlockView;
    ChatGrokBot.GrokBotUsageWarningBannerView ? $__lazy_storage_$_usageLimitCardView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot39GrokBotUsageWarningBannerViewController_h */
