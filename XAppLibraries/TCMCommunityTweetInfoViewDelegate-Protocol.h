//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
