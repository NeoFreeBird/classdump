//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCMJoinCommunityInteraction_h
#define TCMJoinCommunityInteraction_h
@import Foundation;

@class NSObject;

@interface TCMJoinCommunityInteraction : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 communityModel;
    @40@0:8:16@24@32 hostViewController;
    @40@0:8:16@24@32 twitterRulesURLString;
    @40@0:8:16@24@32 joinButton;
    @40@0:8:16@24@32 communityNavigator;
}

/* instance methods */
- (id)initWithCommunityModel:(id)model hostViewController:(id)controller twitterRulesURLString:(id)urlstring communityNavigator:(id /* block */)navigator;
- (void)beginWithJoinButton:(id)button;
- (id)init;

@end

#endif /* TCMJoinCommunityInteraction_h */
