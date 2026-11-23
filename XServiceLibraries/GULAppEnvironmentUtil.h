//
#ifndef GULAppEnvironmentUtil_h
#define GULAppEnvironmentUtil_h
@import Foundation;

@class NSObject;

@interface GULAppEnvironmentUtil : NSObject

/* class methods */
+ (_Bool)isFromAppStore;
+ (_Bool)isAppStoreReceiptSandbox;
+ (_Bool)isSimulator;
+ (id)getSysctlEntry:(const char *)entry;
+ (id)deviceModel;
+ (id)deviceSimulatorModel;
+ (id)systemVersion;
+ (_Bool)isAppExtension;
+ (_Bool)isAppClip;
+ (_Bool)supportsBackgroundURLSessionUploads;
+ (id)applePlatform;
+ (id)appleDevicePlatform;
+ (id)deploymentType;

@end

#endif /* GULAppEnvironmentUtil_h */
