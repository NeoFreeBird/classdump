//
#ifndef _TtC11ChatGrokBot42GrokBotMessagingGroupChatLogViewController_h
#define _TtC11ChatGrokBot42GrokBotMessagingGroupChatLogViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotMessagingGroupChatLogStream, ChatGrokBot.GrokBotMessagingGroupChatLogView, ChatGrokBot.GrokBotMessagingGroupChatLogWorkerPluginPoint, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotMessagingGroupChatLogViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMessagingGroupChatLogView internalView;
    ChatGrokBot.GrokBotMessagingGroupChatLogStream messagingGroupChatLogStream;
    ChatGrokBot.GrokBotMessagingGroupChatLogWorkerPluginPoint messagingGroupChatLogWorkerPluginPoint;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot42GrokBotMessagingGroupChatLogViewController_h */
