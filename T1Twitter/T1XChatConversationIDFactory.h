//
#ifndef T1XChatConversationIDFactory_h
#define T1XChatConversationIDFactory_h
@import Foundation;

@class NSObject;

@interface T1XChatConversationIDFactory : NSObject // (Swift)

/* class methods */
+ (id)oneOnOneConversationIDWithAccountUserID:(long long)id recipientUserID:(long long)id;
+ (id)xchatConversationIDFromLegacyConversationID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* T1XChatConversationIDFactory_h */
