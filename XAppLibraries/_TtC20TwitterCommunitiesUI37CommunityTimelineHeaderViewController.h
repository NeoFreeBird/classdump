//
#ifndef _TtC20TwitterCommunitiesUI37CommunityTimelineHeaderViewController_h
#define _TtC20TwitterCommunitiesUI37CommunityTimelineHeaderViewController_h
@import Foundation;

@class TFNViewController, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.CommunitiesNavigation, TwitterCommunitiesUI.CommunityCreationChecklistViewController ?, TwitterCommunitiesUI.CommunityHashtagCarouselController ?, TwitterCommunitiesUI.SeparatorView ?, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIStackViewCSg, _$syycSg;

@interface TwitterCommunitiesUI.CommunityTimelineHeaderViewController : TFNViewController { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunityModel communityModel;
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
    TwitterCommunitiesUI.CommunityCreationChecklistViewController ? $__lazy_storage_$_creationChecklistViewController;
    TwitterCommunitiesUI.SeparatorView ? $__lazy_storage_$_headerSeparatorView;
    TwitterCommunitiesUI.CommunityHashtagCarouselController ? $__lazy_storage_$_hashtagCarouselController;
    __C.UIStackView? $__lazy_storage_$_contentStackView;
    nominal type descriptor for CoreGraphics.CGFloat dataTableViewHeaderContentHeight;
    (() -> ())? dataTableViewHeaderContentHeightDidChangeBlock;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20TwitterCommunitiesUI37CommunityTimelineHeaderViewController_h */
