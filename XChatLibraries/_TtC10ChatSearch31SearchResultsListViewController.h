//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatSearch31SearchResultsListViewController_h
#define _TtC10ChatSearch31SearchResultsListViewController_h
@import Foundation;

@class ChatConversationList.ConversationListBuilder, ChatInboxServices.InboxSelectedConversationStream, ChatInboxServices.InboxSelectedGrokBotStream, ChatSearch.SearchResultsListWorkerPluginPoint, UIViewController, _$sSo16UIViewControllerCSg;

@interface ChatSearch.SearchResultsListViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationListBuilder conversationListBuilder;
    ChatInboxServices.InboxSelectedConversationStream inboxSelectedConversationStream;
    ChatInboxServices.InboxSelectedGrokBotStream inboxSelectedGrokBotStream;
    ChatSearch.SearchResultsListWorkerPluginPoint workerPluginPoint;
    __C.UIViewController? listViewController;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10ChatSearch31SearchResultsListViewController_h */
