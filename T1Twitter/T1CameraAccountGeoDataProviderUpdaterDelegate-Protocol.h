//
#ifndef T1CameraAccountGeoDataProviderUpdaterDelegate_Protocol_h
#define T1CameraAccountGeoDataProviderUpdaterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraAccountGeoDataProviderUpdaterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)cameraAccountGeoDataProviderUpdater:(id)updater didUpdateCurrentLocation:(id)location error:(id)error;

@end

#endif /* T1CameraAccountGeoDataProviderUpdaterDelegate_Protocol_h */
