//
#ifndef TIPImageFetchMetrics_h
#define TIPImageFetchMetrics_h
@import Foundation;

@class NSObject;

@interface TIPImageFetchMetrics : NSObject {
    /* instance variables */
    struct { unsigned int currentSource:4; unsigned int isTrackingCurrentSource:1; unsigned int wasCancelled:1; } _flags;
    unsigned long long _machStartTime;
    unsigned long long _machFirstImageLoadTime;
    unsigned long long _machEndTime;
    TIPImageFetchMetricInfo *_infos[5];
}

@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) double firstImageLoadDuration;
@property (readonly, nonatomic) _Bool wasCancelled;

/* instance methods */
- (id)init;
- (id)metricInfoForSource:(long long)source;
- (id)description;

@end

#endif /* TIPImageFetchMetrics_h */
