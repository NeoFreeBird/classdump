//
#ifndef _TtC13QuickComposer40QuickComposerOutsideTapGestureRecognizer_h
#define _TtC13QuickComposer40QuickComposerOutsideTapGestureRecognizer_h
@import Foundation;

@class UIGestureRecognizer, __C.CGPoint ?;

@interface QuickComposer.QuickComposerOutsideTapGestureRecognizer : UIGestureRecognizer { // (Swift)
    /* instance variables */
    __C.CGPoint ? startLocation;
}

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;
- (id)initWithTarget:(id)target action:(SEL)action;

@end

#endif /* _TtC13QuickComposer40QuickComposerOutsideTapGestureRecognizer_h */
