//
#ifndef ObjCGrokXChatAnalyzeProperties_h
#define ObjCGrokXChatAnalyzeProperties_h
@import Foundation;

#include "ObjCGrokXChatMessage.h"

@class NSArray, NSObject, NSString;

@interface ObjCGrokXChatAnalyzeProperties : NSObject

@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) NSArray *otherMessages;
@property (readonly, nonatomic) ObjCGrokXChatMessage *targetMessage;

/* instance methods */
- (id)initWithConversationID:(id)id otherMessages:(id)messages targetMessage:(id)message;

@end

#endif /* ObjCGrokXChatAnalyzeProperties_h */
