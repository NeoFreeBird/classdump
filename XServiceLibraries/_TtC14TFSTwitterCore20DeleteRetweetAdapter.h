//
#ifndef _TtC14TFSTwitterCore20DeleteRetweetAdapter_h
#define _TtC14TFSTwitterCore20DeleteRetweetAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.DeleteRetweetAdapter : NSObject // (Swift)

/* class methods */
+ (void)unretweetWithActionService:(id)service modelContext:(id)context statusID:(long long)id editChainStatusIDs:(id)ids completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore20DeleteRetweetAdapter_h */
