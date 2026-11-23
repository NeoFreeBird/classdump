//
#ifndef GDTCORMetrics_h
#define GDTCORMetrics_h
@import Foundation;

#include "GDTCOREventDataObject-Protocol.h"
#include "GDTCORLogSourceMetrics.h"

@class NSDate, NSObject, NSString;

@interface GDTCORMetrics : NSObject <GDTCOREventDataObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *collectionStartDate;
@property (readonly, nonatomic) GDTCORLogSourceMetrics *logSourceMetrics;
@property (readonly, nonatomic) NSDate *collectionEndDate;
@property (readonly, nonatomic) unsigned long long currentCacheSize;
@property (readonly, nonatomic) unsigned long long maxCacheSize;
@property (readonly, nonatomic) NSString *bundleID;

/* class methods */
+ (id)metricsWithMetricsMetadata:(id)metadata storageMetadata:(id)metadata;

/* instance methods */
- (id)transportBytes;
- (id)initWithCollectionStartDate:(id)date collectionEndDate:(id)date logSourceMetrics:(id)metrics currentCacheSize:(unsigned long long)size maxCacheSize:(unsigned long long)size bundleID:(id)id;
- (_Bool)isEqualToMetrics:(id)metrics;
- (_Bool)isEqual:(id)equal;

@end

#endif /* GDTCORMetrics_h */
