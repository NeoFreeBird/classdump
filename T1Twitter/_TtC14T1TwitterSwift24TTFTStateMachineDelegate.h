//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift24TTFTStateMachineDelegate_h
#define _TtC14T1TwitterSwift24TTFTStateMachineDelegate_h
@import Foundation;

#include "TFSStateMachineDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.AppLaunchState, T1TwitterSwift.TTFTMetricReporter, T1TwitterSwift.TTFTPerformanceTracer ?, T1TwitterSwift.TTFTWarningLogger, _$s17TFSUtilitiesSwift30StateMachineInactivityDetectorCMn, _TtCs12_SwiftObject;

@interface T1TwitterSwift.TTFTStateMachineDelegate : Swift._SwiftObject <TFSStateMachineDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.AppLaunchState appLaunchState;
    Swift.Bool canReportMetrics;
    nominal type descriptor for TFSUtilitiesSwift.StateMachineInactivityDetector inactivityDetector;
    T1TwitterSwift.TTFTMetricReporter metricReporter;
    T1TwitterSwift.TTFTPerformanceTracer ? performanceTracer;
    T1TwitterSwift.TTFTWarningLogger warningLogger;
}

/* instance methods */
- (void)stateMachineRestarted:(id)restarted;
- (void)stateMachine:(id)machine completedTransition:(id)transition;
- (void)stateMachine:(id)machine failedTraversingEdge:(id)edge fromNode:(id)node;

@end

#endif /* _TtC14T1TwitterSwift24TTFTStateMachineDelegate_h */
