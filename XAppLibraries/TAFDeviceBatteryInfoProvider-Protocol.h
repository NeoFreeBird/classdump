//
#ifndef TAFDeviceBatteryInfoProvider_Protocol_h
#define TAFDeviceBatteryInfoProvider_Protocol_h
@import Foundation;

@protocol TAFDeviceBatteryInfoProvider

@required

@property (class, nonatomic, readonly) TAFDeviceBatteryInfo *batteryInfo;

/* class methods */
+ (id)batteryInfo;

@optional

@end

#endif /* TAFDeviceBatteryInfoProvider_Protocol_h */
