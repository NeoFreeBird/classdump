//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend34XChatFlaggedConversationKeyRotator_h
#define _TtC8ChatSend34XChatFlaggedConversationKeyRotator_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSend.XChatConversationKeyCreator, ChatSync.ChatKeyRotationStream, _$ss6UInt64VMn, _TtCs12_SwiftObject;

@interface ChatSend.XChatFlaggedConversationKeyRotator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.ChatKeyRotationStream keyRotationStream;
    ChatSend.XChatConversationKeyCreator keyCreator;
    nominal type descriptor for Swift.UInt64 backoffSeconds;
}

@end

#endif /* _TtC8ChatSend34XChatFlaggedConversationKeyRotator_h */
