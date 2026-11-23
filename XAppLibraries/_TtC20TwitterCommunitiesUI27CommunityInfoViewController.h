//
#ifndef _TtC20TwitterCommunitiesUI27CommunityInfoViewController_h
#define _TtC20TwitterCommunitiesUI27CommunityInfoViewController_h
@import Foundation;

@class Swift.Bool, TFNViewController, TwitterCommunities.CommunityModel ?, TwitterCommunitiesUI.CommunityInfoView ?, TwitterCommunitiesUI.CommunityInfoViewControllerDelegate ?, _$s12CoreGraphics7CGFloatVMn, _$sSo8TFSTimerCSg, _$syXlSg, _$syycSg;

@interface TwitterCommunitiesUI.CommunityInfoViewController : TFNViewController { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunityInfoViewControllerDelegate ? delegate;
    TwitterCommunities.CommunityModel ? communityModel;
    Swift.AnyObject? communityObserver;
    nominal type descriptor for CoreGraphics.CGFloat dataTableViewHeaderContentHeight;
    (() -> ())? dataTableViewHeaderContentHeightDidChangeBlock;
    __C.TFSTimer? asyncRecalculateDataTableViewContentHeightTimer;
    TwitterCommunitiesUI.CommunityInfoView ? $__lazy_storage_$_infoView;
    Swift.Bool shouldShowAllRules;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)voiceOverStatusDidChange:(id)change;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20TwitterCommunitiesUI27CommunityInfoViewController_h */
