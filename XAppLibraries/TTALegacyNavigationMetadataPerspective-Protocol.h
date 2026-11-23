//
#ifndef TTALegacyNavigationMetadataPerspective_Protocol_h
#define TTALegacyNavigationMetadataPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@protocol TTALegacyNavigationMetadataPerspective <TAPTweet.TAPTweetPerspective>

@required

/* required instance methods */
- (id)tweetDetailsScribeItem;
- (id)suggestsInfo;
- (_Bool)isUserRecommendation;

@optional

@end

#endif /* TTALegacyNavigationMetadataPerspective_Protocol_h */
