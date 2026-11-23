//
#ifndef T1ProfileLocationPickerDelegate_Protocol_h
#define T1ProfileLocationPickerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ProfileLocationPickerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)profileLocationPickerViewControllerDidCancelSelection:(id)selection;
- (void)profileLocationPickerViewController:(id)controller didSelectPlace:(id)place;
- (void)profileLocationPickerViewController:(id)controller didSelectCustomPlaceWithName:(id)name;

@end

#endif /* T1ProfileLocationPickerDelegate_Protocol_h */
