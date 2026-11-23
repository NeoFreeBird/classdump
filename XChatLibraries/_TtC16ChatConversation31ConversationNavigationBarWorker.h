//
#ifndef _TtC16ChatConversation31ConversationNavigationBarWorker_h
#define _TtC16ChatConversation31ConversationNavigationBarWorker_h
@import Foundation;

@class ChatConversation.ConversationNavigationBarLeftBarButtonItemPluginPoint, ChatConversation.ConversationNavigationBarRightBarButtonItemPluginPoint, ChatConversation.ConversationNavigationBarTitleViewPluginPoint, ChatConversation.ConversationNavigationBarWorkerContext, ChatUI.NavigationBarTitleViewPlugin ?, _$s11XFoundation13CombineWorkerCN, _$sSa -> ChatUI.NavigationBarLeftBarButtonItemPlugin, _$sSa -> ChatUI.NavigationBarRightBarButtonItemPlugin;

@interface ChatConversation.ConversationNavigationBarWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversation.ConversationNavigationBarWorkerContext context;
    ChatConversation.ConversationNavigationBarLeftBarButtonItemPluginPoint leftBarButtonItemPluginPoint;
    ChatConversation.ConversationNavigationBarRightBarButtonItemPluginPoint rightBarButtonItemPluginPoint;
    ChatConversation.ConversationNavigationBarTitleViewPluginPoint titleViewPluginPoint;
    Swift.Array -> ChatUI.NavigationBarLeftBarButtonItemPlugin currentLeftBarButtonItemPlugins;
    Swift.Array -> ChatUI.NavigationBarRightBarButtonItemPlugin currentRightBarButtonItemPlugins;
    ChatUI.NavigationBarTitleViewPlugin ? currentTitleViewPlugin;
}

@end

#endif /* _TtC16ChatConversation31ConversationNavigationBarWorker_h */
