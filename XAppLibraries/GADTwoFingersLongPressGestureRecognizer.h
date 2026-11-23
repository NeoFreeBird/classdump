//
#ifndef GADTwoFingersLongPressGestureRecognizer_h
#define GADTwoFingersLongPressGestureRecognizer_h
@import Foundation;

@class NSTimer, UIGestureRecognizer;

@interface GADTwoFingersLongPressGestureRecognizer : UIGestureRecognizer {
    /* instance variables */
    long long _gestureState;
    double _startTimestamp;
    double _endTimestamp;
    NSTimer *_debugGestureTimer;
    NSTimer *_numberOfTouchesTimer;
}

/* instance methods */
- (void)reset;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)invalidateDebugGestureTimers;

@end

#endif /* GADTwoFingersLongPressGestureRecognizer_h */
