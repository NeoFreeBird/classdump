//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CameraAccountGeoDataProviderUpdater_h
#define T1CameraAccountGeoDataProviderUpdater_h
@import Foundation;

#include "T1CameraAccountGeoDataProviderUpdaterDelegate-Protocol.h"

@class NSObject, TFNTwitterAccount, TFSTimer, TFSTwitterLocation;

@interface T1CameraAccountGeoDataProviderUpdater : NSObject

@property (retain, nonatomic) NSObject *updateTag;
@property (retain, nonatomic) TFSTimer *updateTimer;
@property (weak, nonatomic) id <T1CameraAccountGeoDataProviderUpdaterDelegate> delegate;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) TFSTwitterLocation *currentLocation;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account;
- (void)requestServiceAuthorizationWithCompletion:(id /* block */)completion;
- (void)update;
- (void)_t1_main_updateCurrentLocation;
- (void)_t1_main_didFailToUpdateCurrentLocationWithError:(id)error;
- (void)_t1_main_didUpdateCurrentLocation;
- (void)_t1_main_invalidateUpdate;
- (void)_t1_timer_updateTimerDidFire:(id)fire;

@end

#endif /* T1CameraAccountGeoDataProviderUpdater_h */
