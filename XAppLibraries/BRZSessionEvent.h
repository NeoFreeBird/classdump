//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZSessionEvent_h
#define BRZSessionEvent_h
@import Foundation;

@class Chat.DidEndCall, NSObject, NSUUID;

@interface BRZSessionEvent : NSObject // (Swift)

@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) long long state;

/* instance methods */
- (id)init;

@end

#endif /* BRZSessionEvent_h */
