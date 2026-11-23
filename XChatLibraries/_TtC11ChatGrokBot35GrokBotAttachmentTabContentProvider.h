//
#ifndef _TtC11ChatGrokBot35GrokBotAttachmentTabContentProvider_h
#define _TtC11ChatGrokBot35GrokBotAttachmentTabContentProvider_h
@import Foundation;

@class ChatConversationServices.ConversationNavigation, ChatGrokBot.GrokBotAttachmentTabThumbnailLoader, ChatGrokBot.GrokBotAttachmentTabViewerPresenter, ChatGrokBot.GrokBotAttachmentTabsWorkerPluginPoint, ChatGrokBot.GrokBotConversationAttachmentsLoadMoreStream, ChatGrokBot.GrokBotConversationAttachmentsStream, ChatGrokBot.GrokBotPageActions, ChatGrokBot.GrokBotPagesStream, ChatUI.ChatProviders, Swift.Bool, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotAttachmentTabContentProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotConversationAttachmentsStream attachmentsStream;
    ChatUI.ChatProviders chatProviders;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatGrokBot.GrokBotConversationAttachmentsLoadMoreStream loadMoreStream;
    ChatGrokBot.GrokBotPageActions pageActions;
    ChatGrokBot.GrokBotPagesStream pagesStream;
    ChatGrokBot.GrokBotAttachmentTabThumbnailLoader thumbnailLoader;
    ChatGrokBot.GrokBotAttachmentTabViewerPresenter viewerPresenter;
    ChatGrokBot.GrokBotAttachmentTabsWorkerPluginPoint workerPluginPoint;
    Swift.Bool hasStartedWorkers;
}

@end

#endif /* _TtC11ChatGrokBot35GrokBotAttachmentTabContentProvider_h */
