//
#ifndef T1ProfileNavigationHelper_h
#define T1ProfileNavigationHelper_h
@import Foundation;

@class NSObject;

@interface T1ProfileNavigationHelper : NSObject

/* class methods */
+ (_Bool)presentMiniProfileTrayIfRequestedWithOptions:(unsigned long long)options userReference:(id)reference account:(id)account fromViewController:(id)controller sourceNavigationMetadata:(id)metadata;
+ (id)profileViewControllerForUserReference:(id)reference context:(id)context navigationContext:(id)context account:(id)account sourceNavigationMetadata:(id)metadata reusingTopViewController:(id)controller;
+ (void)performNavigationOptions:(unsigned long long)options onProfileViewController:(id)controller;

@end

#endif /* T1ProfileNavigationHelper_h */
