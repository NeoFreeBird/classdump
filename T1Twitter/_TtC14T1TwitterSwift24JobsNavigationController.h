//
#ifndef _TtC14T1TwitterSwift24JobsNavigationController_h
#define _TtC14T1TwitterSwift24JobsNavigationController_h
@import Foundation;

#include "T1TabNavigationController.h"

@interface T1TwitterSwift.JobsNavigationController : T1TabNavigationController // (Swift)

/* class methods */
+ (long long)panelID;

/* instance methods */
- (id)scribePage;
- (id)initWithAccount:(id)account tabView:(id)view;

@end

#endif /* _TtC14T1TwitterSwift24JobsNavigationController_h */
