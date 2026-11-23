//
#ifndef _TtC14T1TwitterSwift36T1CommunitiesTabNavigationController_h
#define _TtC14T1TwitterSwift36T1CommunitiesTabNavigationController_h
@import Foundation;

#include "T1TabNavigationController.h"

@interface T1TwitterSwift.T1CommunitiesTabNavigationController : T1TabNavigationController // (Swift)

/* class methods */
+ (long long)panelID;

/* instance methods */
- (id)scribePage;
- (id)scribeSection;
- (void)handleTabSelectionIfAlreadySelected;
- (id)initWithAccount:(id)account tabView:(id)view;

@end

#endif /* _TtC14T1TwitterSwift36T1CommunitiesTabNavigationController_h */
