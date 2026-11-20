//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore20UnmentionUserAdapter_h
#define _TtC14TFSTwitterCore20UnmentionUserAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UnmentionUserAdapter : NSObject // (Swift)

/* class methods */
+ (id)unmentionWithActionService:(id)service tweetID:(long long)id userID:(long long)id completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore20UnmentionUserAdapter_h */
