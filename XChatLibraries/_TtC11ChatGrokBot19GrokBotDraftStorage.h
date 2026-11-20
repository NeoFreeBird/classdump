//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot19GrokBotDraftStorage_h
#define _TtC11ChatGrokBot19GrokBotDraftStorage_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatGrokBot.GrokBotDraftFileStore, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn _$sySDySS ChatMessageComposer.MessageComposerDraft _$sG _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sShySSG, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotDraftStorage : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary empty-list Swift.String ChatMessageComposer.MessageComposerDraft _$sG nominal type descriptor for Swift.Never draftsByAgentIDSubject;
    ChatGrokBot.GrokBotDraftFileStore fileStore;
    Swift.Set<Swift.String> deletedAgentIDs;
    Swift.Bool hasLoadedPersistedDrafts;
    Swift.Bool isClosed;
    Swift.Set<Swift.String> pendingAgentIDs;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? protectedDataTask;
}

@end

#endif /* _TtC11ChatGrokBot19GrokBotDraftStorage_h */
