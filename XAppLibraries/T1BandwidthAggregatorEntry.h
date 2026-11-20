//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
