//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
