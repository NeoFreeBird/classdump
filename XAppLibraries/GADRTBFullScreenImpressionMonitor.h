//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADRTBFullScreenImpressionMonitor_h
#define GADRTBFullScreenImpressionMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADObserverCollection.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface GADRTBFullScreenImpressionMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    _Bool _didTellAdapterToPresent;
    GADAdContent *_ad;
    struct atomic_flag { _Atomic _Bool _Value; } _didPostImpression;
    NSObject<OS_dispatch_queue> *_lockQueue;
    long long _impressionStatus;
    double _timeout;
}

/* class methods */
+ (void)addMonitorToAd:(id)ad timeout:(double)timeout;

/* instance methods */
- (id)initWithAd:(id)ad timeout:(double)timeout;
- (void)maybePingImpression:(id)impression;
- (void)didTellAdapterToPresent;
- (void)validateImpression:(id)impression;
- (void)invalidateImpression;

@end

#endif /* GADRTBFullScreenImpressionMonitor_h */
