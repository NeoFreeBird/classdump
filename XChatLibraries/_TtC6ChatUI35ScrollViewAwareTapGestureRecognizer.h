//
#ifndef _TtC6ChatUI35ScrollViewAwareTapGestureRecognizer_h
#define _TtC6ChatUI35ScrollViewAwareTapGestureRecognizer_h
@import Foundation;

@class ChatUI.ScrollIdleGuard, UITapGestureRecognizer, _$sSo12UIScrollViewCSgXw;

@interface ChatUI.ScrollViewAwareTapGestureRecognizer : UITapGestureRecognizer { // (Swift)
    /* instance variables */
    weak __C.UIScrollView? scrollView;
    ChatUI.ScrollIdleGuard scrollIdleGuard;
}

/* instance methods */
- (_Bool)shouldReceiveEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (void)reset;
- (id)initWithTarget:(id)target action:(SEL)action;

@end

#endif /* _TtC6ChatUI35ScrollViewAwareTapGestureRecognizer_h */
