//
#ifndef _TtC11ChatGrokBot25GrokBotContactsSyncWorker_h
#define _TtC11ChatGrokBot25GrokBotContactsSyncWorker_h
@import Foundation;

@class ChatModels.ChatContactsIntegrating, _$s11XFoundation13CombineWorkerCN, _$s7Combine19CurrentValueSubjectCMn _$sySa -> GrokBotRelay.SandAgentSummary _$sG _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sShySSGSg;

@interface ChatGrokBot.GrokBotContactsSyncWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.ChatContactsIntegrating contactsIntegration;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never hasLoadedRoster;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> GrokBotRelay.SandAgentSummary _$sG nominal type descriptor for Swift.Never roster;
    Swift.Set<Swift.String>? knownAgentIDs;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? syncTask;
}

@end

#endif /* _TtC11ChatGrokBot25GrokBotContactsSyncWorker_h */
