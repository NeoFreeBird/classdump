//
#ifndef TFNExpandingButtonGestureRecognizer_h
#define TFNExpandingButtonGestureRecognizer_h
@import Foundation;

#include "TFSTimer.h"

@class UIGestureRecognizer, UIView;

@interface TFNExpandingButtonGestureRecognizer : UIGestureRecognizer {
    /* instance variables */
    _Bool _isTrackingTouch;
}

@property (nonatomic) double force;
@property (nonatomic) double maximumPossibleForce;
@property (retain, nonatomic) TFSTimer *longPressTimer;
@property (weak, nonatomic) UIView *expandingButtonView;
@property (readonly, nonatomic) _Bool tapWasRecognized;

/* class methods */
+ (double)normalizedForcePressThreshold;

/* instance methods */
- (void)_tfn_longPressTimer;
- (void)_tfn_setupLongPressTimer;
- (void)_tfn_cancelLongPressTimer;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;

@end

#endif /* TFNExpandingButtonGestureRecognizer_h */
