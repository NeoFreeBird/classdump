//
#ifndef _TtC14T1TwitterSwift25CallsNavigationController_h
#define _TtC14T1TwitterSwift25CallsNavigationController_h
@import Foundation;

#include "T1TabNavigationController.h"

@interface T1TwitterSwift.CallsNavigationController : T1TabNavigationController // (Swift)

/* class methods */
+ (long long)panelID;

/* instance methods */
- (id)scribePage;
- (void)handleTabSelectionIfAlreadySelected;
- (id)initWithAccount:(id)account tabView:(id)view;

@end

#endif /* _TtC14T1TwitterSwift25CallsNavigationController_h */
