//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIPageViewControllerDataSource_Protocol_h
#define UIPageViewControllerDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIPageViewControllerDataSource <NSObject>

@required

/* required instance methods */
- (id)pageViewController:(id)controller viewControllerBeforeViewController:(id)controller;
- (id)pageViewController:(id)controller viewControllerAfterViewController:(id)controller;

@optional

/* optional instance methods */
- (long long)presentationCountForPageViewController:(id)controller;
- (long long)presentationIndexForPageViewController:(id)controller;

@end

#endif /* UIPageViewControllerDataSource_Protocol_h */
