//
#ifndef _TtC11ChatGrokBot22GrokBotBackBadgeWorker_h
#define _TtC11ChatGrokBot22GrokBotBackBadgeWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotBackBadgeStream, ChatGrokBot.GrokBotsUnreadCountStream, ChatModels.UnreadMessageCountStream, _$s11XFoundation13CombineWorkerCN, _$sSS;

@interface ChatGrokBot.GrokBotBackBadgeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    Swift.String agentID;
    ChatGrokBot.GrokBotBackBadgeStream backBadgeStream;
    ChatGrokBot.GrokBotsUnreadCountStream grokBotsUnreadCountStream;
    ChatModels.UnreadMessageCountStream unreadMessageCountStream;
}

@end

#endif /* _TtC11ChatGrokBot22GrokBotBackBadgeWorker_h */
