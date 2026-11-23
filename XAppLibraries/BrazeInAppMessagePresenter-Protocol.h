//
#ifndef BrazeInAppMessagePresenter_Protocol_h
#define BrazeInAppMessagePresenter_Protocol_h
@import Foundation;

@protocol BrazeInAppMessagePresenter

@required

/* required instance methods */
- (void)presentMessage:(id)message;

@optional

/* optional instance methods */
- (void)dismissWithReason:(long long)reason;

@end

#endif /* BrazeInAppMessagePresenter_Protocol_h */
