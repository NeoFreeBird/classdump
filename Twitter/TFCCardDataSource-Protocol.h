//
#ifndef TFCCardDataSource_Protocol_h
#define TFCCardDataSource_Protocol_h
@import Foundation;

#include "TFCCardDataSourceObject-Protocol.h"
#include "TFSTwitterEntityURLProvider-Protocol.h"

@class NSDictionary, TFCCardData, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;
@protocol _TtP8TAPTweet19TAPTweetPerspective_;

@protocol TFCCardDataSource <TFSTwitterEntityURLProvider>

@required

@property (nonatomic, readonly) TFCCardData *cardData;
@property (nonatomic, readonly) NSDictionary *cardEvent;
@property (nonatomic, readonly) id <TFCCardDataSourceObject> sourceObject;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) id <TAPTweet.TAPTweetPerspective> tweet;

@optional

@end

#endif /* TFCCardDataSource_Protocol_h */
