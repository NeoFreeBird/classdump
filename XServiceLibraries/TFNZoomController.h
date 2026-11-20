//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNZoomController_h
#define TFNZoomController_h
@import Foundation;

#include "TFNZoomState.h"

@class NSObject, UIImpactFeedbackGenerator, UIPinchGestureRecognizer;

@interface TFNZoomController : NSObject {
    /* instance variables */
    TFNZoomState *_state;
    UIImpactFeedbackGenerator *_haptics;
}

@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;

/* instance methods */
- (id)init;
- (void)_tfn_pinchAction:(id)action;
- (void)_tfn_beginZoomTransition;
- (void)_tfn_updateGestureStateForLocation:(struct CGPoint { double x0; double x1; })location inWindow:(id)window;
- (void)_tfn_updateZoomTransition;
- (void)_tfn_endZoomTransition;

@end

#endif /* TFNZoomController_h */
