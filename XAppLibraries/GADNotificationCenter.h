//
#ifndef GADNotificationCenter_h
#define GADNotificationCenter_h
@import Foundation;

@class NSArray, NSMutableSet, NSNotificationCenter, NSObject, NSSet;
@protocol OS_dispatch_queue;

@interface GADNotificationCenter : NSObject {
    /* instance variables */
    NSNotificationCenter *_notificationCenter;
    NSArray *_observers;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableSet *_handledNotificationIDs;
    _Bool _enableUnhandledEventLogging;
    NSSet *_allowlistedUnhandledEvents;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)notificationCenter;
- (void)updateUnhandledObserverLogging;
- (void)updateUnhandledObserverLoggingOnce;
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;
- (id)addObserverForName:(id)name object:(id)object queue:(id)queue usingBlock:(id /* block */)block;
- (void)removeEventObserver:(id)observer;

@end

#endif /* GADNotificationCenter_h */
