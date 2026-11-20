//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterPlatformSwift20XFeatureSwitchSystem_h
#define _TtC20TwitterPlatformSwift20XFeatureSwitchSystem_h
@import Foundation;

@class NSObject;

@interface TwitterPlatformSwift.XFeatureSwitchSystem : NSObject // (Swift)

/* class methods */
+ (id)guestAccountID;
+ (id)featureSwitchReading:(id)reading;
+ (id)featureSwitchReadingForDevice;
+ (void)refreshIfNecessaryForAccountID:(id)id;
+ (void)forceRefreshForAccountID:(id)id;
+ (void)applyPendingForAccountID:(id)id;
+ (void)applyPendingDeviceFeatureSwitches;

/* instance methods */
- (id)init;

@end

#endif /* _TtC20TwitterPlatformSwift20XFeatureSwitchSystem_h */
