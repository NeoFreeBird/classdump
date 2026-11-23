//
#ifndef PTVInteractiveSlideTransitionDelegate_Protocol_h
#define PTVInteractiveSlideTransitionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVInteractiveSlideTransitionDelegate <NSObject>

@required

/* required instance methods */
- (void)interactiveSlideTransitionDidBegin:(id)begin;
- (void)interactiveSlideTransitionDidUpdate:(id)update;
- (void)interactiveSlideTransitionDidComplete:(id)complete;
- (void)interactiveSlideTransitionDidCancel:(id)cancel;

@optional

/* optional instance methods */
- (_Bool)interactiveSlideTransitionShouldBegin:(id)begin;

@end

#endif /* PTVInteractiveSlideTransitionDelegate_Protocol_h */
