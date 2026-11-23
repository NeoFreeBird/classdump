//
#ifndef _TtC14T1TwitterSwift36URTExternalLaunchTTFTMetricsReporter_h
#define _TtC14T1TwitterSwift36URTExternalLaunchTTFTMetricsReporter_h
@import Foundation;

#include "_TtC14T1TwitterSwift33ExternalLaunchTTFTMetricsReporter.h"

@interface T1TwitterSwift.URTExternalLaunchTTFTMetricsReporter : T1TwitterSwift.ExternalLaunchTTFTMetricsReporter // (Swift)

/* instance methods */
- (void)urtViewControllerDidCompleteInitialLoadWithNotification:(id)notification;
- (void)urtViewControllerDidCompleteInitialRenderWithNotification:(id)notification;
- (_Bool)canMetricsBeReportedWithUiInspector:(id)inspector;
- (_Bool)canReportMetricsForTimelineIn:(long long)in;
- (_Bool)shouldCancelMetricReportingWhenViewWillFullyDisappear:(id)disappear uiInspector:(id)inspector;

@end

#endif /* _TtC14T1TwitterSwift36URTExternalLaunchTTFTMetricsReporter_h */
