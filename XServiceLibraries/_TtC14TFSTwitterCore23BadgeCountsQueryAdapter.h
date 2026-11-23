//
#ifndef _TtC14TFSTwitterCore23BadgeCountsQueryAdapter_h
#define _TtC14TFSTwitterCore23BadgeCountsQueryAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.BadgeCountsQueryAdapter : NSObject // (Swift)

/* class methods */
+ (id)fetchBadgeCountsWithActionService:(id)service userID:(id)id includeGrokBotCount:(_Bool)count completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore23BadgeCountsQueryAdapter_h */
