//
#ifndef _TtC11ChatGrokBot29GrokBotComputerViewController_h
#define _TtC11ChatGrokBot29GrokBotComputerViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotComputerHandBackListener ?, ChatGrokBot.GrokBotComputerPresentation, ChatGrokBot.GrokBotComputerTitleView ?, ChatGrokBot.GrokBotComputerViewModel, ChatUI.ChatNavigationStackFactory, _$s7SwiftUI19UIHostingControllerCMn _$s7SwiftUI7AnyViewV, _$sSa -> GrokBotRelay.SandAgentSummary, _$sSh -> _$s7Combine14AnyCancellableCMn, __C.UIUserInterfaceStyle ?;

@interface ChatGrokBot.GrokBotComputerViewController : nominal type descriptor for SwiftUI.UIHostingController SwiftUI.AnyView { // (Swift)
    /* instance variables */
    Swift.Array -> GrokBotRelay.SandAgentSummary groupMembers;
    ChatUI.ChatNavigationStackFactory navigationStackFactory;
    ChatGrokBot.GrokBotComputerPresentation presentation;
    __C.UIUserInterfaceStyle ? replacedNavigationStyle;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    ChatGrokBot.GrokBotComputerViewModel viewModel;
    ChatGrokBot.GrokBotComputerTitleView ? $__lazy_storage_$_titleView;
    ChatGrokBot.GrokBotComputerHandBackListener ? handBackListener;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;

@end

#endif /* _TtC11ChatGrokBot29GrokBotComputerViewController_h */
