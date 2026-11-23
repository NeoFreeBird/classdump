//
#ifndef _TtC19ChatMessageRequests33MessageRequestsListViewController_h
#define _TtC19ChatMessageRequests33MessageRequestsListViewController_h
@import Foundation;

@class ChatConversationList.ConversationListBuilder, ChatConversationServices.ConversationBuildable, ChatMessageRequests.MessageRequestsListWorkerPluginPoint, ChatMessageRequests.MessageRequestsNavigationBarRightBarButtonItemPluginPoint, ChatMessageRequests.MessageRequestsNavigationBarTitlePluginPoint, ChatModelsCore.MessageRequestsTab, UIViewController, _$sSa -> ChatMessageRequests.MessageRequestsNavigationBarRightBarButtonItemPlugin, _$sSo16UIViewControllerCSg;

@interface ChatMessageRequests.MessageRequestsListViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatMessageRequests.MessageRequestsNavigationBarRightBarButtonItemPluginPoint navigationBarRightBarButtonItemPluginPoint;
    ChatMessageRequests.MessageRequestsNavigationBarTitlePluginPoint navigationBarTitlePluginPoint;
    ChatConversationServices.ConversationBuildable conversationBuilder;
    ChatConversationList.ConversationListBuilder conversationListBuilder;
    ChatModelsCore.MessageRequestsTab messageRequestsTab;
    ChatMessageRequests.MessageRequestsListWorkerPluginPoint workerPluginPoint;
    __C.UIViewController? conversationListViewController;
    Swift.Array -> ChatMessageRequests.MessageRequestsNavigationBarRightBarButtonItemPlugin navigationBarRightBarButtonItemPlugins;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageRequests33MessageRequestsListViewController_h */
