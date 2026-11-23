//
#ifndef _TtC20TwitterCommunitiesUI22EditRuleViewController_h
#define _TtC20TwitterCommunitiesUI22EditRuleViewController_h
@import Foundation;

#include "_TtC20TwitterCommunitiesUI18FormViewController.h"

@class TwitterCommunities.CommunityModel, TwitterCommunitiesUI.RuleForm, _$sSS, _$sSo15TFNDataViewItemCSg;

@interface TwitterCommunitiesUI.EditRuleViewController : TwitterCommunitiesUI.FormViewController { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunityModel communityModel;
    Swift.String ruleID;
    TwitterCommunitiesUI.RuleForm ruleForm;
    __C.TFNDataViewItem? $__lazy_storage_$_removeRuleItem;
}

/* instance methods */
- (void)viewDidLoad;
- (void)didSelectCancel;
- (void)didSelectSubmit;

@end

#endif /* _TtC20TwitterCommunitiesUI22EditRuleViewController_h */
