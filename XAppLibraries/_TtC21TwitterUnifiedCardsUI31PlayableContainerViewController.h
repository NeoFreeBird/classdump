//
#ifndef _TtC21TwitterUnifiedCardsUI31PlayableContainerViewController_h
#define _TtC21TwitterUnifiedCardsUI31PlayableContainerViewController_h
@import Foundation;

#include "TFNPresented-Protocol.h"
#include "TUCPlayableWebViewControllerDelegate-Protocol.h"

@class TFNViewController, TwitterUnifiedCardsUI.PlayableDetailView ?, TwitterUnifiedCardsUI.PlayableEventTimeTracker, TwitterUnifiedCardsUI.PlayableOverlayView ?, TwitterUnifiedCardsUI.PlayableTransitionDelegate ?, _$sSo11TUCFeatures_p, _$sSo17TFNViewControllerCSg, _$sSo18TUCUnifiedCardView_So6UIViewCXc, _$sSo23TFSTwitterScribeContextC, _$syp;

@interface TwitterUnifiedCardsUI.PlayableContainerViewController : TFNViewController <TUCPlayableWebViewControllerDelegate, TFNPresented> { // (Swift)
    /* instance variables */
    TwitterUnifiedCardsUI.PlayableDetailView ? playableDetailView;
    __C.TFNViewController? playableWebViewViewController;
    TwitterUnifiedCardsUI.PlayableOverlayView ? playableOverlayView;
    __C.TUCFeatures features;
    __C.TFSTwitterScribeContext scribeContext;
    TwitterUnifiedCardsUI.PlayableTransitionDelegate ? transition;
    Any object;
    TwitterUnifiedCardsUI.PlayableEventTimeTracker eventTimeTracker;
    __C.UIView & __C.TUCUnifiedCardView unifiedCardView;
}

@property (nonatomic, readonly) _Bool shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;

/* instance methods */
- (void)didFinishLoadingWithSuccess:(_Bool)success;
- (void)didLaunchDestination;
- (id)initWithWebViewControllerFactory:(id)factory eventLogger:(id)logger features:(id)features imagePipeline:(id)pipeline profileImage:(id)image playableDestination:(id)destination playableEventHandler:(id)handler scribeContext:(id)context componentViewEvent:(id)event unifiedCardView:(id)view object:(id)object;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewControllerDidDismissAnimated:(_Bool)animated;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)tfn_presentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;

@end

#endif /* _TtC21TwitterUnifiedCardsUI31PlayableContainerViewController_h */
