//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation23MessageSwipeInteraction_h
#define _TtC16ChatConversation23MessageSwipeInteraction_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIInteraction-Protocol.h"

@class ChatConversation.MessageSwipeInteraction.SwipeDirection ?, ChatUtilities.SwipeLeftAction, NSObject, Swift.Bool, UIView, _$sSDySO __C.CGPoint, _$sSaySo6UIViewCG, _$sSo11UIImageViewCSg, _$sSo22UIPanGestureRecognizerCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewCSgXw, _$sSo7UIColorC, _$syyc, __C.CGPoint ?, __C.CGRect ?, __C.CGRect _$sycSg;

@interface ChatConversation.MessageSwipeInteraction : NSObject <UIInteraction, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    weak __C.UIView? swipeTargetView;
    Swift.Bool isSwipeEnabled;
    Swift.Bool isReplySwipeEnabled;
    ChatUtilities.SwipeLeftAction swipeLeftAction;
    Swift.Bool isLikedByMe;
    __C.UIImpactFeedbackGenerator generator;
    Swift.Bool didTriggerHaptic;
    () -> () replyHandler;
    () -> () infoHandler;
    () -> () likeHandler;
    ChatConversation.MessageSwipeInteraction.SwipeDirection ? activeDirection;
    __C.CGPoint ? initialCenter;
    Swift.Dictionary empty-list Swift.ObjectIdentifier __C.CGPoint additionalViewCenters;
    __C.CGRect ? initialFrameInSuperview;
    weak __C.UIView? iconSuperview;
    Swift.Bool isThresholdReached;
    __C.UIColor iconTintColor;
    [__C.UIView] additionalViews;
    __C.CGRect _$sycSg activationFrameProvider;
    __C.UIPanGestureRecognizer? $__lazy_storage_$_panGestureRecognizer;
    __C.UIImageView? $__lazy_storage_$_replyIconView;
    __C.UIImageView? $__lazy_storage_$_infoIconView;
    __C.UIImageView? $__lazy_storage_$_likeIconView;
}

@property (nonatomic, weak) UIView *view;

/* instance methods */
- (void)willMoveToView:(id)view;
- (void)didMoveToView:(id)view;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (void)handlePan:(id)pan;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC16ChatConversation23MessageSwipeInteraction_h */
