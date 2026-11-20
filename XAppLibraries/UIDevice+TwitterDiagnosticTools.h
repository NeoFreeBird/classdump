//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIDevice_TwitterDiagnosticTools_h
#define UIDevice_TwitterDiagnosticTools_h
@import Foundation;

@interface UIDevice (TwitterDiagnosticTools)

/* instance methods */
- (id)tdt_registerForBatteryMonitoring;
- (void)_tdt_incrementBatteryMonitoringCount;
- (void)_tdt_decrementBatteryMonitoringCount;

@end

#endif /* UIDevice_TwitterDiagnosticTools_h */
