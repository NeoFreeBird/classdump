//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ImmersiveFullScreenViewController_h
#define T1ImmersiveFullScreenViewController_h
@import Foundation;

#include "T1ExploreRelaunchFeatures.h"
#include "T1ImmersiveAnimatorDelegate-Protocol.h"
#include "T1ImmersiveMediaOriginController.h"
#include "T1ImmersiveMediaOriginSnapshot.h"
#include "T1ImmersiveTransitionAnimating-Protocol.h"
#include "T1ImmersiveViewControllerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSString, TFNTwitterAccount, TFNTwitterStatus, TFNViewController, TFSTwitterBroadcast, UIPanGestureRecognizer, UIScrollView, UIView, UIViewController, XNAVConfiguration;
@protocol T1ImmersiveViewControllerProtocol;

@interface T1ImmersiveFullScreenViewController : TFNViewController <XNAVConfigurationProviding, T1ImmersiveViewControllerDelegate, T1ImmersiveAnimatorDelegate, UIGestureRecognizerDelegate> {
    /* instance variables */
    _Bool _isPresentingPlaylist;
    _Bool _keepsDockWhileDocking;
}

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long viewSource;
@property (retain, nonatomic) TFNTwitterStatus *initialStatus;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mediaAnimationInitialFrame;
@property (readonly, nonatomic) TFSTwitterBroadcast *initialBroadcast;
@property (readonly, nonatomic) NSString *initialBroadcastID;
@property (retain, nonatomic) T1ImmersiveMediaOriginController *mediaOriginController;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSArray *standaloneMediaItems;
@property (retain, nonatomic) UIPanGestureRecognizer *dismissGesture;
@property (retain, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) UIView *fullScreenRasterization;
@property (nonatomic) long long fullScreenRasterizationOrientation;
@property (readonly, nonatomic) T1ExploreRelaunchFeatures *exploreRelaunchFeatures;
@property (retain, nonatomic) id <T1ImmersiveTransitionAnimating> immersiveAnimator;
@property (nonatomic) double mediaAnimationOriginCornerRadius;
@property (nonatomic) long long initialMediaIndex;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) _Bool defersPresentTransitionSettle;
@property (readonly, nonatomic) UIView *currentCardPlayerView;
@property (readonly, nonatomic) _Bool isDockingToBottomSegment;
@property (readonly, nonatomic) _Bool isDismissGestureActive;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIViewController<T1ImmersiveViewControllerProtocol> *immersive;
@property (readonly, nonatomic) T1ImmersiveMediaOriginSnapshot *sourceOriginSnapshot;
@property (readonly, nonatomic) double sourceCornerRadius;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceViewControllerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceContentFrame;
@property (readonly, nonatomic) UIView *dynamicSourcePlayerContainerView;
@property (readonly, nonatomic) UIView *dynamicSourceForwardContainerView;
@property (readonly, nonatomic) _Bool isSupportedViewSourceForAnimation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } exclusionFrameInWindow;
@property (readonly, nonatomic) double videoAspectRatio;
@property (readonly, nonatomic) _Bool isPresentingFromBottomDock;
@property (readonly, nonatomic) _Bool isLiveChatAutoOpenEnabled;
@property (readonly, nonatomic) _Bool isBroadcastCardUnificationUIEnabled;
@property (readonly, nonatomic) _Bool allowsUpwardSwipeToDismiss;
@property (readonly, nonatomic) _Bool isDropToDockEnabled;
@property (readonly, nonatomic) double dropToDockIntentHoldDuration;
@property (readonly, nonatomic) _Bool usesFirstCardEasyDismissCriteria;
@property (readonly, nonatomic) _Bool isCurrentCardDockEligible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)dockPresentedVideoToBottomSegment;
+ (id)_topPresentedImmersiveViewController;

