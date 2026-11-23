//
#ifndef _TtC14TFSTwitterCore15PinReplyAdapter_h
#define _TtC14TFSTwitterCore15PinReplyAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.PinReplyAdapter : NSObject // (Swift)

/* class methods */
+ (void)submitWithActionService:(id)service withStatusID:(long long)id forConversationID:(long long)id completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore15PinReplyAdapter_h */
