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
