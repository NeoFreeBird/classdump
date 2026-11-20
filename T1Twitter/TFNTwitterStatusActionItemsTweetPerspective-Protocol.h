//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterStatusActionItemsTweetPerspective_Protocol_h
#define TFNTwitterStatusActionItemsTweetPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSDictionary, NSString, TFNTwitterUser, TFSTwitterArticle, TFSTwitterConversationControl, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TFNTwitterStatusActionItemsTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (readonly, nonatomic) TFSTwitterConversationControl *conversationControl;
@property (readonly, nonatomic) long long conversationID;
@property (retain, nonatomic) TFNTwitterUser *fromUser;
@property (readonly, nonatomic) _Bool hasSoftIntervention;
@property (readonly, nonatomic) _Bool isFromUserProtected;
@property (readonly, nonatomic) _Bool isPromoted;
@property (readonly, nonatomic) _Bool isPrerollContent;
@property (retain, nonatomic) id <TFNTwitterStatusActionItemsTweetPerspective> quotedStatus;
@property (readonly, nonatomic) id <TFNTwitterStatusActionItemsTweetPerspective> representedStatus;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, nonatomic) NSString *scribeElementAccountingForQuoteTweet;
@property (readonly, nonatomic) NSDictionary *scribeParameters;
@property (readonly, nonatomic) long long statusID;
@property (readonly, nonatomic) NSString *twitterURLForCopy;
@property (readonly, nonatomic) _Bool hasEditHistory;
@property (readonly, nonatomic) TFSTwitterArticle *article;
@property (readonly, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;

@optional

@end

#endif /* TFNTwitterStatusActionItemsTweetPerspective_Protocol_h */
