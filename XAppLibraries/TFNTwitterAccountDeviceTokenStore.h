//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterAccountDeviceTokenStore_h
#define TFNTwitterAccountDeviceTokenStore_h
@import Foundation;

@class NSObject;

@interface TFNTwitterAccountDeviceTokenStore : NSObject // (Swift)

/* class methods */
+ (void)setKnownDeviceToken:(id)token;
+ (id)knownDeviceToken;
+ (void)setAuthTimelineToken:(id)token;
+ (id)authTimelineToken;
+ (void)removeKnownDeviceToken;
+ (void)removeAuthTimelineToken;

/* instance methods */
- (id)init;

@end

#endif /* TFNTwitterAccountDeviceTokenStore_h */
