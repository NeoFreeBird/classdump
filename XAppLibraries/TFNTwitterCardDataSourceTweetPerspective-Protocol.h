//
#ifndef TFNTwitterCardDataSourceTweetPerspective_Protocol_h
#define TFNTwitterCardDataSourceTweetPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSDictionary;

@protocol TFNTwitterCardDataSourceTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (readonly, nonatomic) long long statusID;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;

/* required instance methods */
- (id)entityForURL:(id)url;

@optional

@end

#endif /* TFNTwitterCardDataSourceTweetPerspective_Protocol_h */
