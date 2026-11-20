//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
