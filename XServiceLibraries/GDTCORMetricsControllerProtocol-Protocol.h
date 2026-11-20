//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCORMetricsControllerProtocol_Protocol_h
#define GDTCORMetricsControllerProtocol_Protocol_h
@import Foundation;

#include "GDTCORStorageDelegate-Protocol.h"

@protocol GDTCORMetricsControllerProtocol <GDTCORStorageDelegate>

@required

/* required instance methods */
- (id)logEventsDroppedForReason:(long long)reason events:(id)events;
- (id)getAndResetMetrics;
- (id)offerMetrics:(id)metrics;

@optional

@end

#endif /* GDTCORMetricsControllerProtocol_Protocol_h */
