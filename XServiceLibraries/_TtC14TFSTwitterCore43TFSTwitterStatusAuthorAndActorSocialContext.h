//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext_h
#define _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSObject, NSString, Swift.Bool, _$sSSSg, _$sSa -> TFSTwitterCore.TFSTwitterStatusAuthorAndActorSocialContextUserGroup;

@interface TFSTwitterCore.TFSTwitterStatusAuthorAndActorSocialContext : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) _Bool isFollowingAuthor;
@property (nonatomic, readonly) _Bool isFollowedByAuthor;
@property (nonatomic, readonly) NSString *genericSocialContext;
@property (nonatomic, readonly) NSArray *relatedUserGroups;

/* instance methods */
- (id)initWithFollowingAuthor:(_Bool)author followedByAuthor:(_Bool)author relatedUserGroups:(id)groups;
- (id)initWithSocialContext:(id)context isFollowedByAuthor:(_Bool)author;
- (id)initWithIsFollowingAuthor:(_Bool)author isFollowedByAuthor:(_Bool)author genericSocialContext:(id)context relatedUserGroups:(id)groups;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext_h */
