//
#ifndef _TtC14T1TwitterSwift24GrokNavigationController_h
#define _TtC14T1TwitterSwift24GrokNavigationController_h
@import Foundation;

#include "T1TabNavigationController.h"

@interface T1TwitterSwift.GrokNavigationController : T1TabNavigationController // (Swift)

/* class methods */
+ (long long)panelID;

/* instance methods */
- (id)scribePage;
- (void)handleTabSelectionIfAlreadySelected;
- (void)tabWasSelectedWithOptions:(long long)options;
- (id)initWithAccount:(id)account tabView:(id)view;

@end

#endif /* _TtC14T1TwitterSwift24GrokNavigationController_h */
