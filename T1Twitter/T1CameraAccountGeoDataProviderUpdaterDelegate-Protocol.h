//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
