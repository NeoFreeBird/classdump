//
#ifndef T1JobsHubViewControllerFactory_h
#define T1JobsHubViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1JobsHubViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithAccount:(id)account;
+ (id)viewControllerWithAccount:(id)account jobId:(id)id trackingID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* T1JobsHubViewControllerFactory_h */
