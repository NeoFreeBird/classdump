//
#ifndef GDTCORMetricsController_h
#define GDTCORMetricsController_h
@import Foundation;

#include "GDTCORMetricsControllerProtocol-Protocol.h"
#include "GDTCORStoragePromiseProtocol-Protocol.h"

@class NSObject, NSString;

@interface GDTCORMetricsController : NSObject <GDTCORMetricsControllerProtocol>

@property (retain, nonatomic) id <GDTCORStoragePromiseProtocol> storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)load;
+ (id)sharedInstance;

/* instance methods */
- (id)initWithStorage:(id)storage;
- (id)logEventsDroppedForReason:(long long)reason events:(id)events;
- (id)getAndResetMetrics;
- (id)offerMetrics:(id)metrics;
- (void)storage:(id)storage didRemoveExpiredEvents:(id)events;
- (void)storage:(id)storage didDropEvent:(id)event;

@end

#endif /* GDTCORMetricsController_h */
