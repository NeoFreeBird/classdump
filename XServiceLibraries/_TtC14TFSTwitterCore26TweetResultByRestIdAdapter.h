//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore26TweetResultByRestIdAdapter_h
#define _TtC14TFSTwitterCore26TweetResultByRestIdAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.TweetResultByRestIdAdapter : NSObject // (Swift)

/* class methods */
+ (id)fetchTweetWithActionService:(id)service restID:(long long)id completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore26TweetResultByRestIdAdapter_h */
