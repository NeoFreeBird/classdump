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
