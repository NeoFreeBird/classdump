//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterLoginVerification_h
#define TFNTwitterLoginVerification_h
@import Foundation;

#include "TFNTwitterLoginLegacyPushData.h"

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TFNTwitterLoginVerification : NSObject {
    /* instance variables */
    long long _userID;
    _Bool _isLoginVerificationEnabledInUserDefaults;
    int _sKeyLoginVerificationModeInUserDefaults;
    TFNTwitterLoginLegacyPushData *_legacyPushDataInUserDefaults;
    _Bool _shouldPerformDeferredInitialization;
    _Bool _initWithUserDefaultsDictionary;
    NSObject<OS_dispatch_queue> *_accessorSerialQueue;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) int mode;
@property (retain, nonatomic) TFNTwitterLoginLegacyPushData *legacyPushData;
@property (retain, nonatomic) NSString *sTOTPKey;
@property (retain, nonatomic) NSArray *methods;

/* instance methods */
- (id)initWithUserID:(long long)id;
- (id)initWithUserID:(long long)id deferUsingKeyChainAndUserDefaultsDictionary:(id)dictionary;
- (id)getMethodsOfType:(long long)type;
- (_Bool)shouldShowMethodOfType:(long long)type;
- (_Bool)shouldShowLoginCodeGenerator;
- (void)_performDeferredInitializationAndSaveToKeyChainFromUserDefaultsIfNecessary;
- (_Bool)isEnabled;
- (void)setTFNTwitterLoginLegacyPushData:(id)data;
- (void)saveToKeychainWithHandler:(id /* block */)handler;
- (_Bool)_saveToKeychain;
- (void)saveToKeychainFromUserDefaultsIfNecessary;
- (void)updateFromKeychain;
- (void)updateUserDefaultsDictionary:(id)dictionary;
- (void)_updateFromKeychain;

@end

#endif /* TFNTwitterLoginVerification_h */
