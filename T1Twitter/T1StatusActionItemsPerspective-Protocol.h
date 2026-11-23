//
#ifndef T1StatusActionItemsPerspective_Protocol_h
#define T1StatusActionItemsPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, TFCCardData, TFNTwitterUser, TFSTwitterCommunityMembership, TFSTwitterEntitySet, TFSTwitterGrokAnnotation, TFSTwitterMediaInfo, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol T1StatusActionItemsPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (readonly, nonatomic) TFSTwitterCommunityMembership *communityMembership;
@property (readonly, nonatomic) long long conversationID;
@property (nonatomic) long long draftTweetID;
@property (readonly, nonatomic) TFSTwitterEntitySet *entities;
@property (retain, nonatomic) TFNTwitterUser *fromUser;
@property (readonly, nonatomic) NSString *fromUserName;
@property (readonly, nonatomic) NSArray *inlineMediaInfos;
@property (readonly, nonatomic) _Bool isAmplifyCardVideo;
@property (readonly, nonatomic) _Bool isInEditableTimeWindow;
@property (readonly, nonatomic) long long editsRemaining;
@property (readonly, nonatomic) _Bool isEditable;
@property (readonly, nonatomic) _Bool isLatestEdit;
@property (readonly, nonatomic) _Bool isGIF;
@property (readonly, nonatomic) _Bool isLeaveConversationEnabled;
@property (readonly, nonatomic) _Bool isPoll;
@property (readonly, nonatomic) _Bool isPrivateOrNonCompliant;
@property (readonly, nonatomic) _Bool isReply;
@property (readonly, nonatomic) _Bool isSelfThreadStatus;
@property (readonly, nonatomic) TFSTwitterMediaInfo *primaryMediaInfo;
@property (readonly, nonatomic) unsigned long long primaryMediaType;
@property (retain, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, nonatomic) TFCCardData *representedCardData;
@property (readonly, nonatomic) NSArray *representedMediaEntities;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, nonatomic) NSString *scribeElementAccountingForQuoteTweet;
@property (readonly, nonatomic) NSDictionary *scribeParameters;
@property (readonly, nonatomic) long long statusID;
@property (readonly, nonatomic) NSNumber *statusIDNumber;
@property (readonly, nonatomic) NSString *statusIDString;
@property (readonly, nonatomic) NSString *twitterURLForCopy;
@property (readonly, nonatomic) _Bool isPromoted;
@property (readonly, nonatomic) NSString *conversationSection;
@property (readonly, nonatomic) TFSTwitterGrokAnnotation *grokAnnotations;

/* required instance methods */
- (_Bool)displaySensitiveContentAppealForAccount:(id)account;
- (_Bool)isAdPreviewTweet;
- (_Bool)isFromUserUsernameless;
- (_Bool)isPrerollContent;

@optional

@end

#endif /* T1StatusActionItemsPerspective_Protocol_h */
