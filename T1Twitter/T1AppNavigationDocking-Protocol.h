//
#ifndef T1AppNavigationDocking_Protocol_h
#define T1AppNavigationDocking_Protocol_h
@import Foundation;

#include "T1AppNavigation-Protocol.h"

@protocol T1AppNavigationDocking <T1AppNavigation>

@required

/* required instance methods */
- (void)dockViewController:(id)controller delegate:(id)delegate userAction:(long long)action animationTransition:(long long)transition;

@optional

@end

#endif /* T1AppNavigationDocking_Protocol_h */
