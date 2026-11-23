//
#ifndef T1ExploreSettingsViewControllerFactory_h
#define T1ExploreSettingsViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1ExploreSettingsViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithFeatures:(id)features account:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1ExploreSettingsViewControllerFactory_h */
