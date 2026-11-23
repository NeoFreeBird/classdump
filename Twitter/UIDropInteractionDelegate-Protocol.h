//
#ifndef UIDropInteractionDelegate_Protocol_h
#define UIDropInteractionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIDropInteractionDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)dropInteraction:(id)interaction canHandleSession:(id)session;
- (_Bool)dropInteraction:(id)interaction canHandleSession:(id)session;
- (void)dropInteraction:(id)interaction sessionDidEnter:(id)enter;
- (id)dropInteraction:(id)interaction sessionDidUpdate:(id)update;
- (void)dropInteraction:(id)interaction sessionDidExit:(id)exit;
- (void)dropInteraction:(id)interaction performDrop:(id)drop;
- (void)dropInteraction:(id)interaction concludeDrop:(id)drop;
- (void)dropInteraction:(id)interaction sessionDidEnd:(id)end;
- (id)dropInteraction:(id)interaction previewForDroppingItem:(id)item withDefault:(id)_default;
- (id)dropInteraction:(id)interaction previewForDroppingItem:(id)item withDefault:(id)_default;
- (void)dropInteraction:(id)interaction item:(id)item willAnimateDropWithAnimator:(id)animator;
- (void)dropInteraction:(id)interaction item:(id)item willAnimateDropWithAnimator:(id)animator;

@end

#endif /* UIDropInteractionDelegate_Protocol_h */
