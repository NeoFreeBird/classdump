//
#ifndef _TtC12ChatSettings27ArchivedChatsViewController_h
#define _TtC12ChatSettings27ArchivedChatsViewController_h
@import Foundation;

@class ChatConversationList.ConversationListBuilder, ChatSettings.ArchivedChatsWorkerPluginPoint, ChatSettings.ChatSettingsNavigation, UIViewController, _$sSo16UIViewControllerCSg;

@interface ChatSettings.ArchivedChatsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatSettings.ChatSettingsNavigation chatSettingsNavigation;
    ChatConversationList.ConversationListBuilder conversationListBuilder;
    ChatSettings.ArchivedChatsWorkerPluginPoint workerPluginPoint;
    __C.UIViewController? conversationListViewController;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings27ArchivedChatsViewController_h */
