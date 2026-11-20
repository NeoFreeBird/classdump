//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17ChatNotifications16ChatNotification_h
#define _TtC17ChatNotifications16ChatNotification_h
@import Foundation;

@class ChatModelsCore.ConversationID ?, ChatModelsCore.SequenceNumber ?, NSArray, NSObject, NSString, Swift.Bool, _$sSS, _$sSSSg, _$sSaySo014Subsystem_ios_B46Arm64_mainNotificationAttachmentNeedsResolvingCG;

@interface ChatNotifications.ChatNotification : NSObject { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID ? conversationID;
    ChatModelsCore.SequenceNumber ? deletedMessageSequenceNumber;
    ChatModelsCore.SequenceNumber ? editedMessageSequenceNumber;
}

@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *customGroupTitle;
@property (nonatomic, readonly) _Bool isDropped;
@property (nonatomic, readonly) _Bool isGroup;
@property (nonatomic, readonly) NSString *senderDisplayName;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) _Bool isMessageDelete;
@property (nonatomic, readonly) _Bool suppressesDisplay;

/* instance methods */
- (id)init;

@end

#endif /* _TtC17ChatNotifications16ChatNotification_h */
