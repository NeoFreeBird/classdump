//
#ifndef T1SocialProofEngagementDelegateTweetPerspective_Protocol_h
#define T1SocialProofEngagementDelegateTweetPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class TFNTwitterSuggestsInfo;

@protocol T1SocialProofEngagementDelegateTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (retain, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo;

@optional

@end

#endif /* T1SocialProofEngagementDelegateTweetPerspective_Protocol_h */
