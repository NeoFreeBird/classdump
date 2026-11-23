//
#ifndef _TtC9XCashTags30TouchTrackingGestureRecognizer_h
#define _TtC9XCashTags30TouchTrackingGestureRecognizer_h
@import Foundation;

@class UIGestureRecognizer, _$sSaySo7UITouchCG;

@interface XCashTags.TouchTrackingGestureRecognizer : UIGestureRecognizer { // (Swift)
    /* instance variables */
    [__C.UITouch] activeTouches;
}

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;
- (id)initWithTarget:(id)target action:(SEL)action;

@end

#endif /* _TtC9XCashTags30TouchTrackingGestureRecognizer_h */
