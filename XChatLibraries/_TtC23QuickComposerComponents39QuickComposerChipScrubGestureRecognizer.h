//
#ifndef _TtC23QuickComposerComponents39QuickComposerChipScrubGestureRecognizer_h
#define _TtC23QuickComposerComponents39QuickComposerChipScrubGestureRecognizer_h
@import Foundation;

@class Swift.Bool, UIGestureRecognizer, _$s12CoreGraphics7CGFloatVMn, _$s8Dispatch0A8WorkItemCMn ?, _$sSd, _$sSo7UITouchCSg, _$syycSg, __C.CGPoint, __C.CGPoint _$scSg ->;

@interface QuickComposerComponents.QuickComposerChipScrubGestureRecognizer : UIGestureRecognizer { // (Swift)
    /* instance variables */
    Swift.Bool requiresHold;
    Swift.Double holdDelay;
    nominal type descriptor for CoreGraphics.CGFloat slop;
    __C.CGPoint _$scSg -> onTouchDown;
    (() -> ())? onReset;
    __C.UITouch? trackedTouch;
    __C.CGPoint startLocation;
    nominal type descriptor for Dispatch.DispatchWorkItem ? holdWork;
}

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;
- (id)initWithTarget:(id)target action:(SEL)action;

@end

#endif /* _TtC23QuickComposerComponents39QuickComposerChipScrubGestureRecognizer_h */
