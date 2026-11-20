//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
