//
#ifndef TCMCommunityRulesPrompt_h
#define TCMCommunityRulesPrompt_h
@import Foundation;

@class NSObject;

@interface TCMCommunityRulesPrompt : NSObject // (Swift)

/* class methods */
+ (void)presentFromViewController:(id)controller communityModel:(id)model twitterRulesURLString:(id)urlstring;

/* instance methods */
- (id)init;

@end

#endif /* TCMCommunityRulesPrompt_h */
