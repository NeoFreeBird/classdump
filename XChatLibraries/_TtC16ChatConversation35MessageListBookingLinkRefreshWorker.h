//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation35MessageListBookingLinkRefreshWorker_h
#define _TtC16ChatConversation35MessageListBookingLinkRefreshWorker_h
@import Foundation;

@class ChatConversation.ConversationMessageListItemStream, ChatConversation.MessageBookingLinkResolving, ChatConversation.MessageListSequenceNumberStream, ChatConversation.MessageListVisibilityStream, _$s11XFoundation13CombineWorkerCN, _$sSo014Subsystem_ios_B39Arm64_mainMediaAttachmentResolveDeciderC;

@interface ChatConversation.MessageListBookingLinkRefreshWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkResolving bookingLinkResolver;
    __C.Subsystem_ios_iosArm64_mainMediaAttachmentResolveDecider linkResolveDecider;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    ChatConversation.MessageListSequenceNumberStream messageListSequenceNumberStream;
    ChatConversation.MessageListVisibilityStream messageListVisibilityStream;
}

@end

#endif /* _TtC16ChatConversation35MessageListBookingLinkRefreshWorker_h */
