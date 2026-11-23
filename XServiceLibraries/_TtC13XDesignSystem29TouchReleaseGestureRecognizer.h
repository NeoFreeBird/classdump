//
#ifndef _TtC13XDesignSystem29TouchReleaseGestureRecognizer_h
#define _TtC13XDesignSystem29TouchReleaseGestureRecognizer_h
@import Foundation;

@class UIGestureRecognizer, _$sSi;

@interface XDesignSystem.TouchReleaseGestureRecognizer : UIGestureRecognizer { // (Swift)
    /* instance variables */
    Swift.Int activeTouchCount;
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

#endif /* _TtC13XDesignSystem29TouchReleaseGestureRecognizer_h */
