//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation28KMPMessageListLastSeenWorker_h
#define _TtC16ChatConversation28KMPMessageListLastSeenWorker_h
@import Foundation;

@class ChatConversation.MessageListSequenceNumberStream, ChatConversation.MessageListVisibilityStream, ChatModelsCore.ConversationID, _$s11XFoundation13CombineWorkerCN, _$sSo014Subsystem_ios_B27Arm64_mainBaseDmObjectGraph_p, _$ss5Int64VMn;

@interface ChatConversation.KMPMessageListLastSeenWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatConversation.MessageListSequenceNumberStream messageListSequenceNumberStream;
    ChatConversation.MessageListVisibilityStream messageListVisibilityStream;
    __C.Subsystem_ios_iosArm64_mainBaseDmObjectGraph objectGraph;
    nominal type descriptor for Swift.Int64 maxSeenSequenceNumber;
}

@end

#endif /* _TtC16ChatConversation28KMPMessageListLastSeenWorker_h */
