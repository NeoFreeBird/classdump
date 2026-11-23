//
#ifndef UIPageViewControllerDataSource_Protocol_h
#define UIPageViewControllerDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIPageViewControllerDataSource <NSObject>

@required

/* required instance methods */
- (id)pageViewController:(id)controller viewControllerBeforeViewController:(id)controller;
- (id)pageViewController:(id)controller viewControllerBeforeViewController:(id)controller;
- (id)pageViewController:(id)controller viewControllerAfterViewController:(id)controller;
- (id)pageViewController:(id)controller viewControllerAfterViewController:(id)controller;

@optional

/* optional instance methods */
- (long long)presentationCountForPageViewController:(id)controller;
- (long long)presentationCountForPageViewController:(id)controller;
- (long long)presentationIndexForPageViewController:(id)controller;
- (long long)presentationIndexForPageViewController:(id)controller;

@end

#endif /* UIPageViewControllerDataSource_Protocol_h */
