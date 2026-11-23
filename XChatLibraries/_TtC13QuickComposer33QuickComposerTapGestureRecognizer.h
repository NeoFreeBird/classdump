//
#ifndef _TtC13QuickComposer33QuickComposerTapGestureRecognizer_h
#define _TtC13QuickComposer33QuickComposerTapGestureRecognizer_h
@import Foundation;

@class UITapGestureRecognizer;

@interface QuickComposer.QuickComposerTapGestureRecognizer : UITapGestureRecognizer // (Swift)

/* instance methods */
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (id)initWithTarget:(id)target action:(SEL)action;

@end

#endif /* _TtC13QuickComposer33QuickComposerTapGestureRecognizer_h */
