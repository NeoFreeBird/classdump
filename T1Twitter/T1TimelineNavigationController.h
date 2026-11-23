//
#ifndef T1TimelineNavigationController_h
#define T1TimelineNavigationController_h
@import Foundation;

#include "T1TabNavigationController.h"

@interface T1TimelineNavigationController : T1TabNavigationController

/* class methods */
+ (long long)panelID;

/* instance methods */
- (id)scribePage;
- (id)scribeSection;
- (id)primaryContentViewController;
- (id)activeContentViewController;
- (void)handleTabSelectionIfAlreadySelected;
- (id)homeFeaturesForAccount:(id)account;
- (void)tabWasLongPressed;
- (void)titleTapAction:(id)action;

@end

#endif /* T1TimelineNavigationController_h */
