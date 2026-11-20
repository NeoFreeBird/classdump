//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterLoginLegacyPushData_h
#define TFNTwitterLoginLegacyPushData_h
@import Foundation;

@class NSData, NSObject;

@interface TFNTwitterLoginLegacyPushData : NSObject

@property (nonatomic) int sKeyCount;
@property (retain, nonatomic) NSData *sKeySeed;

/* instance methods */
- (_Bool)updateUserDefaultsDictionary:(id)dictionary;
- (id)initWithUserDefaultsDictionary:(id)dictionary;
- (_Bool)saveToKeyChainForUser:(long long)user;
- (void)updateFromKeyChainForUser:(long long)user isLoginVerificationEnabled:(_Bool)enabled;

@end

#endif /* TFNTwitterLoginLegacyPushData_h */
