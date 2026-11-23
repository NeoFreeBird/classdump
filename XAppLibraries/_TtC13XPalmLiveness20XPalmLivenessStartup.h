//
#ifndef _TtC13XPalmLiveness20XPalmLivenessStartup_h
#define _TtC13XPalmLiveness20XPalmLivenessStartup_h
@import Foundation;

@class NSObject;

@interface XPalmLiveness.XPalmLivenessStartup : NSObject // (Swift)

/* class methods */
+ (id)didCompleteLivenessNotificationName;
+ (id)livenessTypeUserInfoKey;
+ (id)reviewerBypassToken;
+ (_Bool)bypassesVerificationWithToken:(id)token;
+ (void)startWithSDKKey:(id)sdkkey resultsValidator:(id /* block */)validator scribeProvider:(id)provider skipIntro:(_Bool)intro useVisionHandPose:(_Bool)pose onSuccess:(id /* block */)success;
+ (void)startWithSDKKey:(id)sdkkey onSuccess:(id /* block */)success;

/* instance methods */
- (id)init;

@end

#endif /* _TtC13XPalmLiveness20XPalmLivenessStartup_h */
