//
#ifndef _TtC11ChatGrokBot27GrokBotsInboxPromptPileView_h
#define _TtC11ChatGrokBot27GrokBotsInboxPromptPileView_h
@import Foundation;

#include "UICollisionBehaviorDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatGrokBot.GrokBotsInboxPromptCollisionHaptics, ChatGrokBot.GrokBotsInboxPromptTiltGravity, UIView, _$s12CoreGraphics7CGFloatVMn ?, _$sSa -> ChatGrokBot.GrokBotsInboxPromptAvatarView, _$sSo17UIDynamicAnimatorCSg, _$sSo17UIGravityBehaviorC, _$sSo19UICollisionBehaviorC, _$sSo21UIDynamicItemBehaviorC, _$sSo22UIPanGestureRecognizerC, _$sSo7NSTimerCSg, __C.CGPoint ?, __C.CGRect;

@interface ChatGrokBot.GrokBotsInboxPromptPileView : UIView <UICollisionBehaviorDelegate, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    __C.CGRect obstacleFrame;
    __C.UIDynamicAnimator? $__lazy_storage_$_animator;
    Swift.Array -> ChatGrokBot.GrokBotsInboxPromptAvatarView avatarViews;
    __C.UICollisionBehavior collisionBehavior;
    ChatGrokBot.GrokBotsInboxPromptCollisionHaptics collisionHaptics;
    __C.UIGravityBehavior gravityBehavior;
    __C.UIDynamicItemBehavior itemBehavior;
    nominal type descriptor for CoreGraphics.CGFloat ? laidOutWidth;
    __C.UIPanGestureRecognizer panGestureRecognizer;
    __C.CGPoint ? previousSwipeLocation;
    __C.NSTimer? stateShiftTimer;
    ChatGrokBot.GrokBotsInboxPromptTiltGravity tiltGravity;
}

/* instance methods */
- (void)collisionBehavior:(id)behavior beganContactForItem:(id)item withItem:(id)item atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)collisionBehavior:(id)behavior beganContactForItem:(id)item withBoundaryIdentifier:(id)identifier atPoint:(struct CGPoint { double x0; double x1; })point;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)handlePan:(id)pan;

@end

#endif /* _TtC11ChatGrokBot27GrokBotsInboxPromptPileView_h */
