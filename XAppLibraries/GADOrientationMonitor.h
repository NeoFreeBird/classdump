//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOrientationMonitor_h
#define GADOrientationMonitor_h
@import Foundation;

#include "GADFullScreenAdViewController.h"
#include "GADObserverCollection.h"
#include "GADWebAdView.h"

@class NSObject;

@interface GADOrientationMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADWebAdView *_adView;
    GADFullScreenAdViewController *_viewController;
    _Bool _orientationNotifiedToTheAdViewAtLeastOnce;
    long long _lastOrientation;
}

/* instance methods */
- (id)initWithAdView:(id)view viewController:(id)controller;
- (void)handleOrientationDidChangeNotification:(long long)notification;

@end

#endif /* GADOrientationMonitor_h */
