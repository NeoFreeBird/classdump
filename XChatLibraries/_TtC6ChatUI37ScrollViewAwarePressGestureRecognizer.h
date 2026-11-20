//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6ChatUI37ScrollViewAwarePressGestureRecognizer_h
#define _TtC6ChatUI37ScrollViewAwarePressGestureRecognizer_h
@import Foundation;

@class ChatUI.ScrollIdleGuard, UIGestureRecognizer, _$sSo12UIScrollViewCSgXw;

@interface ChatUI.ScrollViewAwarePressGestureRecognizer : UIGestureRecognizer { // (Swift)
    /* instance variables */
    weak __C.UIScrollView? scrollView;
    ChatUI.ScrollIdleGuard scrollIdleGuard;
}

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (_Bool)shouldReceiveEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;

@end

#endif /* _TtC6ChatUI37ScrollViewAwarePressGestureRecognizer_h */
