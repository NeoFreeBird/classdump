//
#ifndef PTVBatteryStats_h
#define PTVBatteryStats_h
@import Foundation;

@class NSDate, NSObject;

@interface PTVBatteryStats : NSObject {
    /* instance variables */
    float _batteryLevelAtStart;
    long long _batteryStateAtStart;
    NSDate *_batteryCheckTimeStart;
    float _batteryLevelAtEnd;
    long long _batteryStateAtEnd;
    NSDate *_batteryCheckTimeEnd;
}

/* class methods */
+ (id)StringDescriptionFromUIDeviceBatteryState:(long long)state;

/* instance methods */
- (void)dealloc;
- (void)startMeasurement;
- (void)endMeasurement;
- (void)startNewMeasurementPeriod;
- (id)getStatistics;

@end

#endif /* PTVBatteryStats_h */
