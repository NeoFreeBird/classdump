//
#ifndef _TtC6ChatUI27MessageDoubleTapInteraction_h
#define _TtC6ChatUI27MessageDoubleTapInteraction_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIInteraction-Protocol.h"

@class NSObject, UIView, _$sSo22UITapGestureRecognizerCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewCSgXw, _$syyc;

@interface ChatUI.MessageDoubleTapInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> { // (Swift)
    /* instance variables */
    () -> () handler;
    __C.UIImpactFeedbackGenerator impactGenerator;
    __C.UITapGestureRecognizer? $__lazy_storage_$_doubleTapGestureRecognizer;
}

@property (nonatomic, weak) UIView *view;

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)willMoveToView:(id)view;
- (void)didMoveToView:(id)view;
- (void)dealloc;
- (void)handleDoubleTap:(id)tap;
- (id)init;

@end

#endif /* _TtC6ChatUI27MessageDoubleTapInteraction_h */
