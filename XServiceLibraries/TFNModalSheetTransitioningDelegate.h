//
#ifndef TFNModalSheetTransitioningDelegate_h
#define TFNModalSheetTransitioningDelegate_h
@import Foundation;

#include "TFNModalSheetViewController.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject, NSString;

@interface TFNModalSheetTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate> {
    /* instance variables */
    TFNModalSheetViewController *_modalViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModalController:(id)controller;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;

@end

#endif /* TFNModalSheetTransitioningDelegate_h */
