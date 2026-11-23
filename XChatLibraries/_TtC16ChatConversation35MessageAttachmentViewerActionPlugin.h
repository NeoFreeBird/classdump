//
#ifndef _TtC16ChatConversation35MessageAttachmentViewerActionPlugin_h
#define _TtC16ChatConversation35MessageAttachmentViewerActionPlugin_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentVideoPlayerProviding, ChatAttachmentViewer.AttachmentViewerBuilder, ChatConversation.AttachmentViewerForwardmostProviding, ChatConversation.MessageAttachmentActionPluginContext, ChatModels.ConversationChatItemsStream, Swift.Bool, _TtCs12_SwiftObject;

@interface ChatConversation.MessageAttachmentViewerActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageAttachmentActionPluginContext context;
    ChatAttachmentViewer.AttachmentViewerBuilder attachmentViewerBuilder;
    ChatModels.ConversationChatItemsStream conversationChatItemsStream;
    ChatConversation.AttachmentViewerForwardmostProviding forwardmostProvider;
    Swift.Bool isNativeRewrite;
    ChatAttachmentViewer.AttachmentVideoPlayerProviding videoPlayerProvider;
}

@end

#endif /* _TtC16ChatConversation35MessageAttachmentViewerActionPlugin_h */
