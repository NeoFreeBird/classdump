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
