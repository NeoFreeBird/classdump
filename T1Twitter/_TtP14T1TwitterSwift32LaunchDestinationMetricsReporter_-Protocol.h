//
#ifndef _TtP14T1TwitterSwift32LaunchDestinationMetricsReporter__Protocol_h
#define _TtP14T1TwitterSwift32LaunchDestinationMetricsReporter__Protocol_h
@import Foundation;

@protocol T1TwitterSwift.LaunchDestinationMetricsReporter

@required

@property (nonatomic, readonly) long long launchDestination;

/* required instance methods */
- (_Bool)canMetricsBeReportedWithUiInspector:(id)inspector;
- (_Bool)canReportMetricsForTimelineIn:(long long)in;
- (_Bool)shouldCancelMetricReportingWhenViewWillFullyDisappear:(id)disappear uiInspector:(id)inspector;

@optional

/* optional instance methods */
- (void)didBecomeColdLaunchDestination;
- (void)didBecomeWarmLaunchDestination;
- (void)didNotBecomeLaunchDestination;
- (void)metricsReportingDidAbortWithReason:(id)reason;
- (void)timelineInitializedForPanelID:(long long)id;
- (void)warmLaunchDidBegin;
- (void)attachZipkinTraceIDMetadataWithZipkinTraceID:(id)id;

@end

#endif /* _TtP14T1TwitterSwift32LaunchDestinationMetricsReporter__Protocol_h */
