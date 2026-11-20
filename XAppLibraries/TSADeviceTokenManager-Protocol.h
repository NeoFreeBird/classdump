//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSADeviceTokenManager_Protocol_h
#define TSADeviceTokenManager_Protocol_h
@import Foundation;

@protocol TSADeviceTokenManager

@required

/* required instance methods */
- (void)acquireDeviceToken:(id /* block */)token;

@optional

@end

#endif /* TSADeviceTokenManager_Protocol_h */
