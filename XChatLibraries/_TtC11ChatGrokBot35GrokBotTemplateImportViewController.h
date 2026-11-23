//
#ifndef _TtC11ChatGrokBot35GrokBotTemplateImportViewController_h
#define _TtC11ChatGrokBot35GrokBotTemplateImportViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotTemplateImportListener ?, ChatGrokBot.GrokBotTemplateImportViewModel, _$s7SwiftUI19UIHostingControllerCMn _$s7SwiftUI7AnyViewV, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo6UIViewC;

@interface ChatGrokBot.GrokBotTemplateImportViewController : nominal type descriptor for SwiftUI.UIHostingController SwiftUI.AnyView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotTemplateImportListener ? coordinator;
    ChatGrokBot.GrokBotCardButton addButton;
    __C.UIView footerView;
    ChatGrokBot.GrokBotTemplateImportViewModel viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didTapCancel;

@end

#endif /* _TtC11ChatGrokBot35GrokBotTemplateImportViewController_h */
