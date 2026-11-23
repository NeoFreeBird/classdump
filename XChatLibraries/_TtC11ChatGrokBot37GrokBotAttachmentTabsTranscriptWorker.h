//
#ifndef _TtC11ChatGrokBot37GrokBotAttachmentTabsTranscriptWorker_h
#define _TtC11ChatGrokBot37GrokBotAttachmentTabsTranscriptWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotConversationAttachmentsLoadMoreStream, ChatGrokBot.GrokBotConversationAttachmentsStream, ChatGrokBot.GrokBotSession, GrokBotRelay.GrokBotTranscriptStore ?, GrokBotRelay.SandAgentSummary, Swift.Bool, _$s11XFoundation11AsyncWorkerCN;

@interface ChatGrokBot.GrokBotAttachmentTabsTranscriptWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotConversationAttachmentsStream attachmentsStream;
    Swift.Bool isPagesEnabled;
    ChatGrokBot.GrokBotConversationAttachmentsLoadMoreStream loadMoreStream;
    ChatGrokBot.GrokBotSession session;
    GrokBotRelay.SandAgentSummary summary;
    GrokBotRelay.GrokBotTranscriptStore ? leasedStore;
}

@end

#endif /* _TtC11ChatGrokBot37GrokBotAttachmentTabsTranscriptWorker_h */
