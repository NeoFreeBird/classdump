//
#ifndef T1ActivityHistoryBridge_h
#define T1ActivityHistoryBridge_h
@import Foundation;

@class NSObject;

@interface T1ActivityHistoryBridge : NSObject // (Swift)

/* class methods */
+ (void)restoreWatchProgressFor:(id)_for account:(id)account;
+ (void)restoreWatchProgressForBroadcast:(id)broadcast account:(id)account;
+ (id)playbackObserverWithMediaKey:(id)key statusID:(id)id account:(id)account;
+ (id)makeActivityHistoryViewControllerWithAccount:(id)account initialTab:(long long)tab;
+ (void)selectTab:(long long)tab inActivityHistoryViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1ActivityHistoryBridge_h */
