//
#ifndef _TtC11ChatGrokBot19GrokBotDraftStorage_h
#define _TtC11ChatGrokBot19GrokBotDraftStorage_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatGrokBot.GrokBotDraftFileStore, ChatGrokBot.GrokBotDraftsMirror, Swift.Bool, _$s7Combine14AnyCancellableCMn, _$s7Combine19CurrentValueSubjectCMn _$sySDySS ChatMessageComposer.MessageComposerDraft _$sG _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sShySSG, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotDraftStorage : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary empty-list Swift.String ChatMessageComposer.MessageComposerDraft _$sG nominal type descriptor for Swift.Never draftsByAgentIDSubject;
    ChatGrokBot.GrokBotDraftsMirror draftsMirror;
    nominal type descriptor for Combine.AnyCancellable draftsMirrorSubscription;
    ChatGrokBot.GrokBotDraftFileStore fileStore;
    Swift.Set<Swift.String> deletedAgentIDs;
    Swift.Bool hasLoadedPersistedDrafts;
    Swift.Bool isClosed;
    Swift.Set<Swift.String> pendingAgentIDs;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? protectedDataTask;
}

@end

#endif /* _TtC11ChatGrokBot19GrokBotDraftStorage_h */
