//
#ifndef TFSTwitterTrendsLocationList_h
#define TFSTwitterTrendsLocationList_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterTrendsLocationList : NSObject

@property (readonly, nonatomic) NSArray *topLevelLocations;
@property (readonly, nonatomic) NSArray *secondaryLocations;

/* class methods */
+ (id)trendsLocationListWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithTrendsLocations:(id)locations;
- (id)initWithJSONArray:(id)jsonarray;

@end

#endif /* TFSTwitterTrendsLocationList_h */
