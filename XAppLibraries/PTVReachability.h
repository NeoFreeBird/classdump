//
#ifndef PTVReachability_h
#define PTVReachability_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface PTVReachability : NSObject

@property (nonatomic) struct __SCNetworkReachability * reachabilityRef;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue;
@property (retain, nonatomic) id reachabilityObject;
@property (copy, nonatomic) id /* block */ reachableBlock;
@property (copy, nonatomic) id /* block */ unreachableBlock;
@property (copy, nonatomic) id /* block */ reachabilityBlock;
@property (nonatomic) _Bool reachableOnWWAN;

/* class methods */
+ (id)reachabilityForPeriscopeAPI;
+ (id)reachabilityWithHostName:(id)name;
+ (id)reachabilityWithHostname:(id)hostname;
+ (id)reachabilityWithAddress:(void *)address;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;

/* instance methods */
- (id)initWithHostname:(id)hostname orHostAddress:(void *)address;
- (void)dealloc;
- (_Bool)startNotifier;
- (void)stopNotifier;
- (_Bool)isReachableWithFlags:(unsigned int)flags;
- (_Bool)isReachable;
- (_Bool)isReachableViaWWAN;
- (_Bool)isReachableViaWiFi;
- (_Bool)isConnectionRequired;
- (_Bool)connectionRequired;
- (_Bool)isConnectionOnDemand;
- (_Bool)isInterventionRequired;
- (long long)currentReachabilityStatus;
- (unsigned int)reachabilityFlags;
- (id)currentReachabilityString;
- (id)currentReachabilityFlags;
- (void)reachabilityChanged:(unsigned int)changed;
- (id)description;

@end

#endif /* PTVReachability_h */
