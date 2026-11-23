//
#ifndef _TtC14TwitterRewards28NewPaywallBaseViewController_h
#define _TtC14TwitterRewards28NewPaywallBaseViewController_h
@import Foundation;

@class Swift.Bool, TwitterRewards.NewPaywallHeaderGradientView ?, TwitterRewards.SuperFollowsMarketingPageAccountDataSource, TwitterRewards.SuperFollowsMarketingPageCreatorDataSource, TwitterRewards.URLHandler, UIViewController, _$s10Foundation3URLVMn ?, _$s13GraphQLModels40SubscriptionPaywallDataOperationResponseCMn ?, _$sSi, _$sSo11UIStackViewCSg, _$sSo12UIScrollViewCSg, _$sSo15TFNGradientViewCSg, _$sSo15UIBarButtonItemCSg, _$sSo18NSLayoutConstraintCSg, _$sSo25UINavigationBarAppearanceC, _$sSo28TFNTwitterMediaImagePipelineCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface TwitterRewards.NewPaywallBaseViewController : UIViewController { // (Swift)
    /* instance variables */
    TwitterRewards.SuperFollowsMarketingPageAccountDataSource account;
    TwitterRewards.SuperFollowsMarketingPageCreatorDataSource creator;
    nominal type descriptor for Foundation.URL ? creatorAffiliateBadgeURL;
    Swift.Bool creatorIsBlueVerified;
    __C.TFNTwitterMediaImagePipeline? imagePipeline;
    TwitterRewards.URLHandler urlHandler;
    nominal type descriptor for GraphQLModels.SubscriptionPaywallDataOperationResponse ? paywallData;
    Swift.Int kStatsThreshold;
    __C.UIView? $__lazy_storage_$_backgroundView;
    __C.UIScrollView? $__lazy_storage_$_scrollView;
    __C.TFNGradientView? $__lazy_storage_$_contentBackgroundView;
    __C.UIStackView? $__lazy_storage_$_contentStackView;
    TwitterRewards.NewPaywallHeaderGradientView ? $__lazy_storage_$_headerGradientView;
    __C.UIView? $__lazy_storage_$_bottomSpacerView;
    __C.UIBarButtonItem? $__lazy_storage_$_closeBarButtonItem;
    __C.UIBarButtonItem? $__lazy_storage_$_shareBarButtonItem;
    __C.UILabel? $__lazy_storage_$_navigationTitleLabel;
    __C.NSLayoutConstraint? footerBottomConstraint;
    __C.UINavigationBarAppearance navigationBarAppearance;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)keyboardDidChange;
- (void)didTapCloseButton;
- (_Bool)accessibilityPerformEscape;
- (void)didTapShareButton;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14TwitterRewards28NewPaywallBaseViewController_h */
