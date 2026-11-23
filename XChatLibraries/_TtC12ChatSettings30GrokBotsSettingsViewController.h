//
#ifndef _TtC12ChatSettings30GrokBotsSettingsViewController_h
#define _TtC12ChatSettings30GrokBotsSettingsViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotAccountLinkBuilder, ChatGrokBot.GrokBotAutoReviewRulesBuilder, ChatGrokBot.GrokBotAutoReviewStore, ChatGrokBot.GrokBotMemoryImportBuilder, ChatGrokBot.GrokBotPhoneToolsBuilder, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotVaultBuilder, ChatSettings.ChatSettingsNavigation, ChatSettings.GrokBotsSettingsAutoReviewItems ?, Swift.Bool, UIViewController, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatSettings.GrokBotsSettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatSettings.GrokBotsSettingsAutoReviewItems ? $__lazy_storage_$_autoReviewItems;
    ChatSettings.ChatSettingsNavigation chatSettingsNavigation;
    ChatGrokBot.GrokBotAccountLinkBuilder grokBotAccountLinkBuilder;
    ChatGrokBot.GrokBotAutoReviewRulesBuilder grokBotAutoReviewRulesBuilder;
    ChatGrokBot.GrokBotAutoReviewStore grokBotAutoReviewStore;
    ChatGrokBot.GrokBotMemoryImportBuilder grokBotMemoryImportBuilder;
    ChatGrokBot.GrokBotPhoneToolsBuilder grokBotPhoneToolsBuilder;
    ChatGrokBot.GrokBotSession grokBotSession;
    ChatGrokBot.GrokBotVaultBuilder grokBotVaultBuilder;
    Swift.Bool isAutoReviewEnabled;
    Swift.Bool isMemoryImportEnabled;
    Swift.Bool isPhoneToolsEnabled;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings30GrokBotsSettingsViewController_h */
