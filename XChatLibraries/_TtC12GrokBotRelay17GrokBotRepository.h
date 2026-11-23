//
#ifndef _TtC12GrokBotRelay17GrokBotRepository_h
#define _TtC12GrokBotRelay17GrokBotRepository_h
@import Foundation;

@class Builtin.DefaultActorStorage, GrokBotRelay.BotRelayCommanding, GrokBotRelay.BotRelayDuration, GrokBotRelay.GrokBotRepository.RosterLoop ?, _$sSD -> _$s10Foundation4UUIDVMn GrokBotRelay.GrokBotRepository.AutomationFeed, _$sSD -> _$s10Foundation4UUIDVMn _$sScS12ContinuationVMn _$ss6ResultOMn _$sySa -> GrokBotRelay.SandAgentSummary _$sG _$ss5ErrorMp _$sG_G, _$sSSSg, _$sSa -> GrokBotRelay.SandMcpCatalogEntryView ?, _$sSaySSG, _$sScTySa -> GrokBotRelay.SandMcpCatalogEntryView _$sG _$ss5ErrorMp ?, _$sScTyyt _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface GrokBotRelay.GrokBotRepository : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    GrokBotRelay.BotRelayCommanding client;
    GrokBotRelay.BotRelayDuration retryInitialDelay;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID nominal type descriptor for Swift.AsyncStream.Continuation nominal type descriptor for Swift.Result  empty-list Swift.Array -> GrokBotRelay.SandAgentSummary _$sG protocol descriptor for Swift.Error _$sG_G rosterFeeds;
    GrokBotRelay.GrokBotRepository.RosterLoop ? rosterLoop;
    [Swift.String] subscribedRosterIds;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID GrokBotRelay.GrokBotRepository.AutomationFeed automationFeeds;
    Swift.Array -> GrokBotRelay.SandMcpCatalogEntryView ? mcpCatalog;
    Swift.Task empty-list Swift.Array -> GrokBotRelay.SandMcpCatalogEntryView _$sG protocol descriptor for Swift.Error ? mcpCatalogFetch;
    Swift.Task empty-list () nominal type descriptor for Swift.Never autoReviewWriteTail;
    Swift.String? senderLanguage;
    Swift.String? senderMachineId;
}

@end

#endif /* _TtC12GrokBotRelay17GrokBotRepository_h */
