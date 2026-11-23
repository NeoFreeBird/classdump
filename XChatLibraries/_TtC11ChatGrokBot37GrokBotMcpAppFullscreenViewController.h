//
#ifndef _TtC11ChatGrokBot37GrokBotMcpAppFullscreenViewController_h
#define _TtC11ChatGrokBot37GrokBotMcpAppFullscreenViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotMcpAppWebView, UIViewController;

@interface ChatGrokBot.GrokBotMcpAppFullscreenViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMcpAppWebView instance;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot37GrokBotMcpAppFullscreenViewController_h */
