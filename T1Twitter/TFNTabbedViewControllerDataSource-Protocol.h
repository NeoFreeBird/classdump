//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
