//
#ifndef TFNTwitterStatusConversationContextTweetPerspective_Protocol_h
#define TFNTwitterStatusConversationContextTweetPerspective_Protocol_h
@import Foundation;

#include "TFNTwitterUser.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSArray, NSString, TFSTwitterEntitySet, TFSTwitterVoiceInfo;

@protocol TFNTwitterStatusConversationContextTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (retain, nonatomic) TFNTwitterUser *fromUser;
@property (readonly, nonatomic) _Bool isReply;
@property (readonly, nonatomic) TFSTwitterEntitySet *entities;
@property (readonly, nonatomic) long long inReplyToUserID;
@property (readonly, nonatomic) NSString *inReplyToUsername;
@property (readonly, nonatomic) long long inReplyToStatusID;
@property (readonly, nonatomic) id <TFNTwitterStatusConversationContextTweetPerspective> representedStatus;
@property (readonly, nonatomic) TFSTwitterVoiceInfo *voiceInfo;
@property (readonly, nonatomic) NSArray *unmentionedIDs;
@property (readonly, nonatomic) NSArray *hiddenMentionEntities;
@property (readonly, nonatomic) NSString *statusItemViewModelDidUpdateNotificationName;

@optional

@end

#endif /* TFNTwitterStatusConversationContextTweetPerspective_Protocol_h */
