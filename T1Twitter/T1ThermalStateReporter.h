//
#ifndef T1ThermalStateReporter_h
#define T1ThermalStateReporter_h
@import Foundation;

@class NSObject;

@interface T1ThermalStateReporter : NSObject

@property (nonatomic) _Bool enabled;

/* class methods */
+ (id)sharedReporter;

/* instance methods */
- (void)dealloc;
- (void)_t1_main_logThermalState:(long long)state;
- (void)_t1_notification_thermalStateDidChanged:(id)changed;
- (_Bool)isEnabled;

@end

#endif /* T1ThermalStateReporter_h */
