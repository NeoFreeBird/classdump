//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterTwoFactorAuthSettings_h
#define TFSTwitterTwoFactorAuthSettings_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterTwoFactorAuthSettings : NSObject

@property (readonly, nonatomic) _Bool isTwoFactorAuthEnabled;
@property (readonly, nonatomic) _Bool isOldPushUser;
@property (readonly, nonatomic) NSArray *twoFactorAuthMethods;

/* instance methods */
- (id)initWithIsTwoFactorAuthEnabled:(_Bool)enabled isOldPushUser:(_Bool)user twoFactorAuthMethods:(id)methods;
- (id)init;

@end

#endif /* TFSTwitterTwoFactorAuthSettings_h */
