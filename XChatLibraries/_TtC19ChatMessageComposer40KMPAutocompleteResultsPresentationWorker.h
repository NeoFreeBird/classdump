//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer40KMPAutocompleteResultsPresentationWorker_h
#define _TtC19ChatMessageComposer40KMPAutocompleteResultsPresentationWorker_h
@import Foundation;

@class ChatMessageComposer.AutocompleteResultsContainerWindowPresenter ?, ChatMessageComposer.MessageComposerConfiguration, ChatMessageComposer.MessageComposerConversationContextStream, ChatMessageComposer.MessageComposerSource, ChatMessageComposer.MessageCompositionStream, ChatMessageComposer.WindowPresentationTriggerStream, _$s11XFoundation13CombineWorkerCN, _$s13XAutocomplete23AutocompleteStateStreamCMn, _$s13XAutocomplete35AutocompleteResultsContainerBuilderCMn, _$s8Dispatch0A8WorkItemCMn ?, _$sSo014Subsystem_ios_B30Arm64_mainXChatFeatureSwitches_p;

@interface ChatMessageComposer.KMPAutocompleteResultsPresentationWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for XAutocomplete.AutocompleteResultsContainerBuilder autocompleteResultsContainerBuilder;
    nominal type descriptor for XAutocomplete.AutocompleteStateStream autocompleteStateStream;
    ChatMessageComposer.MessageComposerSource composerSource;
    __C.Subsystem_ios_iosArm64_mainXChatFeatureSwitches featureSwitches;
    ChatMessageComposer.MessageComposerConfiguration messageComposerConfiguration;
    ChatMessageComposer.MessageComposerConversationContextStream messageComposerConversationContextStream;
    ChatMessageComposer.MessageCompositionStream messageCompositionStream;
    ChatMessageComposer.WindowPresentationTriggerStream windowPresentationTriggerStream;
    ChatMessageComposer.AutocompleteResultsContainerWindowPresenter ? currentPresenter;
    nominal type descriptor for Dispatch.DispatchWorkItem ? pendingDismissWorkItem;
}

@end

#endif /* _TtC19ChatMessageComposer40KMPAutocompleteResultsPresentationWorker_h */
