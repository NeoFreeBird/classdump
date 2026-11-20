//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NewsViewControllerFactory_h
#define T1NewsViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1NewsViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithAccount:(id)account tab:(_Bool)tab;

/* instance methods */
- (id)init;

@end

#endif /* T1NewsViewControllerFactory_h */
