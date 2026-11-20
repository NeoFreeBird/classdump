//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
