//
#ifndef UITextDragDelegate_Protocol_h
#define UITextDragDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UITextDragDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)textDraggableView:(id)view itemsForDrag:(id)drag;
- (id)textDraggableView:(id)view dragPreviewForLiftingItem:(id)item session:(id)session;
- (void)textDraggableView:(id)view willAnimateLiftWithAnimator:(id)animator session:(id)session;
- (void)textDraggableView:(id)view willAnimateLiftWithAnimator:(id)animator session:(id)session;
- (void)textDraggableView:(id)view dragSessionWillBegin:(id)begin;
- (void)textDraggableView:(id)view dragSessionDidEnd:(id)end withOperation:(unsigned long long)operation;
- (void)textDraggableView:(id)view dragSessionDidEnd:(id)end withOperation:(unsigned long long)operation;

@end

#endif /* UITextDragDelegate_Protocol_h */
