//
#ifndef PTVVideoOverlayViewControllerCameraDelegate_Protocol_h
#define PTVVideoOverlayViewControllerCameraDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoOverlayViewControllerCameraDelegate <NSObject>

@required

/* required instance methods */
- (void)adjustCameraZoom:(double)zoom velocity:(double)velocity;
- (void)didDoubleTapToFlipCamera;

@optional

@end

#endif /* PTVVideoOverlayViewControllerCameraDelegate_Protocol_h */
