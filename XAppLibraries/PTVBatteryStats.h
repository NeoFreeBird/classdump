//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
