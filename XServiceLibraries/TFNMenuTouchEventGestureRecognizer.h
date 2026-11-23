//
#ifndef TFNMenuTouchEventGestureRecognizer_h
#define TFNMenuTouchEventGestureRecognizer_h
@import Foundation;

@class UIGestureRecognizer;

@interface TFNMenuTouchEventGestureRecognizer : UIGestureRecognizer

@property (copy, nonatomic) id /* block */ touchesBeganBlock;
@property (copy, nonatomic) id /* block */ touchesMovedBlock;
@property (copy, nonatomic) id /* block */ touchesEndedBlock;
@property (copy, nonatomic) id /* block */ touchesCancelledBlock;

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;

@end

#endif /* TFNMenuTouchEventGestureRecognizer_h */
