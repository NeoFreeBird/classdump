//
#ifndef _TtC14TFSTwitterCore22UserResultQueryAdapter_h
#define _TtC14TFSTwitterCore22UserResultQueryAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UserResultQueryAdapter : NSObject // (Swift)

/* class methods */
+ (id)fetchUserWithActionService:(id)service userID:(long long)id userProfileFeatures:(id)features source:(unsigned long long)source completion:(id /* block */)completion;
+ (id)fetchUserWithActionService:(id)service screenName:(id)name userProfileFeatures:(id)features source:(unsigned long long)source completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore22UserResultQueryAdapter_h */
