//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1URTGenericViewControllerFactory_h
#define T1URTGenericViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTGenericViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithConfiguration:(id)configuration account:(id)account;
+ (id)viewControllerWithConfiguration:(id)configuration account:(id)account displayLocation:(long long)location;

/* instance methods */
- (id)init;

@end

#endif /* T1URTGenericViewControllerFactory_h */
