//
#ifndef _TtC9ChatInbox37GrokBotsInboxConnectionRecoveryWorker_h
#define _TtC9ChatInbox37GrokBotsInboxConnectionRecoveryWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotAvailabilityStream, ChatGrokBot.GrokBotSession, ChatInbox.InboxVisibilityStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatInbox.GrokBotsInboxConnectionRecoveryWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotAvailabilityStream grokBotAvailabilityStream;
    ChatGrokBot.GrokBotSession grokBotSession;
    ChatInbox.InboxVisibilityStream inboxVisibilityStream;
}

@end

#endif /* _TtC9ChatInbox37GrokBotsInboxConnectionRecoveryWorker_h */
