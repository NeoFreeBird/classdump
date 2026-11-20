//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ObjCGrokXChatMessage_h
#define ObjCGrokXChatMessage_h
@import Foundation;

#include "ObjCGrokXChatMessageAttachment.h"

@class NSNumber, NSObject, NSString;

@interface ObjCGrokXChatMessage : NSObject

@property (readonly, nonatomic) ObjCGrokXChatMessageAttachment *attachment;
@property (readonly, nonatomic) ObjCGrokXChatMessage *forwardedMessage;
@property (readonly, nonatomic) ObjCGrokXChatMessage *replyToMessage;
@property (readonly, copy, nonatomic) NSNumber *senderUserID;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSNumber *timestamp;

/* instance methods */
- (id)initWithAttachment:(id)attachment forwardedMessage:(id)message replyToMessage:(id)message senderUserID:(id)id text:(id)text timestamp:(id)timestamp;

@end

#endif /* ObjCGrokXChatMessage_h */
