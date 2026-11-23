//
#ifndef PTVChatWireMessage_h
#define PTVChatWireMessage_h
@import Foundation;

@class NSObject, NSString;

@interface PTVChatWireMessage : NSObject

@property (readonly, nonatomic) unsigned long long kind;
@property (readonly, nonatomic) NSString *payload;
@property (readonly, nonatomic) NSString *json;

/* class methods */
+ (id)wireMessageFromChatMessage:(id)message;
+ (id)wireMessageFromControlMessage:(id)message;
+ (id)authWireMessageWithToken:(id)token;
+ (id)wireMessageFromPayload:(id)payload;
+ (id)wireMessageFromDict:(id)dict;

/* instance methods */
- (id)initWithKind:(unsigned long long)kind payload:(id)payload originalJson:(id)json;
- (id)initWithKind:(unsigned long long)kind dictionary:(id)dictionary;
- (id)dictionaryRepresentation;
- (id)parsePayload;
- (id)parsePayload:(id *)payload;

@end

#endif /* PTVChatWireMessage_h */
