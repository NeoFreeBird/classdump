//
#ifndef _TtC11ChatGrokBot26GrokBotMessageSwipeHandler_h
#define _TtC11ChatGrokBot26GrokBotMessageSwipeHandler_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatGrokBot.GrokBotMessageSwipeHandler.Direction ?, NSObject, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewC, _$sSo6UIViewCSgXw, _$syycSg, __C.CGRect _$sycSg;

@interface ChatGrokBot.GrokBotMessageSwipeHandler : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    __C.CGRect _$sycSg activationFrameProvider;
    Swift.Bool isLikeEnabled;
    Swift.Bool isLiked;
    Swift.Bool isReplyEnabled;
    (() -> ())? onLike;
    (() -> ())? onReply;
    __C.UIView contentView;
    __C.UIImpactFeedbackGenerator feedbackGenerator;
    __C.UIImageView likeIconView;
    __C.UIImageView replyIconView;
    ChatGrokBot.GrokBotMessageSwipeHandler.Direction ? activeDirection;
    weak __C.UIView? attachedView;
    Swift.Bool didTriggerHaptic;
    nominal type descriptor for CoreGraphics.CGFloat translation;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (void)didPan:(id)pan;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot26GrokBotMessageSwipeHandler_h */
