//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileContentEntry_h
#define T1ProfileContentEntry_h
@import Foundation;

@class NSObject, UIViewController;

@interface T1ProfileContentEntry : NSObject

@property (readonly, nonatomic) UIViewController *cachedViewControllerInstance;
@property (copy, nonatomic) id /* block */ viewControllerCreateBlock;

/* instance methods */
- (_Bool)hasCachedViewController;
- (void)removeCachedViewControllerIfNeeded;
- (id)viewController;

@end

#endif /* T1ProfileContentEntry_h */
