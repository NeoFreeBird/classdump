//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot25GrokBotPageViewController_h
#define _TtC11ChatGrokBot25GrokBotPageViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotPageLink, ChatGrokBot.GrokBotPageStore, ChatGrokBot.GrokBotPageStore.State ?, UIViewController, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo6UIViewCSg, _$sySo16UIViewControllerC_ _$s10Foundation3URLVMn _$stc;

@interface ChatGrokBot.GrokBotPageViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPageLink link;
    Swift.String? linkTitle;
     empty-list __C.UIViewController first-element-marker  nominal type descriptor for Foundation.URL _$stc openURL;
    ChatGrokBot.GrokBotPageStore pages;
    __C.UIView? contentView;
    ChatGrokBot.GrokBotPageStore.State ? shownState;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot25GrokBotPageViewController_h */
