//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileViewController_h
#define T1ProfileViewController_h
@import Foundation;

#include "T1AppNavigationContext.h"
#include "T1ComposerPresenting-Protocol.h"
#include "T1EditableProfileViewController-Protocol.h"
#include "T1LegacyResizableHeaderContainerViewController.h"
#include "T1NavigationMetadata.h"
#include "T1ProfileDisplayContentProvider.h"
#include "T1ProfileDisplayContentProviderDelegate-Protocol.h"
#include "T1ProfileDisplayNormalSubheaderContentProvider.h"
#include "T1ProfileHeaderViewController.h"
#include "T1ProfileHeaderViewControllerDelegate-Protocol.h"
#include "T1ProfileSpriteAnimationBehavior.h"
#include "T1ProfileViewControllerUserContextProvider-Protocol.h"
#include "T1ProfileViewModel-Protocol.h"
#include "T1ProfileVisitStateProvider.h"
#include "T1ResizableHeaderViewControllerDelegate-Protocol.h"
#include "TFNModalSheetViewControllerDelegate-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TFNNavigationControllerTransitionProvider-Protocol.h"
#include "TFNPresentationInterceptor-Protocol.h"
#include "TFNToasterContextDelegate-Protocol.h"
#include "TFNTwitterCompositionSource-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"
#include "_TtC14T1TwitterSwift12QuickPostBar.h"
#include "_TtC14T1TwitterSwift20QuickPostBarExposure.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSArray, NSMapTable, NSString, TFNTwitterAccount, TFSStopwatch, TFSTimer, TFSTwitterScribeContext, TUITwitterUserContext, UIImage, UIImageView, UIScrollView, UIView, XNAVConfiguration;

@interface T1ProfileViewController : T1LegacyResizableHeaderContainerViewController <TFNTwitterCompositionSource, XNAVConfigurationProviding, T1ComposerPresenting, TFNUISwift.LegacySegmentedViewControllerDataSource, T1ProfileDisplayContentProviderDelegate, T1ProfileHeaderViewControllerDelegate, T1ResizableHeaderViewControllerDelegate, TFNModalSheetViewControllerDelegate, TFNModalSheetViewControllerLayoutDelegate, TFNPresentationInterceptor, TFNToasterContextDelegate, T1EditableProfileViewController, T1ProfileViewControllerUserContextProvider, TFNNavigationControllerTransitionProvider>

@property (readonly, nonatomic) UIView *miniProfileTransitionBannerView;
@property (readonly, nonatomic) UIView *miniProfileTransitionBannerSurface;
@property (readonly, nonatomic) UIImage *miniProfileTransitionBannerImage;
@property (readonly, nonatomic) UIView *miniProfileTransitionAvatarContainerView;
@property (readonly, nonatomic) UIImageView *miniProfileTransitionAvatarImageView;
@property (readonly, nonatomic) UIView *miniProfileTransitionFullNameLabel;
@property (readonly, nonatomic) UIView *miniProfileTransitionSubtitleLabel;
@property (readonly, nonatomic) UIView *miniProfileTransitionFollowsYouView;
@property (readonly, nonatomic) UIView *miniProfileTransitionAccountLabelView;
@property (readonly, nonatomic) UIView *miniProfileTransitionBioView;
@property (readonly, nonatomic) UIView *miniProfileTransitionFollowStatsView;
@property (readonly, nonatomic) NSArray *miniProfileTransitionMetadataViews;
@property (readonly, nonatomic) UIView *miniProfileTransitionFacepileView;
@property (readonly, nonatomic) UIView *miniProfileTransitionSocialProofTextView;
@property (readonly, nonatomic) UIView *miniProfileTransitionNavEllipsisButton;
@property (readonly, nonatomic) NSArray *miniProfileTransitionNavButtonRows;
@property (readonly, nonatomic) UIView *miniProfileTransitionActionButtonsRowView;
@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id <T1ProfileViewModel> viewModel;
@property (nonatomic) _Bool headerZooming;
@property (nonatomic) _Bool hasPerformedAccessibilityScroll;
@property (nonatomic) _Bool didExpandProfileModal;
@property (nonatomic) _Bool didScrollProfileModal;
@property (nonatomic) _Bool didScribeProfileCompleteTime;
@property (nonatomic) _Bool needsSubheaderUpdate;
@property (nonatomic) _Bool isPreparingCachedProfilePresentation;
@property (nonatomic) _Bool hasPreparedCachedContentAheadOfPresentation;
@property (nonatomic) _Bool hasAppearedOnceForSubheaderAnimation;
@property (nonatomic) _Bool hasPinnedInitialTimelineContentInset;
@property (nonatomic) _Bool profileCachedContentEnabled;
@property (nonatomic) double cachedContentPresentationTimeout;
@property (nonatomic) _Bool shouldShowDeferredFollowConfirmation;
@property (nonatomic) _Bool shouldShowDeferredProfileVideos;
@property (nonatomic) _Bool persistProfileVideos;
@property (nonatomic) _Bool shouldShowDeferredTweetsWithReplies;
@property (nonatomic) _Bool shouldShowDeferredSubscriptions;
@property (nonatomic) _Bool shouldShowDeferredSuperFollowsTweets;
@property (nonatomic) _Bool shouldShowDeferredHighlights;
@property (nonatomic) _Bool shouldShowDeferredExpandedBio;
@property (nonatomic) _Bool shouldShowDeferredJobList;
@property (nonatomic) _Bool shouldShowDeferredProfileAboutPage;
@property (nonatomic) _Bool shouldShowDeferredAffiliatesList;
@property (nonatomic) _Bool shouldCollapseDeferredHeader;
@property (nonatomic) _Bool isTimelineSortingEnabled;
@property (nonatomic) _Bool userTimelineDataReady;
@property (nonatomic) double lastLayoutWidth;
@property (retain, nonatomic) NSArray *displayContentProviders;
@property (retain, nonatomic) NSMapTable *subheaderEntriesByViewController;
@property (retain, nonatomic) NSMapTable *subheaderViewControllersByEntry;
@property (retain, nonatomic) T1ProfileHeaderViewController *headerViewController;
@property (retain, nonatomic) T1TwitterSwift.QuickPostBar *quickCompose;
@property (retain, nonatomic) T1TwitterSwift.QuickPostBarExposure *quickPostBarExposure;
@property (retain, nonatomic) T1ProfileVisitStateProvider *visitStateProvider;
@property (retain, nonatomic) T1ProfileSpriteAnimationBehavior *spriteAnimationBehavior;
@property (retain, nonatomic) TFSStopwatch *stopwatch;
@property (retain, nonatomic) TFSTimer *subheaderUpdateTimer;
@property (copy, nonatomic) id /* block */ showFollowersBlock;
@property (copy, nonatomic) id /* block */ enableAccountLinkDisplayActionBlock;
@property (weak, nonatomic) T1ProfileDisplayContentProvider *currentDisplayContentProvider;
@property (weak, nonatomic) T1ProfileDisplayNormalSubheaderContentProvider *normalSubheaderContentProvider;
@property (readonly, nonatomic) T1NavigationMetadata *navigationMetadata;
@property (readonly, nonatomic) T1NavigationMetadata *sourceNavigationMetadata;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, copy, nonatomic) NSString *presentComposerPlaceholderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id <TAPTweet.TAPTweetPerspective> sourceStatus;
@property (nonatomic) long long headerButtonGroup;
@property (retain, nonatomic) T1AppNavigationContext *navigationContext;
@property (copy, nonatomic) TFSTwitterScribeContext *sourceScribeContext;
@property (readonly, nonatomic) TUITwitterUserContext *profileViewControllerUserContext;

