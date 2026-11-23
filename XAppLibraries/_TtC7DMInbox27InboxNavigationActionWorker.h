//
#ifndef _TtC7DMInbox27InboxNavigationActionWorker_h
#define _TtC7DMInbox27InboxNavigationActionWorker_h
@import Foundation;

@class DMInbox.InboxNavigationActionTriggerStream, DMInbox.InboxSearchBuilder, DMInbox.InboxWorkerPluginContext, DMUI.RootNavigation, _$s10ChatNumber0aB7BuilderCMn, _$s11XFoundation13CombineWorkerCN, _$s12ChatSettings0aB7BuilderCMn, _$s19ChatMessageRequests0bC7BuilderCMn, _$s22ChatCreateConversation0bC7BuilderCMn;

@interface DMInbox.InboxNavigationActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatMessageRequests.MessageRequestsBuilder chatMessageRequestsBuilder;
    nominal type descriptor for ChatNumber.ChatNumberBuilder chatNumberBuilder;
    nominal type descriptor for ChatSettings.ChatSettingsBuilder chatSettingsBuilder;
    DMInbox.InboxWorkerPluginContext context;
    nominal type descriptor for ChatCreateConversation.CreateConversationBuilder createConversationBuilder;
    DMInbox.InboxNavigationActionTriggerStream inboxNavigationActionTriggerStream;
    DMInbox.InboxSearchBuilder inboxSearchBuilder;
    DMUI.RootNavigation rootNavigation;
}

@end

#endif /* _TtC7DMInbox27InboxNavigationActionWorker_h */
