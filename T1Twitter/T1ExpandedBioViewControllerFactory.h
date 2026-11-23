//
#ifndef T1ExpandedBioViewControllerFactory_h
#define T1ExpandedBioViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1ExpandedBioViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithAccount:(id)account profileUserDataSource:(id)source;
+ (id)editViewControllerWithAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1ExpandedBioViewControllerFactory_h */
