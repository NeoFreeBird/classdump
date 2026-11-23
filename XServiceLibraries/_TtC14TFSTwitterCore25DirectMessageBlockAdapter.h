//
#ifndef _TtC14TFSTwitterCore25DirectMessageBlockAdapter_h
#define _TtC14TFSTwitterCore25DirectMessageBlockAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.DirectMessageBlockAdapter : NSObject // (Swift)

/* class methods */
+ (id)blockMessageWithActionService:(id)service userID:(long long)id completion:(id /* block */)completion;
+ (id)unblockMessageWithActionService:(id)service userID:(long long)id completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore25DirectMessageBlockAdapter_h */
