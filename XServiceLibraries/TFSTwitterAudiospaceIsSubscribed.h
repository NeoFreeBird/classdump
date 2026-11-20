//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAudiospaceIsSubscribed_h
#define TFSTwitterAudiospaceIsSubscribed_h
@import Foundation;

@class NSObject;

@interface TFSTwitterAudiospaceIsSubscribed : NSObject // (Swift)

@property (nonatomic, readonly) _Bool isSubscribed;
@property (nonatomic, readonly) long long subscriberCount;

/* instance methods */
- (id)initWithIsSubscribed:(_Bool)subscribed subscriberCount:(long long)count;
- (id)init;

@end

#endif /* TFSTwitterAudiospaceIsSubscribed_h */