/* instance methods */
- (id)composition;
- (id)_t1_miniProfileTransitionHeaderView;
- (id)_t1_miniProfileTransitionSubheaderOfClass:(Class)_class;
- (void)miniProfileTransitionSeedBannerImageIfEmpty:(id)empty;
- (id)miniProfileTransitionMakeBannerScrimView;
- (void)miniProfileTransitionSettleHeader;
- (id)_t1_miniProfileTransitionFriendsFollowingViewController;
- (id)miniProfileTransitionActionButtonOfType:(long long)type;
- (id)initWithViewModel:(id)model account:(id)account sourceNavigationMetadata:(id)metadata;
- (void)_t1_featureSwitchesDidUpdate:(id)update;
- (id)_t1_quickPostBar;
- (_Bool)_t1_canShowQuickPostBar;
- (_Bool)_t1_hasQuickPostBar;
- (void)_t1_logQuickPostBarExposureInTraitCollection:(id)collection;
- (void)_t1_updateQuickCompose;
- (id)initWithHeaderViewController:(id)controller accountID:(id)id scribe:(id)scribe;
- (void)dealloc;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)enableAccountLinkDisplayActionWithAccountType:(long long)type completion:(id /* block */)completion;
- (void)editProfileActionWithCompletion:(id /* block */)completion;
- (void)editProfileActionWithSelectedEditField:(long long)field completion:(id /* block */)completion;
- (void)tfn_presentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)prepareCachedContentAheadOfPresentationFromViewController:(id)controller;
- (struct CGSize { double x0; double x1; })_t1_presentationSizeFromViewController:(id)controller;
- (void)_t1_pinInitialTimelineContentBelowHeader;
- (void)_t1_releaseInitialTimelineContentInsetPin;
- (id)_t1_initialTimelineViewController;
- (void)_t1_prepareCachedContentForPresentationFromViewController:(id)controller completion:(id /* block */)completion;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidAppear:(_Bool)appear;
- (void)willTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (void)finalizeHighlighting:(id)highlighting;
- (void)finalizePinPost:(id)post;
- (void)viewSafeAreaInsetsDidChange;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (_Bool)canCollapseHeader;
- (_Bool)isScrollViewAnimating;
- (void)refresh;
- (double)bottomContentPadding;
- (id)resizableHeaderSubheaderViewControllersForResizableHeaderViewController:(id)controller;
- (void)resizableHeaderViewControllerDidUpdateCurrentHeaderHeight:(id)height;
- (void)resizableHeaderViewControllerDidStartAnimatingSubheaders:(id)subheaders;
- (void)resizableHeaderViewControllerDidFinishAnimatingSubheaders:(id)subheaders;
- (void)resizableHeaderViewControllerDidUpdateActionButtons:(id)buttons;
- (id)viewController:(id)controller willPresentWithPresentationInfo:(id)info;
- (void)didUpdateContentHeight:(double)height fromContentHeight:(double)height;
- (void)displayContentProviderDidUpdateMainValidity:(id)validity;
- (void)displayContentProvider:(id)provider didSelectMainEntry:(id)entry;
- (void)displayContentProviderDidUpdateSubheaderValidity:(id)validity;
- (void)displayContentProviderDidUpdateModalContentHeight:(id)height;
- (_Bool)isDisplayContentProviderCurrent:(id)current;
- (_Bool)isUserDataDisplayableForDisplayContentProvider:(id)provider;
- (id)viewControllerForDisplayContentProvider:(id)provider;
- (void)displayContentProviderWillLoadInitialTimeline:(id)timeline;
- (void)displayContentProviderDidLoadInitialTimeline:(id)timeline;
- (_Bool)isProfileForUser:(id)user;
- (_Bool)isProfileForUserReference:(id)reference;
- (_Bool)isProfileForUserDataSource:(id)source;
- (void)setNeedsModalDisplayHeightUpdateAnimated:(_Bool)animated;
- (void)showFollowersWithTab:(unsigned long long)tab;
- (void)showFollowConfirmation;
- (_Bool)_t1_presentFollowConfirmationTray;
- (id)_t1_flatMainEntriesForProvider:(id)provider;
- (unsigned long long)_t1_outerTabIndexForEntry:(id)entry;
- (void)_t1_selectMainEntry:(id)entry;
- (void)showProfileVideosTabWithPersist:(_Bool)persist;
- (void)showTweetsWithRepliesTab;
- (void)showSubscriptionsTab;
- (void)showHighlightsTab;
- (void)showExpandedBioModal;
- (void)showProfileAboutPage;
- (void)showAffiliatesList;
- (void)showJobListModal;
- (void)finalizeSubscription;
- (void)finalizeGifting;
- (void)showSuperFollowsTweetsTab;
- (void)collapseHeaderToShowPosts;
- (void)tfn_contentScrollViewDidScroll:(id)scroll animate:(_Bool)animate;
- (_Bool)accessibilityScroll:(long long)scroll;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (void)private_accountSettingsDidUpdate:(id)update;
- (void)_profileViewModelDidInvalidate:(id)invalidate;
- (void)_profileViewModelDidInvalidateWithReason:(long long)reason;
- (void)_checkAllDataReady;
- (void)_allDataReady;
- (id)_addChildViewController:(id)controller toSubheaderArray:(id)array;
- (void)private_didFocusElement:(id)element;
- (_Bool)_updateCurrentDisplayState;
- (_Bool)_isCurrentDisplayStateScrollable;
- (void)_updateDisplayForCurrentState;
- (void)_t1_updateBackMenuTitle;
- (void)_t1_determineFollowButtonDisplay;
- (void)_t1_initializeModalDisplay;
- (void)_t1_configureProfileNavigationChrome;
- (void)_t1_updateModalDisplayHeightAnimated:(_Bool)animated;
- (void)modalSheetViewController:(id)controller didPanToCurrentHeight:(double)height preferredHeight:(double)height maximumHeight:(double)height mode:(long long)mode;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)_updateSubheaders;
- (void)_setNeedsSubheaderUpdate;
- (void)_cancelSubheaderUpdateTimer;
- (double)_yOffsetForAccessibilityScrollDirection:(long long)direction forScrollView:(id)view;
- (id)_scrollingStringForAccessibility;
- (void)_getAccessibilityItemNumbersForDataView:(in id)view first:(out unsigned long long *)first last:(out unsigned long long *)last total:(out unsigned long long *)total;
- (id)navigationControllerTransitionForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
- (void)profileHeaderViewControllerDidTapBack:(id)back;
- (void)profileHeaderViewControllerDidTapClose:(id)close;
- (void)profileHeaderViewControllerDidTapSearch:(id)search;
- (void)_updateCountAtIndex:(long long)index;
- (id)_confirmFollowMenuSheet;
- (_Bool)tui_showsActionButton;
- (long long)dashContentItemType;
- (void)presentComposer;
- (void)presentDrafts;
- (id)scribePageForToaster:(id)toaster;
- (long long)numberOfTabsIn:(id)in;
- (id)_activeEntryAtGroupIndex:(long long)index;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller tabGroupAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller menuForTabAtIndex:(long long)index;
- (void)_t1_setTimelinesSortedByPopular:(_Bool)popular;
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (void)segmentedViewController:(id)controller didSelectInnerTabAtGroupIndex:(long long)index innerIndex:(long long)index;
- (_Bool)isUserTimelineDataReady;

@end

#endif /* T1ProfileViewController_h */
