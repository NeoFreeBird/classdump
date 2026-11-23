//
#ifndef _TtC16ChatConversation29MessageContextMenuInteraction_h
#define _TtC16ChatConversation29MessageContextMenuInteraction_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIInteraction-Protocol.h"

@class NSObject, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSbSo19UIGestureRecognizerCc, _$sSo25UIImpactFeedbackGeneratorC, _$sSo28UILongPressGestureRecognizerCSg, _$sSo6UIViewCSg, _$sSo6UIViewCSgXw;

@interface ChatConversation.MessageContextMenuInteraction : NSObject <UIInteraction, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    __C.UILongPressGestureRecognizer? $__lazy_storage_$_longPressGestureRecognizer;
    (__C.UIGestureRecognizer) -> Swift.Bool longPressShouldBegin;
    __C.UIImpactFeedbackGenerator impactGenerator;
    Swift.Bool allowsSnapshotScaling;
    __C.UIView? snapshotView;
    nominal type descriptor for CoreGraphics.CGFloat originalAlpha;
    Swift.Bool didTriggerAction;
    ChatConversation.MessageContextMenuInteraction function type (escaping) didLongPressHandler;
}

@property (nonatomic, weak) UIView *view;

/* instance methods */
- (void)willMoveToView:(id)view;
- (void)didMoveToView:(id)view;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)didLongPress:(id)press;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC16ChatConversation29MessageContextMenuInteraction_h */
