//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
