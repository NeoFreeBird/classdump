//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore29FinishPalmVerificationAdapter_h
#define _TtC14TFSTwitterCore29FinishPalmVerificationAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.FinishPalmVerificationAdapter : NSObject // (Swift)

/* class methods */
+ (void)finishPalmVerificationWithActionService:(id)service nonce:(id)nonce palmPassed:(_Bool)passed success:(id /* block */)success failure:(id /* block */)failure;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore29FinishPalmVerificationAdapter_h */
