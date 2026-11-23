//
#ifndef _TtC20TwitterCommunitiesUI40CommunityDetailsWelcomePromptInteraction_h
#define _TtC20TwitterCommunitiesUI40CommunityDetailsWelcomePromptInteraction_h
@import Foundation;

#include "_TtC20TwitterCommunitiesUI33CommunityWelcomePromptInteraction.h"

@class TwitterCommunities.CommunityModel;

@interface TwitterCommunitiesUI.CommunityDetailsWelcomePromptInteraction : TwitterCommunitiesUI.CommunityWelcomePromptInteraction { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunityModel communityModel;
}

@property (nonatomic, readonly) _Bool shouldBePresented;

/* instance methods */

@end

#endif /* _TtC20TwitterCommunitiesUI40CommunityDetailsWelcomePromptInteraction_h */
