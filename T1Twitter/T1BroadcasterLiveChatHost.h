//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcasterLiveChatHost_h
#define T1BroadcasterLiveChatHost_h
@import Foundation;

@class NSObject;

@interface T1BroadcasterLiveChatHost : NSObject // (Swift)

/* class methods */
+ (id)chatViewControllerWithBroadcast:(id)broadcast chatSetting:(unsigned long long)setting account:(id)account scribeContext:(id)context overflowHandler:(id /* block */)handler;
+ (void)endEditingInChatViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1BroadcasterLiveChatHost_h */
