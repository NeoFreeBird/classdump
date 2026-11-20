//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SubscriptionStateManager_h
#define T1SubscriptionStateManager_h
@import Foundation;

@class NSObject;

@interface T1SubscriptionStateManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *$__lazy_storage_$_actionService;
}

/* class methods */
+ (id)managerFor:(id)_for;
+ (void)openSubscriptionManagementSettings;
+ (void)openSubscriptionManagementSettingsInAppWithAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1SubscriptionStateManager_h */
