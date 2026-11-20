//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI24CreateRuleViewController_h
#define _TtC20TwitterCommunitiesUI24CreateRuleViewController_h
@import Foundation;

#include "_TtC20TwitterCommunitiesUI18FormViewController.h"

@class Swift.Bool, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.RuleForm;

@interface TwitterCommunitiesUI.CreateRuleViewController : TwitterCommunitiesUI.FormViewController { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunityModel communityModel;
    TwitterCommunitiesUI.RuleForm ruleForm;
    Swift.Bool hasEverAppeared;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)didSelectCancel;
- (void)didSelectSubmit;
- (void)update:(_Bool)update;

@end

#endif /* _TtC20TwitterCommunitiesUI24CreateRuleViewController_h */
