//
#ifndef _TtC11ChatGrokBot29GrokBotRoutinesViewController_h
#define _TtC11ChatGrokBot29GrokBotRoutinesViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotRoutinesListener ?, ChatGrokBot.GrokBotRoutinesViewModel, ChatGrokBot.GrokBotScribing, ChatUI.ChatPinnedHostingController _$s7SwiftUI7AnyViewVMn, ChatUI.ChatProviders, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotRoutinesViewController : ChatUI.ChatPinnedHostingController nominal type descriptor for SwiftUI.AnyView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotRoutinesListener ? listener;
    ChatUI.ChatProviders chatProviders;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotRoutinesViewModel viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;

@end

#endif /* _TtC11ChatGrokBot29GrokBotRoutinesViewController_h */
