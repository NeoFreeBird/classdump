//
#ifndef T1RateLimitActionController_h
#define T1RateLimitActionController_h
@import Foundation;

@class NSObject;

@interface T1RateLimitActionController : NSObject

/* class methods */
+ (void)showRateLimitedAlertViewWithTitle:(id)title scribeComponent:(id)component account:(id)account;

@end

#endif /* T1RateLimitActionController_h */
