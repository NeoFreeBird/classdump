//
#ifndef _TtC14TFSTwitterCore17UnpinReplyAdapter_h
#define _TtC14TFSTwitterCore17UnpinReplyAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UnpinReplyAdapter : NSObject // (Swift)

/* class methods */
+ (void)submitWithActionService:(id)service withStatusID:(long long)id forConversationID:(long long)id completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore17UnpinReplyAdapter_h */
