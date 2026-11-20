//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZSDKAuthenticationError_h
#define BRZSDKAuthenticationError_h
@import Foundation;

@class Chat.DidEndCall, NSObject, NSString;

@interface BRZSDKAuthenticationError : NSObject // (Swift)

@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSString *userId;
@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) _Bool optional;

/* instance methods */
- (id)init;

@end

#endif /* BRZSDKAuthenticationError_h */
