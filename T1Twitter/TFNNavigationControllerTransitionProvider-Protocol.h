//
#ifndef TFNNavigationControllerTransitionProvider_Protocol_h
#define TFNNavigationControllerTransitionProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNNavigationControllerTransitionProvider <NSObject>

@required

/* required instance methods */
- (id)navigationControllerTransitionForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
- (id)navigationControllerTransitionForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;

@optional

/* optional instance methods */
- (id)navigationControllerInteractiveTransitionForAnimationController:(id)controller;
- (id)navigationControllerInteractiveTransitionForAnimationController:(id)controller;

@end

#endif /* TFNNavigationControllerTransitionProvider_Protocol_h */
