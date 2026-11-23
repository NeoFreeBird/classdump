//
#ifndef GDTCORReachability_h
#define GDTCORReachability_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface GDTCORReachability : NSObject {
    /* instance variables */
    struct __SCNetworkReachability * _reachabilityRef;
    NSObject<OS_dispatch_queue> *_reachabilityQueue;
    unsigned int _callbackFlags;
}

@property (nonatomic) unsigned int flags;

/* class methods */
+ (void)initialize;
+ (id)sharedInstance;
+ (unsigned int)currentFlags;

/* instance methods */
- (id)init;
- (void)setCallbackFlags:(unsigned int)flags;

@end

#endif /* GDTCORReachability_h */
