//
#ifndef GDTCORLifecycle_h
#define GDTCORLifecycle_h
@import Foundation;

@class NSObject;

@interface GDTCORLifecycle : NSObject

/* class methods */
+ (void)load;
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)applicationDidEnterBackgroundNotification:(id)notification;
- (void)applicationWillEnterForegroundNotification:(id)notification;
- (void)applicationWillTerminateNotification:(id)notification;

@end

#endif /* GDTCORLifecycle_h */
