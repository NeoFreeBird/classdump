//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
