//
#ifndef TFNForceThresholdGestureRecognizer_h
#define TFNForceThresholdGestureRecognizer_h
@import Foundation;

@class UIGestureRecognizer;

@interface TFNForceThresholdGestureRecognizer : UIGestureRecognizer

@property (nonatomic) _Bool engaged;
@property (nonatomic) _Bool wasEngaged;
@property (nonatomic) _Bool didEngage;
@property (nonatomic) double force;
@property (nonatomic) double progress;
@property double engageThreshold;
@property double disengageThreshold;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)reset;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;

@end

#endif /* TFNForceThresholdGestureRecognizer_h */
