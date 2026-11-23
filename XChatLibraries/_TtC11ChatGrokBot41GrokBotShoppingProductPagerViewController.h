//
#ifndef _TtC11ChatGrokBot41GrokBotShoppingProductPagerViewController_h
#define _TtC11ChatGrokBot41GrokBotShoppingProductPagerViewController_h
@import Foundation;

#include "UIPageViewControllerDataSource-Protocol.h"
#include "UIPageViewControllerDelegate-Protocol.h"

@class ChatGrokBot.GrokBotCartStore ?, ChatGrokBot.GrokBotShoppingProductListener ?, ChatGrokBot.GrokBotShoppingSubscription ?, UIPageViewController, _$sSDySi ChatGrokBot.GrokBotShoppingProductViewController, _$sSa -> ChatGrokBot.GrokBotShoppingProduct, _$sSi;

@interface ChatGrokBot.GrokBotShoppingProductPagerViewController : UIPageViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotShoppingProductListener ? listener;
    Swift.Int currentIndex;
    ChatGrokBot.GrokBotCartStore ? cart;
    Swift.Int initialIndex;
    Swift.Int initialPhotoIndex;
    Swift.Array -> ChatGrokBot.GrokBotShoppingProduct products;
    ChatGrokBot.GrokBotShoppingSubscription ? subscription;
    Swift.Dictionary empty-list Swift.Int ChatGrokBot.GrokBotShoppingProductViewController productViewControllers;
}

/* instance methods */
- (void)pageViewController:(id)controller didFinishAnimating:(_Bool)animating previousViewControllers:(id)controllers transitionCompleted:(_Bool)completed;
- (id)pageViewController:(id)controller viewControllerBeforeViewController:(id)controller;
- (id)pageViewController:(id)controller viewControllerAfterViewController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)shareCurrentProduct;
- (id)initWithTransitionStyle:(long long)style navigationOrientation:(long long)orientation options:(id)options;

@end

#endif /* _TtC11ChatGrokBot41GrokBotShoppingProductPagerViewController_h */
