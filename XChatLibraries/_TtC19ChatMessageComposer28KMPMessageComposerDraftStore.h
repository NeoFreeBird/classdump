//
#ifndef _TtC19ChatMessageComposer28KMPMessageComposerDraftStore_h
#define _TtC19ChatMessageComposer28KMPMessageComposerDraftStore_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatMessageComposer.MessageComposerDraft ?, ChatModelsCore.ConversationID, _$sScTyyt _$ss5NeverOMn ?, _$sSo014Subsystem_ios_B15Arm64_mainDraftCSg, _$sSo014Subsystem_ios_B20Arm64_mainDraftsRepo_p, _$sSo014Subsystem_ios_B22Arm64_mainChatItemRepo_p, _$sSo014Subsystem_ios_B29Arm64_mainDraftMessageHandler_p, _$sSo014Subsystem_ios_B32Arm64_mainXChatExceptionObserver_p, _TtCs12_SwiftObject;

@interface ChatMessageComposer.KMPMessageComposerDraftStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    __C.Subsystem_ios_iosArm64_mainChatItemRepo chatItemRepo;
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainDraftMessageHandler draftMessageHandler;
    __C.Subsystem_ios_iosArm64_mainDraftsRepo draftsRepo;
    __C.Subsystem_ios_iosArm64_mainXChatExceptionObserver exceptionObserver;
    ChatMessageComposer.MessageComposerDraft ? persistedComposerDraft;
    __C.Subsystem_ios_iosArm64_mainDraft? persistedDraft;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? saveTask;
}

@end

#endif /* _TtC19ChatMessageComposer28KMPMessageComposerDraftStore_h */
