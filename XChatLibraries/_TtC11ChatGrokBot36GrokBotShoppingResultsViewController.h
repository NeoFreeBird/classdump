//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot36GrokBotShoppingResultsViewController_h
#define _TtC11ChatGrokBot36GrokBotShoppingResultsViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingResultsListener ?, ChatGrokBot.GrokBotShoppingResultsView ?, UIViewController, _$sSa -> ChatGrokBot.GrokBotShoppingProduct;

@interface ChatGrokBot.GrokBotShoppingResultsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotShoppingResultsListener ? listener;
    ChatGrokBot.GrokBotShoppingResultsView ? $__lazy_storage_$_internalView;
    Swift.Array -> ChatGrokBot.GrokBotShoppingProduct products;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot36GrokBotShoppingResultsViewController_h */
