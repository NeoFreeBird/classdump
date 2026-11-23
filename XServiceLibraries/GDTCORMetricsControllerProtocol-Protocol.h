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
