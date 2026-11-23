//
#ifndef _TtC16ChatConversation41UsernameChangeWarningHeaderViewController_h
#define _TtC16ChatConversation41UsernameChangeWarningHeaderViewController_h
@import Foundation;

@class ChatConversation.ConversationUsernameChangeWarningScriber, ChatConversation.UsernameChangeWarningHeaderView ?, ChatConversationServices.ConversationNavigation, ChatModels.ConversationUsernameChangeWarningStream, ChatModelsCore.ChatUsernameChangeWarning ?, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatConversation.UsernameChangeWarningHeaderViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatModels.ConversationUsernameChangeWarningStream conversationUsernameChangeWarningStream;
    ChatConversation.ConversationUsernameChangeWarningScriber scriber;
    ChatConversation.UsernameChangeWarningHeaderView ? $__lazy_storage_$_internalView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    ChatModelsCore.ChatUsernameChangeWarning ? warning;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC16ChatConversation41UsernameChangeWarningHeaderViewController_h */
