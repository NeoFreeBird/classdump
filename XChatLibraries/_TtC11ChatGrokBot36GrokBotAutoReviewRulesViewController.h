//
#ifndef _TtC11ChatGrokBot36GrokBotAutoReviewRulesViewController_h
#define _TtC11ChatGrokBot36GrokBotAutoReviewRulesViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotAutoReviewRuleEditorBuilder, ChatGrokBot.GrokBotAutoReviewRulesListSections ?, ChatGrokBot.GrokBotAutoReviewRulesView ?, ChatGrokBot.GrokBotAutoReviewStore, UIViewController, _$sSh -> ChatGrokBot.GrokBotAutoReviewRule, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotAutoReviewRulesViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotAutoReviewRulesView ? $__lazy_storage_$_internalView;
    ChatGrokBot.GrokBotAutoReviewRulesListSections ? $__lazy_storage_$_listSections;
    ChatGrokBot.GrokBotAutoReviewStore autoReviewStore;
    ChatGrokBot.GrokBotAutoReviewRuleEditorBuilder ruleEditorBuilder;
    Swift.Set -> ChatGrokBot.GrokBotAutoReviewRule expandedRules;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot36GrokBotAutoReviewRulesViewController_h */
