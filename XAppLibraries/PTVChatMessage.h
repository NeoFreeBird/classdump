//
#ifndef PTVChatMessage_h
#define PTVChatMessage_h
@import Foundation;

#include "PTVChatSender.h"

@class NSObject, NSString;

@interface PTVChatMessage : NSObject

@property (readonly, nonatomic) NSString *room;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *payload;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) PTVChatSender *sender;

/* class methods */
+ (id)chatMessageWithDict:(id)dict language:(id)language room:(id)room;
+ (id)chatMessageFromWireMessage:(id)message;

/* instance methods */
- (id)dictionaryRepresentation;
- (id)initWithBody:(id)body room:(id)room language:(id)language sender:(id)sender timestamp:(unsigned long long)timestamp payload:(id)payload;

@end

#endif /* PTVChatMessage_h */
