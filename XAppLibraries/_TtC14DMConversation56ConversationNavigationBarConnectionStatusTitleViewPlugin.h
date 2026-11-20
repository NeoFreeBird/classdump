//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14DMConversation56ConversationNavigationBarConnectionStatusTitleViewPlugin_h
#define _TtC14DMConversation56ConversationNavigationBarConnectionStatusTitleViewPlugin_h
@import Foundation;

@class DMConversation.ConversationNavigationBarTitleViewPluginContext, DMModels.WebSocketConnectionStateStreaming, DMModels.WebSocketReconnecting, DMUI.AvatarViewModelBuilder, _$s10ChatModels26ConversationMetadataStreamCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface DMConversation.ConversationNavigationBarConnectionStatusTitleViewPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DMModels.WebSocketReconnecting webSocketReconnector;
    DMUI.AvatarViewModelBuilder avatarViewModelBuilder;
    DMConversation.ConversationNavigationBarTitleViewPluginContext context;
    nominal type descriptor for ChatModels.ConversationMetadataStream conversationMetadataStream;
    DMModels.WebSocketConnectionStateStreaming webSocketConnectionStateStream;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC14DMConversation56ConversationNavigationBarConnectionStatusTitleViewPlugin_h */
