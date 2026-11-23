//
#ifndef _TtC11ChatGrokBot41GrokBotAutoReviewRuleEditorViewController_h
#define _TtC11ChatGrokBot41GrokBotAutoReviewRuleEditorViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotAutoReviewRule ?, ChatGrokBot.GrokBotAutoReviewRule.Behavior ?, ChatGrokBot.GrokBotAutoReviewRuleEditorView ?, ChatGrokBot.GrokBotAutoReviewStore, ChatModels.ChatToastActionTriggerStream, Swift.Bool, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotAutoReviewRuleEditorViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotAutoReviewRuleEditorView ? $__lazy_storage_$_internalView;
    ChatGrokBot.GrokBotAutoReviewStore autoReviewStore;
    ChatGrokBot.GrokBotAutoReviewRule ? editedRule;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    ChatGrokBot.GrokBotAutoReviewRule.Behavior ? behavior;
    Swift.Bool isDeleting;
    Swift.Bool isSaving;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot41GrokBotAutoReviewRuleEditorViewController_h */
