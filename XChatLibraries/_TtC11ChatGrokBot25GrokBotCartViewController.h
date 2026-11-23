//
#ifndef _TtC11ChatGrokBot25GrokBotCartViewController_h
#define _TtC11ChatGrokBot25GrokBotCartViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotCartCheckoutDelivery ChatGrokBot.GrokBotCartCopy.CheckoutMessage _$sYaScMYcc, ChatGrokBot.GrokBotCartStore, ChatGrokBot.GrokBotCartSubscriptionGate, ChatGrokBot.GrokBotCartView ?, Swift.Bool, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSiSg, _$syyycScMYcc;

@interface ChatGrokBot.GrokBotCartViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCartView ? $__lazy_storage_$_internalView;
    ChatGrokBot.GrokBotCartStore cart;
    Swift.Bool isOwnBot;
    ChatGrokBot.GrokBotCartCheckoutDelivery ChatGrokBot.GrokBotCartCopy.CheckoutMessage _$sYaScMYcc sendCheckout;
    @Swift.MainActor (() -> ()) -> () subscribe;
    ChatGrokBot.GrokBotCartSubscriptionGate subscriptionGate;
    Swift.Bool didSubscribe;
    Swift.Bool hadLines;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    Swift.Int? waitingFromFailures;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot25GrokBotCartViewController_h */
