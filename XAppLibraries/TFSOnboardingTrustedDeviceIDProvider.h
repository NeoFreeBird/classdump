//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSOnboardingTrustedDeviceIDProvider_h
#define TFSOnboardingTrustedDeviceIDProvider_h
@import Foundation;

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TFSOnboardingTrustedDeviceIDProvider : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_keychainQueue;
}

@property (retain) NSString *trustedDeviceIDString;

/* class methods */
+ (void)createSharedProviderWithKeychain:(id)keychain;
+ (id)sharedProvider;

/* instance methods */
- (id)init;
- (void)_tfs_fetchOrCreateTrustedDeviceIDWithKeychain:(id)keychain;
- (id)_tfs_generateTrustedDeviceID;

@end

#endif /* TFSOnboardingTrustedDeviceIDProvider_h */
