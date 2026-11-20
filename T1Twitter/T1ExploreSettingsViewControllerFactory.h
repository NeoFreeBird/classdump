//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
