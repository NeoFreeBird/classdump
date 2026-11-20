//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterFollowRequestInfo_h
#define TFSTwitterFollowRequestInfo_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterFollowRequestInfo : NSObject // (Swift)

@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) _Bool unread;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithUserID:(long long)id unread:(_Bool)unread;
- (id)init;

@end

#endif /* TFSTwitterFollowRequestInfo_h */
