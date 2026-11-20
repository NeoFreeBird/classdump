//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcastGeoblockingController_h
#define T1BroadcastGeoblockingController_h
@import Foundation;

#include "TFSTwitterGeoDataProvider-Protocol.h"

@class NSObject, TFNTwitterAccount;

@interface T1BroadcastGeoblockingController : NSObject

@property (readonly, nonatomic) id <TFSTwitterGeoDataProvider> geoDataProvider;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) _Bool hasCachedLocation;
@property (readonly, nonatomic) unsigned long long permissionState;

/* instance methods */
- (id)init;
- (id)initWithGeoDataProvider:(id)provider account:(id)account;
- (void)requestLocationUpdate:(id /* block */)update;

@end

#endif /* T1BroadcastGeoblockingController_h */
