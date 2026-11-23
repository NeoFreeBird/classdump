//
#ifndef _TtC14T1TwitterSwift18TTFTMetricReporter_h
#define _TtC14T1TwitterSwift18TTFTMetricReporter_h
@import Foundation;

@class T1TwitterSwift.LaunchMetricsReporterNetworkMonitoring, T1TwitterSwift.ReadonlyAppLaunchState, _$sySS_Sdtc, _TtCs12_SwiftObject;

@interface T1TwitterSwift.TTFTMetricReporter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.ReadonlyAppLaunchState appLaunchState;
    T1TwitterSwift.LaunchMetricsReporterNetworkMonitoring networkMonitor;
    (Swift.String, Swift.Double) -> () scribingReporter;
}

@end

#endif /* _TtC14T1TwitterSwift18TTFTMetricReporter_h */
