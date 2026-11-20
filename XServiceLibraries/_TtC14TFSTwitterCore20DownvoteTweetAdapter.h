//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore20DownvoteTweetAdapter_h
#define _TtC14TFSTwitterCore20DownvoteTweetAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.DownvoteTweetAdapter : NSObject // (Swift)

/* class methods */
+ (void)downvoteTweetWithTweetID:(long long)id modelContext:(id)context actionService:(id)service completion:(id /* block */)completion;
+ (void)undoDownvoteTweetWithTweetID:(long long)id modelContext:(id)context actionService:(id)service completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore20DownvoteTweetAdapter_h */
