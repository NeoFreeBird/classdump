//
#ifndef PTVChatHistory_h
#define PTVChatHistory_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface PTVChatHistory : NSObject

@property (readonly, nonatomic) NSArray *messages;
@property (readonly, nonatomic) NSString *cursor;

/* class methods */
+ (id)historyFromDict:(id)dict;

/* instance methods */
- (id)initWithMessages:(id)messages cursor:(id)cursor;

@end

#endif /* PTVChatHistory_h */
