//
#ifndef APMDailyCounts_h
#define APMDailyCounts_h
@import Foundation;

@class NSObject;

@interface APMDailyCounts : NSObject

@property (readonly, nonatomic) int day;
@property (readonly, nonatomic) int conversionsCount;
@property (readonly, nonatomic) int allEventsCount;
@property (readonly, nonatomic) int publicEventsCount;
@property (readonly, nonatomic) int errorEventsCount;
@property (readonly, nonatomic) int realtimeCount;
@property (readonly, nonatomic) int dcuRealtimeCount;

/* instance methods */
- (id)initWithDay:(int)day conversionsCount:(int)count allEventsCount:(int)count publicEventsCount:(int)count errorEventsCount:(int)count realtimeCount:(int)count dcuRealtimeCount:(int)count;
- (void)incrementCountsForCurrentDay:(int)day isPublicEvent:(_Bool)event isConversion:(_Bool)conversion;
- (void)incrementCountsForCurrentDay:(int)day isPublicEvent:(_Bool)event isConversion:(_Bool)conversion byEffectiveEventCount:(int)count;
- (void)incrementErrorEventsCountForCurrentDay:(int)day;
- (void)incrementRealtimeCountsForCurrentDay:(int)day;
- (void)incrementDCURealtimeCountsForCurrentDay:(int)day;
- (void)decrementAllEventsCount;
- (void)resetWithNewDay:(int)day;

@end

#endif /* APMDailyCounts_h */