/* instance methods */
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithAccount:(id)account scribeContext:(id)context viewSource:(long long)source playlist:(id)playlist initialStatus:(id)status initialStatusID:(id)id associationStatusID:(id)id initialBroadcast:(id)broadcast initialBroadcastID:(id)id mediaAnimationInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame mediaOriginView:(id)view mediaOriginCoordinator:(id)coordinator mediaAnimationOriginCornerRadius:(double)radius startingAtTimestamp:(id)timestamp initiallyMuted:(_Bool)muted startsPaused:(_Bool)paused standaloneMediaItems:(id)items morphMode:(long long)mode initialMediaIndex:(long long)index;
- (id)initWithAccount:(id)account scribeContext:(id)context viewSource:(long long)source playlist:(id)playlist initialStatus:(id)status initialStatusID:(id)id associationStatusID:(id)id initialBroadcast:(id)broadcast initialBroadcastID:(id)id mediaAnimationInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame mediaOriginView:(id)view mediaOriginCoordinator:(id)coordinator mediaAnimationOriginCornerRadius:(double)radius startingAtTimestamp:(id)timestamp initiallyMuted:(_Bool)muted startsPaused:(_Bool)paused standaloneMediaItems:(id)items morphMode:(long long)mode initialMediaIndex:(long long)index resumesHeldSession:(_Bool)session;
- (void)setRawSearchQueryForNewSession:(id)session;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (_Bool)_t1_isOnXNavigationStack;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (void)_t1_notification_voiceOverStatusDidChange:(id)change;
- (void)_t1_adoptXNavigationStack;
- (void)_t1_updateSystemNavigationBar;
- (void)_t1_updateCollapsingNavigationBar;
- (long long)currentMediaIndexForTransition;
- (id)currentMediaOriginView;
- (void)prepareMediaOriginForDismissal;
- (void)prepareSourceForDismissal;
- (void)dismissAnimationCancelled;
- (void)_t1_animateStatusBarAppearanceUpdate;
- (_Bool)hideCurrentSourceForMorph;
- (void)_t1_claimSharedBroadcastPlayerOutputIfNeeded;
- (id)sourceTransitionView;
- (id)transitionTopOverlayViews;
- (id)dismissForegroundOverlayViews;
- (id)dismissCoveringView;
- (_Bool)transitionOverlaysScaleWithMorph;
- (_Bool)shouldUseFallbackSourceVisibility;
- (_Bool)restoreHiddenSources;
- (void)didDropOnDockZone;
- (void)didCommitSwipeDismiss;
- (id)createPlayerForFirstCard;
- (id)tavPlayerViewConfiguration;
- (_Bool)sourceSupportsWithOrientationMask:(unsigned long long)mask;
- (void)dismissAnimationCompleteWithTransferPlayer:(_Bool)player;
- (_Bool)_usesNativePictureInPictureDock;
- (_Bool)_canDockCurrentVideoToBottomSegment;
- (_Bool)_shouldAutoDockOnDismiss;
- (void)_dockCurrentVideoToBottomSegment;
- (void)_dockCurrentVideoToBottomSegmentAnimated:(_Bool)animated;
- (_Bool)_morphDockCurrentVideoToBottomSegment;
- (void)didFinishPresenting;
- (id)_extractInitialPreviewImage;
- (_Bool)_shouldSetInitialPreviewImage;
- (id)_inlineVideoViewFromCell:(id)cell;
- (id)_inlineMediaViewFromCell:(id)cell;
- (id)_multiMediaViewFromCell:(id)cell;
- (id)_cardViewFromDataCell:(id)cell;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mediaTransitionPreviewFrameInWindow:(id)window forMediaOriginView:(id)view;
- (id)dynamicSourcePlayerView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (_Bool)tfn_prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (id)_t1_presentationWindow;
- (_Bool)_t1_isWideWindow;
- (_Bool)prefersStatusBarHidden;
- (_Bool)tfn_presentAsModal;
- (void)_t1_resignBroadcastChatKeyboard;
- (void)dismissGesture:(id)gesture;
- (_Bool)maybeSeekToTimestamp:(id)timestamp mediaKey:(id)key;
- (void)presentTaggedUserListView;
- (id)getInitialStatus;
- (id)currentCardStatus;
- (void)prepareContent;
- (void)prepareToReappear;
- (void)_t1_saveFullscreenRasterization:(id)rasterization;
- (id)_t1_layerRasterizationOfView:(id)view;
- (void)_t1_addFullscreenRasterizationToViewIfNeeded;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForFullscreenRasterizationWithInterfaceOrientation:(long long)orientation;
- (id)setupTAVPlayer;
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)_tavPlayerViewConfigurationWithScribeContext:(id)context videoGravity:(long long)gravity;
- (_Bool)_isInitialStatusCurrentlyDocked;
- (void)undockInitialStatus;
- (id)_initialPlayerSessionProducer;
- (_Bool)_startsMuted;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewFrameInWindow:(id)window forObject:(id)object;
- (void)immersiveViewControllerDockVideo:(id)video;
- (void)_dockVideoToNativePictureInPictureAndDismiss;
- (void)_fadeOutDockDismissAlongsidePictureInPictureStart;
- (void)_abortNativePictureInPictureDock;
- (id)_presentedHierarchyTopView;
- (void)_disablePresentedHierarchyInteraction;
- (void)_beginDockDismiss;
- (void)_dockVideoToBottomSegmentAndDismiss;
- (void)settleDeferredPresentTransition;
- (void)prepareForUnderlyingDockDismiss;
- (void)closeAction;
- (void)_quickFadeOutDockDismiss;
- (void)_finalizeDockDismiss;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;

@end

#endif /* T1ImmersiveFullScreenViewController_h */
