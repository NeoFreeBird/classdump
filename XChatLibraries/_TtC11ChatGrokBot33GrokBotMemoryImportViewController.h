//
#ifndef _TtC11ChatGrokBot33GrokBotMemoryImportViewController_h
#define _TtC11ChatGrokBot33GrokBotMemoryImportViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotMemoryImportListener ?, ChatGrokBot.GrokBotMemoryImportView, ChatGrokBot.GrokBotSession, ChatModels.ChatToastActionTriggerStream, Swift.Bool, UIViewController, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotMemoryImportViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMemoryImportView contentView;
    ChatGrokBot.GrokBotSession session;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    Swift.Bool isCopied;
    Swift.Bool isSending;
    Swift.String? primaryBotID;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    ChatGrokBot.GrokBotMemoryImportListener ? listener;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot33GrokBotMemoryImportViewController_h */
