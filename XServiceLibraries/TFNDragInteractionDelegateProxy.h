//
#ifndef TFNDragInteractionDelegateProxy_h
#define TFNDragInteractionDelegateProxy_h
@import Foundation;

#include "UIDragInteractionDelegate-Protocol.h"

@class NSProxy, NSString;
@protocol TFNDragInteractionAdapterDelegate;

@interface TFNDragInteractionDelegateProxy : NSProxy <UIDragInteractionDelegate> {
    /* instance variables */
    id <UIDragInteractionDelegate> _dragInteractionDelegate;
    id <TFNDragInteractionAdapterDelegate> _adapterDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDragInteractionDelegate:(id)delegate adapterDelegate:(id)delegate;
- (id)dragInteraction:(id)interaction previewForLiftingItem:(id)item session:(id)session;
- (void)dragInteraction:(id)interaction willAnimateLiftWithAnimator:(id)animator session:(id)session;
- (void)dragInteraction:(id)interaction sessionDidMove:(id)move;
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;

@end

#endif /* TFNDragInteractionDelegateProxy_h */
