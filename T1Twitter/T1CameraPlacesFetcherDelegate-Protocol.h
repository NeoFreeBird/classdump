//
#ifndef T1CameraPlacesFetcherDelegate_Protocol_h
#define T1CameraPlacesFetcherDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraPlacesFetcherDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)cameraPlacesFetcher:(id)fetcher didFetchCurrentPlaces:(id)places error:(id)error;

@end

#endif /* T1CameraPlacesFetcherDelegate_Protocol_h */
