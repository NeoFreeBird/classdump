//
#ifndef _TtC11ChatGrokBot26GrokBotsInboxEntriesWorker_h
#define _TtC11ChatGrokBot26GrokBotsInboxEntriesWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotAvailabilityStream, ChatGrokBot.GrokBotDraftStorage, ChatGrokBot.GrokBotHostSettingsStore, ChatGrokBot.GrokBotsInboxEntriesInputs, ChatGrokBot.GrokBotsInboxEntriesStream, ChatGrokBot.GrokBotsInboxPromptShownStore, _$s11XFoundation13CombineWorkerCN, _$s7Combine12AnyPublisherVMn _$sySb _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySDySS ChatMessageComposer.MessageComposerDraft _$sG _$ss5NeverOMn;

@interface ChatGrokBot.GrokBotsInboxEntriesWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary empty-list Swift.String ChatMessageComposer.MessageComposerDraft _$sG nominal type descriptor for Swift.Never draftsByAgentIDSubject;
    ChatGrokBot.GrokBotAvailabilityStream grokBotAvailabilityStream;
    ChatGrokBot.GrokBotDraftStorage grokBotDraftStorage;
    ChatGrokBot.GrokBotHostSettingsStore grokBotHostSettingsStore;
    ChatGrokBot.GrokBotsInboxEntriesInputs grokBotsInboxEntriesInputs;
    ChatGrokBot.GrokBotsInboxEntriesStream grokBotsInboxEntriesStream;
    ChatGrokBot.GrokBotsInboxPromptShownStore grokBotsInboxPromptShownStore;
    nominal type descriptor for Combine.AnyPublisher  empty-list Swift.Bool nominal type descriptor for Swift.Never isEntryPointHidden;
}

@end

#endif /* _TtC11ChatGrokBot26GrokBotsInboxEntriesWorker_h */
