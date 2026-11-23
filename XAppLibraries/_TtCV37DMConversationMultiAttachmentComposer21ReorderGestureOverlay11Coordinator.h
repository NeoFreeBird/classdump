//
#ifndef _TtCV37DMConversationMultiAttachmentComposer21ReorderGestureOverlay11Coordinator_h
#define _TtCV37DMConversationMultiAttachmentComposer21ReorderGestureOverlay11Coordinator_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class DMConversationMultiAttachmentComposer.ReorderGestureOverlay.Coordinator.Phase, NSObject, _$s12CoreGraphics7CGFloatVMn _$s_AAtc ->, _$sSd, _$sSo28UILongPressGestureRecognizerCSgXw, _$sSo7NSTimerCSg, _$syyc, __C.CGPoint;

@interface DMConversationMultiAttachmentComposer.ReorderGestureOverlay.Coordinator : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    Swift.Double minimumPressDuration;
    () -> () onReorderBegan;
    nominal type descriptor for CoreGraphics.CGFloat _$s_AAtc -> onReorderChanged;
    () -> () onReorderEnded;
    () -> () onTap;
    weak __C.UILongPressGestureRecognizer? activeRecognizer;
    __C.CGPoint initialLocation;
    __C.NSTimer? pendingTimer;
    DMConversationMultiAttachmentComposer.ReorderGestureOverlay.Coordinator.Phase phase;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)handleGesture:(id)gesture;
- (id)init;

@end

#endif /* _TtCV37DMConversationMultiAttachmentComposer21ReorderGestureOverlay11Coordinator_h */
