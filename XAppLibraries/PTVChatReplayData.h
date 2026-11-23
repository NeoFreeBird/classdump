//
#ifndef PTVChatReplayData_h
#define PTVChatReplayData_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface PTVChatReplayData : NSObject

@property (readonly, nonatomic) NSArray *historyArray;
@property (readonly, nonatomic) NSString *cursor;

/* class methods */
+ (id)chatReplayDataFromChatHistory:(id)history historyStartDate:(id)date loggedInUser:(id)user;
+ (id)messageFromChatWireMessage:(id)message loggedInUser:(id)user broadcastCreatedAfterOct10:(_Bool)oct10;

/* instance methods */
- (id)initWithArray:(id)array cursor:(id)cursor;

@end

#endif /* PTVChatReplayData_h */
