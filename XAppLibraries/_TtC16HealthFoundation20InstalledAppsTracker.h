//
#ifndef _TtC16HealthFoundation20InstalledAppsTracker_h
#define _TtC16HealthFoundation20InstalledAppsTracker_h
@import Foundation;

@class NSObject;

@interface HealthFoundation.InstalledAppsTracker : NSObject // (Swift)

/* class methods */
+ (id)shared;

/* instance methods */
- (void)trackInstalledAppsWithAccountID:(id)id actionService:(id)service;
- (id)init;

@end

#endif /* _TtC16HealthFoundation20InstalledAppsTracker_h */
