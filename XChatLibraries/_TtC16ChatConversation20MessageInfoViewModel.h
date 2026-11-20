//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation20MessageInfoViewModel_h
#define _TtC16ChatConversation20MessageInfoViewModel_h
@import Foundation;

@class ChatModels.ChatMessageItem, ChatModelsCore.ConversationID, _$s7Combine9PublishedVMn ChatConversation.MessageInfoState, _$sSo014Subsystem_ios_B27Arm64_mainBaseDmObjectGraph_p, _$sSo014Subsystem_ios_B28Arm64_mainMessageDetailsRepo_pSg, _$sSo014Subsystem_ios_B30Arm64_mainXChatConvObjectGraph_p, _TtCs12_SwiftObject;

@interface ChatConversation.MessageInfoViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ChatMessageItem message;
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainXChatConvObjectGraph convObjectGraph;
    __C.Subsystem_ios_iosArm64_mainBaseDmObjectGraph objectGraph;
    nominal type descriptor for Combine.Published ChatConversation.MessageInfoState _state;
    __C.Subsystem_ios_iosArm64_mainMessageDetailsRepo? messageDetailsRepo;
}

@end

#endif /* _TtC16ChatConversation20MessageInfoViewModel_h */
