//
#ifndef T1URTFavoritersViewControllerFactory_h
#define T1URTFavoritersViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTFavoritersViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithAccount:(id)account statusID:(long long)id userID:(long long)id enableRanking:(_Bool)ranking;

/* instance methods */
- (id)init;

@end

#endif /* T1URTFavoritersViewControllerFactory_h */
