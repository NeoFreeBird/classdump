//
#ifndef GADNetworkUtilizationStatistics_h
#define GADNetworkUtilizationStatistics_h
@import Foundation;

@class NSDictionary, NSObject;

@interface GADNetworkUtilizationStatistics : NSObject

@property (readonly, nonatomic) NSDictionary *transmittedByteCounts;
@property (readonly, nonatomic) NSDictionary *receivedByteCounts;

/* class methods */
+ (id)currentStatistics;

/* instance methods */
- (id)initWithTransmittedByteCounts:(id)counts receivedByteCounts:(id)counts;
- (id)init;
- (id)updatedStatistics;
- (id)plusStatistics:(id)statistics;
- (id)minusStatistics:(id)statistics;

@end

#endif /* GADNetworkUtilizationStatistics_h */
