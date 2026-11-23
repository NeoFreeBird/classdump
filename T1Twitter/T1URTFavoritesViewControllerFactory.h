//
#ifndef T1URTFavoritesViewControllerFactory_h
#define T1URTFavoritesViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTFavoritesViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)dataViewAccessibilityIdentifier;
+ (id)viewControllerWithAccount:(id)account userDataSource:(id)source scribeContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* T1URTFavoritesViewControllerFactory_h */
