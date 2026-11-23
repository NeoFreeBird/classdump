//
#ifndef GDTCORMetricsMetadata_h
#define GDTCORMetricsMetadata_h
@import Foundation;

#include "GDTCORLogSourceMetrics.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSObject;

@interface GDTCORMetricsMetadata : NSObject <NSSecureCoding>

@property (readonly, copy, nonatomic) NSDate *collectionStartDate;
@property (readonly, copy, nonatomic) GDTCORLogSourceMetrics *logSourceMetrics;

/* class methods */
+ (id)metadataWithCollectionStartDate:(id)date logSourceMetrics:(id)metrics;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithCollectionStartDate:(id)date logSourceMetrics:(id)metrics;
- (_Bool)isEqualToMetricsMetadata:(id)metadata;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* GDTCORMetricsMetadata_h */
