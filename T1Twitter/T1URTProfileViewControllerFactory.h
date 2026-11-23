//
#ifndef T1URTProfileViewControllerFactory_h
#define T1URTProfileViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTProfileViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)dataViewAccessibilityIdentifier;
+ (id)profileTimelineViewControllerWithMode:(long long)mode sortedByPopular:(_Bool)popular account:(id)account profileViewModel:(id)model scribeContext:(id)context emptyStateConfiguration:(id)configuration loadingDelegate:(id)delegate referralSource:(id)source;
+ (id)photoViewControllerWithAccount:(id)account profileViewModel:(id)model scribeContext:(id)context emptyStateConfiguration:(id)configuration loadingDelegate:(id)delegate referralSource:(id)source;
+ (id)videoViewControllerWithAccount:(id)account profileViewModel:(id)model scribeContext:(id)context emptyStateConfiguration:(id)configuration loadingDelegate:(id)delegate referralSource:(id)source;
+ (id)liveViewControllerWithAccount:(id)account profileViewModel:(id)model scribeContext:(id)context emptyStateConfiguration:(id)configuration loadingDelegate:(id)delegate;
+ (id)superFollowTweetsViewControllerWithAccount:(id)account profileViewModel:(id)model scribeContext:(id)context emptyStateConfiguration:(id)configuration loadingDelegate:(id)delegate referralSource:(id)source;
+ (id)highlightsTweetsViewControllerWithAccount:(id)account profileViewModel:(id)model sortedByPopular:(_Bool)popular scribeContext:(id)context emptyStateConfiguration:(id)configuration loadingDelegate:(id)delegate referralSource:(id)source;
+ (id)articlesTweetsViewControllerWithAccount:(id)account profileViewModel:(id)model scribeContext:(id)context emptyStateConfiguration:(id)configuration loadingDelegate:(id)delegate referralSource:(id)source;

/* instance methods */
- (id)init;

@end

#endif /* T1URTProfileViewControllerFactory_h */
