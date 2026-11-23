//
#ifndef T1CameraModeSelectorViewControllerDelegate_Protocol_h
#define T1CameraModeSelectorViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraModeSelectorViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)cameraModeSelectorViewController:(id)controller willSelectModeAtIndex:(unsigned long long)index;
- (void)cameraModeSelectorViewController:(id)controller didSelectModeAtIndex:(unsigned long long)index;

@end

#endif /* T1CameraModeSelectorViewControllerDelegate_Protocol_h */
