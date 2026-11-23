//
#ifndef UIViewControllerTransitionCoordinator_Protocol_h
#define UIViewControllerTransitionCoordinator_Protocol_h
@import Foundation;

#include "UIViewControllerTransitionCoordinatorContext-Protocol.h"

@protocol UIViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinatorContext>

@required

/* required instance methods */
- (_Bool)animateAlongsideTransition:(id /* block */)transition completion:(id /* block */)completion;
- (_Bool)animateAlongsideTransitionInView:(id)view animation:(id /* block */)animation completion:(id /* block */)completion;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)block;
- (void)notifyWhenInteractionChangesUsingBlock:(id /* block */)block;

@optional

@end

#endif /* UIViewControllerTransitionCoordinator_Protocol_h */
