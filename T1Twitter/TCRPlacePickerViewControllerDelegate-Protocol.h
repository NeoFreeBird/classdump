//
#ifndef TCRPlacePickerViewControllerDelegate_Protocol_h
#define TCRPlacePickerViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRPlacePickerViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)placePickerViewController:(id)controller didSelectPlace:(id)place location:(id)location;
- (void)placePickerViewController:(id)controller didDeselectPlace:(id)place;
- (void)placePickerViewController:(id)controller didChangePreciseLocationState:(_Bool)state;
- (void)placePickerViewControllerShouldDismiss:(id)dismiss;

@optional

@end

#endif /* TCRPlacePickerViewControllerDelegate_Protocol_h */
