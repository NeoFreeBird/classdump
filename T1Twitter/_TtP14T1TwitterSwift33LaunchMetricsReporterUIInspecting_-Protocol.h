//
#ifndef _TtP14T1TwitterSwift33LaunchMetricsReporterUIInspecting__Protocol_h
#define _TtP14T1TwitterSwift33LaunchMetricsReporterUIInspecting__Protocol_h
@import Foundation;

@protocol T1TwitterSwift.LaunchMetricsReporterUIInspecting

@required

@property (nonatomic, readonly) long long currentPanelID;

/* required instance methods */
- (_Bool)isPrimaryContentActiveInPanel:(long long)panel;
- (_Bool)isViewController:(id)controller primaryContentForPanel:(long long)panel;
- (void)performAfterCurrentViewControllerUpdate:(id /* block */)update;

@optional

@end

#endif /* _TtP14T1TwitterSwift33LaunchMetricsReporterUIInspecting__Protocol_h */
