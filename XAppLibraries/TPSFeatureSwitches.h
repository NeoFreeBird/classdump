//
#ifndef TPSFeatureSwitches_h
#define TPSFeatureSwitches_h
@import Foundation;

@class NSObject;

@interface TPSFeatureSwitches : NSObject

/* class methods */
+ (_Bool)isInitialized;
+ (id)featureSwitchesForDevice;
+ (id)featureSwitchesForAccountID:(id)id;
+ (void)shutdown;
+ (_Bool)startFeatureSwitchesWithManifestFile:(id)file forDeviceGuestId:(unsigned long long)id authenticatedServicesProvider:(id)provider isUsingVoiceOver:(_Bool)over error:(id *)error;
+ (id)ceolAllowlist;
+ (unsigned long long)enumForSwitchValue:(id)value mapping:(id)mapping defaultResult:(unsigned long long)result switchIdentifier:(id)identifier;
+ (void)_tps_reportUnhandledSwitchIdentifier:(id)identifier switchValue:(id)value;

@end

#endif /* TPSFeatureSwitches_h */
