//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
