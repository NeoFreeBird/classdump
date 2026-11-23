//
#ifndef _TtC20TwitterCommunitiesUI29CreateCommunityViewController_h
#define _TtC20TwitterCommunitiesUI29CreateCommunityViewController_h
@import Foundation;

#include "_TtC20TwitterCommunitiesUI18FormViewController.h"

@class TwitterCommunities.CommunitiesContext, TwitterCommunitiesUI.CommunitiesNavigation, TwitterCommunitiesUI.CreateCommunityForm, _$syXlSg;

@interface TwitterCommunitiesUI.CreateCommunityViewController : TwitterCommunitiesUI.FormViewController { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunitiesContext communitiesContext;
    TwitterCommunitiesUI.CreateCommunityForm createCommunityForm;
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
    Swift.AnyObject? $__lazy_storage_$_headerItem;
}

/* instance methods */
- (void)viewControllerDidPresentAnimated:(_Bool)animated;
- (void)didSelectCancel;
- (void)didSelectSubmit;

@end

#endif /* _TtC20TwitterCommunitiesUI29CreateCommunityViewController_h */
