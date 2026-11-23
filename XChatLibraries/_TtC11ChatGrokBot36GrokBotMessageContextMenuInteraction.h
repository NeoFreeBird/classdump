//
#ifndef _TtC11ChatGrokBot36GrokBotMessageContextMenuInteraction_h
#define _TtC11ChatGrokBot36GrokBotMessageContextMenuInteraction_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIInteraction-Protocol.h"

@class ChatGrokBot.GrokBotMessageContextMenuInteraction.Feedback, NSObject, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo25UIImpactFeedbackGeneratorC, _$sSo28UILongPressGestureRecognizerCSg, _$sSo31UINotificationFeedbackGeneratorC, _$sSo6UIViewCSg, _$sSo6UIViewCSgXw;

@interface ChatGrokBot.GrokBotMessageContextMenuInteraction : NSObject <UIInteraction, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    __C.UILongPressGestureRecognizer? $__lazy_storage_$_longPressGestureRecognizer;
    Swift.Bool allowsScrollPassthrough;
    ChatGrokBot.GrokBotMessageContextMenuInteraction function type (escaping) didLongPressHandler;
    ChatGrokBot.GrokBotMessageContextMenuInteraction.Feedback feedback;
    __C.UIImpactFeedbackGenerator impactGenerator;
    __C.UINotificationFeedbackGenerator notificationGenerator;
    Swift.Bool skipsControlTouches;
    Swift.Bool didTriggerAction;
    nominal type descriptor for CoreGraphics.CGFloat originalAlpha;
    __C.UIView? snapshotView;
}

@property (nonatomic, weak) UIView *view;

/* instance methods */
- (void)dealloc;
- (void)willMoveToView:(id)view;
- (void)didMoveToView:(id)view;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)didLongPress:(id)press;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot36GrokBotMessageContextMenuInteraction_h */
