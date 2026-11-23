//
#ifndef TFNTwitterCompositionReplyStatusInfo_h
#define TFNTwitterCompositionReplyStatusInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSString, TFSTwitterCommunityReference, TFSTwitterConversationControl, TFSTwitterSuperFollowInfo, TFSTwitterUserReference;

@interface TFNTwitterCompositionReplyStatusInfo : NSObject <NSCoding>

@property (readonly, nonatomic) long long statusID;
@property (readonly, nonatomic) long long retweetID;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly, nonatomic) TFSTwitterUserReference *fromUserReference;
@property (readonly, nonatomic) TFSTwitterUserReference *retweeterReference;
@property (readonly, copy, nonatomic) NSArray *mentionUserReferences;
@property (readonly, copy, nonatomic) NSArray *taggedUserReferences;
@property (readonly, nonatomic) TFSTwitterUserReference *cardAuthorReference;
@property (readonly, nonatomic) TFSTwitterCommunityReference *communityReference;
@property (readonly, copy, nonatomic) NSString *placeID;
@property (readonly, nonatomic) _Bool reply;
@property (readonly, nonatomic) _Bool earned;
@property (readonly, copy, nonatomic) NSString *promotedContentImpressionID;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (readonly, nonatomic) long long selfThreadID;
@property (readonly, nonatomic) TFSTwitterConversationControl *conversationControl;
@property (readonly, nonatomic) long long exclusiveTweetControlType;
@property (readonly, copy, nonatomic) TFSTwitterSuperFollowInfo *superFollowInfo;
@property (readonly, copy, nonatomic) NSString *spaceID;
@property (readonly, nonatomic) NSArray *unmentionedUserIDs;
@property (readonly, nonatomic) _Bool hasOnlyStatusID;

/* class methods */
+ (_Bool)isSelfThreadReplyFromUserID:(long long)id toReplyStatusInfo:(id)info;

/* instance methods */
- (id)init;
- (id)initWithStatusID:(long long)id retweetID:(long long)id displayText:(id)text fromUserReference:(id)reference retweeterReference:(id)reference mentionUserReferences:(id)references taggedUserReferences:(id)references cardAuthorReference:(id)reference communityReference:(id)reference reply:(_Bool)reply earned:(_Bool)earned promotedContentImpressionID:(id)id scribeItem:(id)item selfThreadID:(long long)id conversationControl:(id)control exclusiveTweetControlType:(long long)type superFollowInfo:(id)info spaceID:(id)id unmentionedUserIDs:(id)ids;
- (id)initWithStatusID:(long long)id;
- (id)initWithStatus:(id)status;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)description;

@end

#endif /* TFNTwitterCompositionReplyStatusInfo_h */
