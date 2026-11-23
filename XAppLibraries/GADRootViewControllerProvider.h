//
#ifndef GADRootViewControllerProvider_h
#define GADRootViewControllerProvider_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject, UIView, UIViewController;

@interface GADRootViewControllerProvider : NSObject {
    /* instance variables */
    GADObserverCollection *_intermissionObservers;
    _Bool _intermissionInProgress;
    UIViewController *_publisherProvidedViewController;
    UIViewController *_nextPublisherProvidedViewController;
    UIView *_view;
    UIViewController *_lastViewBasedController;
}

@property (readonly, weak, nonatomic) UIViewController *topViewController;
@property (readonly, weak, nonatomic) UIViewController *publisherProvidedViewControllerOrTopViewController;

/* instance methods */
- (void)updateViewController:(id)controller;
- (void)updateIntermissionInProgress:(_Bool)progress;
- (void)updateView:(id)view;
- (void)registerIntermissionMessageSource:(id)source;

@end

#endif /* GADRootViewControllerProvider_h */
