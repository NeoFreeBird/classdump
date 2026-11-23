//
#ifndef TFNUnanimatedTransitioningDelegate_h
#define TFNUnanimatedTransitioningDelegate_h
@import Foundation;

#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject, NSString;

@interface TFNUnanimatedTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;

@end

#endif /* TFNUnanimatedTransitioningDelegate_h */
