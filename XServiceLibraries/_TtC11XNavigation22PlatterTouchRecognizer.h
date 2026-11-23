//
#ifndef _TtC11XNavigation22PlatterTouchRecognizer_h
#define _TtC11XNavigation22PlatterTouchRecognizer_h
@import Foundation;

@class UIGestureRecognizer, _$sSo11NSHashTableCySo7UITouchCG;

@interface XNavigation.PlatterTouchRecognizer : UIGestureRecognizer { // (Swift)
    /* instance variables */
    __C.NSHashTable<__C.UITouch> trackedTouches;
}

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;
- (_Bool)canPreventGestureRecognizer:(id)recognizer;
- (_Bool)canBePreventedByGestureRecognizer:(id)recognizer;

@end

#endif /* _TtC11XNavigation22PlatterTouchRecognizer_h */
