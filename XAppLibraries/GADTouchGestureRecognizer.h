//
#ifndef GADTouchGestureRecognizer_h
#define GADTouchGestureRecognizer_h
@import Foundation;

@class NSDate, UIGestureRecognizer;

@interface GADTouchGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) NSDate *lastTouchTimestamp;
@property (readonly, nonatomic) NSDate *lastTouchBeginTimestamp;

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;

@end

#endif /* GADTouchGestureRecognizer_h */
