//
#ifndef TCMTweetingToCommunityHelper_h
#define TCMTweetingToCommunityHelper_h
@import Foundation;

@class NSObject;

@interface TCMTweetingToCommunityHelper : NSObject // (Swift)

/* class methods */
+ (_Bool)shouldDisableTweetingToCommunityWithUser:(id)user communityModel:(id)model isReply:(_Bool)reply;
+ (void)presentUnableToTweetPromptFromHostViewController:(id)controller sourceInfo:(id)info user:(id)user communityModel:(id)model delegate:(id)delegate isReply:(_Bool)reply;
+ (void)presentUnableToTweetNonCommunityMemberPromptFromHostViewController:(id)controller sourceInfo:(id)info delegate:(id)delegate;
+ (void)presentUnableToHostCommunitySpacePromptFromHostViewController:(id)controller sourceInfo:(id)info delegate:(id)delegate;

/* instance methods */
- (id)init;

@end

#endif /* TCMTweetingToCommunityHelper_h */
