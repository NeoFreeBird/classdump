//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot24GrokBotHostSettingsStore_h
#define _TtC11ChatGrokBot24GrokBotHostSettingsStore_h
@import Foundation;

@class ChatUtilities.ChatAccountUserDefaulting, GrokBotRelay.GrokBotRepository ?, Swift.Bool, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSaySSG, _$sSa -> ChatGrokBot.GrokBotHostSettingsStore.PendingPinChange, _$sSaySSG, _$sSaySSGSg, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotHostSettingsStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.Bool _hasLoadedPinnedAgentIDs;
    nominal type descriptor for Combine.Published [Swift.String] _pinnedAgentIds;
    ChatUtilities.ChatAccountUserDefaulting defaults;
    [Swift.String] cachedPinnedAgentIDs;
    Swift.Array -> ChatGrokBot.GrokBotHostSettingsStore.PendingPinChange heldPinChanges;
    Swift.Bool isRefreshQueued;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? lastOperation;
    Swift.Int lastPinChangeID;
    Swift.Array -> ChatGrokBot.GrokBotHostSettingsStore.PendingPinChange pendingPinChanges;
    GrokBotRelay.GrokBotRepository ? repository;
    [Swift.String]? serverPinnedAgentIDs;
}

@end

#endif /* _TtC11ChatGrokBot24GrokBotHostSettingsStore_h */
