//
#ifndef _TtC14T1TwitterSwift25LaunchHomeMetricsReporter_h
#define _TtC14T1TwitterSwift25LaunchHomeMetricsReporter_h
@import Foundation;

#include "_TtC14T1TwitterSwift36TTFTStateMachineMetricsReporterClass.h"
#include "_TtP14T1TwitterSwift32LaunchDestinationMetricsReporter_-Protocol.h"

@class Swift.Bool, T1TwitterSwift.HomeTimelineDidUpdateValueExtracting, T1TwitterSwift.LaunchDestination, __C.T1PanelID;

@interface T1TwitterSwift.LaunchHomeMetricsReporter : T1TwitterSwift.TTFTStateMachineMetricsReporterClass <T1TwitterSwift.LaunchDestinationMetricsReporter> { // (Swift)
    /* instance variables */
    Swift.Bool supportsWarmLaunch;
    T1TwitterSwift.HomeTimelineDidUpdateValueExtracting homeTimelineDidUpdateValueExtractor;
    __C.T1PanelID panelID;
}

@property (nonatomic, readonly) long long launchDestination;

/* instance methods */
- (void)homeTimelineDidUpdate:(id)update;
- (void)dataViewControllerDidUpdate:(id)update;
- (_Bool)canMetricsBeReportedWithUiInspector:(id)inspector;
- (_Bool)canReportMetricsForTimelineIn:(long long)in;
- (void)didBecomeWarmLaunchDestination;
- (_Bool)shouldCancelMetricReportingWhenViewWillFullyDisappear:(id)disappear uiInspector:(id)inspector;
- (void)attachZipkinTraceIDMetadataWithZipkinTraceID:(id)id;

@end

#endif /* _TtC14T1TwitterSwift25LaunchHomeMetricsReporter_h */
