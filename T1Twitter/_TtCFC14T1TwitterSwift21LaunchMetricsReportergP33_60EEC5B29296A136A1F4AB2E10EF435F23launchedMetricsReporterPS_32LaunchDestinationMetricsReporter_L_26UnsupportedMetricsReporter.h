//
#ifndef _TtCFC14T1TwitterSwift21LaunchMetricsReportergP33_60EEC5B29296A136A1F4AB2E10EF435F23launchedMetricsReporterPS_32LaunchDestinationMetricsReporter_L_26UnsupportedMetricsReporter_h
#define _TtCFC14T1TwitterSwift21LaunchMetricsReportergP33_60EEC5B29296A136A1F4AB2E10EF435F23launchedMetricsReporterPS_32LaunchDestinationMetricsReporter_L_26UnsupportedMetricsReporter_h
@import Foundation;

#include "_TtP14T1TwitterSwift32LaunchDestinationMetricsReporter_-Protocol.h"

@class _TtCs12_SwiftObject;

@interface UnsupportedMetricsReporter #1 in T1TwitterSwift.LaunchMetricsReporter.(launchedMetricsReporter in _60EEC5B29296A136A1F4AB2E10EF435F).getter : T1TwitterSwift.LaunchDestinationMetricsReporter : Swift._SwiftObject <T1TwitterSwift.LaunchDestinationMetricsReporter> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *panelID;
    NSNumber"16@0:8 *supportsWarmLaunch;
}

@property (nonatomic) long long launchDestination;

/* instance methods */
- (_Bool)canMetricsBeReportedWithUiInspector:(id)inspector;
- (_Bool)canReportMetricsForTimelineIn:(long long)in;
- (_Bool)shouldCancelMetricReportingWhenViewWillFullyDisappear:(id)disappear uiInspector:(id)inspector;

@end

#endif /* _TtCFC14T1TwitterSwift21LaunchMetricsReportergP33_60EEC5B29296A136A1F4AB2E10EF435F23launchedMetricsReporterPS_32LaunchDestinationMetricsReporter_L_26UnsupportedMetricsReporter_h */
