//
#ifndef TFSAccountFeatureSwitches_h
#define TFSAccountFeatureSwitches_h
@import Foundation;

#include "TFSFeatureSwitchProvider-Protocol.h"

@class NSObject, NSString;

@interface TFSAccountFeatureSwitches : NSObject // (Swift)

@property (readonly, nonatomic) _Bool isGermanTransparencyDashItemsEnabled;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) id <TFSFeatureSwitchProvider> provider;
@property (nonatomic, readonly) id <TFSFeatureSwitchProvider> accessOnceProvider;
@property (nonatomic, readonly) id <TFSFeatureSwitchProvider> accessOncePerAccountProvider;

/* class methods */
+ (_Bool)isInlineZoomEnabled;
+ (_Bool)isRefiningEstimatedRowHeightsEnabled;
+ (_Bool)isCellLayoutDebugEnabled;
+ (_Bool)isHashfettiAllHashflagsEnabled;
+ (_Bool)isHashfettiAlsoMatchQueryEnabled;
+ (_Bool)isDisplayLinkGlobalConfigurationEnabled;
+ (long long)displayLinkGlobalMinimumFrameRate;
+ (long long)displayLinkGlobalMaximumFrameRate;
+ (long long)displayLinkGlobalPreferredFrameRate;
+ (long long)displayLinkGlobalFrameDropTolerance;
+ (_Bool)isDynamicColorLazyInitEnabled;
+ (_Bool)isShowsVerticalScrollIndicatorEnabled;
+ (double)avatarHeightLHUnits;
+ (double)standardBarItemInset;
+ (double)wideBarItemInset;
+ (double)minimumWideBarWidth;
+ (_Bool)isStatusAttachmentReuseFixEnabled;
+ (double)navigationPushPopAnimationDuration;
+ (_Bool)fullSlidePushNavigationEnabled;
+ (_Bool)isNavigationForceViewLayoutEnabled;
+ (_Bool)isNavigationBarAccessorySafeAreaEnabled;
+ (_Bool)isRunningOnIPhone;
+ (_Bool)isRemoveActionsBarEnabled;
+ (_Bool)isRemoveActionsBarInRepliesEnabled;
+ (_Bool)isCustomPostSwipeGesturesSupported;
+ (double)customPostSwipeGesturesThreshold;
+ (_Bool)isCustomPostSwipeGesturesRelevanceEnabled;
+ (_Bool)isTextEditorMentionsColorBugfixEnabled;
+ (_Bool)isGesturesByDefaultEnabled;
+ (long long)tweetCustomMaxTextLines;
+ (long long)tweetLineBreakFallbackMaxTextLines;
+ (long long)quotedTweetCustomMaxTextLines;
+ (long long)promotedTweetCustomMaxTextLines;
+ (_Bool)expandTruncatedPostOnTextBodyEnabled;
+ (_Bool)isComposerDeepLinkRemoteImageAssetSupportEnabled;
+ (_Bool)isFontSizeIgnoreDeviceWidthEnabled;
+ (_Bool)isNavigationTitleSemiboldEnabled;
+ (_Bool)isNamedFontCacheEnabled;
+ (_Bool)isToastsUpdateEnabled;
+ (_Bool)isSegmentedControllerResnapHighlightAfterSizeChangeEnabled;
+ (_Bool)isVerticalStatusBarSafeAreaEnabled;
+ (_Bool)isButtonBarTrailingInsetFixEnabled;
+ (_Bool)isXDSAlertBridgeSingleButtonEnabled;
+ (_Bool)isXDSAlertBridgeMultiButtonEnabled;
+ (id)featureSwitchesForAccountID:(id)id;
+ (id)lastUsedAccountFeatureSwitches;
+ (id)didUpdateNotification;
+ (id)emptyFeatureSwitches;

/* instance methods */
- (id)initWithAccountID:(id)id;
- (id)initWithAccountID:(id)id provider:(id)provider;
- (id)init;

@end

#endif /* TFSAccountFeatureSwitches_h */
