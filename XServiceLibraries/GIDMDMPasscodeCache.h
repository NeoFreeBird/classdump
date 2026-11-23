//
#ifndef GIDMDMPasscodeCache_h
#define GIDMDMPasscodeCache_h
@import Foundation;

#include "GIDMDMPasscodeState.h"

@class NSDate, NSDictionary, NSObject;

@interface GIDMDMPasscodeCache : NSObject {
    /* instance variables */
    _Bool _hasLocalAuthentication;
    NSDictionary *_localAuthenticationInfo;
    _Bool _hasEnteredBackground;
    _Bool _hasKeychain;
    NSDictionary *_keychainInfo;
    NSDate *_keychainExpireTime;
    GIDMDMPasscodeState *_cachedState;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)passcodeState;
- (_Bool)hasLocalAuthentication;
- (_Bool)hasKeychain;
- (void)applicationDidEnterBackground:(id)background;
- (void)obtainLocalAuthenticationInfo;
- (void)obtainKeychainInfo;
- (id)status;
- (id)info;

@end

#endif /* GIDMDMPasscodeCache_h */
