//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI34AboutNewCommunityPromptInteraction_h
#define _TtC20TwitterCommunitiesUI34AboutNewCommunityPromptInteraction_h
@import Foundation;

#include "_TtC20TwitterCommunitiesUI29CommunityNUXPromptInteraction.h"

@class Swift.Bool, TwitterCommunities.CommunityModel;

@interface TwitterCommunitiesUI.AboutNewCommunityPromptInteraction : TwitterCommunitiesUI.CommunityNUXPromptInteraction { // (Swift)
    /* instance variables */
    Swift.Bool _hasSeenPrompt;
    TwitterCommunities.CommunityModel communityModel;
}

@property (nonatomic, readonly) _Bool shouldBePresented;

/* instance methods */

@end

#endif /* _TtC20TwitterCommunitiesUI34AboutNewCommunityPromptInteraction_h */
