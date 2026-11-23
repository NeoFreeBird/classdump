//
#ifndef _TtC9GlassDock17DockPressFeedback_h
#define _TtC9GlassDock17DockPressFeedback_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sSbyc, _$sSo28UILongPressGestureRecognizerCSg, _$sSo6UIViewCSgXw;

@interface GlassDock.DockPressFeedback : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    weak __C.UIView? view;
    nominal type descriptor for CoreGraphics.CGFloat scale;
    () -> Swift.Bool reducesMotion;
    __C.UILongPressGestureRecognizer? gesture;
    Swift.Bool isPressedInside;
    Swift.Bool isSuspended;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)handlePress:(id)press;
- (void)press;
- (void)releasePress;
- (id)init;

@end

#endif /* _TtC9GlassDock17DockPressFeedback_h */
