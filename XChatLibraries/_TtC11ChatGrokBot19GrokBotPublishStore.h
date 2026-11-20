//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot19GrokBotPublishStore_h
#define _TtC11ChatGrokBot19GrokBotPublishStore_h
@import Foundation;

@class GrokBotRelay.GrokBotRepository, _$s7Combine19CurrentValueSubjectCMn ChatGrokBot.GrokBotPublishState _$ss5NeverOMn, _$sSDySSScTyyt _$ss5NeverOMn, _$sSDySSShySSGG, _$sSS, _$sShySSG, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotPublishStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String agentID;
    GrokBotRelay.GrokBotRepository repository;
    nominal type descriptor for Combine.CurrentValueSubject ChatGrokBot.GrokBotPublishState nominal type descriptor for Swift.Never stateSubject;
    Swift.Dictionary empty-list Swift.StringSwift.Task empty-list () nominal type descriptor for Swift.Never pollTasks;
    Swift.Set<Swift.String> unpublishedPublishIDs;
    [Swift.String : Swift.Set<Swift.String>] wantedProposalIDs;
}

@end

#endif /* _TtC11ChatGrokBot19GrokBotPublishStore_h */
