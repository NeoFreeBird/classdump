//
#ifndef T1TrendingPageViewControllerFactory_h
#define T1TrendingPageViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1TrendingPageViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)createWithAccount:(id)account trendID:(long long)id mode:(id)mode;

/* instance methods */
- (id)init;

@end

#endif /* T1TrendingPageViewControllerFactory_h */
