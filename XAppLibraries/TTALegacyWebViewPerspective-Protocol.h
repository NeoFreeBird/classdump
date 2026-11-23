//
#ifndef TTALegacyWebViewPerspective_Protocol_h
#define TTALegacyWebViewPerspective_Protocol_h
@import Foundation;

#include "TFCCardData.h"
#include "TFCCardDataSource-Protocol.h"
#include "TFNTwitterUser.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSDictionary, NSNumber, NSString, TFSTwitterEntitySet, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TTALegacyWebViewPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (readonly, nonatomic) long long statusID;
@property (retain, nonatomic) TFNTwitterUser *fromUser;
@property (readonly, nonatomic) NSNumber *statusIDNumber;
@property (readonly, nonatomic) TFCCardData *cardData;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) id <TTALegacyWebViewPerspective> representedStatus;
@property (readonly, nonatomic) _Bool isPromoted;
@property (retain, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, nonatomic) TFSTwitterEntitySet *entities;
@property (readonly, nonatomic) NSDictionary *scribeParameters;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (readonly, copy, nonatomic) NSString *scribeComponent;

/* required instance methods */
- (id)entityForURL:(id)url;

@optional

@end

#endif /* TTALegacyWebViewPerspective_Protocol_h */
