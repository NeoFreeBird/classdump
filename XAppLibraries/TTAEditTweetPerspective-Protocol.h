//
#ifndef TTAEditTweetPerspective_Protocol_h
#define TTAEditTweetPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@protocol TTAEditTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (readonly, nonatomic) _Bool isAnyEditFavorited;
@property (readonly, nonatomic) _Bool isAnyEditRetweeted;

@optional

@end

#endif /* TTAEditTweetPerspective_Protocol_h */
