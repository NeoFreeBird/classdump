//
#ifndef _TtC19ChatMessageComposer24MessageSendParamsBuilder_h
#define _TtC19ChatMessageComposer24MessageSendParamsBuilder_h
@import Foundation;

@class ChatMessageComposer.ChatComposerAttachmentBuilder, ChatMessageComposer.KMPMessageItemResolver, ChatModelsCore.ConversationID, _$sSo014Subsystem_ios_B30Arm64_mainXChatFeatureSwitches_p, _$sSo014Subsystem_ios_B43Arm64_mainMessageForwardAttachmentConverter_p, _TtCs12_SwiftObject;

@interface ChatMessageComposer.MessageSendParamsBuilder : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatMessageComposer.ChatComposerAttachmentBuilder chatComposerAttachmentBuilder;
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainXChatFeatureSwitches featureSwitches;
    __C.Subsystem_ios_iosArm64_mainMessageForwardAttachmentConverter messageForwardAttachmentConverter;
    ChatMessageComposer.KMPMessageItemResolver messageItemResolver;
}

@end

#endif /* _TtC19ChatMessageComposer24MessageSendParamsBuilder_h */
