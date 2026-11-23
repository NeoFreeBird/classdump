//
#ifndef APMAppMetadata_h
#define APMAppMetadata_h
@import Foundation;

@class NSObject;

@interface APMAppMetadata : NSObject

@property (readonly, nonatomic) int lastBundleIndex;
@property (readonly, nonatomic) int lastDeliveryIndex;
@property (nonatomic) double lastBundleStartTimestamp;
@property (nonatomic) double lastBundleEndTimestamp;

/* instance methods */
- (id)initWithLastBundleIndex:(int)index lastBundleStartTimestamp:(double)timestamp lastBundleEndTimestamp:(double)timestamp;
- (id)initWithLastBundleIndex:(int)index lastDeliveryIndex:(int)index lastBundleStartTimestamp:(double)timestamp lastBundleEndTimestamp:(double)timestamp;
- (void)increaseLastBundleIndex:(unsigned long long)index;
- (void)incrementLastDeliveryIndex;

@end

#endif /* APMAppMetadata_h */
