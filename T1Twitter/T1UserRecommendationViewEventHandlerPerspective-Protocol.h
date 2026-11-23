//
#ifndef T1UserRecommendationViewEventHandlerPerspective_Protocol_h
#define T1UserRecommendationViewEventHandlerPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class TFNTwitterUser;

@protocol T1UserRecommendationViewEventHandlerPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (readonly, nonatomic) id <T1UserRecommendationViewEventHandlerPerspective> representedStatus;
@property (retain, nonatomic) TFNTwitterUser *fromUser;

@optional

@end

#endif /* T1UserRecommendationViewEventHandlerPerspective_Protocol_h */
