//
#ifndef TCMCommunityTweetInfoViewDelegate_Protocol_h
#define TCMCommunityTweetInfoViewDelegate_Protocol_h
@import Foundation;

@protocol TCMCommunityTweetInfoViewDelegate

@required

/* required instance methods */
- (void)communityTweetInfoViewDidSelectViewMoreInfo:(id)info from:(id)from;
- (void)communityTweetInfoViewDidSelectViewRules:(id)rules from:(id)from;
- (void)communityTweetInfoViewBroadcastToFollowersDidUpdate:(id)update value:(_Bool)value;

@optional

@end

#endif /* TCMCommunityTweetInfoViewDelegate_Protocol_h */
