//
#ifndef TVDIAnalyticsConfiguration_h
#define TVDIAnalyticsConfiguration_h
@import Foundation;

@class NSObject;

@interface TVDIAnalyticsConfiguration : NSObject

@property (readonly, copy, nonatomic) id /* block */ timeProvider;
@property (readonly, nonatomic) double heartbeatInterval;
@property (readonly, nonatomic) _Bool promotedAudibleViewEnabled;
@property (readonly, nonatomic) _Bool shortFormCompleteEnabled;
@property (readonly, nonatomic) _Bool validateEncoderEnabled;
@property (readonly, nonatomic) double qualityViewThreshold;
@property (readonly, nonatomic) double minimumDurationForQualityViewEvent;

/* instance methods */
- (id)initWithHeartbeatInterval:(id)interval promotedAudibleViewEnabled:(_Bool)enabled shortFormCompleteEnabled:(_Bool)enabled timeProvider:(id /* block */)provider validateEncoderEnabled:(_Bool)enabled qualityViewThreshold:(double)threshold minimumDurationForQualityViewEvent:(double)event;

@end

#endif /* TVDIAnalyticsConfiguration_h */
