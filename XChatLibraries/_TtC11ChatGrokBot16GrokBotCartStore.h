//
#ifndef _TtC11ChatGrokBot16GrokBotCartStore_h
#define _TtC11ChatGrokBot16GrokBotCartStore_h
@import Foundation;

@class GrokBotRelay.GrokBotRepository _$sSgyYaScMYcc, _$s7Combine18PassthroughSubjectCMn ChatGrokBot.GrokBotCartStore.Failure _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn ChatGrokBot.GrokBotCartStore.Flight _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn ChatGrokBot.GrokBotCartState _$ss5NeverOMn, _$sSS, _$sSa -> _$s10Foundation4UUIDVMn id_ ChatGrokBot.GrokBotCartStore.Edit editt, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotCartStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String agentID;
    nominal type descriptor for Combine.PassthroughSubject ChatGrokBot.GrokBotCartStore.Failure nominal type descriptor for Swift.Never failureSubject;
    nominal type descriptor for Combine.PassthroughSubject ChatGrokBot.GrokBotCartStore.Flight nominal type descriptor for Swift.Never flightSubject;
    GrokBotRelay.GrokBotRepository _$sSgyYaScMYcc repositoryWhenReady;
    nominal type descriptor for Combine.CurrentValueSubject ChatGrokBot.GrokBotCartState nominal type descriptor for Swift.Never stateSubject;
    Swift.Array -> nominal type descriptor for Foundation.UUID id_ ChatGrokBot.GrokBotCartStore.Edit editt pendingEdits;
    Swift.Int readGeneration;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? readTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? writeChain;
}

@end

#endif /* _TtC11ChatGrokBot16GrokBotCartStore_h */
