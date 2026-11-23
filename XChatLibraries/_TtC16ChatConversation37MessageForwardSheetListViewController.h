//
#ifndef _TtC16ChatConversation37MessageForwardSheetListViewController_h
#define _TtC16ChatConversation37MessageForwardSheetListViewController_h
@import Foundation;

#include "UISearchControllerDelegate-Protocol.h"
#include "UISearchResultsUpdating-Protocol.h"

@class ChatConversation.MessageForwardSheetCompletionStream, ChatConversation.MessageForwardSheetEligibilityStream, ChatConversation.MessageForwardSheetSearchBarStyle, ChatConversation.MessageForwardSheetWorkerPluginPoint, ChatConversationList.ConversationListBuilder, ChatConversationServices.ConversationBuildable, ChatInboxServices.InboxSelectedConversationStream, ChatModels.ChatSourceMessage, ChatModelsCore.AttachmentID ?, ChatModelsCore.ConversationID, ChatSearch.SearchQueryStream, UIView, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSg, _$sSo18UISearchControllerCSg, _$sSo6UIViewCSgSg;

@interface ChatConversation.MessageForwardSheetListViewController : UIViewController <UISearchControllerDelegate, UISearchResultsUpdating> { // (Swift)
    /* instance variables */
    ChatConversation.MessageForwardSheetCompletionStream completionStream;
    ChatConversationServices.ConversationBuildable conversationBuilder;
    ChatConversationList.ConversationListBuilder conversationListBuilder;
    ChatConversation.MessageForwardSheetEligibilityStream eligibilityStream;
    ChatModelsCore.AttachmentID ? forwardedAttachmentId;
    ChatModels.ChatSourceMessage forwardedMessage;
    ChatInboxServices.InboxSelectedConversationStream inboxSelectedConversationStream;
    ChatConversation.MessageForwardSheetSearchBarStyle searchBarStyle;
    ChatSearch.SearchQueryStream searchQueryStream;
    ChatModelsCore.ConversationID sourceConversationID;
    ChatConversation.MessageForwardSheetWorkerPluginPoint workerPluginPoint;
    __C.UIViewController? listViewController;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    __C.UIView?? $__lazy_storage_$_searchBarAccessoryView;
    __C.UISearchController? $__lazy_storage_$_searchController;
}

@property (nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;

/* instance methods */
- (void)didDismissSearchController:(id)controller;
- (void)updateSearchResultsForSearchController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)didTapClose;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC16ChatConversation37MessageForwardSheetListViewController_h */
