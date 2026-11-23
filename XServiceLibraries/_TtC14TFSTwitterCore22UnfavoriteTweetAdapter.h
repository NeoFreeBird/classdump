//
#ifndef _TtC14TFSTwitterCore22UnfavoriteTweetAdapter_h
#define _TtC14TFSTwitterCore22UnfavoriteTweetAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UnfavoriteTweetAdapter : NSObject // (Swift)

/* class methods */
+ (void)unfavoriteWithActionService:(id)service modelContext:(id)context statusID:(long long)id isEarnedImpression:(_Bool)impression impressionID:(id)id completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore22UnfavoriteTweetAdapter_h */
