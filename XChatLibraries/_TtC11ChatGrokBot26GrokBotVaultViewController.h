//
#ifndef _TtC11ChatGrokBot26GrokBotVaultViewController_h
#define _TtC11ChatGrokBot26GrokBotVaultViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotVaultEditorBuilder, ChatGrokBot.GrokBotVaultImportBuilder, ChatGrokBot.GrokBotVaultItemBuilder, ChatGrokBot.GrokBotVaultListSections ?, ChatGrokBot.GrokBotVaultStream, ChatGrokBot.GrokBotVaultView ?, UIViewController, _$s7Combine19CurrentValueSubjectCMn _$sySS _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotVaultViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotVaultView ? $__lazy_storage_$_internalView;
    ChatGrokBot.GrokBotVaultListSections ? $__lazy_storage_$_listSections;
    ChatGrokBot.GrokBotSession session;
    ChatGrokBot.GrokBotVaultEditorBuilder vaultEditorBuilder;
    ChatGrokBot.GrokBotVaultImportBuilder vaultImportBuilder;
    ChatGrokBot.GrokBotVaultItemBuilder vaultItemBuilder;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.String nominal type descriptor for Swift.Never querySubject;
    ChatGrokBot.GrokBotVaultStream vaultStream;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot26GrokBotVaultViewController_h */
