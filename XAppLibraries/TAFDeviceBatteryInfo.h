//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFDeviceBatteryInfo_h
#define TAFDeviceBatteryInfo_h
@import Foundation;

@class NSObject;

@interface TAFDeviceBatteryInfo : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 batteryPercentageIn100K;
    @40@0:8:16@24@32 batteryStatus;
}

/* instance methods */
- (id)init;

@end

#endif /* TAFDeviceBatteryInfo_h */
