//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFeatureSwitchesEmbeddedExperiment_h
#define TFSFeatureSwitchesEmbeddedExperiment_h
@import Foundation;

@class NSArray, NSDate, NSObject, NSString;

@interface TFSFeatureSwitchesEmbeddedExperiment : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) int hashMethod;
@property (readonly, nonatomic) NSArray *buckets;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;

/* class methods */
+ (id)embeddedExperimentWithDictionary:(id)dictionary;
+ (id)_dateFromFormattedString:(id)string;

/* instance methods */
- (id)initWithName:(id)name version:(long long)version hashMethod:(int)method buckets:(id)buckets startTime:(id)time endTime:(id)time;
- (id)bucketForGuestId:(unsigned long long)id;
- (id)valueForGuestId:(unsigned long long)id;
- (_Bool)_isInDateRangeNow;

@end

#endif /* TFSFeatureSwitchesEmbeddedExperiment_h */
