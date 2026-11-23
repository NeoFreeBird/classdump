//
#ifndef _TtC14T1TwitterSwift33ExternalLaunchTTFTMetricsReporter_h
#define _TtC14T1TwitterSwift33ExternalLaunchTTFTMetricsReporter_h
@import Foundation;

#include "_TtC14T1TwitterSwift36TTFTStateMachineMetricsReporterClass.h"
#include "_TtP14T1TwitterSwift32LaunchDestinationMetricsReporter_-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ExternalLaunchMetricSource, T1TwitterSwift.ExternalLaunchTTFTStateMachineGraphBuilder.Edges, T1TwitterSwift.LaunchDestination, _$sSayyXlG;

@interface T1TwitterSwift.ExternalLaunchTTFTMetricsReporter : T1TwitterSwift.TTFTStateMachineMetricsReporterClass <T1TwitterSwift.LaunchDestinationMetricsReporter> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ExternalLaunchTTFTStateMachineGraphBuilder.Edges edges;
    [Swift.AnyObject] remoteNotificationObservers;
    [Swift.AnyObject] universalLinkObservers;
    Swift.Bool supportsWarmLaunch;
    T1TwitterSwift.ExternalLaunchMetricSource metricSource;
}

@property (nonatomic, readonly) long long launchDestination;

/* instance methods */
- (void)didBeginHandlingNotification:(id)notification;
- (void)didCompleteHandlingNotification:(id)notification;
- (void)didBeginHandlingUniversalLink:(id)link;
- (void)didCompleteHandlingUniversalLink:(id)link;
- (_Bool)canMetricsBeReportedWithUiInspector:(id)inspector;
- (_Bool)canReportMetricsForTimelineIn:(long long)in;
- (_Bool)shouldCancelMetricReportingWhenViewWillFullyDisappear:(id)disappear uiInspector:(id)inspector;

@end

#endif /* _TtC14T1TwitterSwift33ExternalLaunchTTFTMetricsReporter_h */
