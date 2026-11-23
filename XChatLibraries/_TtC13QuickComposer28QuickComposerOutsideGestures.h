//
#ifndef _TtC13QuickComposer28QuickComposerOutsideGestures_h
#define _TtC13QuickComposer28QuickComposerOutsideGestures_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, QuickComposer.QuickComposerOutsideGestures.Kind _$scSg ->, QuickComposer.QuickComposerOutsideTapGestureRecognizer, QuickComposer.QuickComposerPresentation.OutsideTap, Swift.Bool, _$sSbyc, _$sSo22UIPanGestureRecognizerC, _$sSo6UIViewCSgyc;

@interface QuickComposer.QuickComposerOutsideGestures : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    QuickComposer.QuickComposerOutsideTapGestureRecognizer tapRecognizer;
    __C.UIPanGestureRecognizer panRecognizer;
    QuickComposer.QuickComposerPresentation.OutsideTap outsideTap;
    Swift.Bool endsEditingOnPan;
    () -> Swift.Bool isIntercepting;
    () -> __C.UIView? bar;
    QuickComposer.QuickComposerOutsideGestures.Kind _$scSg -> onRecognize;
}

/* instance methods */
- (void)didTap;
- (void)didPan:(id)pan;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (id)init;

@end

#endif /* _TtC13QuickComposer28QuickComposerOutsideGestures_h */
