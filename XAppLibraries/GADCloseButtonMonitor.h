//
#ifndef GADCloseButtonMonitor_h
#define GADCloseButtonMonitor_h
@import Foundation;

#include "GADCloseButton.h"
#include "GADObserverCollection.h"

@class NSObject, UIView;

@interface GADCloseButtonMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADCloseButton *_closeButton;
    UIView *_closeButtonContainerView;
}

/* instance methods */
- (id)initWithCloseButton:(id)button closeButtonContainerView:(id)view;
- (void)closeButtonPressed:(id)pressed;
- (void)positionCloseButton;

@end

#endif /* GADCloseButtonMonitor_h */
