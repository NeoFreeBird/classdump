//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMEventAggregates_h
#define APMEventAggregates_h
@import Foundation;

@class NSNumber, NSObject, NSString;

@interface APMEventAggregates : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int lifetimeCount;
@property (readonly, nonatomic) int currentBundleCount;
@property (readonly, nonatomic) int currentSessionCount;
@property (nonatomic) double lastFireTimestamp;
@property (nonatomic) double lastBundledTimestamp;
@property (copy, nonatomic) NSNumber *lastSampledComplexEventID;
@property (nonatomic) int lastSamplingRate;
@property (nonatomic) _Bool lastExemptFromSampling;
@property (nonatomic) int lastBundledDay;

/* instance methods */
- (id)initWithName:(id)name lifetimeCount:(int)count currentBundleCount:(int)count currentSessionCount:(int)count lastFireTimestamp:(double)timestamp;
- (void)incrementLifetimeCount;
- (void)incrementCurrentBundleCount;
- (void)incrementCurrentSessionCount;

@end

#endif /* APMEventAggregates_h */
