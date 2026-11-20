//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
