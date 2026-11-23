//
#ifndef _TtC14T1TwitterSwift27XChatDMNavigationController_h
#define _TtC14T1TwitterSwift27XChatDMNavigationController_h
@import Foundation;

#include "T1TabNavigationController.h"

@interface T1TwitterSwift.XChatDMNavigationController : T1TabNavigationController // (Swift)

/* class methods */
+ (long long)panelID;

/* instance methods */
- (id)scribePage;
- (void)tabWasLongPressed;
- (id)initWithAccount:(id)account tabView:(id)view;

@end

#endif /* _TtC14T1TwitterSwift27XChatDMNavigationController_h */
