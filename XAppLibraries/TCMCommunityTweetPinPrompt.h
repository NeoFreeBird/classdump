//
#ifndef TCMCommunityTweetPinPrompt_h
#define TCMCommunityTweetPinPrompt_h
@import Foundation;

@class NSObject;

@interface TCMCommunityTweetPinPrompt : NSObject // (Swift)

/* class methods */
+ (void)presentForPinnedState:(_Bool)state communityModel:(id)model statusID:(long long)id fromUserID:(long long)id fromViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* TCMCommunityTweetPinPrompt_h */
