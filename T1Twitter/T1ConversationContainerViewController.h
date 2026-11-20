//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationContainerViewController_h
#define T1ConversationContainerViewController_h
@import Foundation;

#include "T1ConversationFocalStatusTableRowAdapterDelegate-Protocol.h"
#include "T1ConversationPresenting-Protocol.h"
#include "T1MediaInlineComposeContainer-Protocol.h"
#include "T1MediaInlineComposeControllerDelegate-Protocol.h"
#include "T1NavigationMetadata.h"
#include "T1URTViewController.h"
#include "T1VideoMonetizationSettingsViewControllerDelegate-Protocol.h"
#include "TFNJumpBackToHomeTimelineBehavior-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TFNToasterContextDelegate-Protocol.h"
#include "TTACoreBasicStatusView-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "_TtP14T1TwitterSwift27XLinkViewControllerProtocol_-Protocol.h"

@class NSArray, TFNViewController, UIView;

@interface T1ConversationContainerViewController : TFNViewController <T1MediaInlineComposeContainer, T1TwitterSwift.XLinkViewControllerProtocol, TFNJumpBackToHomeTimelineBehavior, TFNModalSheetViewControllerLayoutDelegate, T1VideoMonetizationSettingsViewControllerDelegate, TFNToasterContextDelegate, T1ConversationPresenting, T1ConversationFocalStatusTableRowAdapterDelegate, T1MediaInlineComposeControllerDelegate, UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *originalStatusID;
    NSNumber"16@0:8 *representedStatusID;
    NSNumber"16@0:8 *originalViewModel;
    NSNumber"16@0:8 *conversationLoaded;
    NSNumber"16@0:8 *conversationTimelineViewController;
    NSNumber"16@0:8 *conversationTimelineUpdater;
    NSNumber"16@0:8 *inlineComposer;
    NSNumber"16@0:8 *inlineReplyBarDockView;
    NSNumber"16@0:8 *statusNavigationContext;
    NSNumber"16@0:8 *sourceScribeContext;
    NSNumber"16@0:8 *controllerScribeContext;
    NSNumber"16@0:8 *shouldIncludeReferrerParams;
    NSNumber"16@0:8 *shouldStartQuickPromoteOnOpen;
    NSNumber"16@0:8 *inlineReplyBarLineLengthInsetsEnabled;
    NSNumber"16@0:8 *backingNavigationMetadata;
    NSNumber"16@0:8 *backingSourceNavigationMetadata;
    NSNumber"16@0:8 *didLogCardEvents;
    NSNumber"16@0:8 *appStoreOverlayBottomInset;
    NSNumber"16@0:8 *didShowAdDestinationView;
    NSNumber"16@0:8 *didShowAdOverlay;
    NSNumber"16@0:8 *didShowNUXModal;
    NSNumber"16@0:8 *didShowQuickPromote;
    NSNumber"16@0:8 *pullToDismissController;
    NSNumber"16@0:8 *seedsNavigationBarCoverage;
    NSNumber"16@0:8 *defaultVideoMonetizationSettings;
    NSNumber"16@0:8 *videoMonetizationSettings;
    NSNumber"16@0:8 *defaultVideoMonetizationSettingsComplete;
    NSNumber"16@0:8 *videoMonetizationSettingsComplete;
    NSNumber"16@0:8 *shouldNotifyDisplayLatestEdit;
    NSNumber"16@0:8 *renderTrace;
    NSNumber"16@0:8 *hasTriggeredPostAnalyticsEvent;
    NSNumber"16@0:8 *postAnalyticsTriggerTimer;
    NSNumber"16@0:8 *lastNativeArticleState;
    NSNumber"16@0:8 *goodTweetClickTimer;
    NSNumber"16@0:8 *replyDwellTracker;
    NSNumber"16@0:8 *$__lazy_storage_$_conversationControlChangeTooltip;
    NSNumber"16@0:8 *$__lazy_storage_$_postInteractionsTooltip;
    NSNumber"16@0:8 *overflowBarButtonItem;
    NSNumber"16@0:8 *grokBarButtonItem;
    NSNumber"16@0:8 *lastDisplayedFocalStatusOptions;
    NSNumber"16@0:8 *$__lazy_storage_$_titleView;
    NSNumber"16@0:8 *anatomyFeatures;
    NSNumber"16@0:8 *$__lazy_storage_$_showsOverflowMenuInBar;
    NSNumber"16@0:8 *navigationBarForwarder;
    NSNumber"16@0:8 *immersiveRepliesSheet;
    NSNumber"16@0:8 *isPreparingCachedConversationPresentation;
    NSNumber"16@0:8 *needsCachedConversationFocalAlignment;
    NSNumber"16@0:8 *isFocalStatusRevealPending;
    NSNumber"16@0:8 *conversationTimelineReadyCompletions;
    NSNumber"16@0:8 *cachedConversationPresentationCompletion;
    NSNumber"16@0:8 *cachedConversationNavigationBarInset;
    NSNumber"16@0:8 *didApplyCachedConversationNavigationBarInset;
    NSNumber"16@0:8 *didReleaseCachedConversationNavigationBarInset;
    NSNumber"16@0:8 *zoomSource;
    NSNumber"16@0:8 *$__lazy_storage_$_timelineTransformer;
    NSNumber"16@0:8 *$__lazy_storage_$_communityTitleView;
    NSNumber"16@0:8 *cashTagInfoSheet;
    NSNumber"16@0:8 *$__lazy_storage_$_showsRepliesOnly;
}

