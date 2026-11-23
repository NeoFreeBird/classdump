//
#ifndef T1BandwidthAggregatorEntry_h
#define T1BandwidthAggregatorEntry_h
@import Foundation;

@class NSObject;

@interface T1BandwidthAggregatorEntry : NSObject

@property (readonly, nonatomic) unsigned int payload;
@property (readonly, nonatomic) unsigned int bandwidth;
@property (readonly, nonatomic) unsigned long long machTime;

/* class methods */
+ (id)entryWithPayload:(unsigned int)payload bandwidth:(unsigned int)bandwidth machTime:(unsigned long long)time;

/* instance methods */
- (id)init;

@end

#endif /* T1BandwidthAggregatorEntry_h */
