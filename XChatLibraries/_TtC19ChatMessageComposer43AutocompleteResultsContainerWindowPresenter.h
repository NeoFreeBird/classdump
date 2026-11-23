//
#ifndef _TtC19ChatMessageComposer43AutocompleteResultsContainerWindowPresenter_h
#define _TtC19ChatMessageComposer43AutocompleteResultsContainerWindowPresenter_h
@import Foundation;

@class ChatMessageComposer.MessageComposerConfiguration, ChatMessageComposer.MessageComposerConversationContextStream, ChatMessageComposer.MessageComposerSource, ChatMessageComposer.MessageCompositionStream, ChatMessageComposer.WindowPresentableListener ?, Swift.Bool, _$s13XAutocomplete23AutocompleteStateStreamCMn, _$s13XAutocomplete35AutocompleteResultsContainerBuilderCMn, _$sSo014Subsystem_ios_B30Arm64_mainXChatFeatureSwitches_p, _TtCs12_SwiftObject;

@interface ChatMessageComposer.AutocompleteResultsContainerWindowPresenter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatMessageComposer.WindowPresentableListener ? listener;
    nominal type descriptor for XAutocomplete.AutocompleteResultsContainerBuilder autocompleteResultsContainerBuilder;
    nominal type descriptor for XAutocomplete.AutocompleteStateStream autocompleteStateStream;
    ChatMessageComposer.MessageComposerSource composerSource;
    ChatMessageComposer.MessageComposerConfiguration configuration;
    __C.Subsystem_ios_iosArm64_mainXChatFeatureSwitches featureSwitches;
    ChatMessageComposer.MessageComposerConversationContextStream messageComposerConversationContextStream;
    ChatMessageComposer.MessageCompositionStream messageCompositionStream;
    Swift.Bool usePassthroughWindow;
}

@end

#endif /* _TtC19ChatMessageComposer43AutocompleteResultsContainerWindowPresenter_h */
