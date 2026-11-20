//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1XChatDeeplinkHelper_h
#define T1XChatDeeplinkHelper_h
@import Foundation;

@class NSObject;

@interface T1XChatDeeplinkHelper : NSObject // (Swift)

/* class methods */
+ (_Bool)isEqualConversationIDWith:(id)idwith viewController:(id)controller;
+ (_Bool)isInboxVisibleWith:(id)with;
+ (_Bool)showGrokBotsDestinationIfVisibleWithAgentID:(id)id viewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1XChatDeeplinkHelper_h */
