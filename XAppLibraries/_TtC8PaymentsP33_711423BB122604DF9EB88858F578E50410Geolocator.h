//
#ifndef _TtC8PaymentsP33_711423BB122604DF9EB88858F578E50410Geolocator_h
#define _TtC8PaymentsP33_711423BB122604DF9EB88858F578E50410Geolocator_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"

@class NSObject;

@interface Payments.(Geolocator in _711423BB122604DF9EB88858F578E504) : NSObject <CLLocationManagerDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 continuation;
    @40@0:8:16@24@32 locationManager;
}

/* instance methods */
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (id)init;

@end

#endif /* _TtC8PaymentsP33_711423BB122604DF9EB88858F578E50410Geolocator_h */
