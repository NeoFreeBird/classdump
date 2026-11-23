//
#ifndef _TtC11ChatGrokBot21GrokBotResourcesStore_h
#define _TtC11ChatGrokBot21GrokBotResourcesStore_h
@import Foundation;

@class GrokBotRelay.GrokBotRepository, _$s7Combine19CurrentValueSubjectCMn ChatGrokBot.GrokBotResourcesState _$ss5NeverOMn, _$sSS, _$sSh -> ChatGrokBot.GrokBotResources.Read, _$sShySSG, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotResourcesStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String agentID;
    GrokBotRelay.GrokBotRepository repository;
    nominal type descriptor for Combine.CurrentValueSubject ChatGrokBot.GrokBotResourcesState nominal type descriptor for Swift.Never stateSubject;
    Swift.Set -> ChatGrokBot.GrokBotResources.Read readsToRepeat;
    Swift.Set<Swift.String> seenCardIDs;
}

@end

#endif /* _TtC11ChatGrokBot21GrokBotResourcesStore_h */
