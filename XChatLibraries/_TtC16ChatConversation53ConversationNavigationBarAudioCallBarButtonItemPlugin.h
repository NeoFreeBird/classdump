//
#ifndef _TtC16ChatConversation53ConversationNavigationBarAudioCallBarButtonItemPlugin_h
#define _TtC16ChatConversation53ConversationNavigationBarAudioCallBarButtonItemPlugin_h
@import Foundation;

@class ChatConversation.CallBarButtonItem existential metatype without representation, ChatConversation.ConversationNavigationBarPresenterContext, ChatModels.ConversationCallActionTriggerStream, ChatModels.ConversationMetadataStream, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface ChatConversation.ConversationNavigationBarAudioCallBarButtonItemPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.CallBarButtonItem existential metatype without representation barButtonItemType;
    ChatModels.ConversationCallActionTriggerStream conversationCallActionTriggerStream;
    ChatConversation.ConversationNavigationBarPresenterContext context;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)didTapAudioCallButton:(id)button;

@end

#endif /* _TtC16ChatConversation53ConversationNavigationBarAudioCallBarButtonItemPlugin_h */
