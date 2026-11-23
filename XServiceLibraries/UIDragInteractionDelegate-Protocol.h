//
#ifndef UIDragInteractionDelegate_Protocol_h
#define UIDragInteractionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIDragInteractionDelegate <NSObject>

@required

/* required instance methods */
- (id)dragInteraction:(id)interaction itemsForBeginningSession:(id)session;

@optional

/* optional instance methods */
- (id)dragInteraction:(id)interaction previewForLiftingItem:(id)item session:(id)session;
- (void)dragInteraction:(id)interaction willAnimateLiftWithAnimator:(id)animator session:(id)session;
- (void)dragInteraction:(id)interaction sessionWillBegin:(id)begin;
- (_Bool)dragInteraction:(id)interaction sessionAllowsMoveOperation:(id)operation;
- (_Bool)dragInteraction:(id)interaction sessionIsRestrictedToDraggingApplication:(id)application;
- (_Bool)dragInteraction:(id)interaction prefersFullSizePreviewsForSession:(id)session;
- (void)dragInteraction:(id)interaction sessionDidMove:(id)move;
- (void)dragInteraction:(id)interaction session:(id)session willEndWithOperation:(unsigned long long)operation;
- (void)dragInteraction:(id)interaction session:(id)session didEndWithOperation:(unsigned long long)operation;
- (void)dragInteraction:(id)interaction sessionDidTransferItems:(id)items;
- (id)dragInteraction:(id)interaction itemsForAddingToSession:(id)session withTouchAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)dragInteraction:(id)interaction sessionForAddingItems:(id)items withTouchAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)dragInteraction:(id)interaction session:(id)session willAddItems:(id)items forInteraction:(id)interaction;
- (id)dragInteraction:(id)interaction previewForCancellingItem:(id)item withDefault:(id)_default;
- (void)dragInteraction:(id)interaction item:(id)item willAnimateCancelWithAnimator:(id)animator;

@end

#endif /* UIDragInteractionDelegate_Protocol_h */
