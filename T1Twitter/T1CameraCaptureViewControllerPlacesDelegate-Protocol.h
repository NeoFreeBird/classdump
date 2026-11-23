//
#ifndef T1CameraCaptureViewControllerPlacesDelegate_Protocol_h
#define T1CameraCaptureViewControllerPlacesDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraCaptureViewControllerPlacesDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)cameraCaptureViewController:(id)controller didUpdateCurrentPlacesFetchResult:(id)result;

@end

#endif /* T1CameraCaptureViewControllerPlacesDelegate_Protocol_h */
