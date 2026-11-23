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
