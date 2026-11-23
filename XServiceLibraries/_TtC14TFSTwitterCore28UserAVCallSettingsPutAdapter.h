//
#ifndef _TtC14TFSTwitterCore28UserAVCallSettingsPutAdapter_h
#define _TtC14TFSTwitterCore28UserAVCallSettingsPutAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UserAVCallSettingsPutAdapter : NSObject // (Swift)

/* class methods */
+ (id)updateWithActionService:(id)service userID:(long long)id hasAVCallsEnabled:(_Bool)enabled acceptsAVCallsFrom:(long long)from hasEnhancedCallPrivacyEnabled:(_Bool)enabled completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore28UserAVCallSettingsPutAdapter_h */
