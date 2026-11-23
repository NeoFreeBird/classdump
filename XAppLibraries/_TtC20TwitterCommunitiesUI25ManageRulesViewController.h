//
#ifndef _TtC20TwitterCommunitiesUI25ManageRulesViewController_h
#define _TtC20TwitterCommunitiesUI25ManageRulesViewController_h
@import Foundation;

@class Swift.Bool, TFNViewController, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.CommunitiesNavigation, TwitterCommunitiesUI.RulesNUXPromptInteraction ?, UIScrollView, _$s10TFNUISwift14EmptyStateViewCMn, _$s13XDesignSystem9ListItemsCMn, _$sSDySSSo6UIViewCG, _$sSa -> _$s14TFSTwitterCore20TwitterCommunityRuleVMn ?, _$sSo12TFNTitleViewCSg, _$sSo15UIBarButtonItemCSg, _$sSo22TFNExpandingButtonItemCSg, _$sSo7UILabelC, _$syXlSg;

@interface TwitterCommunitiesUI.ManageRulesViewController : TFNViewController { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunityModel communityModel;
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
    nominal type descriptor for XDesignSystem.ListItems list;
    __C.UILabel introLabel;
    nominal type descriptor for TFNUISwift.EmptyStateView emptyStateView;
    Swift.Array -> nominal type descriptor for TFSTwitterCore.TwitterCommunityRule ? reorderedRules;
    [Swift.String : __C.UIView] ruleNumberTiles;
    Swift.Bool showsCreateRuleActionButton;
    __C.TFNTitleView? $__lazy_storage_$_titleView;
    Swift.AnyObject? communityModelObserver;
    TwitterCommunitiesUI.RulesNUXPromptInteraction ? $__lazy_storage_$_rulesNUXInteraction;
    __C.UIBarButtonItem? $__lazy_storage_$_beginReorderingRulesBarButtonItem;
    __C.UIBarButtonItem? $__lazy_storage_$_saveReorderedRulesBarButtonItem;
    __C.UIBarButtonItem? $__lazy_storage_$_cancelReorderingRulesBarButtonItem;
    __C.TFNExpandingButtonItem? $__lazy_storage_$_createRuleExpandingButtonItem;
}

@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_contentScrollViewContentInset;
- (void)didSelectBeginReorderingRules;
- (void)didSelectSaveReorderedRules;
- (void)didSelectCancelReorderingRules;
- (_Bool)tui_showsActionButton;
- (id)tui_actionButtonItemCategories;
- (id)tui_buttonItemForCategory:(unsigned long long)category;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20TwitterCommunitiesUI25ManageRulesViewController_h */
