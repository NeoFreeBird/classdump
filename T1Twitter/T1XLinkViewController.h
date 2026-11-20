//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1XLinkViewController_h
#define T1XLinkViewController_h
@import Foundation;

#include "TTAStatusInlineActionsViewDelegate-Protocol.h"
#include "UIContextMenuInteractionDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class TFNViewController;

@interface T1XLinkViewController : TFNViewController <UIContextMenuInteractionDelegate, TTAStatusInlineActionsViewDelegate, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *status;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *urlUserClickedOn;
    NSNumber"16@0:8 *safariReaderModeButtonEnabled;
    NSNumber"16@0:8 *nativeReaderEnabled;
    NSNumber"16@0:8 *hapticsEnabled;
    NSNumber"16@0:8 *dynamicNavigationBarBackgroundEnabled;
    NSNumber"16@0:8 *fullSheetForStickyElementsExcludeSitesEnabled;
    NSNumber"16@0:8 *fullSheetRoundedCornersEnabled;
    NSNumber"16@0:8 *sheetPostInteractionsEnabled;
    NSNumber"16@0:8 *swipeBackInWebViewEnabled;
    NSNumber"16@0:8 *convertYoutubeLinksEnabled;
    NSNumber"16@0:8 *panToDismissFromWebViewEdgeOnly;
    NSNumber"16@0:8 *didLogImpression;
    NSNumber"16@0:8 *baseViewController;
    NSNumber"16@0:8 *webViewController;
    NSNumber"16@0:8 *statusActionsView;
    NSNumber"16@0:8 *sheetContainerView;
    NSNumber"16@0:8 *sheetTapOverlayView;
    NSNumber"16@0:8 *statusActionsBackdropView;
    NSNumber"16@0:8 *statusActionsGradientShadowView;
    NSNumber"16@0:8 *statusActionsGradientLayer;
    NSNumber"16@0:8 *dragHandleView;
    NSNumber"16@0:8 *navigationBarBackground;
    NSNumber"16@0:8 *contentGradientShadowView;
    NSNumber"16@0:8 *contentGradientLayer;
    NSNumber"16@0:8 *sheetPostView;
    NSNumber"16@0:8 *eventHandler;
    NSNumber"16@0:8 *$__lazy_storage_$_actionHandler;
    NSNumber"16@0:8 *controlsView;
    NSNumber"16@0:8 *currentState;
    NSNumber"16@0:8 *currentSheetVariant;
    NSNumber"16@0:8 *stateAtStartOfDrag;
    NSNumber"16@0:8 *viewAnimator;
    NSNumber"16@0:8 *postDetailChromeTransition;
    NSNumber"16@0:8 *panGestureRecognizer;
    NSNumber"16@0:8 *panGestureStartPoint;
    NSNumber"16@0:8 *sheetTapGestureRecognizer;
    NSNumber"16@0:8 *lastWebScrollOffsetY;
    NSNumber"16@0:8 *currentWebPageColor;
    NSNumber"16@0:8 *sheetPostContextMenuInteraction;
    NSNumber"16@0:8 *longPressedView;
    NSNumber"16@0:8 *didSetupSheetPost;
    NSNumber"16@0:8 *didShowWebViewOnce;
    NSNumber"16@0:8 *didViewAppear;
    NSNumber"16@0:8 *didDisplayCollapsedState;
    NSNumber"16@0:8 *mediumImpactGenerator;
    NSNumber"16@0:8 *softImpactGenerator;
    NSNumber"16@0:8 *lightImpactGenerator;
    NSNumber"16@0:8 *$__lazy_storage_$_loggingSession;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
@property (nonatomic, readonly) _Bool tfn_supportsNavigationBarCollapsing;
@property (nonatomic, readonly) _Bool tfn_prefersManualNavBarAlphaControl;
@property (nonatomic, readonly) _Bool tfn_prefersCustomStatusBarStyle;
@property (nonatomic, readonly) _Bool tfn_preferManualNavBarCollapse;
@property (nonatomic, readonly) _Bool tfn_webViewSwipeBackCanOverrideNavigationPopPan;

/* instance methods */
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)contextMenuInteraction:(id)interaction previewForHighlightingMenuWithConfiguration:(id)configuration;
- (id)contextMenuInteraction:(id)interaction previewForDismissingMenuWithConfiguration:(id)configuration;
- (void)contextMenuInteraction:(id)interaction willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)inlineActionsView:(id)view didTapInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didBeginLongPressForInlineActionType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didLongPressInlineActionWithType:(unsigned long long)type;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithBaseVC:(id)vc status:(id)status account:(id)account content:(id)content;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (_Bool)tfn_shouldBeginInteractivePopAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)tfn_presentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)viewSafeAreaInsetsDidChange;
- (id)scribePage;
- (id)scribeComponent;
- (id)scribeImpressionParameters;
- (void)statusUpdatedWithNotification:(id)notification;
- (_Bool)openURLIfEligibleWithStatus:(id)status url:(id)url;
- (void)handleSheetTap:(id)tap;
- (void)handleDrag:(id)drag;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1XLinkViewController_h */
