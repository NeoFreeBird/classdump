//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore32ConversationControlChangeAdapter_h
#define _TtC14TFSTwitterCore32ConversationControlChangeAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.ConversationControlChangeAdapter : NSObject // (Swift)

/* class methods */
+ (id)changeToTypeValues:(id)values tweetID:(id)id replyTweetIDs:(id)ids conversationOwner:(id)owner regionCodes:(id)codes revertOnFailureEnabled:(_Bool)enabled modelContext:(id)context actionService:(id)service completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore32ConversationControlChangeAdapter_h */