@property (nonatomic, readonly) _Bool canBecomeFirstResponder;
@property (nonatomic, readonly) UIView<TTACoreBasicStatusView> *provideFocalStatusHostView;
@property (nonatomic, readonly) double focalStatusOffsetBelowPinnedRow;
@property (nonatomic, readonly) T1URTViewController *provideTimelineViewController;
@property (nonatomic, readonly) NSArray *excludedStatusIDs;
@property (nonatomic, readonly) long long statusID;
@property (nonatomic, readonly) _Bool isBoostContext;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarBlurHidden;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
@property (nonatomic, readonly) _Bool tfn_prefersTabBarShadowHidden;
@property (nonatomic) _Bool previewingFromImmersiveReplies;
@property (nonatomic, readonly) T1NavigationMetadata *navigationMetadata;
@property (nonatomic, readonly) T1NavigationMetadata *sourceNavigationMetadata;

/* instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inlineComposeSafeAreaInsets;
- (void)updateForState:(long long)state;
- (void)updateFocalPinningInsets;
- (_Bool)allowsJumpBackToHomeTimeline;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)presentAppStoreOverlayForFocalStatusIfNeeded;
- (void)presentConfettiWithNotification:(id)notification;
- (void)videoMonetizationSettingsViewController:(id)controller didUpdateSettings:(id)settings;
- (id)scribePageForToaster:(id)toaster;
- (_Bool)canPresentTweetWithID:(long long)id;
- (void)presentTweetWithID:(long long)id;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeImpressionParameters;
- (id)scribeContext;
- (id)tweetDetailsFocalStatusTableRowAdapterCompositionForReplyAction:(id)action;
- (void)focalStatusRowDidFirstDisplay;
- (void)cellDidDisplay:(id)display inDataViewController:(id)controller withVisibilityPercentage:(double)percentage visibilityState:(unsigned long long)state;
- (void)cellDidEndDisplaying:(id)displaying inDataViewController:(id)controller reason:(unsigned long long)reason;
- (double)inlineComposeController:(id)controller autocompleteStartingPositionInContainer:(id)container;
- (id)inlineComposeControllerInitialComposeString:(id)string;
- (void)inlineComposeController:(id)controller didSendStatus:(id)status forComposition:(id)composition;
- (id)inlineComposerControllerComposition:(id)composition;
- (void)inlineComposeControllerWillSwitchToFullscreen:(id)fullscreen;
- (void)inlineComposeControllerDidReturnFromFullscreen:(id)fullscreen;
- (void)compositionDidSendWithNotification:(id)notification;
- (void)userFollowStateChanged:(id)changed;
- (id)inlineComposeControllerScribePage:(id)page;
- (id)inlineComposeControllerScribeSurface:(id)surface;
- (void)inlineComposeControllerDidBeginEditing:(id)editing;
- (void)inlineComposeControllerDidEndEditing:(id)editing;
- (void)inlineComposeControllerDidChangeRestingHeight:(id)height;
- (void)inlineComposeControllerDidChangeBarFrame:(id)frame;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)container withParentContainerSize:(struct CGSize { double x0; double x1; })size;
- (id)inlineComposeControllerScribeParameters:(id)parameters;
- (void)inlineComposeController:(id)controller handleInlineActionEventType:(id)type inlineActionsView:(id)view inlineActionType:(unsigned long long)type;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (_Bool)becomeFirstResponder;
- (id)initWithCoder:(id)coder;
- (id)initWithAccount:(id)account statusID:(long long)id statusNavigationContext:(id)context scribeContext:(id)context sourceNavigationMetadata:(id)metadata overrideNavigationMetadata:(id)metadata shouldIncludeReferrerParams:(_Bool)params shouldStartQuickPromoteOnOpen:(_Bool)open excludedStatusIDs:(id)ids;
- (id)initWithAccount:(id)account viewModel:(id)model statusNavigationContext:(id)context scribeContext:(id)context sourceNavigationMetadata:(id)metadata overrideNavigationMetadata:(id)metadata shouldIncludeReferrerParams:(_Bool)params shouldNotifyDisplayLatestEdit:(_Bool)edit shouldStartQuickPromoteOnOpen:(_Bool)open excludedStatusIDs:(id)ids;
- (void)dealloc;
- (void)willMoveToParentViewController:(id)controller;
- (void)tfn_presentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)didTapPostAbout;
- (void)didTapGrokAnalyze;
- (void)updateInsets;
- (void)didTapCommunityTitleView;
- (void)tweetDeletedWithNotification:(id)notification;
- (void)loadTop:(id)top;
- (void)pinReplyStateUpdateWithNotification:(id)notification;
- (void)compositionDidSendEditWithNotification:(id)notification;
- (void)keyboardDidChange:(id)change;
- (void)dismissConversationControlChangeTooltipIfVisible;
- (void)dismissPostInteractionsTooltipIfVisible;
- (void)willTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (void)displayPostAnalyticsUpsell;
- (void)fireGoodTweetClickLinger;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ConversationContainerViewController_h */
