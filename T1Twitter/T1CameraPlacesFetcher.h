//
#ifndef T1CameraPlacesFetcher_h
#define T1CameraPlacesFetcher_h
@import Foundation;

#include "T1CameraPlacesFetcherDelegate-Protocol.h"

@class NSObject, TFNTwitterAccount, TFNTwitterComposePlaceStore;

@interface T1CameraPlacesFetcher : NSObject

@property (readonly, nonatomic) TFNTwitterComposePlaceStore *placeStore;
@property (weak, nonatomic) id <T1CameraPlacesFetcherDelegate> delegate;
@property (readonly, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account;
- (void)fetchCurrentPlacesAtLocation:(id)location;
- (void)_t1_notification_placeStoreDidFetchPlaces:(id)places;
- (void)_t1_notification_placeStoreDidFailToFetchPlaces:(id)places;

@end

#endif /* T1CameraPlacesFetcher_h */
