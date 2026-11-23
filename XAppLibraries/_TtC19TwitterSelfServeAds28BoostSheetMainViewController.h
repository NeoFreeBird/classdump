//
#ifndef _TtC19TwitterSelfServeAds28BoostSheetMainViewController_h
#define _TtC19TwitterSelfServeAds28BoostSheetMainViewController_h
@import Foundation;

@class Swift.Bool, TwitterSelfServeAds.BoostBudgetWheelView, TwitterSelfServeAds.BoostCenteredContentView ?, TwitterSelfServeAds.BoostCtaFieldRowView, TwitterSelfServeAds.BoostCustomBudgetCardView, TwitterSelfServeAds.BoostFieldRowView, TwitterSelfServeAds.BoostSheetMainViewController.SubmitProgress, TwitterSelfServeAds.BoostSheetViewModel, TwitterSelfServeAds.BoostSheetViewModel.BudgetSection, TwitterSelfServeAds.BoostVerifiedCreditHeroView ?, _$s13XDesignSystem16TrayFootnoteViewCMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem6ButtonCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC, _$syycSg;

@interface TwitterSelfServeAds.BoostSheetMainViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    TwitterSelfServeAds.BoostSheetViewModel viewModel;
    Swift.Bool isPostAndBoost;
    Swift.Bool isCheckoutPaymentPlatformEnabled;
    Swift.Bool isBoostEducationEnabled;
    Swift.Bool isBoostCtaCreationEnabled;
    Swift.Bool isSelfServeBoost;
    __C.TIPImagePipeline? imagePipeline;
    (() -> ())? onNavigateToRegion;
    (() -> ())? onNavigateToPayment;
    (() -> ())? onNavigateToEducation;
    (() -> ())? onNavigateToCta;
    (() -> ())? onNavigateToCustomBudget;
    nominal type descriptor for XDesignSystem.TrayFootnoteView subtitleView;
    TwitterSelfServeAds.BoostBudgetWheelView budgetWheel;
    nominal type descriptor for XDesignSystem.Button customBudgetButton;
    TwitterSelfServeAds.BoostCenteredContentView ? $__lazy_storage_$_customBudgetEntry;
    TwitterSelfServeAds.BoostCustomBudgetCardView customBudgetCard;
    __C.UILabel verifiedCreditTitleLabel;
    TwitterSelfServeAds.BoostVerifiedCreditHeroView ? verifiedCreditHero;
    TwitterSelfServeAds.BoostFieldRowView regionRow;
    TwitterSelfServeAds.BoostFieldRowView payWithRow;
    TwitterSelfServeAds.BoostCtaFieldRowView ctaRow;
    nominal type descriptor for XDesignSystem.TrayFootnoteView footnoteView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Bool isConfirmingCheckoutPayment;
    Swift.Bool isTopVisible;
    Swift.Bool showsPayWith;
    TwitterSelfServeAds.BoostSheetViewModel.BudgetSection appliedSection;
    TwitterSelfServeAds.BoostSheetMainViewController.SubmitProgress submitProgress;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)didTapCustomBudgetButton;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19TwitterSelfServeAds28BoostSheetMainViewController_h */
