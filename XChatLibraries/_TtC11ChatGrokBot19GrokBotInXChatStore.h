//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot19GrokBotInXChatStore_h
#define _TtC11ChatGrokBot19GrokBotInXChatStore_h
@import Foundation;

@class ChatGrokBot.GrokBotXChatEnableService, ChatUtilities.ChatAccountUserDefaulting, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn ChatSyncState.ChatGrokBotPrompt ? _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySbSg _$ss5NeverOMn, _$sSbSg, _$sSi, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotInXChatStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.ChatAccountUserDefaulting chatAccountDefaults;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool? nominal type descriptor for Swift.Never isEnabledSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isPromptReadSubject;
    nominal type descriptor for Combine.CurrentValueSubject ChatSyncState.ChatGrokBotPrompt ? nominal type descriptor for Swift.Never promptSubject;
    ChatGrokBot.GrokBotXChatEnableService xChatEnableService;
    Swift.Int enablesInFlight;
    Swift.Bool isEnabledThisSession;
    Swift.Bool? valueBeforeEnable;
}

@end

#endif /* _TtC11ChatGrokBot19GrokBotInXChatStore_h */
