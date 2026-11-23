//
#ifndef BRZSessionEvent_h
#define BRZSessionEvent_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject, NSUUID;

@interface BRZSessionEvent : NSObject // (Swift)

@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) long long state;

/* instance methods */
- (id)init;

@end

#endif /* BRZSessionEvent_h */
