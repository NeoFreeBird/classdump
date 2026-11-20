//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift32LaunchMetricsReporterUIInspector_h
#define _TtC14T1TwitterSwift32LaunchMetricsReporterUIInspector_h
@import Foundation;

#include "_TtP14T1TwitterSwift33LaunchMetricsReporterUIInspecting_-Protocol.h"

@class _TtCs12_SwiftObject;

@interface T1TwitterSwift.LaunchMetricsReporterUIInspector : Swift._SwiftObject <T1TwitterSwift.LaunchMetricsReporterUIInspecting> // (Swift)

@property (nonatomic, readonly) long long currentPanelID;

/* instance methods */
- (_Bool)isPrimaryContentActiveInPanel:(long long)panel;
- (_Bool)isViewController:(id)controller primaryContentForPanel:(long long)panel;
- (void)performAfterCurrentViewControllerUpdate:(id /* block */)update;

@end

#endif /* _TtC14T1TwitterSwift32LaunchMetricsReporterUIInspector_h */
