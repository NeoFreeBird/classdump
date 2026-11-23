//
#ifndef PTVReachabilityMonitor_h
#define PTVReachabilityMonitor_h
@import Foundation;

#include "PTVReachability.h"
#include "PTVWeakSet.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface PTVReachabilityMonitor : NSObject {
    /* instance variables */
    PTVReachabilityMonitor *_weakSelf;
    PTVReachability *_reachability;
    _Bool _isMonitoring;
    PTVWeakSet *_observers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) long long networkStatus;

/* class methods */
+ (id)SharedMonitorForPeriscopeAPI;
+ (id)SharedMonitorForInternetConnection;
+ (_Bool)ConnectedToAWiFiNewtorkWithoutInternet;

/* instance methods */
- (long long)currentRTSPNetworkReachabilityStatus;
- (id)initWithReachability:(id)reachability;
- (void)dealloc;
- (void)networkStatusDidChange:(long long)change;
- (void)startMonitoringIfNeeded;
- (void)doStartMonitoringIfNeeded;
- (long long)doGetNetworkStatus;
- (void)doSetNetworkStatus:(long long)status;
- (void)addReachabilityObserver:(id)observer;
- (void)removeReachabilityObserver:(id)observer;
- (void)notifyObserversAsync;
- (void)doNotifyObservers;
- (void)doAddReachabilityObserver:(id)observer;
- (void)doRemoveReachabilityObserver:(id)observer;

@end

#endif /* PTVReachabilityMonitor_h */
