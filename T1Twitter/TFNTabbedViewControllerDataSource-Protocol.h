//
#ifndef TFNTabbedViewControllerDataSource_Protocol_h
#define TFNTabbedViewControllerDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTabbedViewControllerDataSource <NSObject>

@required

/* required instance methods */
- (long long)numberOfViewControllersInTabbedViewController:(id)controller;
- (id)tabbedViewController:(id)controller viewControllerAtIndex:(long long)index;

@optional

@end

#endif /* TFNTabbedViewControllerDataSource_Protocol_h */
