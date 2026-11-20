//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI47UpdateCommunityMembershipSettingsViewController_h
#define _TtC20TwitterCommunitiesUI47UpdateCommunityMembershipSettingsViewController_h
@import Foundation;

#include "_TtC20TwitterCommunitiesUI42BaseUpdateMembershipSettingsViewController.h"

@class Swift.Bool, TwitterCommunities.CommunityModel, _$syXlSg;

@interface TwitterCommunitiesUI.UpdateCommunityMembershipSettingsViewController : TwitterCommunitiesUI.BaseUpdateMembershipSettingsViewController { // (Swift)
    /* instance variables */
    Swift.Bool isReloadingCommunityModel;
    TwitterCommunities.CommunityModel communityModel;
    Swift.AnyObject? communityModelObserver;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)didSelectSave;

@end

#endif /* _TtC20TwitterCommunitiesUI47UpdateCommunityMembershipSettingsViewController_h */
