//
#ifndef TAFDeviceInfoProvider_h
#define TAFDeviceInfoProvider_h
@import Foundation;

#include "TUCDeviceInfoProviderProtocol-Protocol.h"

@class NSObject;

@interface TAFDeviceInfoProvider : NSObject <TUCDeviceInfoProviderProtocol> // (Swift)

/* class methods */
+ (id)batteryInfo;
+ (id)availableDeviceStorageInMB;
+ (id)totalDeviceStorageInMB;

/* instance methods */
- (id)init;

@end

#endif /* TAFDeviceInfoProvider_h */
