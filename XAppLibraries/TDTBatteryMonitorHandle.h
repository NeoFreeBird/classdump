//
#ifndef TDTBatteryMonitorHandle_h
#define TDTBatteryMonitorHandle_h
@import Foundation;

@class NSObject, UIDevice;

@interface TDTBatteryMonitorHandle : NSObject

@property (retain, nonatomic) UIDevice *device;

/* instance methods */
- (id)initWithDevice:(id)device;
- (void)dealloc;

@end

#endif /* TDTBatteryMonitorHandle_h */
