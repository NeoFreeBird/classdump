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
