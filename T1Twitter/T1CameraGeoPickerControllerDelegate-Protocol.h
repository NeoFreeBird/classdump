//
#ifndef T1CameraGeoPickerControllerDelegate_Protocol_h
#define T1CameraGeoPickerControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraGeoPickerControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)geoPickerRequestedPresentation;
- (void)geoPickerRequestedDismiss;
- (void)geoPickerDidSelectPlaceWithPlace:(id)place preciseLocation:(id)location;

@optional

/* optional instance methods */
- (void)geoPickerRequestedLocationRetry;

@end

#endif /* T1CameraGeoPickerControllerDelegate_Protocol_h */
