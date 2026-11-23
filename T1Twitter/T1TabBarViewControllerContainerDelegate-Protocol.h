//
#ifndef T1TabBarViewControllerContainerDelegate_Protocol_h
#define T1TabBarViewControllerContainerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TabBarViewControllerContainerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tabBarViewController:(id)controller didChangeVisibleTabBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1TabBarViewControllerContainerDelegate_Protocol_h */
