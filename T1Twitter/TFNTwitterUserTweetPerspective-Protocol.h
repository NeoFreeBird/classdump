//
#ifndef TFNTwitterUserTweetPerspective_Protocol_h
#define TFNTwitterUserTweetPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSDictionary, NSNumber, NSString, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TFNTwitterUserTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (nonatomic, retain) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) long long statusID;
@property (nonatomic, readonly) NSNumber *statusIDNumber;

@optional

@end

#endif /* TFNTwitterUserTweetPerspective_Protocol_h */
