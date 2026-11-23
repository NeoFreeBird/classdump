//
#ifndef T1PlayerItemNetworkUsageTracker_h
#define T1PlayerItemNetworkUsageTracker_h
@import Foundation;

@class NSObject;

@interface T1PlayerItemNetworkUsageTracker : NSObject {
    /* instance variables */
    long long _transferredByteCount;
    long long _wwanRequestCount;
    long long _wifiRequestCount;
    double _transferDurationInterval;
}

/* instance methods */
- (void)updateWithNetworkUsageSnapshot:(id)snapshot;

@end

#endif /* T1PlayerItemNetworkUsageTracker_h */
