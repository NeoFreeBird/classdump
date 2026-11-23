//
#ifndef _TtC8ChatSend33ChatFlaggedConversationKeyRotator_h
#define _TtC8ChatSend33ChatFlaggedConversationKeyRotator_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSend.ChatConversationKeyCreator, ChatSync.ChatKeyRotationStream, _$ss6UInt64VMn, _TtCs12_SwiftObject;

@interface ChatSend.ChatFlaggedConversationKeyRotator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.ChatKeyRotationStream keyRotationStream;
    ChatSend.ChatConversationKeyCreator keyCreator;
    nominal type descriptor for Swift.UInt64 backoffSeconds;
}

@end

#endif /* _TtC8ChatSend33ChatFlaggedConversationKeyRotator_h */
