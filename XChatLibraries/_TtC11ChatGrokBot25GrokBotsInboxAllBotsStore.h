//
#ifndef _TtC11ChatGrokBot25GrokBotsInboxAllBotsStore_h
#define _TtC11ChatGrokBot25GrokBotsInboxAllBotsStore_h
@import Foundation;

@class ChatGrokBot.GrokBotInXChatSettingsService, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotsInboxAllBotsStore.SyncState, ChatUtilities.ChatAccountUserDefaulting, ChatUtilities.UnfairLock, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotsInboxAllBotsStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.ChatAccountUserDefaulting chatAccountDefaults;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isShowingAllBotsSubject;
    Swift.Bool isServerSyncEnabled;
    ChatUtilities.UnfairLock lock;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotInXChatSettingsService settingsService;
    Swift.Bool confirmedShowsAllBots;
    Swift.Int settledWriteCount;
    ChatGrokBot.GrokBotsInboxAllBotsStore.SyncState syncState;
    Swift.Int writeCount;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? writeTask;
}

@end

#endif /* _TtC11ChatGrokBot25GrokBotsInboxAllBotsStore_h */
