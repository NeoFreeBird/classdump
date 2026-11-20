//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot40GrokBotConversationDetailsViewController_h
#define _TtC11ChatGrokBot40GrokBotConversationDetailsViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotAttachmentTabsBuilder, ChatGrokBot.GrokBotAvatarGenerateBuilder, ChatGrokBot.GrokBotConversationBuilder, ChatGrokBot.GrokBotConversationDetailsListener ?, ChatGrokBot.GrokBotConversationDetailsViewModel, ChatGrokBot.GrokBotConversationDetailsWorkerPluginPoint, ChatGrokBot.GrokBotEditNameBuilder, ChatGrokBot.GrokBotRoutinesViewModel, ChatGrokBot.GrokBotScribing, ChatUI.ChatPinnedHostingController _$s7SwiftUI7AnyViewVMn, ChatUI.ChatProviders, Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotConversationDetailsViewController : ChatUI.ChatPinnedHostingController nominal type descriptor for SwiftUI.AnyView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotConversationDetailsListener ? listener;
    ChatGrokBot.GrokBotAttachmentTabsBuilder attachmentTabsBuilder;
    ChatGrokBot.GrokBotAvatarGenerateBuilder avatarGenerateBuilder;
    ChatUI.ChatProviders chatProviders;
    ChatGrokBot.GrokBotConversationBuilder conversationBuilder;
    ChatGrokBot.GrokBotEditNameBuilder editNameBuilder;
    ChatGrokBot.GrokBotRoutinesViewModel routinesViewModel;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotConversationDetailsViewModel viewModel;
    ChatGrokBot.GrokBotConversationDetailsWorkerPluginPoint workerPluginPoint;
    Swift.Bool hasLeft;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;

@end

#endif /* _TtC11ChatGrokBot40GrokBotConversationDetailsViewController_h */
