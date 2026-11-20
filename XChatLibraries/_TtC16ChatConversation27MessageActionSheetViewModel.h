//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation27MessageActionSheetViewModel_h
#define _TtC16ChatConversation27MessageActionSheetViewModel_h
@import Foundation;

@class ChatConversation.MessageActionPluginPoint, ChatConversation.MessageActionSheetMessageObserving, ChatConversation.MessageActionSource, ChatConversation.MessageReactionSending, ChatConversationServices.ConversationSource, ChatEmojiPicker.MessageRecentEmojiProviding, ChatKotlin.ObjectGraphProvider, ChatModels.ChatMessageItem, ChatModels.ConversationMetadataStream, _$s7Combine9PublishedVMn _$sSaySSG, _$s7Combine9PublishedVMn _$sySa -> ChatMessageActionTray.MessageActionTrayAction, _$sSo16UIViewControllerCSgXw, _$sSo25UIImpactFeedbackGeneratorC, _TtCs12_SwiftObject;

@interface ChatConversation.MessageActionSheetViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> ChatMessageActionTray.MessageActionTrayAction _trayActions;
    nominal type descriptor for Combine.Published [Swift.String] _quickReactions;
    ChatModels.ChatMessageItem message;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationServices.ConversationSource conversationSource;
    ChatConversation.MessageActionPluginPoint messageActionPluginPoint;
    ChatConversation.MessageActionSheetMessageObserving messageObserver;
    ChatConversation.MessageReactionSending messageReactionSender;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    ChatEmojiPicker.MessageRecentEmojiProviding recentEmojiProvider;
    weak __C.UIViewController? presenter;
    ChatConversation.MessageActionSource source;
    __C.UIImpactFeedbackGenerator feedbackGenerator;
}

@end

#endif /* _TtC16ChatConversation27MessageActionSheetViewModel_h */
