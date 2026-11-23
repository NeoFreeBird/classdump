//
#ifndef TDTScrollFrameDropEventsPerformanceMetric_h
#define TDTScrollFrameDropEventsPerformanceMetric_h
@import Foundation;

#include "TDTPerformanceMetric.h"

@interface TDTScrollFrameDropEventsPerformanceMetric : TDTPerformanceMetric

@property (nonatomic) long long totalFrameDropEventCount;
@property (nonatomic) long long currentFrameDropEventCount;
@property (nonatomic) long long scrolledItemCount;
@property (nonatomic) double lastFrameTimestamp;
@property (readonly, nonatomic) long long consecutivelyDroppedFrames;
@property (readonly, nonatomic) long long itemsToScrollPerMeasurement;
@property (readonly, nonatomic) long long maximumFramesPerSecond;

/* instance methods */
- (id)initWithConsecutivelyDroppedFrames:(long long)frames itemsToScrollPerMeasurement:(long long)measurement metricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier reporter:(id)reporter reportingInterval:(double)interval cachingInterval:(double)interval directory:(id)directory;
- (id)initWithMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier metricType:(unsigned long long)type measurementClass:(Class)_class reporter:(id)reporter reportingInterval:(double)interval cachingInterval:(double)interval directory:(id)directory;
- (void)frameDropEventDetected;
- (void)registerFramesWithTimestamps:(id)timestamps;
- (void)notifyScrollDidEnd;
- (void)notifyItemDidDisappearDuringScroll;
- (void)_tfn_detectFrameDropEventBetweenTimestamp:(double)timestamp andTimestamp:(double)timestamp;

@end

#endif /* TDTScrollFrameDropEventsPerformanceMetric_h */
