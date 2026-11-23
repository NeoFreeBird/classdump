//
#ifndef _TtC14TFSTwitterCore32UserResultsByRestIdsQueryAdapter_h
#define _TtC14TFSTwitterCore32UserResultsByRestIdsQueryAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UserResultsByRestIdsQueryAdapter : NSObject // (Swift)

/* class methods */
+ (id)fetchUsersWithActionService:(id)service restIDs:(id)ids completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore32UserResultsByRestIdsQueryAdapter_h */
