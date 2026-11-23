//
#ifndef T1XChatMessageSendHandler_h
#define T1XChatMessageSendHandler_h
@import Foundation;

@class NSObject;

@interface T1XChatMessageSendHandler : NSObject // (Swift)

/* class methods */
+ (void)sendMessageWithAccount:(id)account link:(id)link recipientUserID:(long long)id;

/* instance methods */
- (id)init;

@end

#endif /* T1XChatMessageSendHandler_h */
