//
#ifndef T1PlayerNetworkUsageObserver_h
#define T1PlayerNetworkUsageObserver_h
@import Foundation;

@class NSMutableDictionary, NSObject;

@interface T1PlayerNetworkUsageObserver : NSObject {
    /* instance variables */
    NSMutableDictionary *_trackersDictionary;
}

/* instance methods */
- (id)init;
- (void)_t1_updateWithNotification:(id)notification;

@end

#endif /* T1PlayerNetworkUsageObserver_h */
