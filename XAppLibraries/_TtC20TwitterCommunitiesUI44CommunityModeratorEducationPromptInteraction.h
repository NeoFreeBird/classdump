//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI44CommunityModeratorEducationPromptInteraction_h
#define _TtC20TwitterCommunitiesUI44CommunityModeratorEducationPromptInteraction_h
@import Foundation;

#include "_TtC20TwitterCommunitiesUI29CommunityNUXPromptInteraction.h"

@class TwitterCommunities.CommunityModel;

@interface TwitterCommunitiesUI.CommunityModeratorEducationPromptInteraction : TwitterCommunitiesUI.CommunityNUXPromptInteraction { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunityModel communityModel;
}

@property (nonatomic, readonly) _Bool shouldBePresented;

/* instance methods */
- (void)presentIfNeededFrom:(id)from completion:(id /* block */)completion;

@end

#endif /* _TtC20TwitterCommunitiesUI44CommunityModeratorEducationPromptInteraction_h */
