//
#ifndef T1AccountAnalyticsHelper_h
#define T1AccountAnalyticsHelper_h
@import Foundation;

@class NSObject;

@interface T1AccountAnalyticsHelper : NSObject

/* class methods */
+ (id)nativeAnalyticsViewControllerForAccount:(id)account;
+ (id)analyticsWebURL;

@end

#endif /* T1AccountAnalyticsHelper_h */
