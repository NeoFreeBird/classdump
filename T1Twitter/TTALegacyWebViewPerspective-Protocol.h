//
#ifndef TTALegacyWebViewPerspective_Protocol_h
#define TTALegacyWebViewPerspective_Protocol_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSDictionary, NSNumber, NSString, TFCCardData, TFNTwitterUser, TFSTwitterEntitySet, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TTALegacyWebViewPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (nonatomic, readonly) long long statusID;
@property (nonatomic, retain) TFNTwitterUser *fromUser;
@property (nonatomic, readonly) NSNumber *statusIDNumber;
@property (nonatomic, readonly) TFCCardData *cardData;
@property (nonatomic, readonly) id <TFCCardDataSource> cardDataSource;
@property (nonatomic, readonly) id <TTALegacyWebViewPerspective> representedStatus;
@property (nonatomic, readonly) _Bool isPromoted;
@property (nonatomic, retain) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) TFSTwitterEntitySet *entities;
@property (nonatomic, readonly) NSDictionary *scribeParameters;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) NSString *scribeComponent;

/* required instance methods */
- (id)entityForURL:(id)url;
- (id)entityForURL:(id)url;

@optional

@end

#endif /* TTALegacyWebViewPerspective_Protocol_h */
