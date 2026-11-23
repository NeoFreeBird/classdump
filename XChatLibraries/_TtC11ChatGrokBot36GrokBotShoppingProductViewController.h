//
#ifndef _TtC11ChatGrokBot36GrokBotShoppingProductViewController_h
#define _TtC11ChatGrokBot36GrokBotShoppingProductViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotCartStore ?, ChatGrokBot.GrokBotShoppingOffer ?, ChatGrokBot.GrokBotShoppingProduct, ChatGrokBot.GrokBotShoppingProductListener ?, ChatGrokBot.GrokBotShoppingProductView ?, ChatGrokBot.GrokBotShoppingSubscription ?, Swift.Bool, UIViewController, _$sSDyS2SG, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo20UIPageViewControllerCSgXw, _$sSo7UIImageCSg;

@interface ChatGrokBot.GrokBotShoppingProductViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotShoppingProductListener ? listener;
    weak __C.UIPageViewController? navigationHost;
    ChatGrokBot.GrokBotShoppingProductView ? $__lazy_storage_$_internalView;
    ChatGrokBot.GrokBotCartStore ? cart;
    ChatGrokBot.GrokBotShoppingProduct product;
    ChatGrokBot.GrokBotShoppingSubscription ? subscription;
    __C.UIImage? backIndicatorImage;
    Swift.Int initialPhotoIndex;
    Swift.Bool isSending;
    Swift.Bool isTitleRevealed;
    ChatGrokBot.GrokBotShoppingOffer ? pickedOffer;
    [Swift.String : Swift.String] selection;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)share;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot36GrokBotShoppingProductViewController_h */
