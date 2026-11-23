//
#ifndef _TtC14TFSTwitterCore20UpdateProfileAdapter_h
#define _TtC14TFSTwitterCore20UpdateProfileAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UpdateProfileAdapter : NSObject // (Swift)

/* class methods */
+ (id)updateProfileWithActionService:(id)service userID:(long long)id fullName:(id)name url:(id)url location:(id)location place:(id)place bio:(id)bio birthday:(id)birthday completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore20UpdateProfileAdapter_h */
