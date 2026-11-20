//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore20CreateRetweetAdapter_h
#define _TtC14TFSTwitterCore20CreateRetweetAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.CreateRetweetAdapter : NSObject // (Swift)

/* class methods */
+ (void)retweetWithActionService:(id)service modelContext:(id)context statusID:(long long)id representedStatusID:(id)id isEarnedImpression:(_Bool)impression impressionID:(id)id completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore20CreateRetweetAdapter_h */
