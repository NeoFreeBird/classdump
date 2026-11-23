//
#ifndef TFSTwitterReactionContext_h
#define TFSTwitterReactionContext_h
@import Foundation;

@class NSObject;

@interface TFSTwitterReactionContext : NSObject // (Swift)

@property (nonatomic, readonly) long long reactedToPostID;
@property (nonatomic, readonly) long long reactedToUserID;
@property (nonatomic, readonly) _Bool isVideoReaction;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithReactedToPostID:(long long)id reactedToUserID:(long long)id;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterReactionContext_h */
