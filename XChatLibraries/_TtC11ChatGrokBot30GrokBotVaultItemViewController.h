//
#ifndef _TtC11ChatGrokBot30GrokBotVaultItemViewController_h
#define _TtC11ChatGrokBot30GrokBotVaultItemViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotVaultEditorBuilder, ChatGrokBot.GrokBotVaultListView ?, ChatGrokBot.GrokBotVaultStream, Swift.Bool, UIViewController, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotVaultItemViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotVaultListView ? $__lazy_storage_$_internalView;
    Swift.String itemID;
    ChatGrokBot.GrokBotSession session;
    ChatGrokBot.GrokBotVaultEditorBuilder vaultEditorBuilder;
    ChatGrokBot.GrokBotVaultStream vaultStream;
    Swift.Bool isRemoving;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot30GrokBotVaultItemViewController_h */
