//
#ifndef _TtC11ChatGrokBot32GrokBotAccountLinkViewController_h
#define _TtC11ChatGrokBot32GrokBotAccountLinkViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotAccountLinkWorkerPluginPoint, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotsAccountLinkStream, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerC;

@interface ChatGrokBot.GrokBotAccountLinkViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotsAccountLinkStream accountLinkStream;
    ChatGrokBot.GrokBotSession session;
    __C.UIViewController statusViewController;
    ChatGrokBot.GrokBotAccountLinkWorkerPluginPoint workerPluginPoint;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot32GrokBotAccountLinkViewController_h */
