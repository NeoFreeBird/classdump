//
#ifndef _TtC11ChatGrokBot37GrokBotConversationEditViewController_h
#define _TtC11ChatGrokBot37GrokBotConversationEditViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotAvatarGenerateBuilder, ChatGrokBot.GrokBotConversationEditListener ?, ChatGrokBot.GrokBotConversationEditViewModel, ChatUI.ChatPinnedHostingController _$s7SwiftUI7AnyViewVMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotConversationEditViewController : ChatUI.ChatPinnedHostingController nominal type descriptor for SwiftUI.AnyView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotConversationEditListener ? listener;
    ChatGrokBot.GrokBotAvatarGenerateBuilder avatarGenerateBuilder;
    ChatGrokBot.GrokBotConversationEditViewModel viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;

@end

#endif /* _TtC11ChatGrokBot37GrokBotConversationEditViewController_h */
