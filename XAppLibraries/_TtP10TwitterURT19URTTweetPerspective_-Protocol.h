//
#ifndef _TtP10TwitterURT19URTTweetPerspective__Protocol_h
#define _TtP10TwitterURT19URTTweetPerspective__Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSDictionary;

@protocol TwitterURT.URTTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (nonatomic, readonly) NSDictionary *scribeParameters;
@property (nonatomic, readonly) long long statusID;

@optional

@end

#endif /* _TtP10TwitterURT19URTTweetPerspective__Protocol_h */
