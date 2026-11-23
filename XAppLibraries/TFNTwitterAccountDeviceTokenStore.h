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
