//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
