//
#ifndef GADFullScreenPropertiesActionMonitor_h
#define GADFullScreenPropertiesActionMonitor_h
@import Foundation;

#include "GADFullScreenAdViewController.h"
#include "GADObserverCollection.h"

@class NSObject;

@interface GADFullScreenPropertiesActionMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADFullScreenAdViewController *_viewController;
}

/* instance methods */
- (id)initWithFullScreenViewController:(id)controller messageSource:(id)source;
- (void)handleSetFullScreenPropertiesAction:(id)action;

@end

#endif /* GADFullScreenPropertiesActionMonitor_h */
