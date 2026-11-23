//
#ifndef T1ViewControllerScribeEventObserver_h
#define T1ViewControllerScribeEventObserver_h
@import Foundation;

#include "TFNViewControllerEventObserver-Protocol.h"

@class NSHashTable, NSMapTable, NSObject, NSString;

@interface T1ViewControllerScribeEventObserver : NSObject <TFNViewControllerEventObserver> {
    /* instance variables */
    NSMapTable *_committingPreviewViewControllersToEvents;
    NSHashTable *_previewingViewControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedObserver;
+ (unsigned long long)_millisecondsSinceAbsoluteTime:(double)time;

/* instance methods */
- (unsigned long long)millisecondsSinceImpressionForViewController:(id)controller;
- (void)viewControllerViewWillFullyAppear:(id)appear;
- (void)viewControllerViewWillFullyDisappear:(id)disappear;
- (void)viewControllerApplicationDidBecomeActive:(id)active;
- (void)viewControllerPreviewingStateDidChange:(id)change;
- (void)viewControllerApplicationWillResignActive:(id)active;
- (void)viewController:(id)controller willRotateToInterfaceOrientation:(long long)orientation;
- (void)viewControllerDidTakeScreenshot:(id)screenshot;
- (_Bool)_recordAndSkipAppearanceEvent:(long long)event forViewController:(id)controller;
- (_Bool)_shouldDelayViewWillFullyDisappearEventForViewController:(id)controller;
- (_Bool)_hasScribedImpressionForViewController:(id)controller;
- (void)_setHasScribedImpression:(_Bool)impression forViewController:(id)controller;
- (double)_scribeImpressionStartTimeForViewController:(id)controller;
- (void)_setScribeImpressionStartTime:(double)time forViewController:(id)controller;
- (id)_t1_scribeFromViewController:(id)controller;

@end

#endif /* T1ViewControllerScribeEventObserver_h */
