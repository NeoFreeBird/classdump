//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TweetComposeContainerViewController_h
#define T1TweetComposeContainerViewController_h
@import Foundation;

#include "T1ComposeMorphContainer-Protocol.h"
#include "T1ComposeMorphDestination-Protocol.h"
#include "T1ComposeSessionConfig.h"
#include "T1TweetComposeContainerViewControllerDelegate-Protocol.h"
#include "T1TweetComposeViewController.h"
#include "T1TweetComposeViewControllerDelegate-Protocol.h"
#include "TFNSwappingContainerViewControllerHelperDelegate-Protocol.h"
#include "TFNToasterContextDelegate-Protocol.h"
#include "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSArray, NSString, TCRTweetComposeHingeReveal, TFNSwappingContainerViewControllerHelper, TFNTwitterAccount, TFNViewController, UILayoutGuide, UINavigationController, UIView, UIViewController;

@interface T1TweetComposeContainerViewController : TFNViewController <T1TweetComposeViewControllerDelegate, TFNSwappingContainerViewControllerHelperDelegate, TFNToasterContextDelegate, UIAdaptivePresentationControllerDelegate, T1ComposeMorphContainer> {
    /* instance variables */
    UIViewController *_appearanceTransitionPresenter;
}

@property (readonly, copy, nonatomic) NSArray *compositions;
@property (readonly, nonatomic) unsigned long long initialCapture;
@property (readonly, nonatomic) TFNTwitterAccount *currentAccount;
@property (readonly, copy, nonatomic) NSArray *currentCompositions;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) UILayoutGuide *viewLayoutMarginsGuide;
@property (readonly, nonatomic) TFNSwappingContainerViewControllerHelper *containerViewControllerHelper;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) TCRTweetComposeHingeReveal *hingeReveal;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) T1TweetComposeViewController *tweetComposeViewController;
@property (retain, nonatomic) UINavigationController *tweetComposeNagivationController;
@property (weak, nonatomic) id <T1TweetComposeContainerViewControllerDelegate> delegate;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1ComposeSessionConfig *sessionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *swappingContainerView;
@property (readonly, nonatomic) id <T1ComposeMorphDestination> morphDestination;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithAccount:(id)account compositions:(id)compositions initialCapture:(unsigned long long)capture;
- (void)_t1_main_updateContentViewControllerAnimated:(_Bool)animated;
- (id)_t1_main_loadTweetComposeNavigationController;
- (id)_t1_main_loadVideoReactionCapture;
- (id)_t1_main_loadMediaCapture;
- (long long)_t1_recorderStartingCaptureMode;
- (void)prepareForModalPresentation;
- (void)prepareForDismissWithCompletion:(id /* block */)completion;
- (void)saveCompositionsAsDraft;
- (void)_t1_main_addAttachmentAndShowTweetComposer:(id)composer;
- (void)_t1_main_showTweetComposerWithCapturedAttachment:(id)attachment reactingToStatus:(id)status;
- (void)_t1_main_preloadTweetComposerForMediaCapture;
- (void)_t1_main_cancelComposing;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewIsAppearing:(_Bool)appearing;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)_t1_main_loadContentView;
- (void)_t1_main_updateHingeReveal;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForPreferredVerticalBarBehavior;
- (_Bool)shouldAutorotate;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)contentViewControllerWillSwapWithTransitionCoordinator:(id)coordinator;
- (void)tweetComposeViewControllerDidLiveBroadcast:(id)broadcast;
- (void)tweetComposeViewControllerDidCancelComposing:(id)composing;
- (void)tweetComposeViewControllerDidCompleteComposing:(id)composing;
- (_Bool)toaster:(id)toaster canDisplayToast:(id)toast withPriority:(unsigned long long)priority;
- (long long)adaptivePresentationStyleForPresentationController:(id)controller traitCollection:(id)collection;
- (void)setMorphStaged:(_Bool)staged;

@end

#endif /* T1TweetComposeContainerViewController_h */
