//
#ifndef _TtP8BrazeKit20BrazeSDKAuthDelegate__Protocol_h
#define _TtP8BrazeKit20BrazeSDKAuthDelegate__Protocol_h
@import Foundation;

@protocol BrazeKit.BrazeSDKAuthDelegate

@required

/* required instance methods */
- (void)braze:(id)braze sdkAuthenticationFailedWithError:(id)error;

@optional

@end

#endif /* _TtP8BrazeKit20BrazeSDKAuthDelegate__Protocol_h */
