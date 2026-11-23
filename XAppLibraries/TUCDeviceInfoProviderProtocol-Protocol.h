//
#ifndef TUCDeviceInfoProviderProtocol_Protocol_h
#define TUCDeviceInfoProviderProtocol_Protocol_h
@import Foundation;

#include "TAFDeviceBatteryInfoProvider-Protocol.h"
#include "TAFDeviceStorageInfoProvider-Protocol.h"

@protocol TUCDeviceInfoProviderProtocol <TAFDeviceBatteryInfoProvider, TAFDeviceStorageInfoProvider>

@required

@optional

@end

#endif /* TUCDeviceInfoProviderProtocol_Protocol_h */
