//
#ifndef _TtC4Grok34GrokUsageTrayContentViewController_h
#define _TtC4Grok34GrokUsageTrayContentViewController_h
@import Foundation;

@class Grok.GrokBotUsageReader, Grok.GrokTopUpAccountState, Grok.GrokTopUpService, Grok.GrokUsageTrayContentViewController.GrokBotPool, Grok.GrokUsageTrayStateView, Swift.Bool, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s7Combine14AnyCancellableCMn ?, _$syycSg;

@interface Grok.GrokUsageTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    (() -> ())? onTopUp;
    (() -> ())? onUpgrade;
    (() -> ())? onNotUnified;
    Grok.GrokTopUpService service;
    Grok.GrokTopUpAccountState accountState;
    Swift.Bool isTopTier;
    Grok.GrokBotUsageReader grokBotUsage;
    Grok.GrokUsageTrayStateView stateView;
    nominal type descriptor for Combine.AnyCancellable ? cancellable;
    Grok.GrokUsageTrayContentViewController.GrokBotPool grokBotPool;
    Swift.Bool isTopUpEnabled;
    Swift.Bool hasRoutedNotUnified;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC4Grok34GrokUsageTrayContentViewController_h */
